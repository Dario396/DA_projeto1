//
// Created by Dário on 05/03/2026.
//

#ifndef DA_CONTROL_H
#define DA_CONTROL_H

#include <string>

struct Control {
    int generateAssignments;
    int riskAnalysis;
    std::string outputFilename = "output.csv";
};

#endif //DA_CONTROL_H