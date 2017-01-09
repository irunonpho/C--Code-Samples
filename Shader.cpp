#include "Shader.h"

/*
Shader::Shader(const GLchar* vertShaderPath, const GLchar* fragShaderPath)
{
	GLuint vertShader = glCreateShader(GL_VERTEX_SHADER);
	GLuint fragShader = glCreateShader(GL_FRAGMENT_SHADER);

	std::string vertShaderSource = LoadFileToString(vertShaderPath);
	std::string fragShaderSource = LoadFileToString(fragShaderPath);

	const char* rawVertShaderSource = vertShaderSource.c_str();
	const char* rawFragShaderSource = fragShaderSource.c_str();

	glShaderSource(vertShader, 1, &rawVertShaderSource, NULL);
	glShaderSource(fragShader, 1, &rawFragShaderSource, NULL);

	glCompileShader(vertShader);
	glCompileShader(fragShader);

	GLint success;
	GLchar infoLog[512];

	glGetShaderiv(vertShader, GL_COMPILE_STATUS, &success);
	if (!success){
		glGetShaderInfoLog(vertShader, 512, NULL, infoLog);
		std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
	}
	glGetShaderiv(fragShader, GL_COMPILE_STATUS, &success);

	if (!success){
		glGetShaderInfoLog(fragShader, 512, NULL, infoLog);
		std::cout << "ERROR::FRAGMENT::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
	}

	Program = glCreateProgram();
	glAttachShader(Program, vertShader);
	glAttachShader(Program, fragShader);
	glLinkProgram(Program);

	glGetProgramiv(Program, 512, &success);
	if (!success){
		glGetProgramInfoLog(Program, 512, NULL, infoLog);
	}

	glDeleteShader(vertShader);
	glDeleteShader(fragShader);
}


void Shader::Use(){
	glUseProgram(Program);
}

std::string Shader::LoadFileToString(const char* filepath){

	std::string fileData;
	std::ifstream stream(filepath, std::ios::in);

	if (stream.is_open()){
		std::string line = "";
		while (getline(stream, line)){
			fileData += '\n' + line;
		}

		stream.close();
	}

	return fileData;
}
*/