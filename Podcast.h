#ifndef PODCAST_H
#define PODCAST_H

#include <iostream>
#include <string>
#include "defs.h"
#include "Episode.h"
#include "Array.h"

using namespace std;

class Podcast{

public:

//~Podcast();
Podcast(const string&,const string&);
bool equals(const string&);
Episode* get(int);
int getSize() const;
void print(ostream&) const;
void printWithEpisodes(ostream&) const;
void add(Episode*);
friend ostream& operator<<(ostream& output,Podcast& p);


private:
Array<Episode*> episode;
string title;
string host;




};
#endif
