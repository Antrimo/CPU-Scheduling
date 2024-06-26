#ifndef SCHEDULING_ALGORITHM_H
#define SCHEDULING_ALGORITHM_H

class SchedulingAlgorithm {
public:
    virtual void WRR_Scheduling() = 0;
    virtual void EDF_Scheduling() = 0;
    virtual void F_B_Scheduling() = 0;
    virtual void MLQScheduler() = 0;
};

#endif // SCHEDULING_ALGORITHM_H
