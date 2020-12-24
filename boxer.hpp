//
// Created by 200458668 on 12/23/2020.
//

#ifndef PROJECT_D6_BOXER_HPP
#define PROJECT_D6_BOXER_HPP
#include <string>

#define MINIMUM_AGE 18

enum WeightClass{
    LIGHTWEIGHT, MIDDLEWEIGHT, HEAVYWEIGHT
}typedef WeightClass;

struct BoxerData{
    std::string _name;
    enum WeightClass _weightClass;
    int _age;
    int _offense;
    int _defense;
    int _chin;
    int _stamina;
}typedef BoxerData;

class Boxer {
public:
    Boxer();
    explicit Boxer(BoxerData _data);
    std::string Name(const std::string& name);
    WeightClass WeightClass(WeightClass weightClass);
    int Age(int age = 0);
    int Offense(int offense = 0);
    int Defense(int defense = 0);
    int Chin(int chin = 0);
    int Stamina(int stamina = 0);
private:
    BoxerData _boxerData;
};


#endif//PROJECT_D6_BOXER_HPP
