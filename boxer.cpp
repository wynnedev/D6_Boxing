//
// Created by 200458668 on 12/23/2020.
//

#include "boxer.hpp"

#include <utility>

Boxer::Boxer() = default;

Boxer::Boxer(BoxerData _data) : _boxerData(std::move(_data)) {
}
int Boxer::Offense(int offense) {
    _boxerData._offense = offense ? offense : _boxerData._offense;
    return _boxerData._offense;
}
int Boxer::Defense(int defense) {
    _boxerData._defense = defense ? defense : _boxerData._defense;
    return _boxerData._defense;
}
int Boxer::Chin(int chin) {
    _boxerData._chin = chin ? chin : _boxerData._chin;
    return _boxerData._chin;
}
int Boxer::Stamina(int stamina) {
    _boxerData._stamina = stamina ? stamina : _boxerData._stamina;
    return _boxerData._stamina;
}
std::string Boxer::Name(const std::string& name) {
    _boxerData._name = name.empty() ? name : _boxerData._name;
    return _boxerData._name;
}

WeightClass Boxer::WeightClass(enum WeightClass weightClass) {
    _boxerData._weightClass = weightClass;
    return _boxerData._weightClass;
}
int Boxer::Age(int age) {
    _boxerData._age = age > MINIMUM_AGE ? age : _boxerData._age;
    return _boxerData._age;
}

