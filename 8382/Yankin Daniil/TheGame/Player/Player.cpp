#include "Player.h"
#include "Unit/UnitHeader.h"
#include "Base/Base.h"


Player::Player(uint8_t color) : color(color) {}

Player::~Player() {
    for (auto base = baseSet.begin(); !baseSet.empty(); base = baseSet.begin()) {
        auto temp = *base;
        baseSet.erase(base);
        delete temp;
    }
}

uint8_t Player::getColor() {
    return color;
}



void Player::addUnit(IUnit *unit) {unitSet.insert(unit);
}

void Player::removeUnit(IUnit *unit) {
    unitSet.erase(unit);
}

std::set <IUnit*>* Player::getUnitSet() {
    return &unitSet;
}



void Player::addBase(Base* base) {
    baseSet.insert(base);
}

void Player::removeBase(Base* base) {
    baseSet.erase(base);
}

std::set <Base*>* Player::getBaseSet() {
    return &baseSet;
}
