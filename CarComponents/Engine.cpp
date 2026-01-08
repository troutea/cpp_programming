#include "Engine.h"

Engine::Engine()
{
  std::cout << "Calling the Engine constructor" << std::endl;
}

Engine::~Engine()
{

    std::cout << "Calling the Engine destructor" << std::endl;
}

void Engine::start() 
{
    std::cout << "the engine is starting now from the engine class" << std::endl;
}