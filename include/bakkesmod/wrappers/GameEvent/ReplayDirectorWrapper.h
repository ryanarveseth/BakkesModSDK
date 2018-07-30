#pragma once
template<class T> class ArrayWrapper;
#include "../WrapperStructs.h"
#include ".././Engine/ActorWrapper.h"
class ReplaySoccarWrapper;
class GameEventWrapper;
class GoalWrapper;
class TeamWrapper;
class ServerWrapper;
class BallWrapper;
class TeamGameEventWrapper;

class BAKKESMOD_PLUGIN_IMPORT ReplayDirectorWrapper : public ActorWrapper {
public:
	CONSTRUCTORS(ReplayDirectorWrapper)

	//AUTO-GENERATED FROM FIELDS
	float GetSlomoPreScoreTime();
	void SetSlomoPreScoreTime(float newSlomoPreScoreTime);
	float GetSlomoPostScoreTime();
	void SetSlomoPostScoreTime(float newSlomoPostScoreTime);
	float GetSlomoDefendTime();
	void SetSlomoDefendTime(float newSlomoDefendTime);
	float GetSlomoDefendDistance();
	void SetSlomoDefendDistance(float newSlomoDefendDistance);
	float GetSlomoTimeDilation();
	void SetSlomoTimeDilation(float newSlomoTimeDilation);
	float GetMinReplayTime();
	void SetMinReplayTime(float newMinReplayTime);
	float GetMaxReplayTime();
	void SetMaxReplayTime(float newMaxReplayTime);
	float GetReplayPadding();
	void SetReplayPadding(float newReplayPadding);
	float GetHighlightReplayDuration();
	void SetHighlightReplayDuration(float newHighlightReplayDuration);
	float GetTimeBeforeHighlightReplay();
	void SetTimeBeforeHighlightReplay(float newTimeBeforeHighlightReplay);
	ReplaySoccarWrapper GetReplay();
	void SetReplay(ReplaySoccarWrapper newReplay);
	ActorWrapper GetFocusCar();
	void SetFocusCar(ActorWrapper newFocusCar);
	float GetFocusCarChangeTime();
	void SetFocusCarChangeTime(float newFocusCarChangeTime);
	ActorWrapper GetFocusBall();
	void SetFocusBall(ActorWrapper newFocusBall);
	float GetScoreTime();
	void SetScoreTime(float newScoreTime);
	int GetScoreHitIndex();
	void SetScoreHitIndex(int newScoreHitIndex);
	GoalWrapper GetScoredGoal();
	void SetScoredGoal(GoalWrapper newScoredGoal);
	unsigned long GetbSlomo();
	void SetbSlomo(unsigned long newbSlomo);
	unsigned long GetbSlomoForDefender();
	void SetbSlomoForDefender(unsigned long newbSlomoForDefender);
	unsigned long GetbAutoSave();
	void SetbAutoSave(unsigned long newbAutoSave);
	int GetFocusHitIndex();
	void SetFocusHitIndex(int newFocusHitIndex);
	int GetFocusCarIdx();
	void SetFocusCarIdx(int newFocusCarIdx);
	float GetReplayStartGameTime();
	void SetReplayStartGameTime(float newReplayStartGameTime);
	float GetBallSpawnTime();
	void SetBallSpawnTime(float newBallSpawnTime);
	ServerWrapper GetSoccarGame();
	void SetSoccarGame(ServerWrapper newSoccarGame);
	unsigned char GetScoredOnTeam();
	void SetScoredOnTeam(unsigned char newScoredOnTeam);
	int GetForceCutToFocusActors();
	void SetForceCutToFocusActors(int newForceCutToFocusActors);

	//AUTO-GENERATED FUNCTION PROXIES
	void SetAutoSave();
	void SaveUserKeyframe();
	void BuildFocusCars();
	void SetSlomo2(unsigned long bNewSlomo);
	void eventTick(float DeltaTime);
	void eventDestroyed();
	float GetReplayTimeSeconds();
	void SetFocusActors(ActorWrapper NewCar, ActorWrapper NewBall);
	float GetReplayStartTime();
	void SetSlomoForDefender(BallWrapper Ball, int DefendingTeam);
	void OnScoreDataChanged();
	void GoalScored(BallWrapper Ball, GoalWrapper Goal, int ScoreIndex, int AssistIndex);
	void HandleScoreUpdated(TeamWrapper Team);
	void HandleAllTeamsCreated(TeamGameEventWrapper TeamGame);
	void RecordPlayers();
	void HandleGameStateChanged(GameEventWrapper G);
	void OnSoccarGameSet();
	void SetGameEvent(ServerWrapper InGameEvent);
	void EventAutoSaveChanged(ReplayDirectorWrapper Director);
	void EventScoreDataChanged(ReplayDirectorWrapper Director);
	void EventReplayFinished(ReplayDirectorWrapper Director);
private:
	PIMPL
};