//
// Created by tara on 5/6/23.
//

#ifndef LIBAC_CPP_PROGRESS_H
#define LIBAC_CPP_PROGRESS_H
#include <iostream>
#include <string>

namespace libac {

    class Progress {
    private:
        int ticks = 0;
        int current = 0;
        int max = 100;
    public:
        static int getPercentOf(int cur, int max);
        int getPercent();
        void increment();
        std::string getProgressStr();
    };

} // libac

#endif //LIBAC_CPP_PROGRESS_H
