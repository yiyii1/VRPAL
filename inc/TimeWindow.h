// 时间窗
#ifndef TIME_WINDOW_H
#define TIME_WINDOW_H

struct TimeWindow {
    int startTime;
    int endTime;

    TimeWindow(int startTime, int endTime) : startTime(startTime), endTime(endTime) {}
};

#endif 