#ifndef PARAMETERS_H
#define PARAMETERS_H

#define DEBUG false

// NO RS485/EXTRUDER CONTROLLER SUPPORT
// PLEASE VERIFY PIN ASSIGNMENTS FOR YOUR CONFIGURATION!!!!!!!
#define MOTHERBOARD 3 // ATMEGA168 0, SANGUINO 1, MOTHERBOARD = 2, MEGA 3, ATMEGA328 4

// THERMOCOUPLE SUPPORT UNTESTED... USE WITH CAUTION!!!!
const bool USE_THERMISTOR = true; //Set to false if using thermocouple

// Calibration formulas
// e_extruded_steps_per_mm = e_feedstock_steps_per_mm * (desired_extrusion_diameter^2 / feedstock_diameter^2)
// new_axis_steps_per_mm = previous_axis_steps_per_mm * (test_distance_instructed/test_distance_traveled)
// units are in millimeters or whatever length unit you prefer: inches,football-fields,parsecs etc

//Calibration variables
float x_steps_per_unit = 20;
float y_steps_per_unit = 20;
float z_steps_per_unit = 2000;
float e_steps_per_unit = 21;
float max_feedrate = 18000;

//float x_steps_per_unit = 10.047;
//float y_steps_per_unit = 10.047;
//float z_steps_per_unit = 833.398;
//float e_steps_per_unit = 0.706;
//float max_feedrate = 3000;

//For Inverting Stepper Enable Pins (Active Low) use 0, Non Inverting (Active High) use 1
const bool X_ENABLE_ON = 1;
const bool Y_ENABLE_ON = 1;
const bool Z_ENABLE_ON = 1;
const bool E_ENABLE_ON = 1;

//Disables axis when it's not being used.
const bool DISABLE_X = false;
const bool DISABLE_Y = false;
const bool DISABLE_Z = true;
const bool DISABLE_E = false;

const bool INVERT_X_DIR = false;
const bool INVERT_Y_DIR = false;
const bool INVERT_Z_DIR = false;
const bool INVERT_E_DIR = true;

//Endstop Settings
const bool ENDSTOPS_INVERTING = 1;
const bool min_software_endstops = false; //If true, axis won't move to coordinates less than zero.
const bool max_software_endstops = true;  //If true, axis won't move to coordinates greater than the defined lengths below.
const int X_MAX_LENGTH = 140;
const int Y_MAX_LENGTH = 140;
const int Z_MAX_LENGTH = 100;

#define BAUDRATE 115200

#define HEAT_INTERVAL 225 // extruder control interval in milliseconds
#define LZONE 4
#define UZONE 2

//RESISTOR 12 OHM
#define TC_PID_MAX 150 // limits current to nozzle
#define TC_PID_INTEGRAL_DRIVE_MAX 95
#define TC_PID_PGAIN 1.45//1.45
#define TC_PID_IGAIN 0.02//0.02
#define TC_PID_DGAIN 1.0//1.0

#endif
