//
// Created by 200458668 on 12/22/2020.
//

#ifndef PROJECT_D6_QUITSTATE_HPP
#define PROJECT_D6_QUITSTATE_HPP
#include "../game.hpp"
#include "state.hpp"
#include <iostream>

class QuitState : public State {
public:
    QuitState() = default;
    explicit QuitState(GameDataRef data);
    void Init() override ;
    void HandleInput() override;
    void Update() override;
private:
    GameDataRef _data;
};


#endif//PROJECT_D6_QUITSTATE_HPP
