//
// Created by tara on 5/6/23.
//

#include <sstream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include "Progress.h"

namespace libac {
    int Progress::getPercentOf(int cur, int max) {
        return (cur*100/max);
    }
    void Progress::increment() {
        this->current++;

        if(this->current >= this->max) this->current=this->max;
    }
    int Progress::getPercent() {
        return (this->current*100/this->max);
    }

    std::string Progress::getProgressStr() {
        auto *str = new std::stringstream();
        auto buf = new char[128];
        auto count = sprintf(buf, "%d%", getPercent());

        str->write(buf, count);
        return str->str();
    }
} // libac