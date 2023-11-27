#include "BaseAnimal.hpp"

#include <iostream>


BaseAnimal::BaseAnimal(unsigned int numLegs)
    : IAnimal()
    , m_numLegs(numLegs)
{}

void BaseAnimal::speak()
{
    std::cout << "Generic animal noises" << std::endl;
}
