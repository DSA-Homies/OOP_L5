#ifndef OOP_L5_SCOOTERCONTROLLER_H
#define OOP_L5_SCOOTERCONTROLLER_H

#include <memory>
#include "../Repo/ScooterRepo.h"

namespace ctrl {
    class ScooterController {
    private:
        unique_ptr<repo::ScooterRepo> repo;
    public:
        ScooterController();

        [[nodiscard]] vector<Scooter> searchByLocation(const string &location) const;

        vector<Scooter> filterByCommissioningDate(const string &date) const;

        vector<Scooter> filterByKilometer(float kilometer) const;
    };
}


#endif //OOP_L5_SCOOTERCONTROLLER_H
