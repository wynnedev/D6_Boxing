//
// Created by 200458668 on 12/16/2020.
//

#include "statemachine.hpp"

void StateMachine::PushState(StateRef newState, bool ReplaceCurrentState){
    _isAdd = true;
    _isReplace = ReplaceCurrentState;
    _state = std::move(newState);
}
void StateMachine::PopState() {
    _isReplace = true;
}
void StateMachine::ProcessStateChanges() {
    if(_isRemove && !_stack.empty()){
        _stack.pop();

        if(!_stack.empty()){
            _stack.top()->Resume();
        }
        _isRemove = false;
    }

    if(_isAdd){
        if(!_stack.empty()){
            if(_isReplace){
                _stack.pop();
            }

            else{
                _stack.top()->Pause();
            }
        }
        _stack.push(std::move(_state));
        _stack.top()->Init();
        _isAdd = false;
    }
}

StateRef &StateMachine::GetCurrentState() {
    return _stack.top();
}
