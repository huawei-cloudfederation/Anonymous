#ifndef __MESOS_ANONYMOUS_COMMUNICATION_HPP__
#define __MESOS_ANONYMOUS_COMMUNICATION_HPP__ 

#include <iostream>
#include <mesos/mesos.hpp>
#include <mesos/module.hpp>

#include <mesos/module/anonymous.hpp>

#include <stout/foreach.hpp>
#include <stout/os.hpp>
#include <stout/try.hpp>
#include <unistd.h>

using namespace mesos;
using mesos::modules::Anonymous;


class FedCommunication : public Anonymous
{
public:
   FedCommunication()
   {
    	std::cout << "   :::::: HUAWEI - Test Communication (Anonymous) MODULE: Constructor" << std::endl;
   }

   virtual ~FedCommunication()
   {
    	std::cout << "   :::::: HUAWEI - Test Communication (Anonymous) MODULE: Destructor" << std::endl;
   }

};

#endif // __MESOS_ANONYMOUS_COMMUNICATION_HPP__
