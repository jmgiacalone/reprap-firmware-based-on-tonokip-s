#ifndef THERMISTORTABLE_H_
#define THERMISTORTABLE_H_

// Thermistor lookup table for RepRap Temperature Sensor Boards (http://make.rrrf.org/ts)
// See this page:  
// http://dev.www.reprap.org/bin/view/Main/Thermistor
// for details of what goes in this table.
// Made with createTemperatureLookup.py (http://svn.reprap.org/trunk/reprap/firmware/Arduino/utilities/createTemperatureLookup.py)
// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4700 --beta=4066 --max-adc=1023
// r0: 100000
// t0: 25
// r1: 0
// r2: 4700
// beta: 4066
// max adc: 1023
// UltiMachine.com Thermistor

#define NUMTEMPS 20

short _thTempTable[NUMTEMPS][2] = {

   {1, 628},
   {54, 222},
   {107, 184},
   {160, 163},
   {213, 149},
   {266, 138},
   {319, 128},
   {372, 120},
   {425, 112},
   {478, 106},
   {531, 99},
   {584, 93},
   {637, 86},
   {690, 80},
   {743, 73},
   {796, 66},
   {849, 57},
   {902, 47},
   {955, 33},
   {1008, 4}
 };

#ifdef RAMPS
// EPCOS 100K Thermistor (B57560G1104F)
// Made with createTemperatureLookup.py (http://svn.reprap.org/trunk/reprap/firmware/Arduino/utilities/createTemperatureLookup.py)
// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4700 --beta=4092 --max-adc=1023
// r0: 100000
// t0: 25
// r1: 0
// r2: 4700
// beta: 4092
// max adc: 1023
short _thNTempTable[NUMTEMPS][2] = {
   {1, 821},
   {54, 252},
   {107, 207},
   {160, 182},
   {213, 165},
   {266, 152},
   {319, 141},
   {372, 131},
   {425, 123},
   {478, 115},
   {531, 107},
   {584, 100},
   {637, 93},
   {690, 86},
   {743, 78},
   {796, 70},
   {849, 60},
   {902, 49},
   {955, 34},
   {1008, 3}
 };
#endif
#endif
