#pragma once

#include "IAppState.h"
#include <string>

class PostGameState : public IAppState
{
public:
	// Inherited via IAppState
	virtual void OnInit() override;
	virtual void OnUpdate() override;
	virtual void OnRender() override;
	virtual void OnExit() override;
private:
	std::string m_GameOverReason;
};
