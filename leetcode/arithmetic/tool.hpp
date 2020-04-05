#pragma once

#include <string>
#include <sstream>
#include <vector>
#include <map>

template<typename T>
std::string toString(T& val) {
    std::ostringstream stream;
    stream << val;
    return stream.str();
}

template<typename T>
std::string toString(std::vector<T>& val) {
    std::ostringstream stream;
    stream << "[";
    for (auto& it : val) {
        stream << toString(it) << ", ";
    }
    stream << "]";
    return stream.str();
}

template<typename T, typename V>
std::string toString(std::map<T, V>& val) {
    std::ostringstream stream;
    stream << "{";
    for (auto& it : val) {
        stream << toString(it.first) << " : " << toString(it.second) << ", ";
    }
    stream << "}";
    return stream.str();
}