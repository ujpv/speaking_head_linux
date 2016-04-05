#ifndef ABSTACTMORPHER_H
#define ABSTACTMORPHER_H

#include <string>

#include "ofMain.h"
#include "ofxAssimpModelLoader.h"

class AbstactMorpher
{
public:
    explicit AbstactMorpher() {}
    virtual void update() = 0;
    virtual void draw() = 0;
    void set_current(int v1, float w1, int v2, float w2) {
        m_v1 = v1;
        m_v2 = v2;
        m_w1 = w1;
        m_w2 = w2;
    }

    virtual ~AbstactMorpher() {}

protected:
    double m_w1, m_w2;
    int    m_v1, m_v2;

};

#endif // ABSTACTMORPHER_H
