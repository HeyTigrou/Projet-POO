#pragma once
#include "Processus.h"

namespace Client {
	class ihm
	{
	private :
		PROCESS::Processus* obj;

	public :
		ihm(void);
		void run(void);
	};
}


