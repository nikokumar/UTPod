//
#include <cstdlib>
#include <string>

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

string Song::getTitle() {
    return title;
}

void Song::setArtist(string a) {
    artist = a;
}

string Song::getArtist() {
    return artist;
}

void Song::setSize(int s) {
    size = s;
}

int Song::getSize() {
    return size;
}

bool Song::operator==(Song const &s1, Song const &s2) {
    if (s1.getArtist() == s2.getArtist() &&
        s1.getTitle() == s2.getTitle() &&
        s1.getSize() == s2.getSize()) {
        return true;
    } else {
        return false;
    }
}

bool Song::operator<(Song const &s1, Song const &s2) {
    if (s1.getArtist() < s2.getArtist()) {
        return true;
    } else if (s1.getArtist() == s2.getArtist()) {
        if (s1.getTitle() < s2.getTitle()) {
            return true;
        } else if (s1.getTitle() == s2.getTitle()) {
            if (s1.getSize() < s2.getSize()) {
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

bool Song::operator>(Song const &s1, Song const &s2) {
    if (s1.getArtist() > s2.getArtist()) {
        return true;
    } else if (s1.getArtist() == s2.getArtist()) {
        if (s1.getTitle() > s2.getTitle()) {
            return true;
        } else if (s1.getTitle() == s2.getTitle()) {
            if (s1.getSize() > s2.getSize()) {
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


