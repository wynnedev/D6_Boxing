//
// Created by 200458668 on 12/21/2020.
//

#include "game.hpp"
#include "States/introstate.hpp"

Game::Game() {
    _data->_stateMachine.PushState(StateRef ( new IntroState(this->_data)));
    _data->playGame = true;
}
void Game::Run() {
    while(this->_data->playGame){
        this->_data->_stateMachine.ProcessStateChanges();
        this->_data->_stateMachine.GetCurrentState()->HandleInput();
        this->_data->_stateMachine.GetCurrentState()->Update();
    }
    this->_data->_stateMachine.PopState();
}
