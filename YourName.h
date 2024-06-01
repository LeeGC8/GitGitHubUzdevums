#ifndef YOURNAME_H
#define YOURNAME_H
#include "Name.h"

class YourName : public Name {
public:
	YourName();
	virtual ~YourName();
	virtual const char* getName() const override;
};

#endif //YOURNAME_H
