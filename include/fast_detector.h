//#pragma once

//#include <deque>


//#include <vector>

//#include "detector.h"

namespace corner_event_detector
{

class FastDetector
{
public:
  FastDetector(bool connect = true);
  virtual ~FastDetector();

  bool isFeature(int pix_x, int pix_y, int timesmp, bool polarity);

private:
  // SAE
  //Eigen::MatrixXd sae_[2];

  // pixels on circle
  int circle3_[16][2];
  int circle4_[20][2];

  // parameters
  static const int sensor_width_ = 240;
  static const int sensor_height_ = 180;

  // SAE
  int sae_[2][sensor_width_][sensor_height_];
};


} // namespace