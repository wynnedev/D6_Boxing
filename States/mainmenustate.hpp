//
// Created by 200458668 on 12/21/2020.
//

#ifndef PROJECT_D6_MAINMENUSTATE_HPP
#define PROJECT_D6_MAINMENUSTATE_HPP
#include "../game.hpp"
#include "state.hpp"
#include <iostream>

class MainMenuState : public State {
public:
    MainMenuState() = default;
    explicit MainMenuState(GameDataRef data);
    void Init() override;
    void HandleInput() override;
    void Update() override;

private:
    GameDataRef _data;

};


#endif//PROJECT_D6_MAINMENUSTATE_HPP
