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



/*var
private:
    std::string username;
    std::string displayName;

public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(std::string usrn, std::string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    std::string getUsername();
    // Return name in the format: "displayname (@username)"
    std::string getFullName();
    // Change display name
    void setDisplayName(std::string dspn);

*/