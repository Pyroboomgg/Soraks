#pragma once

namespace Soarks
{
	class Screen;
	class GameInstance
	{
		friend class Applcation;
	public:
		virtual void BeginPlay();

		virtual void Tick(float _deltaTime);
		virtual void Render();

		virtual void EndPlay();

	protected:
		Screen* m_screen;


	protected:
		GameInstance();
		virtual ~GameInstance();

	private:
		//TO DO

	};
}
