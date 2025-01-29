#ifndef PODIFY_H
#define PODIFY_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Episode.h"
#include "Search.h"
#include "Array.h"
#include "Podcast.h"
//#include "TestControl.h"


using namespace std;

class Podify {

public:
//Podify();
~Podify();
void addPodcast(Podcast*);
void addEpisode(Episode*,string&);
Array<Podcast*> getPodcasts();
Podcast* getPodcast(int);
Podcast* getPodcast(string&);
void getEpisodes(Search& search,Array<Episode*>&);


private:

Array<Podcast*> p;


};
#endif
