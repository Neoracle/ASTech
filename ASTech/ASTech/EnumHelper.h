//created by Wang Jianwei on 01 Dec 2012
#ifndef ENUMHELPER_H
#define ENUMHELPER_H
#include "Enums.h"
#include <string>

using namespace enums;
using namespace std;

namespace utilities{
	class EnumHelper{

	public:

		EnumHelper(){};
		
		static enums::CurrencyEnum getCcyEnum(std::string ccyName);
	};
}
#endif