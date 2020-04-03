/* utPod_driver.cpp

Nikolai Kumar
EE 312 10/16/18



*/
#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[])
{
    UtPod t;
    
    Song s1("Beatles", "Hey Jude", 4);
    int result = t.addSong(s1);
    cout << "result = " << result << endl;
    
    t.showSongList();
          
    Song s2("Beatles", "Blackbird", 5);
    result = t.addSong(s2);
    cout << "result = " << result << endl;
    
    t.showSongList();
       
    Song s3("Beatles", "Yellow Submarine", 6);
    result = t.addSong(s3);
    cout << "result = " << result << endl;

    t.showSongList();
    int totalMemory = t.getTotalMemory();
    cout << "Total Memory = " << totalMemory << endl;

    cout << "Shuffled:" << endl;
    t.shuffle();
    t.showSongList();

    cout << "Sorted:" << endl;
    t.sortSongList();
    t.showSongList();


       
    Song s4("Beatles", "Blackbird", 7);
    result = t.addSong(s4);
    cout << "result = " << result << endl;
       
    Song s5("Beatles", "Across the Universe", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.sortSongList();
    t.showSongList();
    
    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;
  
    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;

    t.showSongList();
    
    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;
 
    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;
    
    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;
    
    
    t.showSongList();
    
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();

    Song s6("Beatles", "Let it Be", 500);
    result = t.addSong(s6);
    cout << "add result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s6);
    cout << "delete result = " << result << endl;
    
    t.showSongList();
    cout << "memory = " << t.getRemainingMemory() << endl;
    

}
