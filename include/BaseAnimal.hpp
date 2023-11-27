#include "IAnimal.hpp"


class BaseAnimal : public IAnimal
{
public:
    BaseAnimal() = default;
    BaseAnimal(unsigned int numLegs);
    virtual ~BaseAnimal() = default;

    void speak() override;

protected:
    unsigned int m_numLegs;
};
