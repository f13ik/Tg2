#include <iostream>
#include <SFML/Network.hpp>
#include <string>

using namespace std;

int main(){
    cout << "Client started\n";
    sf::TcpSocket sock;
    sf::IpAddress ip_local = sf::IpAddress::getLocalAddress();
    sock.connect(ip_local,2052);
    // sock.setBlocking(false);

    string msg = "Hello, world!";
    sock.send(msg.c_str(), msg.size()+1);

    char buff[1024];
    size_t received = 0;
    sock.receive(buff, sizeof(buff),received);
    cout << "Server said: " << buff << endl;

}