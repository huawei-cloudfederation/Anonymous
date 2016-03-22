#include "FedCommunication.hpp"


static Anonymous* createCommunication(const Parameters& parameters)
{
  auto obj = new FedCommunication();

  return obj;
}


// Declares an Anonymous module named 'org_apache_mesos_TestAnonymous'.
mesos::modules::Module<Anonymous> mesos_federation_communication (
  MESOS_MODULE_API_VERSION,
  MESOS_VERSION,
  "Huawei Mesos Federation",
  "parushuram.k@huawei.com",
  "Mesos Federation Communication Module.",
  NULL,
  createCommunication);

