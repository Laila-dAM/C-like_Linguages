#include <ionstream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

class Civilization {
    public:
    std::string name;
    int population;
    int economy;
    int military;
    int culture;
    int politics;
    int resources;
    bool isAtWar;
    bool isAllied;
    int technology;
    int environment;
Civilization(std::string name)
        : name(name), population(1000), economy(50), military(50), culture(50), politics(50), resources(100), isAtWar(false), isAllied(false), technology(0), environment(50) {}

void evolve(int politicalChoice, int economicChoice, int culturalChoice, int techChoice, int envChoice){
    politics += politicalChoice;
    economy += economicChoice;
    culture += culturalChoice;
    population += (economy / 10);
    resources += (economy / 5);
    technology += techChoice;
    environment += envChoice;

if(isWar){
    military -= (population/50);
    economy -= 10;
}
if(environment < 30){
    economy -= 5;
    population -= 10;
    std::cout << "You environment is in decline, affecting the economy and population!" <<std:endl;
}
}
}