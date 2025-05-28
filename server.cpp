#include <iostream>
#include <SFML/Network.hpp>

using namespace std;

int main(){
    cout << "Server started\n";
    // sf::TcpSocket sock;
    // sf::IpAddress ip_local = sf::IpAddress::getLocalAddress();
    // sock.connect(ip_local,2052);

    sf::TcpListener listener;
    listener.listen(2052);
    sf::TcpSocket sock;
    listener.accept(sock);
    cout << "Client connected: " << sock.getRemoteAddress() << endl;
    
    char buff[1024];
    size_t recieved = 0;
    sock.receive(buff, sizeof(buff), recieved);
    cout << "Client said: " << buff << endl;

    string message = "Welcome, client";
    sock.send(message.c_str(), message.size() + 1);


}