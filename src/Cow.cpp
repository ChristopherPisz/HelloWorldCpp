#include "Cow.hpp"

#include <iostream>


Cow::Cow()
    : BaseAnimal(NUM_LEGS)
{}

void Cow::speak()
{
    std::cout << "Moo" << std::endl;
}
