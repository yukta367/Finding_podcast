#include "Search.h"

H_Search::H_Search(const string& h):host(h){}

bool H_Search::matches(const Episode* episode) const{

	  if(episode->getHost()==host){
	    return true;
	  }else{
	  return false;
	}
}

void H_Search::print(ostream& ost) const{
		ost<<" this matches an Episode with the given host"<<host;
}

C_Search::C_Search(const string& c):category(c){}

bool C_Search::matches(const Episode* episode) const{
	  if(episode->getCategory()==category){
	    return true;
	  }else{
	  return false;
	}
}

void C_Search::print(ostream& ost) const{

	ost<<" this matches an Episode with the given category"<<category;
}

HorC_Search::HorC_Search(const string& h, const string& c):
  H_Search(h),
  C_Search(c)
{}

bool HorC_Search::matches(const Episode* episode) const{
	    if(C_Search::matches(episode)||H_Search::matches(episode)){
	      return true;
	    }else{
	    return false;
	  }
	}

void HorC_Search::print(ostream& ost) const{

	C_Search::print(ost);
	H_Search::print(ost);

	}

	ostream& operator<<(ostream& output, Search& search)
	{
		search.print(output);
		return output;
	}
