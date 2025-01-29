#ifndef PODCASPLAYER_H
#define PODCASTPLAYER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Episode.h"

using namespace std;

class PodcastPlayer{

public:
 virtual void play(const Episode& , ostream&)=0;


};
class AudioPlayer: public PodcastPlayer{

public:
  void play(const Episode& , ostream&) override;
};


class VideoPlayer: public AudioPlayer{

public:
  void play(const Episode& , ostream&) override;
};





#endif
