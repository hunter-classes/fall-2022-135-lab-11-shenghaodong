#include "network.h"
#include "profile.h"

Network::Network(){
    numUsers = 0;
}

bool addUser(std::string usrn, std::string dspn){
    /*
    private:
    static const int MAX_USERS = 20; // max number of user profiles
    int numUsers;                    // number of registered users
    Profile profiles[MAX_USERS];     // user profiles array:
    */
    if(profiles.size() < MAX_USERS){
        profiles[profiles.size()] = Profile(usrn, dspn)
    }
    return false;
}