#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "profile.h"
#include "network.h"

// Tests
TEST_CASE("Task A"){
    Profile p1("miku", "Hatsune Miku");
    CHECK(p1.getUsername() == "miku");
    // Return name in the format: "displayname (@username)"
    CHECK(p1.getFullName() == "Hatsune Miku (@miku)");
    p1.setDisplayName("Hachune Miku");
    CHECK(p1.getFullName() == "Hachune Miku (@miku)");
    Profile p2("kanae", "kanakana"); 
    CHECK(p2.getUsername() == "kanae");
}

TEST_CASE("Task B"){
    Network nw;
    CHECK(nw.addUser("miku", "Miku") == true); //true
    CHECK(nw.addUser("miku 2", "Miku") == false);//false
    CHECK(nw.addUser("miku-2", "Miku") == false);//false
    CHECK(nw.addUser("miku2", "Hachune") == true);//true
    CHECK(nw.addUser("its2AM", "iwannasleep") == true);//true
    
}

TEST_CASE("Task C"){
    Network nw2;

    nw2.addUser("miku", "Miku");
    nw2.addUser("kaito", "Kaito");
    nw2.addUser("len", "Len");
    nw2.addUser("rin", "Rin");

    CHECK(nw2.follow("miku", "rin") == true);
    CHECK(nw2.follow("len", "rin") == true);
    CHECK(nw2.follow("rin", "len") == true);
}
