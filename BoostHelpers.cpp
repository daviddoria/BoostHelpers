#include "BoostHelpers.h"

std::ostream& operator<<(std::ostream& output, const boost::array<size_t, 2>& vertexDescriptor)
{
  output << "(" << vertexDescriptor[0] << ", " << vertexDescriptor[1] << ")" << std::endl;

  return output;
}

boost::dynamic_bitset<> BinaryToGray(const boost::dynamic_bitset<>& binary)
{
  return (binary >> 1) ^ binary;
}
