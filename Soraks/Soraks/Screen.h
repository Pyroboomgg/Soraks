#pragma once
#include <raylib/raylib.h>

#include <string>

using std::string;

namespace Soarks
{
	class Config;


	class Screen
	{
		friend class Applcation;
	public:
		const int& Width();
		const int& Heighr();
		const string& Title();
		const Color& ClearColor();

		void SetWidth(int _newWidth);
		void SetHeight(int _newHeight);
		void SetTitle(const string& _newTitle);
		void SetClearColor(Color _newColor);
		
	private:
		int m_width;
		int m_height;
		string m_title;
		Color m_clearColor;


	private:
		Screen(Config* _config);
		~Screen();

	private:
		void Open();
		void Close();

		void NewFrame();
		void EndFrame();

	};
}

