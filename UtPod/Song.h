//
#include <cstdlib>
#include <string>
class Song{
private:
    string title; //not const or static?
    string artist;
    int size;

public:
    Song(string title, string artist, int size);
    //constructor sets variables
    void setTitle(string t);
    string getTitle();
    void setArtist(string a);
    string getArtist();
    void setSize(int s);
    int getSize();
    bool operator == (Song const &s1, Song const &s1);
    bool operator < (Song const &s1, Song const &s1);
    bool operator > (Song const &s1, Song const &s1);

};
