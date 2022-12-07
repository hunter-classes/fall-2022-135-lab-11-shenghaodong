#include "profile.h"
#include "network.h"
#include <iostream>

Network::Network(){
    for(int i = 0; i < MAX_USERS; i++){
        for(int j = 0; j < MAX_USERS; j++){
            following[i][j] = {};
        }  
    }
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

// Make 'usrn1' follow 'usrn2' (if both usernames are in the network).
// return true if success (if both usernames exist), otherwise return false
bool Network::follow(std::string usrn1, std::string usrn2){
    if(findID(usrn1) >= 0 && findID(usrn2) >= 0){
        following[findID(usrn1)][findID(usrn2)] = true;
        return true;
    }else{
        return false;
    }
}

// Print Dot file (graphical representation of the network)
void Network::printDot(){
    std::cout << "digraph {" << std::endl;
    for(int x = 0; x < numUsers; x++){
        std::cout << "  \"@" + profiles[x].getUsername() + "\"" << std::endl;
    }
    std::cout << "\n" << std::endl;


    for(int i = 0; i < numUsers; i++){
        for(int j = 0; j < numUsers; j++){
            //std::cout << following[i][j] << std::endl;
            if(following[i][j] == true){
                //std::cout << "test" << std::endl;
                std::cout << "  \"@" + profiles[i].getUsername() + "\" ->" + "\"@" + profiles[j].getUsername() + "\"" << std::endl;
            }
        }  
    }
    std::cout << "}" << std::endl;
}