#include "StrawberryPowerup.h"

// makes pacman invisible and immortal

StrawberryPowerup::StrawberryPowerup(Player* p) {
    this->p = p;
    Powerup::rank = 2;
}

void StrawberryPowerup::activate() {
    p->renderEntity = false;
    p->isKillable = false;
    p->invisCounter = 30*3;
}

string StrawberryPowerup::toString() {
    return "Strawberry";
}