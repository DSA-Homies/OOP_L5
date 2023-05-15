#include <stdexcept>
#include "ScooterRepo.h"

ScooterRepo::ScooterRepo() {

}

/**
 * @return A vector containing all the scooters in the repo
 */
vector<Scooter> ScooterRepo::getAll() {
    return scooterList;
}

/**
 * Adds a scooter to the repo
 * @param scooter The scooter to be added
 */
void ScooterRepo::add(const Scooter &scooter) {
    scooterList.push_back(scooter);
}

/**
 * Removes a scooter from the repo
 * @param scooter The scooter to be removed
 * @return True if the scooter was removed, false otherwise
 */
bool ScooterRepo::remove(const Scooter &scooter) {
    auto it = find(scooterList.begin(), scooterList.end(), scooter);
    if (it != scooterList.end()) {
        scooterList.erase(it);
        return true;
    }

    return false;
}

/**
 * Removes a scooter object at a certain index
 * @param index The index of the scooter to be removed
 * @throws out_of_range if index is invalid
 */
void ScooterRepo::remove(int index) {
    if (index < 0 || index > scooterList.size())
        throw out_of_range("ScooterRepo::remove(): Index out of range for index " + to_string(index));

    scooterList.erase(scooterList.begin() + index);
}

/**
 * Updates a scooter object at a certain index
 * @param index The index of the scooter to be updated
 * @param newScooter The new scooter object to replace the old one
 * @throws out_of_range if index is invalid
 */
void ScooterRepo::update(int index, const Scooter &newScooter) {
    if (index < 0 || index > scooterList.size())
        throw out_of_range("ScooterRepo::update(): Index out of range for index " + to_string(index));

    scooterList[index] = newScooter;
}

/**
 * @return The index of the scooter if found, -1 otherwise
 * @param scooter The scooter to be searched for
 */
int ScooterRepo::getIndexOf(const Scooter &scooter) {
    auto it = find(scooterList.begin(), scooterList.end(), scooter);
    if (it != scooterList.end())
        return int(distance(scooterList.begin(), it));

    return -1;
}

/**
 * @return The scooter object at a certain index
 * @param index The index of the scooter to be returned
 * @throws out_of_range if index is invalid
 */
Scooter ScooterRepo::getScooterAtIndex(int index) {
    if (index < 0 || index > scooterList.size())
        throw out_of_range("ScooterRepo::getScooterAtIndex(): Index out of range for index " + to_string(index));

    return scooterList[index];
}