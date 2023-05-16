#ifndef OOP_L5_SCOOTERREPO_H
#define OOP_L5_SCOOTERREPO_H

#include <vector>
#include "../Domain/Scooter.h"

using namespace std;
using namespace domain;

namespace repo {

    class ScooterRepo {
    private:
        vector<Scooter> scooterList;
    public:
        ScooterRepo();

        void add(const Scooter &scooter);

        bool remove(const Scooter &scooter);

        void remove(int index);

        void update(int index, const Scooter &newScooter);

        int getIndexOf(const Scooter &scooter);

        Scooter getScooterAtIndex(int index);

        vector<Scooter> getAll();
    };
}

#endif //OOP_L5_SCOOTERREPO_H
