//
// Created by 200458668 on 12/16/2020.
//

#ifndef PROJECT_D6_STATEMACHINE_HPP
#define PROJECT_D6_STATEMACHINE_HPP

#include "States/state.hpp"
#include <memory>
#include <stack>

typedef std::unique_ptr<State> StateRef;

class StateMachine {
public:
    StateMachine() = default;
    ~StateMachine() = default;

    void PushState(StateRef newState, bool ReplaceCurrentState = true);
    void PopState();

    void ProcessStateChanges();
    StateRef& GetCurrentState();

private:
    std::stack<StateRef> _stack;
    StateRef _state;

    bool _isRemove, _isAdd, _isReplace;
};

#endif//PROJECT_D6_STATEMACHINE_HPP
