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


class FedCommunicate : public Anonymous
{
public:
   FedCommunicate()
   {
    	std::cout << "   :::::: HUAWEI - Test Communication (Anonymou)s MODULE: Constructor" << std::endl;
   }

   virtual ~FedCommunicate()
   {
    	std::cout << "   :::::: HUAWEI - Test Communication (Anonymou)s MODULE: Destructor" << std::endl;
   }

};

#endif // __MESOS_ANONYMOUS_COMMUNICATION_HPP__
