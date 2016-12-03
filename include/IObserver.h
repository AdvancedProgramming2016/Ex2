
#ifndef EX2_IOBSERVER_H
#define EX2_IOBSERVER_H

#include "ISubject.h"

/**
 * Observer interface, notifies the subject about an update that is made.
 */
class IObserver{

public:
    /*
     * Sends update to the subject
     */
    virtual void update(ISubject subject) = 0;
};

#endif //EX2_IOBSERVER_H
