#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string run_cmd(const char* command) {
    FILE *pipe = popen(command,"r");
    string result = "";
    if(!pipe) {
        cout << "Error";
        return NULL;
    }
    char buffer[128];
    while(fgets(buffer,128,pipe) != NULL) {
        result += buffer;
    }
    pclose(pipe);
    return result;
}


pair<string, long> get_current_ssl_proxy() {
    const char* command_ip = "gsettings get org.gnome.system.proxy.https host | tr -d \\' | tr -d '\n'";
    const char* command_port = "gsettings get org.gnome.system.proxy.https port";
    string proxy_ip = run_cmd(command_ip);
    long proxy_port = stol(run_cmd(command_port));
    return make_pair(proxy_ip,proxy_port);
}


int main() {
    pair current_proxy_settings = get_current_ssl_proxy();
    string current_proxy_ip = current_proxy_settings.first;
    long current_proxy_port = current_proxy_settings.second;
    cout << current_proxy_ip << ":" << current_proxy_port;
}
