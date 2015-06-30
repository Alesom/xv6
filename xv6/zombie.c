// Create a zombie process that 
// must be reparented at exit.

#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"

int
main(void)
{
  if(fork( StdValueTicks ) > 0) //FIX IT
    sleep(5);  // Let child exit before parent.
  exit();
}
