//
// Created by 200458668 on 12/21/2020.
//

#ifndef PROJECT_D6_INTROSTATE_HPP
#define PROJECT_D6_INTROSTATE_HPP
#include "game.hpp"
#include "state.hpp"
#include <iostream>


class IntroState : public State {
public:
    IntroState();
    explicit IntroState(GameDataRef data);
    void Init() override;
    void HandleInput() override;
    void Update() override;
private:
    GameDataRef _data;
};


#endif//PROJECT_D6_INTROSTATE_HPP
