//
// Created by 200458668 on 12/21/2020.
//

#ifndef PROJECT_D6_GAME_HPP
#define PROJECT_D6_GAME_HPP
#include <string>
#include <memory>
#include "statemachine.hpp"

struct {
    StateMachine _stateMachine;
    std::string input;
    bool playGame;
}typedef GameData;

typedef std::shared_ptr<GameData> GameDataRef;

class Game {
public:
    Game();
    void Run();
private:
    GameDataRef _data = std::make_shared<GameData>();
};


#endif//PROJECT_D6_GAME_HPP
