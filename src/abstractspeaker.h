#ifndef ABSTRACTSPEAKER_H
#define ABSTRACTSPEAKER_H

#include "stopwath.h"

#include <vector>

class AbstractSpeaker
{
public:
    AbstractSpeaker();
    virtual ~AbstractSpeaker() {}

    virtual void update() = 0;
    virtual void start_speak() = 0;

    int get_current() const;
    int get_previous() const;
    double get_curren_w() const;
    double get_previous_w() const;
    bool get_is_speaking() const;
    bool get_is_ready() const;

protected:
    int     m_cur_viseme;
    int     m_pre_viseme;
    double  m_cur_w;
    double  m_pre_w;

    int m_visemes_count;
    int m_total_dur;
    std::vector<int> m_visemes;
    std::vector<int> m_visemes_pos;
    std::vector<int> m_visemes_dur;

    bool m_is_speaking;
    bool m_is_ready;

    Stopwath m_stopwath;

    void update_values();
};

#endif // ABSTRACTSPEAKER_H
