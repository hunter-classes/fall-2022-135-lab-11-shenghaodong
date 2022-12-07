#pragma once
#include <string>
#include "profile.h"
class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array:
   // mapping integer ID -> Profile

  // Returns user ID (index in the 'profiles' array) by their username
  // (or -1 if username is not found)
  int findID (std::string usrn);
public:
  Network();
  bool addUser(std::string usrn, std::string dspn);
};