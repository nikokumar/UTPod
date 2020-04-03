//
#include <cstdlib>
#include <string>

#include "Song.h"

using namespace std;

string title; //not const or static?
string artist;
int size;

Song::Song(string a, string t, int s) {
    title = t;
    artist = a;
    size = s;
}

//constructor sets variables
void Song::setTitle(string t) {
    title = t;
}

string Song::getTitle() const {
    return title;
}

void Song::setArtist(string a) {
    artist = a;
}

string Song::getArtist() const {
    return artist;
}

void Song::setSize(int s) {
    size = s;
}

int Song::getSize() const {
    return size;
}

bool Song::operator==(Song const &s2) {
    if (getArtist() == s2.getArtist() &&
        getTitle() == s2.getTitle() &&
        getSize() == s2.getSize()) {
        return true;
    } else {
        return false;
    }
}

bool Song::operator<(Song const &s2) {
    if (getArtist() < s2.getArtist()) {
        return true;
    } else if (getArtist() == s2.getArtist()) {
        if (getTitle() < s2.getTitle()) {
            return true;
        } else if (getTitle() == s2.getTitle()) {
            if (getSize() < s2.getSize()) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        return false;
    }
}

bool Song::operator>(Song const &s2) {
    if (getArtist() > s2.getArtist()) {
        return true;
    } else if (getArtist() == s2.getArtist()) {
        if (getTitle() > s2.getTitle()) {
            return true;
        } else if (getTitle() == s2.getTitle()) {
            if (getSize() > s2.getSize()) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        return false;
    }
}


