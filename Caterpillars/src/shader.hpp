#ifndef SHADER
#define SHADER

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
// #include <vector>

#include <GL/glew.h>
// 
class Shader{
private:
    // void checkLastLines(std::string lancuch);
public:
    // int verticesCount;
    // int indicesCount;
    // // GLfloat *vertices;
    // std::vector<GLfloat> vertices;
    // // GLfloat vertices[12];
    // // GLuint *indices;
    // std::vector<GLuint> indices;
    // // GLuint indices[6];
    // GLuint VAO;
    // GLuint VBO;
    // GLuint EBO;
    GLuint shaderProgram;
    const GLchar *vShaderCode;
    const GLchar *fShaderCode;
    Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
    void useShaderProgram();
};


#endif
