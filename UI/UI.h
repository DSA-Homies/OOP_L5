#ifndef OOP_L5_UI_H
#define OOP_L5_UI_H

#include <utility>

#include "Widgets.h"
#include "../Controller/ScooterController.h"

namespace ui {
    class UI {
        friend class Widgets;
        shared_ptr<ctrl::ScooterController> controller;

    public:

        explicit UI(std::shared_ptr<ctrl::ScooterController> _controller)
                : controller(std::move(_controller)) {}


        virtual void mainMenu() const = 0;

        void searchByLocation() const {

        }

        void filterByCommissioningDate() const {

        }

        void filterByKilometer() const {

        }
    };
}


#endif //OOP_L5_UI_H
