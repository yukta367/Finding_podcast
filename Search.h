#ifndef SEARCH_H
#define SEARCH_H
#include <iostream>
#include <string>
#include "Episode.h"


using namespace std;

class Search {

friend ostream& operator<<(ostream& output, const Search& search);

public:
virtual bool matches(const Episode*) const =0;
virtual void print(ostream& ost) const =0;




};

class H_Search: virtual public Search {

public:
  H_Search(const string& h);
  bool matches(const Episode* episode) const;

  void print(ostream&) const;

private:

  string host;

};

class C_Search: virtual public Search {

public:
C_Search(const string& c);

bool matches(const Episode* episode) const;

void print(ostream&) const;



private:

string category;


};

class HorC_Search: virtual public H_Search, virtual public C_Search {

public:
HorC_Search(const string& h, const string& c);

bool matches(const Episode* episode) const;


void print(ostream&) const;
};

#endif
