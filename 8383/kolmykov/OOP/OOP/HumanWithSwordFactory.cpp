#include "HumanWithSwordFactory.h"



HumanWithSwordFactory::HumanWithSwordFactory()
{
	type = UnitType::HUMAN_WITH_SWORD;
}


HumanWithSwordFactory::~HumanWithSwordFactory()
{
}

std::shared_ptr<Unit> HumanWithSwordFactory::create(int x, int y, int level)
{
	return std::shared_ptr<Unit>(new HumanWithSword(x, y, level));
}
