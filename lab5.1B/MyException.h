#pragma once
#include <iostream>
#include <string>
#include <stdexcept>

class MyException : public std::exception {
private:
    std::string message;

public:
    MyException(const std::string& msg) : message(msg) {}

    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};