#include "Podify.h"



// Podify::Podify(){
//
// }
Podify::~Podify(){

  for(int i=0;i<p.getSize();i++){
      //delete episode[i];
      for(int j=0;j<p[i]->getSize();j++){
      //  Episode* epi= p[i]->get(j);
        delete p[i]->get(j);

      }
        //Episode* epi= p->get(j);
    }
    //int size =p.getSize();
     for(int i=0;i<p.getSize();i++){
        delete p[i];

      }

}
void Podify::addPodcast(Podcast* podcast){
  p += podcast;
}

void Podify::addEpisode(Episode*episode,string& podcastTitle){
  Podcast* podcast = getPodcast(podcastTitle);
  if(podcast){
    podcast->add(episode);
  }else{
    cout<<" couldnt find a episode with given podcast title"<<endl;
  }
}

Array<Podcast*> Podify::getPodcasts(){
  return p;
}

Podcast* Podify::getPodcast(int index){
  if(index>=0&& index<= p.getSize()){
    return p[index];
  }else{
    cout<<"Podcast does not exist"<<endl;
   exit(1);
 }
}

Podcast* Podify::getPodcast(string& title){
  for(int i=0;i<p.getSize();i++){
    if(p[i]->equals(title)){
      return p[i];
    }
  }

    cout<<"Podcast does not exist"<<endl;
    exit(1);

}

void Podify::getEpisodes(Search& search,Array<Episode*>& episode){

  for(int i=0;i<p.getSize();i++){
    Podcast* pod= p[i];
      for(int j=0;j<pod->getSize();j++){
        Episode* epi= pod->get(j);

        if(search.matches(epi)){

          episode+=(epi);
        }
      }

}

}


/*ostream& operator<<(ostream& output,const Podify& p)
{
  p.print(output);
  return output;
}*/
