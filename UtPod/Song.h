//
#ifndef SONG_H
#define SONG_H
#include <cstdlib>
#include <string>

using namespace std;

class Song{
private:
    string title; //not const or static?
    string artist;
    int size;

public:
    Song(string a, string t, int s);
    //constructor sets variables
    void setTitle(string t);
    string getTitle() const;
    void setArtist(string a);
    string getArtist() const;
    void setSize(int s);
    int getSize() const;
    bool operator== (Song const &s1);
    bool operator< (Song const &s1);
    bool operator> (Song const &s1);

};

#endif
