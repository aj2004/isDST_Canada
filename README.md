# isDST_Canada
Canadian Daylight Savings Time function.

by aj2004

Original   : August 9, 2018

Last update: September 27, 2019

This library will return true if Daylight Savings Time is active, for the current rules for Canada. It returns false if Standard Time is active.

Note: if your compiler doesn't handle the 'bool' type, change it to a 'char' or 'int'

------
## Usage

1. Call the function with Month, Day, and Day of Week (Sun=0, Sat=6) to return true/1 or false/0.


`bool x = isDST_Canada ( rtc.month(), rtc.day(), rtc.dow() );`

`// Date = October 21st, which is a Wednesday so 'dow' = 3`


`bool dst = isDST_Canada ( 10, 21, 3 ); // 'dst' will be set to 0 as it is Standard Time on this date.`