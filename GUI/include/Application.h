#pragma once

#include <string>

namespace Application
{
	extern std::string DefaultFile;

	void Init();
	void ImGuiRender();
	void Destroy();
}