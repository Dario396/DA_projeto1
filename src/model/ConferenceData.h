//
// Created by edu on 18/03/26.
//

#ifndef DA_PROJETO1_CONFERENCEDATA_H
#define DA_PROJETO1_CONFERENCEDATA_H

#include <vector>
#include "Submission.h"
#include "Reviewer.h"
#include "Parameters.h"
#include "Control.h"

struct ConferenceData{
    std::vector<Submission> submissions;
    std::vector<Reviewer> reviewers;
    Parameters parameters;
    Control control;
};

#endif //DA_PROJETO1_CONFERENCEDATA_H