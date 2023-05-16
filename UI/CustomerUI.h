#ifndef OOP_L5_CUSTOMERUI_H
#define OOP_L5_CUSTOMERUI_H

#include "UI.h"


namespace ui {
    class CustomerUI : public UI {

    public:
        void mainMenu() const override {
            vector<string> options = {"Rent Scooter", "Return Scooter", "Reserve Scooter", "Back"};
            int option = Widgets::menu("Customer Menu", options);

            switch (option) {
                case 1:
                    cout << "Rent Scooter\n";
                    break;
                case 2:
                    cout << "Return Scooter\n";
                    break;
                case 3:
                    cout << "Reserve Scooter\n";
                    break;
                case 4:
                    cout << "Exit\n";
                    break;
                default:
                    mainMenu();
            }
        }

    private:
        void rentScooter() const {


        }

        void returnScooter() const {

        }

        void reserveScooter() const {

        }
    };
}
#endif //OOP_L5_CUSTOMERUI_H
