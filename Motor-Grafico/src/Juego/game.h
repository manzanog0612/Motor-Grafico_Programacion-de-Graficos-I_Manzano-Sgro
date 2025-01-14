#pragma once
#include "Motor/baseGame.h"

#define AMOUNT_POINT_LIGHTS 4

const int colorsArraySize = 8;

class game : public engine::baseGame
{
public:
	game();
	~game();
	void update() override;
	void draw() override;
	void init() override;
	void deInit() override;

private:
	int currentColorIndex = 0;
	glm::vec4 nextColor;
	glm::vec4 colors[colorsArraySize];
	float t = 0;
	float rotationSpeed = 0;
	float cameraSpeed = 2;
	glm::vec3 entityPos = glm::vec3(0, 0, 0);
	float timeBetweenChanges = 0;
	bool managingDirectionalLight = false;
	bool drawPlanes = true;
	

	engine::Model* scene;
	engine::sprite* floor;
	engine::sprite* conteiner2;
	engine::BSPManager* bpsManager;
	engine::node* leftStaticModel;
	engine::node* rightStaticModel;
	engine::node* frontStaticModel;
	engine::node* centerStaticModel;
	engine::node* mobileModel;
	engine::pointLight* pointLight[AMOUNT_POINT_LIGHTS];
	engine::shape* pointLightBox[AMOUNT_POINT_LIGHTS];
	engine::directionalLight* directionalLight;
	engine::spotLight* spotLight;
	engine::shape* spotLightBox;
	engine::shape* cubeEmerald;
	engine::shape* cubePearl;
	engine::shape* cubeBronze;
	engine::shape* cubeGold;
	engine::shape* cubeCyanPlastic;
	engine::shape* cubeRedPlastic;
	engine::shape* cubeGreenRubber;
	engine::shape* cubeYellowRubber;
	engine::entity* selectedEntity;
	engine::camera* actualCam;
	engine::firstPersonCamera* firstPersonCam;
	engine::thirdPersonCamera* thirdPersonCam;
};
