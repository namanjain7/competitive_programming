#include<iostream>
#include<cstring>
#include<unordered_map>
#include<map>

using namespace std;

int main(){
    //unordered_map<string, int> h;
    map<string, int> h;

    h["Honda"] = 2;
    h.insert(make_pair("Bugatti", 7));

    if(h.count("Honda")) cout << "Honda is here and I have: " << h["Honda"] << endl;
    else cout << "Honda is not here, got but it!!!!" << endl;

    h["Bugatti"] += 3;

    if(h.count("Bugatti")) cout << "Bugatti is here and I have: " << h["Bugatti"] << endl;
    else cout << "Bugatti is not here go get it!!!" << endl;

    //h.erase("Honda");

    auto f = h.find("Honda");

    if(f!= h.end()) cout << "We have honda and we have" << f->second << endl;
    else cout << "We don't have Honda, so go get it!!!" << endl;

    for(auto i = h.begin(); i != h.end(); i++){
        cout << "Car: " << (*i).first << " " << (*i).second << endl;
    }


}