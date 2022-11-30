#include "profile.h"

std::string Profile::getUsername(){
    return username;
}

std::string Profile::getFullName(){
    return username;
}

void Profile::setDisplayName(std::string dspn){
    displayName = dspn;
}

Profile::Profile(){
    username = "put something here later";
    displayName = "put something else here too";
}

Profile::Profile(std::string usrn, std::string dspn){
    username = usrn;
    displayName = dspn;
}

/*Example
double Particle::getX() { 
  return x; 
}
double Particle::getY() { 
  return y; 
}
void Particle::move(double dt) {
  x += vx * dt;  y += vy * dt;
}
Particle::Particle(double posx, double posy, double velx, double vely) {
  x = posx;   y = posy;
  vx = velx;  vy = vely;
}
Particle::Particle() {
  x = 0;   y = 0;
  vx = 0;  vy = 0;
}

*/