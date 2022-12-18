#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VBO3, VAO3, EBO3, texture3, VBO4, VAO4, EBO4, texture4, VBO5, VAO5, EBO5, texture5, VBO6, VAO6, EBO6, texture6, VBO7, VAO7, EBO7, texture7, VBO8, VAO8, EBO8, texture8, VBO9, VAO9, EBO9, texture9, VBO10, VAO10, EBO10, texture10, VBO11, VAO11, EBO11, texture11, VBO12, VAO12, EBO12, texture12, VBO13, VAO13, EBO13, texture13, VBO14, VAO14, EBO14, texture14, VBO15, VAO15, EBO15, texture15;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;
	float scale = -1;
	float position = -1;
	float position2 = -2;
	float initpos = 0;
	float initpos2 = 5;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	//void BuildColoredCube();
	void BuildColoredCube2(); //jalan
	void BuildColoredCube3(); //halte
	void BuildColoredCube4(); //halte
	void BuildColoredCube5(); //halte
	void BuildRoad2();
	void BuildBusBadan();
	void BuildRoda1Bus();
	void BuildRoda2Bus();
	void BuildRoda3Bus();
	void BuildRoda4Bus();
	void BuildJendela1();
	void BuildJendela2();
	void BuildJendela3();
	void BuildJendela4();
	void BuildPintuBus();
	void BuildGedung1();
	void BuildGedung2();
	void BuildGedung3();
	void BuildGedung4();
	void BuildGedung5();
	void BuildGedung6();
	void BuildGedung7();
	void BuildGedung8();
	void BuildJembatan();
	void BuildConcrate();
	void BuildConcrate2();
	void BuildConcrate3();
	void BuildConcrate4();
	void BuildConcrate5();
	void BuildConcrate6();
	void BuildConcrate7();
	void BuildConcrate8();
	void BuildKursi1();
	void BuildKursi2();
	void BuildKursi3();
	void BuildSky1();
	void BuildColoredPlane();
	
	void DrawColoredCube2();
	void DrawColoredCube3();
	void DrawColoredCube4();
	void DrawColoredCube5();
	void DrawRoad2();
	void DrawBusBadan();
	void DrawRoda1Bus();
	void DrawRoda2Bus();
	void DrawRoda3Bus();
	void DrawRoda4Bus();
	void DrawJendela1();
	void DrawJendela2();
	void DrawJendela3();
	void DrawJendela4();
	void DrawPintuBus();
	void DrawGedung1();
	void DrawGedung2();
	void DrawGedung3();
	void DrawGedung4();
	void DrawGedung5();
	void DrawGedung6();
	void DrawGedung7();
	void DrawGedung8();
	void DrawJembatan();
	void DrawConcrate();
	void DrawConcrate2();
	void DrawConcrate3();
	void DrawConcrate4();
	void DrawConcrate5();
	void DrawConcrate6();
	void DrawConcrate7();
	void DrawConcrate8();
	void DrawKursi1();
	void DrawKursi2();
	void DrawKursi3();
	void DrawSky1();
	void DrawColoredPlane();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();

};

