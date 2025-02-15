#pragma once

#include "objecthandler.h"
#include "jdbgpipeline.h"
#include <map>
#include <string>

class HandlerSetBreakpoint : public ObjectHandler {

public:
	HandlerSetBreakpoint(jvmtiEnv* jvmti, JNIEnv* jni, JdbgPipeline* pipeline);
	int handle(char* data, DWORD length, char* responseBuffer, int& status, std::map<std::string, jclass>& klassMap) override;

};