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

}

void shuffle() {

  

}
