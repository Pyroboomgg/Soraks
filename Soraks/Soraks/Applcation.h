#pragma once

namespace Soarks
{
	class GameInstance;
	class Config;
	class Screen;

	class Applcation

	{
	public:
		Applcation();
		~Applcation();

	public:
		void Run(GameInstance* _game);

	private:
		GameInstance* m_game;
		Config* m_confing;
		Screen* m_screen;
	};
}
