#include "FirstAlg.h"
#include "SniperKernel/AlgFactory.h"  //the macro DECLARE_ALGORITHM

DECLARE_ALGORITHM(FirstAlg);

FirstAlg::FirstAlg(const std::string& name)
    : AlgBase(name),
      m_count(0)
{
    declProp("TheValue", m_value = 1);
    declProp("Message",  m_msg);
}

bool FirstAlg::initialize()
{
    LogDebug << "in the FirstAlg::initialize()" << std::endl;
    return true;
}

bool FirstAlg::execute()
{
    LogDebug << "in the FirstAlg::execute()" << std::endl;

    ++m_count;
    m_value *= m_count;
    LogInfo << "Loop " << m_count << m_msg << m_value << std::endl;

    return true;
}

bool FirstAlg::finalize()
{
    LogDebug << "in the FirstAlg::finalize()" << std::endl;
    return true;
}
