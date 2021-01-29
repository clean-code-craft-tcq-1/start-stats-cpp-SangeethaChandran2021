#include <vector>

namespace Statistics {
	struct Stats
	{
		float min;
		float max;
		float avg;
		Stats()
		{
	       min = 0.0f;
		   max = 0.0f;
		   avg = 0.0f;
		}
	}tStats;
    Stats ComputeStatistics(const std::vector<float>& vect);
}
