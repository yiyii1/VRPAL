#include "Utility.h"
#include <fstream>

void readDataFromFile(const std::string& fileName, LogisticsModel& model) {
    model.readData(fileName);
}

void writeResultsToFile(const std::string& fileName, const LogisticsModel& model) {
    // Write the results to a file
}