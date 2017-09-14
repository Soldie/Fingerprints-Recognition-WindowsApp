#ifndef COMMON_CK
#define COMMON_CK

#include <opencv2/opencv.hpp>
#include "Matching.h"

    //extern IplImage * cv_img;
	extern cv::Mat cv_img;
	extern cv::Mat image;
	extern cv::Mat image1;
	extern cv::Mat image_target;
	extern cv::Mat image_source;
	extern cv::Mat image_Detection;
	extern cv::Mat image_Detection1;
	extern cv::Mat image_thinning;
	extern cv::Mat image_thinning1;
	extern cv::Mat Minutiae;
	extern cv::Mat CleanMinutiae;
	extern cv::Mat Minutiae1;
	extern cv::Mat CleanMinutiae1;

	extern std::vector<int> DeltaListX;
	extern std::vector<int> DeltaListY;
	extern std::vector<int> EndListX;
	extern std::vector<int> EndListY;
	extern std::vector<std::string> Direction_Ending;
	extern std::vector<std::string> Direction_Delta;

	extern std::vector<int> DeltaListX1;
	extern std::vector<int> DeltaListY1;
	extern std::vector<int> EndListX1;
	extern std::vector<int> EndListY1;
	extern std::vector<std::string> Direction_Ending1;
	extern std::vector<std::string> Direction_Delta1;

	extern std::vector<int> OutEndListX;
	extern std::vector<int> OutEndListY;
	extern std::vector<int> OutDeltaListX;
	extern std::vector<int> OutDeltaListY;
	extern std::vector<int> CleanEndListX;
	extern std::vector<int> CleanEndListY;
	extern std::vector<int> CleanDeltaListX;
	extern std::vector<int> CleanDeltaListY;
	extern std::vector<std::string> OutDirection_Ending;
	extern std::vector<std::string> CleanDirection_Ending;
	extern std::vector<std::string> OutDirection_Delta;
	extern std::vector<std::string> CleanDirection_Delta;

	extern std::vector<int> OutEndListX1;
	extern std::vector<int> OutEndListY1;
	extern std::vector<int> OutDeltaListX1;
	extern std::vector<int> OutDeltaListY1;
	extern std::vector<int> CleanEndListX1;
	extern std::vector<int> CleanEndListY1;
	extern std::vector<int> CleanDeltaListX1;
	extern std::vector<int> CleanDeltaListY1;
	extern std::vector<string> OutDirection_Ending1;
	extern std::vector<string> CleanDirection_Ending1;
	extern std::vector<string> OutDirection_Delta1;
	extern std::vector<string> CleanDirection_Delta1;

	extern std::vector<Matching> MinutiaeList;
	extern std::vector<Matching> MinutiaeList1;
	extern cv::Mat PairsImage;
	extern std::vector<std::vector<Matching>> Pairs;
	extern cv::Mat PairsImage1;
	extern std::vector<std::vector<Matching>> Pairs1;

	extern int X0;
	extern int Y0;
	extern int X1;
	extern int Y1;
	

#endif