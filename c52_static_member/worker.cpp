#include "person.h"
#include "worker.h"

int Worker::m_count = 0;

Worker::Worker(std::string_view job) : m_job(job) {}
Worker::Worker(std::string_view job, int age) : m_job(job)
{
    m_age = age;
}

Worker::Worker(std::string_view name, std::string_view address, std::string_view job, int age) : Person(name, age, address), m_job(job)
{
    std::cout << "Worker Constructor" << std::endl;
}
Worker::Worker(const Worker &source) : Person(source), m_job(source.m_job)
{
    std::cout << "Worker Copy Constructor" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Worker &worker)
{
    out << "Worker name : " << worker.m_name << ", Age: " << worker.m_age << ", Address : " << worker.get_address() << ", job : " << worker.m_job << std::endl;
    return out;
}

Worker::~Worker()
{
    --m_count;
    std::cout << "~Worker" << std::endl;
}