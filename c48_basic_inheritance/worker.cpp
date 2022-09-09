#include "person.h"
#include "worker.h"

Worker::Worker(std::string_view job) : m_job(job) {}
Worker::Worker(std::string_view job, int age) : m_job(job)
{
    m_age = age;
}

std::ostream &operator<<(std::ostream &out, const Worker &worker)
{
    out << "Worker name : " << worker.m_name << ", Age: " << worker.m_age << ", Address : " << worker.get_address() << ", job : " << worker.m_job << std::endl;
    return out;
}