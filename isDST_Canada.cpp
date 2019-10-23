/* isDST_Canada.cpp - C Source file
 *
 *  by Kevin W. <aj2004@shaw.ca>
 *
 * This library will return true|false if
 * Daylight Savings Time is active, for Canada
 * 
 */
#include "isDST_Canada.h"

bool isDST_Canada(int month, int day, int dow){

  /* This function will return 1 or 0 depending on whether
   * Daylight Savings Time is in effect for the provided date
   */

  // 'dow' must be 0=Sunday - 6=Saturday
  int prevSunday = day - dow;
  // if it is April-October inclusive, it's DST
  if (month > 3 && month < 11){return true;}
  // if it's March and it is later than the 2nd Sunday, it's DST
  else if (month == 3){return prevSunday >= 8;}
  // if it's November and it's earlier than the first Sunday, it's DST
  else if (month == 11){return prevSunday <= 0;}
  // otherwise it's not DST
  else return 0;
}

