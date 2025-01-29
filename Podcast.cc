#include "Podcast.h"
//
// Podcast::~Podcast(){
//   // int size= episode.getSize();
//   // for(int i=0;i<size;i++){
//   //   delete episode[i];
//   // }
//
// }
Podcast::Podcast(const string& t,const string& h):
  title(t),
  host(h)
{}

bool Podcast::equals(const string& t){
  if(title==t){
    return true;
  }else{
    return false;
  }
}


Episode* Podcast::get(int index){
  if(index>=0&&index<=episode.getSize()){
  return episode[index];
}else{
  exit(1);
}
  //from the array class we use the operator
}

int Podcast::getSize() const{
  return episode.getSize();
}

void Podcast::print(ostream& os) const{
  os<<"title:       "<<title<<"host:      "<<host<<endl;

}

void Podcast::printWithEpisodes(ostream& os) const{
  print(os);
  for(int i=0;i<episode.getSize();i++){
    episode[i]->print(os);
  }
}

void Podcast::add(Episode* newepisode){
  episode += newepisode;
}

ostream& operator<<(ostream& output,Podcast& p)
{
  p.print(output);
  return output;
}
