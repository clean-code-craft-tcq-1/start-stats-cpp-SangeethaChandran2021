#include "stats.h"
#include <algorithm>
using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& vect) 
{
   Stats tStats;
   float sum = 0.0F;
   
   for(std::vector<float>::const_iterator itr = vect.begin(); itr!=vect.end(); ++itr)
   {
      sum+= *itr;
   }
   tStats.min = *std::min_element(vect.begin(),vect.end());
   tStats.max = *std::max_element(vect.begin(),vect.end());
   tStats.avg = sum / vect.size();
   
   return tStats;
}
