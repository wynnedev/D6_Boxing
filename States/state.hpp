//
// Created by 200458668 on 11/8/2020.
//

#ifndef PROJECT_D6_STATE_HPP
#define PROJECT_D6_STATE_HPP

class State {
public:
    virtual void Init() = 0;
    virtual void HandleInput() = 0;
    virtual void Update() = 0;

    virtual void Pause() {};
    virtual void Resume() {};
};


#endif//PROJECT_D6_GAMESTATE_HPP
