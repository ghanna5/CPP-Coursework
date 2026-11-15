#include <stdexcept>

#ifndef ERRORS_H
#define ERRORS_H

struct TestException : public std::runtime_error
{
    TestException() : std::runtime_error("there was a test exception") {}
    TestException(const char* msg) : std::runtime_error(msg) {}
};

struct TestException2 : public std::runtime_error
{
    TestException2() : std::runtime_error("there was a #2 test exception") {}
    TestException2(const char* msg) : std::runtime_error(msg) {}
};

#endif