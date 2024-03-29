#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>
#include <glm/mat4x4.hpp>
#include <iostream>

int main(void) {
	glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	GLFWwindow* window = glfwCreateWindow(800, 600, "Test Window", nullptr, nullptr);

	uint32_t extensionCount = 0;
	VkResult ret = vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);
	printf("count : %i\n", extensionCount);

	glm::mat4 testMatrix(1.0f);
	glm::vec4 testVector(1.0f);
	auto testResult = testMatrix * testVector;
	printf("testResult : %i\n", testResult);

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}