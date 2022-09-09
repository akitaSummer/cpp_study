#ifndef WORKER_H
#define WORKER_H
#include <string>
#include <string_view>
#include <iostream>
#include "person.h"
class Worker : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Worker &worker);

public:
    Worker() = default;
    Worker(std::string_view job);
    Worker(std::string_view job, int age);

    std::string get_job() const
    {
        return m_job;
    }

private:
    std::string m_job = "None";
};
#endif