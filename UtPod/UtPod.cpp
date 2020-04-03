//
// Created by nikol on 4/1/2020.
//
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;


static const int MAX_MEMORY = 512;
static const int SUCCESS = 0;
static const int NO_MEMORY = -1;
static const int NOT_FOUND = -2;

struct SongNode {
    Song s;
    SongNode *next;
};

SongNode *songs;  //the head pointer

int memSize;


UtPod::UtPod() {
    memSize = MAX_MEMORY;
}


UtPod::UtPod(int size) {
    memSize = size;
}

/* FUNCTION - int addSong
 * attempts to add a new song to the UtPod
     o returns a 0 if successful
     o returns -1 if not enough memory to add the song

 precondition: s is a valid Song

 input parms -

 output parms -
*/

int UtPod::addSong(Song const &s) {
}


/* FUNCTION - int removeSong
 * attempts to remove a song from the UtPod
 * removes the first instance of a song that is in the the UtPod multiple times
     o returns 0 if successful
     o returns -2 if nothing is removed


   input parms -

   output parms -
*/

int UtPod::removeSong(Song const &s) {
}


/* FUNCTION - void shuffle
 *  shuffles the songs into random order
    o will do nothing if there are less than two songs in the current list

   input parms -

   output parms -
*/

void UtPod::shuffle() {
}


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
        cout << t << ", " << a << ", " << n << endl;
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


