#include "BaseAnimal.hpp"


class Cow : public BaseAnimal
{
public:
    const unsigned NUM_LEGS = 4;

    Cow();
    virtual ~Cow() = default;

    void speak() override;
};
