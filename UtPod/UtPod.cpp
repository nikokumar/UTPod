//
// Created by nikol on 4/1/2020.
//
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;

UtPod::UtPod() {

  memSize = MAX_MEMORY;

}

UtPod::UtPod(int size) {

  memSize = size;

}

int UtPod::addSong(Song const &s) {

    struct SongNode *currentSongNode = songs;
    if(memSize - getSize(s) < 0) {
      return -1;
    } else {
      struct SongNode *songAdd = new struct SongNode;
      songAdd.s = s;
      songAdd->next = nullptr;
      while(currentSongNode->next != nullptr) {
        currentSongNode = currentSongNode->next;
      }
      currentSongNode->next = songAdd;
      return 0;
    }

}

int UtPod::removeSong(Song const &s) {

  struct SongNode *currentSongNode = songs;
  struct SongNode *previous;
  while(currentSongNode->s != s) {
    previous = currentSongNode;
    currentSongNode = currentSongNode->next;
    if(currentSongNode == nullptr) {
      return -2;
    }
  }
  delete(currentSongNode->s);
  previous->next = currentSongNode->next;
  delete(previous->next);
  currentSongNode = previous;
  currentSongNode->next = currentSongNode->next->next;
  return 0;


/* FUNCTION - void showSongList
 * prints the current list of songs in order from first to last to standard output
 * format - Title, Artist, size in MB (one song per line)

   input parms -

   output parms -
*/

void UtPod::showSongList() {
    struct SongNode *sNode = songs;
    string a,t;
    int n;
    while(sNode->next != nullptr){
        a=sNode->s.getArtist();
        t=sNode->s.getTitle();
        n=sNode->s.getSize();
        cout << t << ", " << a << ", " << s << endl;
        sNode=sNode->next;
    }
}


/* FUNCTION - void sortSongList
 *  sorts the songs in ascending order
    o will do nothing if there are less than two songs in the current list

   input parms -

   output parms -
*/

void UtPod::sortSongList() {

}


/* FUNCTION - void clearMemory
 * clears all the songs from memory

   input parms -

   output parms -
*/
void UtPod::clearMemory() {

}


/* FUNCTION - int getTotalMemory
 *  returns the total amount of memory in the UtPod
    o will do nothing if there are less than two songs in the current list

   input parms -

   output parms -
*/

int UtPod::getTotalMemory() {
    return memSize;
}


/* FUNCTION - int getRemainingMemory
 *  returns the amount of memory available for adding new songs

   input parms -

   output parms -
*/

int UtPod::getRemainingMemory() {

}

//destructor
UtPod::~UtPod() {

}


