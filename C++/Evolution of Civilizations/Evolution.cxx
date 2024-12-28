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
void displayStatus(){
    std::cout<< "\nCivilization: "<< name << std::endl;
        std::cout<< "Population: "<< population << std::endl;
        std::cout<< "Economy: "<< economy << std::endl;
        std::cout<< "Military: "<< military << std::endl;
        std::cout<< "Culture: "<< culture << std::endl;
        std::cout<< "Politics: "<< politics << std::endl;
        std::cout<< "Resources: "<< resources << std::endl;
        std::cout<< "Technology: "<< technology << std::endl;
        std::cout<< "Environment: "<< environment << std::endl;
         std::cout<< "At War: "<< (isAtWas ? "Yes" : "No") << std::endl;
        std::cout<< "Allied: "<< (isAllied ? "Yes" : "No") << std::endl;

}
void handleEvent(int eventChoice){
    switch(eventChoice){
        case 1:
        economy -= 20;
        std::cout << "An economic crisis has struck! Economy decreases." << std::endl;
        break;

        case 2:
        isAtWar = true;
        std::cout << "Your civilization is now at war!" << std::endl;
        break;

        case 3:
        culture += 15;
        std::cout << "A cultural renaissance boosts your civilization's culture!" << std::endl;
        break;

        case 4:
        politics -= 10;
        std::cout << "Political unrest lowers your politics!" << std:endl;
        break;

        case 5: 
        resources += 50;
        std::cout << "Your civilization has discovered new resources!" << std::endl;
        break;

        case 6:
        technology += 20;
        std::cout << "A technological breakthrough has occurred! Technology increases." << std::endl;
        break;

        case 7:
        environment -= 15;
        std::cout << "An enviromental disaster has struck! Environment decreases." << std::endl;
        break;

        case 8:
        isAllied = true;
        std::cout << "Your civilization has formed an alliance with another civilization!" << std::endl;
        break;

        default:
        std::cout << "No event occurred." << std::endl;
        break;
    }
}
};

class Player {
public:
void makeDecision(Civilization& civ){
    int politicalChoice, economicChoice, culturalChoice, techChoice, envChoice;
    std::cout << "\nChoose your civilization's political focus (1-15): ";
    std::cin >> politicalChoice;
    std::cout << "Choose your civilization's economic focus (1-5): ";
     std::cin >> economicChoice;
        std::cout << "Choose your civilization's cultural focus (1-5): ";
        std::cin >> culturalChoice;
        std::cout << "Choose your civilization's technological investment (1-5): ";
        std::cin >> techChoice;
        std::cout << "Choose your civilization's environmental focus (1-5): ";
        std::cin >> envChoice;

        civ.evolve(politicalChoice, economicChoice, culturalChoice, techChoice, envChoice);
}
void triggerRandomEvent(Civilization& civ){
    srand(time(0));
    int eventChoice = rand () % 9;
}
}
