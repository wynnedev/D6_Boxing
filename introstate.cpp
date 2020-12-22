//
// Created by 200458668 on 12/21/2020.
//

#include "introstate.hpp"
void IntroState::Init() {
    std::cout << "Welcome to the D6 Boxing" << std::endl;
}
void IntroState::HandleInput() {
    system("pause");
}
void IntroState::Update() {
    std::cout << "Moving to Main Menu State" << std::endl;
}

IntroState::IntroState(GameDataRef data) : _data(data) {
}

IntroState::IntroState() = default;
