#ifndef SIMPLESPEAKER_H
#define SIMPLESPEAKER_H

#include "abstractspeaker.h"

#include "ofSoundPlayer.h"

class SimpleSpeakerSapi : public AbstractSpeaker
{
public:
    SimpleSpeakerSapi();

    void update();
    void start_speak();

private:
    ofSoundPlayer player;
};

#endif // SIMPLESPEAKER_H
