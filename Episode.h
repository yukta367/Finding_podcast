#ifndef EPISODE_H
#define EPISODE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "defs.h"

using namespace std;

class Episode {

public:
Episode(string,string,string,string,string,string);
string getPodCastTitle();
string getHost() const;
string getEpisodeTitle() const;
string getCategory() const;
string getAudio() const;
string getVideoFile() const;
void print(ostream& output) const;
friend ostream& operator<<(ostream& output,const Episode& e);




private:
string podcastTitle;
string host;
string episodeTitle;
string category;
string audio;
string videoFile;




};
#endif
