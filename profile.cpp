#include "profile.h"
Profile::Profile(){
  username = "";
  displayName = "";

}

Profile::Profile(std::string usrn, std::string dspn){
  username = usrn;
  displayName = dspn;
}

std::string Profile::getUsername(){
  return username;
}

std::string Profile::getFullName(){
  std::string fullName = displayName + " (@" + username + ")";
  return fullName;
  // Return name in the format: "displayname (@username)"
}

void Profile::setDisplayName(std::string dspn){
  displayName = dspn;
}