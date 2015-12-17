
#include <iostream>
#include <mutex>
#include <thread>
#include "Render.h"
#include "Engine.h"

using namespace std ; 


std::mutex mutex ; 

int main(){



Engine game ; 

std::thread t1(game.update());
std::thread t2(map.draw());

t1.join();
t2.join();
 return 0;








return 0 ;
} 
