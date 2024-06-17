#include <iostream>
#include <stdlib.h>
#include <string.h>

template<typename T>
std::string itsType(T value) {
    if(sizeof(T) == sizeof(int))
        return "int";
    if(sizeof(T) == sizeof(char))
        return "char";
    if(sizeof(T) == sizeof(std::string))
        return "string";
    
    return "null";
}

template<typename T>
void logAndChange(T value) {
    if(sizeof(value) == 4) {
        std::cout << "This is a Number" << std::endl;
        std::cout << value << std::endl;
        return;
    }
    
    size_t length = strlen(value);
    char* buffer = (char*)malloc(sizeof(char) * (length + 1));
    strcpy(buffer, value);
    buffer[0] = 'Y';
    buffer[length] = 'w';
    std::cout << buffer << std::endl;
    free(buffer);
}

int main() {
    
    int num = 10;
    char initial = 'J';
    std::string name = "Kyle";
    
    std::cout << itsType(num) << std::endl;
    std::cout << itsType(initial) << std::endl;
    std::cout << itsType(name) << std::endl;
    std::cout << itsType("Hello World") << std::endl;
    
    logAndChange("Hello");

    return 0;
}