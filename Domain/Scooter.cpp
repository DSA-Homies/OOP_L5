#include "Scooter.h"

#include <utility>
#include "../Utils/Utils.h"

Scooter::Scooter(string id, string model, time_t commissioningDate, float kilometer,
                 string location, Scooter::Status status) : id(std::move(id)), model(std::move(model)),
                                                                   commissioningDate(commissioningDate),
                                                                   kilometer(kilometer), location(std::move(location)),
                                                                   status(status) {}

Scooter::Scooter(string id, string model, const string& commissioningDate, float kilometer,
                 string location, Scooter::Status status) : id(std::move(id)), model(std::move(model)),
                                                            commissioningDate(strToTime(commissioningDate)),
                                                            kilometer(kilometer), location(std::move(location)),
                                                            status(status) {}

const string &Scooter::getId() const {
    return id;
}

void Scooter::setId(const string &_id) {
    this->id = _id;
}

const string &Scooter::getModel() const {
    return model;
}

void Scooter::setModel(const string &_model) {
    this->model = _model;
}

time_t Scooter::getCommissioningDate() const {
    return commissioningDate;
}

void Scooter::setCommissioningDate(time_t _commissioningDate) {
    this->commissioningDate = _commissioningDate;
}

void Scooter::setCommissioningDate(const string& _commissioningDate) {
    this->commissioningDate = strToTime(_commissioningDate);
}

float Scooter::getKilometer() const {
    return kilometer;
}

void Scooter::setKilometer(float _kilometer) {
    this->kilometer = _kilometer;
}

const string &Scooter::getLocation() const {
    return location;
}

void Scooter::setLocation(const string &_location) {
    this->location = _location;
}

Scooter::Status Scooter::getStatus() const {
    return status;
}

void Scooter::setStatus(Scooter::Status _status) {
    this->status = _status;
}