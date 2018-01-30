#pragma once
#include "glog/logging.h"

class GlogHelper
{
public:
	GlogHelper(char* strAppName) {
		google::InitGoogleLogging(strAppName);

		google::SetLogDestination(google::GLOG_INFO, "./Log/Static-Log-");

		FLAGS_logbufsecs = 0;
		FLAGS_max_log_size = 10;
		FLAGS_stop_logging_if_full_disk = true;
	}

	~GlogHelper() {
		google::ShutdownGoogleLogging();
	}
};

