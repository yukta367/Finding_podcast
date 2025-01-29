#include "PodcastPlayer.h"
#include <fstream>

void AudioPlayer::play(const Episode& episode , ostream& ost) {
  ost<<" Episode audio:   "<< episode.getAudio()<<endl;
}


void VideoPlayer::play(const Episode& episode , ostream& ost) {
AudioPlayer::play(episode,ost);
// code from lecture 19
// open the file using videofile member
ifstream infile(episode.getVideoFile());
string text;
// read that line by line and output it to given iostream
if (!infile) {
    cout << "Error: could not open file" << endl;
    exit(1);
  }

  while(getline(infile,text)){
    ost<<text<<endl;
  }
  // dont forget to close
  infile.close();

}
/*
ostream& operator<<(ostream& output,const PodcastPlayer& p)
{
  p.print(output);
  return output;
}*/
