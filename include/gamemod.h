#ifndef __NATASHA_GAMEMOD_H__
#define __NATASHA_GAMEMOD_H__

#include <assert.h>
#include <map>
#include <vector>
#include "../protoc/base.pb.h"
#include "array.h"
// #include "symbolblock.h"
#include "utils.h"

namespace natasha {

class GameLogic;

class GameMod {
 public:
  GameMod(GameLogic& logic) : m_logic(logic) {}
  virtual ~GameMod() {}

 public:
  virtual ::natashapb::CODE init() = 0;

  // start - start cur game module for user
  virtual ::natashapb::CODE start(::natashapb::UserGameModInfo* pUser,
                                  const ::natashapb::StartGameMod* pStart,
                                  CtrlID nextCtrlID) = 0;

  // isIn - is in current game module
  virtual bool isIn(const ::natashapb::UserGameModInfo* pUser) = 0;

  // reviewGameCtrl - check & fix gamectrl params from client
  virtual ::natashapb::CODE reviewGameCtrl(
      ::natashapb::GameCtrl* pGameCtrl,
      const ::natashapb::UserGameModInfo* pUser) = 0;

  // onUserComeIn -
  virtual ::natashapb::CODE onUserComeIn(::natashapb::UserGameModInfo* pUser) {
    return ::natashapb::ERR_NO_OVERLOADED_INTERFACE;
  }

  // onGameCtrl
  virtual ::natashapb::CODE onGameCtrl(
      const ::natashapb::GameCtrl* pGameCtrl,
      ::natashapb::UserGameLogicInfo* pLogicUser,
      ::natashapb::UserGameModInfo* pMainUGMI, CtrlID nextCtrlID) {
    return ::natashapb::ERR_NO_OVERLOADED_INTERFACE;
  }

  // updGameResult -
  virtual ::natashapb::CODE updGameResult(::natashapb::UserGameModInfo* pUser,
                                          MoneyType realbet,
                                          MoneyType realwin) {
    return ::natashapb::ERR_NO_OVERLOADED_INTERFACE;
  }

  // getGameModType - get GAMEMODTYPE
  virtual ::natashapb::GAMEMODTYPE getGameModType() {
    return ::natashapb::NULL_MOD;
  }

  // setNextCtrlID - set next ctrlid
  virtual ::natashapb::CODE setNextCtrlID(CtrlID nextCtrlID) {
    return ::natashapb::ERR_NO_OVERLOADED_INTERFACE;
  }

 protected:
  GameLogic& m_logic;
};

class SlotsGameMod : public GameMod {
 public:
  SlotsGameMod(GameLogic& logic) : GameMod(logic) {}
  virtual ~SlotsGameMod() {}

 public:
  // onGameCtrl
  virtual ::natashapb::CODE onGameCtrl(
      const ::natashapb::GameCtrl* pGameCtrl,
      ::natashapb::UserGameLogicInfo* pLogicUser,
      ::natashapb::UserGameModInfo* pMainUGMI, CtrlID nextCtrlID) {
    // assert(pMainUGMI->has_randomresult());
    // assert(pMainUGMI->has_spinresult());

    auto code = this->onSpinStart(pMainUGMI, pGameCtrl, pLogicUser);
    if (code != ::natashapb::OK) {
      return code;
    }

    code = this->randomReels(pMainUGMI->mutable_randomresult(), pGameCtrl,
                             pMainUGMI);
    if (code != ::natashapb::OK) {
      return code;
    }

    code = this->countSpinResult(pMainUGMI->mutable_spinresult(), pGameCtrl,
                                 pMainUGMI->mutable_randomresult(), pMainUGMI,
                                 pLogicUser);
    if (code != ::natashapb::OK) {
      return code;
    }

    code = this->procSpinResult(
        pMainUGMI, pGameCtrl, pMainUGMI->mutable_spinresult(),
        pMainUGMI->mutable_randomresult(), nextCtrlID, pLogicUser);
    if (code != ::natashapb::OK) {
      return code;
    }

    code =
        this->onSpinEnd(pMainUGMI, pGameCtrl, pMainUGMI->mutable_spinresult(),
                        pMainUGMI->mutable_randomresult(), pLogicUser);
    if (code != ::natashapb::OK) {
      return code;
    }

    return ::natashapb::OK;
  }

 public:
  // randomReels - random reels
  virtual ::natashapb::CODE randomReels(
      ::natashapb::RandomResult* pRandomResult,
      const ::natashapb::GameCtrl* pGameCtrl,
      const ::natashapb::UserGameModInfo* pUser) = 0;

  // countSpinResult - count spin result
  virtual ::natashapb::CODE countSpinResult(
      ::natashapb::SpinResult* pSpinResult,
      const ::natashapb::GameCtrl* pGameCtrl,
      const ::natashapb::RandomResult* pRandomResult,
      const ::natashapb::UserGameModInfo* pUser,
      const ::natashapb::UserGameLogicInfo* pLogicUser) = 0;

  // procSpinResult - proc spin result
  virtual ::natashapb::CODE procSpinResult(
      ::natashapb::UserGameModInfo* pUser,
      const ::natashapb::GameCtrl* pGameCtrl,
      const ::natashapb::SpinResult* pSpinResult,
      const ::natashapb::RandomResult* pRandomResult, CtrlID nextCtrlID,
      ::natashapb::UserGameLogicInfo* pLogicUser) = 0;

  // onSpinStart - on spin start
  virtual ::natashapb::CODE onSpinStart(
      ::natashapb::UserGameModInfo* pUser,
      const ::natashapb::GameCtrl* pGameCtrl,
      ::natashapb::UserGameLogicInfo* pLogicUser) = 0;

  // onSpinEnd - on spin end
  virtual ::natashapb::CODE onSpinEnd(
      ::natashapb::UserGameModInfo* pUser,
      const ::natashapb::GameCtrl* pGameCtrl,
      ::natashapb::SpinResult* pSpinResult,
      ::natashapb::RandomResult* pRandomResult,
      ::natashapb::UserGameLogicInfo* pLogicUser) = 0;

  // buildSpinResultSymbolBlock - build spin result's symbol block
  virtual ::natashapb::CODE buildSpinResultSymbolBlock(
      ::natashapb::SpinResult* pSpinResult,
      const ::natashapb::UserGameModInfo* pUser,
      const ::natashapb::GameCtrl* pGameCtrl,
      const ::natashapb::RandomResult* pRandomResult,
      const ::natashapb::UserGameLogicInfo* pLogicUser) = 0;

 protected:
};

}  // namespace natasha

#endif  // __NATASHA_GAMEMOD_H__