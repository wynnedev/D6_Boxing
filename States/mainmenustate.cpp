//
// Created by 200458668 on 12/21/2020.
//

#include "mainmenustate.hpp"
#include "quitstate.hpp"

MainMenuState::MainMenuState(GameDataRef data) : _data(data) {
}
void MainMenuState::Init() {
    std::cout << "Welcome to D6 Boxing v1.0" << std::endl;
    std::cout << "Please select an option" << std::endl
              << "(1) Play Game\n"
              << "(2) Generate Fighter\n"
              << "(3) Quit Game\n"
              << std::endl;
}
void MainMenuState::HandleInput() {
    std::cin >> _data->input;
}
void MainMenuState::Update() {
    if(_data->input == "1"){

    }

    else if(_data->input == "2"){

    }

    else if(_data->input == "3"){
        _data->_stateMachine.PushState(StateRef ( new QuitState(this->_data)));
    }

    else{
        std::cout << "Invalid Entry" << std::endl;
    }
}

