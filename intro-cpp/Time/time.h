#ifndef TIME_H
#define TIME_H

class Time
{
public:
    Time();
    Time(int, int, int);
    void setTime(int, int, int);
    void printUniversal();
    void printStandard();

private:
    int hour;
    int minute;
    int second;
};

Time::Time()
{
    hour = minute = second = 0;
}

Time::Time(int h, int m, int s)
{
    setTime(h, m, s);
}

void Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printUniversal()
{
    std::cout << std::setfill('0') << std::setw(2) << hour << ":"
              << std::setw(2) << minute << ":"
              << std::setw(2) << second << std::endl;
}

void Time::printStandard()
{
    std::cout << ((hour == 0 || hour == 12)? 12 : hour % 12)
              << ":" << std::setfill('0') << std::setw(2) << minute
              << ":" << std::setw(2) << second
              << (hour < 12 ? " AM" : " PM") << std::endl;
}

#endif