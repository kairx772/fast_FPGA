#include "fast_detector.h"

using namespace corner_event_detector;

int main(int argc, char* argv[])
{
  //ros::init(argc, argv, "corner_event_detector");

  // load parameter
  bool detector;
  FastDetector xiaohung = new FastDetector();

  // create feature detecotr
  detector = xiaohung.isFeature(9, 10, 200, true);

  //delete detector;

  return 0;
}
