#pragma once
#include "light.h";

namespace engine
{
	class ENGINE_API directionalLight : public light
	{
	public:
		directionalLight(renderer* render);
		void setInitialValues() override;
		void processIndividualValues() override;
	private:
		glm::vec3 direction;
	};
}