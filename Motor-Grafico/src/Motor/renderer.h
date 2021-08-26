#pragma once
#include "exports.h"
#include "window.h"

namespace engine
{
	class ENGINE_API renderer
	{
	public:
		renderer();
		renderer(window* window);
		~renderer();
		void setCurrentWindow(window* window);
		void compileShaders();
		void draw();

	private:
		window* currentWindow;
		unsigned int shaderProgram;
		unsigned int buffer;
		unsigned int VBO, VAO, EBO;
	};
}