# 2D-square-rotation

## Who to build ?

To build, first install SFML :  
On ubuntu : `sudo apt-get install libsfml-dev`  
After, do : `g++ -o main_v2 main_v2.cpp -lsfml-graphics -lsfml-window -lsfml-system`  

On Windows, replace `#include <unistd.h>` by `#include <window.h>` and `usleep(micro_seconde);` by `sleep(micro_seconde);` 

## Functioning

The program uses the 2D rotation matrix:  


$${\displaystyle R={\begin{bmatrix}\cos \theta &-\sin \theta \\\sin \theta &\cos \theta \end{bmatrix}}}$$
