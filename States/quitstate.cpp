//
// Created by 200458668 on 12/22/2020.
//

#include "quitstate.hpp"
QuitState::QuitState(GameDataRef data) : _data(data) {
}
void QuitState::Init() {
    std::cout << "Thank You for Playing D6 Boxing" << std::endl;
}
void QuitState::HandleInput() {
    //NO INPUT
}
void QuitState::Update() {
    _data->playGame = false;
}
