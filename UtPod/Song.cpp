//
#include <string>
class Song{
private:
    string title; //not const or static?
    string artist;
    int size;

public:
    Song(string title, string artist, int size);
    //constructor sets variables
    void setTitle(string t){
        title = t;
    }
    string getTitle(){
        return title;
    }
    void setArtist(string a){
        artist = a;
    }
    string getArtist(){
        return artist;
    }
    void setSize(int s){
        size = s;
    }
    int getSize(){
        return size;
    }
    bool operator == (Song const &s1, Song const &s2){
        if(s1.getArtist()==s2.getArtist() &&
           s1.getTitle()==s2.getTitle() &&
           s1.getSize()==s2.getSize()){
            return true;
        }
        else{
            return false;
        }
    }
    bool operator < (Song const &s1, Song const &s2);
    bool operator > (Song const &s1, Song const &s2);

};
