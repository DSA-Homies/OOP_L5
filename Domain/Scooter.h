#ifndef OOP_L5_SCOOTER_H
#define OOP_L5_SCOOTER_H

#include <string>
#include <vector>

using namespace std;
namespace domain {
    class Scooter {
        enum Status {
            PARKED = 0,
            RESERVED = 1,
            IN_USE = 2,
            AWAITING = 3,
            DECOMMISSIONED = 4
        };

        vector<string> statusList = {
                "PARKED",
                "RESERVED",
                "IN_USE",
                "AWAITING",
                "DECOMMISSIONED"
        };

        [[nodiscard]] string statusToString(Status _status) const { return statusList[_status]; }

        [[nodiscard]] Status stringToStatus(const string &_status) const {
            for (int i = 0; i < statusList.size(); ++i)
                if (statusList[i] == _status)
                    return Status(i);

            return DECOMMISSIONED;
        }

    private:
        string id;
        string model;
        time_t commissioningDate;
        float kilometer;
        string location;
        Status status;

    public:
        Scooter(string id, string model, time_t commissioningDate, float kilometer, string location,
                Status status);

        Scooter(string id, string model, const string &commissioningDate, float kilometer,
                string location, Scooter::Status status);

        [[nodiscard]] const string &getId() const;

        void setId(const string &id);

        [[nodiscard]] const string &getModel() const;

        void setModel(const string &model);

        [[nodiscard]] time_t getCommissioningDate() const;

        void setCommissioningDate(time_t _commissioningDate);

        void setCommissioningDate(const string &_commissioningDate);

        [[nodiscard]] float getKilometer() const;

        void setKilometer(float kilometer);

        [[nodiscard]] const string &getLocation() const;

        void setLocation(const string &location);

        [[nodiscard]] Status getStatus() const;

        void setStatus(Status status);

        bool operator==(const Scooter &other) const;

        bool operator!=(const Scooter &other) const;

        [[nodiscard]] string toString() const;

        [[nodiscard]] vector<string> toList() const;
    };

}
#endif //OOP_L5_SCOOTER_H
