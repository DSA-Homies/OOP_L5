#pragma once

#include <ctime>
#include <chrono>
#include <string>
#include <vector>

#include <iomanip>
#include <sstream>
#include <iostream>

using namespace std;

/**
 * Convert a string to a time_t object
 * @param input input string
 */
static time_t strToTime(const string &input) {
    tm time{};
    stringstream ss(input);
    ss >> get_time(&time, "%d-%m-%Y");

    return mktime(&time);
}

/**
 * Convert a time_t object to a string
 * @param input
 * @return
 */
static string timeToStr(const time_t &input) {
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "%d-%m-%Y", std::localtime(&input));
    return {buffer};
}

/**
 * Convert a string object to lowercase
 * @param str
 * @return
 */
static string toLower(string str) {
    for (char &c: str)
        c = char(tolower(c));

    return str;
}