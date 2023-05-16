#ifndef OOP_L5_MANAGERUI_H
#define OOP_L5_MANAGERUI_H

#include "UI.h"

namespace ui {
    class ManagerUI : public UI{

    public:
        void mainMenu() const override{
            vector<string> options = {"Add Scooter", "Remove Scooter", "Set State", "Search by Location",
                                      "Filter by commissioning date", "Filter by kilometer",
                                      "Sort by commissioning date", "Back"};
            int option = Widgets::menu("Manager Menu", options);

            switch (option) {
                case 1:
                    cout << "Add Scooter\n";
                    break;
                case 2:
                    cout << "Remove Scooter\n";
                    break;
                case 3:
                    cout << "Set State\n";
                    break;
                case 4:
                    cout << "Search by Location\n";
                    break;
                case 5:
                    cout << "Filter by commissioning date\n";
                    break;
                case 6:
                    cout << "Filter by kilometer\n";
                    break;
                case 7:
                    cout << "Sort by commissioning date\n";
                    break;
                case 8:
                    cout << "Exit\n";
                    break;
                default:
                    mainMenu();
            }
        }

    private:
        void addScooter() const {

        }

        void removeScooter() const {

        }

        void setState() const {

        }

        void sortByCommissioningDate() const {

        }
    };
}
#endif //OOP_L5_MANAGERUI_H
