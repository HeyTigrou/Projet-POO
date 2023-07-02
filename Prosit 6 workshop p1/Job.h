#pragma once
#include "pch.h"

ref class Job
{
private:
	String^ _jobTitle;
	String^ _jobDescription;
public:
	Job(String^, String^);

	String^ getJobTitle();
	String^ getJobDescription();

	~Job();
};

