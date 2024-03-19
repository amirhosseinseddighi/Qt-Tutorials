#include <cstdlib>
#include <iostream>

int main() {
    // Replace these values with your actual proxy address and port
    const char* proxyAddress = "127.0.0.1";
    const char* proxyPort = "8585";

    // Set the proxy settings using gsettings
    const char* command = "gsettings set org.gnome.system.proxy mode 'manual'";
    int result = std::system(command);

    if (result != 0) {
        std::cerr << "Failed to set proxy mode." << std::endl;
        return result;
    }

    // Set the HTTP proxy
    command = "gsettings set org.gnome.system.proxy.http host";
    result = std::system((command + std::string(" '") + proxyAddress + "'").c_str());
    if (result != 0) {
        std::cerr << "Failed to set HTTP proxy host." << std::endl;
        return result;
    }

    command = "gsettings set org.gnome.system.proxy.http port";
    result = std::system((command + std::string(" ") + proxyPort).c_str());
    if (result != 0) {
        std::cerr << "Failed to set HTTP proxy port." << std::endl;
        return result;
    }

    // Set the HTTPS proxy
    command = "gsettings set org.gnome.system.proxy.https host";
    result = std::system((command + std::string(" '") + proxyAddress + "'").c_str());
    if (result != 0) {
        std::cerr << "Failed to set HTTPS proxy host." << std::endl;
        return result;
    }

    command = "gsettings set org.gnome.system.proxy.https port";
    result = std::system((command + std::string(" ") + proxyPort).c_str());
    if (result != 0) {
        std::cerr << "Failed to set HTTPS proxy port." << std::endl;
        return result;
    }

    std::cout << "HTTPS proxy set successfully." << std::endl;

    return 0;
}
