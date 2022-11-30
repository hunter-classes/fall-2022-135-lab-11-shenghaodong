#pragma once
#include <string>

class Profile{
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
};

/*

class Profile {
private:
    string username;
    string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};
*/