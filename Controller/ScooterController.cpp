#include "ScooterController.h"
#include "../Utils/utils.h"

using namespace ctrl;

ScooterController::ScooterController() {

}

vector<Scooter> ScooterController::searchByLocation(const string &location) const {
    vector<Scooter> allScooters = repo->getAll();
    vector<Scooter> result;
    auto locationMatches = [&](const Scooter &scooter) {
        return scooter.getLocation() == location;
    };

    auto it = find_if(allScooters.begin(), allScooters.end(), locationMatches);

    while (it != allScooters.end()) {
        result.push_back(*it);
        it = find_if(++it, allScooters.end(), locationMatches);
    }

    return result;
}

vector<Scooter> ScooterController::filterByCommissioningDate(const string &_date) const {
    time_t date = strToTime(_date);

    vector<Scooter> matches;

    for(const Scooter& scooter : repo->getAll())
        if(scooter.getCommissioningDate() <= date)
            matches.push_back(scooter);

    // Sort by commissioning date
    sort(matches.begin(), matches.end(), [](const Scooter& a, const Scooter& b) {
        return a.getCommissioningDate() < b.getCommissioningDate();
    });

    return matches;
}

vector<Scooter> ScooterController::filterByKilometer(float kilometer) const {
    vector<Scooter> matches;

    for(const Scooter& scooter : repo->getAll())
        if(scooter.getKilometer() <= kilometer)
            matches.push_back(scooter);

    // Sort by kilometers
    sort(matches.begin(), matches.end(), [](const Scooter& a, const Scooter& b) {
        return a.getKilometer() < b.getKilometer();
    });

    return matches;
}


