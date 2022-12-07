#include "profile.h"
#include "network.h"
#include <iostream>

Network::Network(){
    numUsers = 0;
}

int Network::findID(std::string usrn){
    for(int i = 0; i < MAX_USERS; i++){
        if(usrn == profiles[i].getUsername()){
            return i;
            break;
        }
    }
    return -1;
}

  // Attempts to sign up a new user with specified username and displayname
  // return true if the operation was successful, otherwise return false
bool Network::addUser(std::string usrn, std::string dspn){
    if(numUsers < MAX_USERS){
        //Check if username is all alpha
        for(int i = 0; i < usrn.length(); i++){
            int ascii = usrn[i];
            //48-57 work too because it is a num
            //Need to be between 65-90 or 97-122
            if(!((ascii >= 65 && ascii <=90) || (ascii >= 97 && ascii <= 122) || (ascii >= 48 && ascii <= 57))){
                return false;
                break;
            }
        }
        //Check if user already exists
        if(findID(usrn) == -1){
            //std::cout << "testing!" << std::endl;
            profiles[numUsers] = Profile(usrn, dspn);
            numUsers++;
            return true;
        }
    }
    return false;
}