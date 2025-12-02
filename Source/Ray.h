#pragma once

#include <glm/glm.hpp>

struct Ray {
public:
	glm::vec3 origin;
	glm::vec3 direction;

	Ray() = default;
	Ray(glm::vec3 origin, glm::vec3 direction) :
		origin{ origin },
		direction{ direction }
	{
	}

	glm::vec3 at(float t) {
		return origin + t * direction;
	}

	glm::vec3 operator * (float t) const {
		return origin + t * direction;
	}
};