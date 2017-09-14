#include "common.h"
#include <stdlib.h>
//IplImage * cv_img;

cv::Mat cv_img;
cv::Mat image;
cv::Mat image1;
cv::Mat image_target;
cv::Mat image_source;
cv::Mat image_Detection;
cv::Mat image_Detection1;
cv::Mat image_thinning;
cv::Mat image_thinning1;
cv::Mat Minutiae;
cv::Mat CleanMinutiae;
cv::Mat Minutiae1;
cv::Mat CleanMinutiae1;

std::vector<int> DeltaListX;
std::vector<int> DeltaListY;
std::vector<int> EndListX;
std::vector<int> EndListY;
std::vector<std::string> Direction_Ending;
std::vector<std::string> Direction_Delta;

std::vector<int> DeltaListX1;
std::vector<int> DeltaListY1;
std::vector<int> EndListX1;
std::vector<int> EndListY1;
std::vector<std::string> Direction_Ending1;
std::vector<std::string> Direction_Delta1;

std::vector<int> OutEndListX;
std::vector<int> OutEndListY;
std::vector<int> OutDeltaListX;
std::vector<int> OutDeltaListY;
std::vector<int> CleanEndListX;
std::vector<int> CleanEndListY;
std::vector<int> CleanDeltaListX;
std::vector<int> CleanDeltaListY;
std::vector<std::string> OutDirection_Ending;
std::vector<std::string> CleanDirection_Ending;
std::vector<std::string> OutDirection_Delta;
std::vector<std::string> CleanDirection_Delta;

std::vector<int> OutEndListX1;
std::vector<int> OutEndListY1;
std::vector<int> OutDeltaListX1;
std::vector<int> OutDeltaListY1;
std::vector<int> CleanEndListX1;
std::vector<int> CleanEndListY1;
std::vector<int> CleanDeltaListX1;
std::vector<int> CleanDeltaListY1;
std::vector<std::string> OutDirection_Ending1;
std::vector<std::string> CleanDirection_Ending1;
std::vector<std::string> OutDirection_Delta1;
std::vector<std::string> CleanDirection_Delta1;

std::vector<Matching> MinutiaeList;
std::vector<Matching> MinutiaeList1;
cv::Mat PairsImage;
std::vector<std::vector<Matching>> Pairs;
cv::Mat PairsImage1;
std::vector<std::vector<Matching>> Pairs1;

int X0 = 52;
int Y0 = 174;
int X1 = 384;
int Y1 = 546;
