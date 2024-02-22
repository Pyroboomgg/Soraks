#include "Applcation.h"
#include "Screen.h"
#include "GameInstance.h"
#include "Utilities/Config.h"


namespace Soarks
{
	Applcation::Applcation()
		:m_game{ nullptr }, m_confing{ nullptr }, m_screen{ nullptr}
	{
	}
	Applcation::~Applcation()
	{
		delete m_game;
		m_game = nullptr;

		delete m_confing;
		m_confing = nullptr;

		delete m_screen;
		m_screen = nullptr;

	}
	void Applcation::Run(GameInstance* _game)
	{
		m_screen = new Screen(m_confing);

		m_screen->Open();

		m_game = _game;
		m_game->m_screen = m_screen;
		m_game->BeginPlay();
		while (!WindowShouldClose())
		{
			float dt = GetFrameTime();
			m_game->Tick(dt);

			m_screen->NewFrame();

			m_game->Render();

			m_screen->EndFrame();

		}
		m_game->EndPlay();
		m_screen->Close();
	}
}