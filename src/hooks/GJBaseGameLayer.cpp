#include <Geode/Geode.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>

#include <core/Bot.hpp>

using namespace geode::prelude;

class $modify(GJBaseGameLayer) {
    void processCommands(float dt, bool isHalfTick, bool isLastTick) {
        if(!isHalfTick) GatoBot::get()->updateBot();
        GJBaseGameLayer::processCommands(dt, isHalfTick, isLastTick);
    }
};
