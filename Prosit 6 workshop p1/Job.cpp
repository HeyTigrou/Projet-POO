#include "Job.h"

Job::Job(String^ jobTitle, String^ jobDescription)
	:_jobTitle(jobTitle),
	_jobDescription(jobDescription)
{
}

String^ Job::getJobTitle()
{
	return _jobTitle;
}

String^ Job::getJobDescription()
{
	return _jobDescription;
}

Job::~Job()
{
	cout << "Destruction" << endl;
	delete this;
}