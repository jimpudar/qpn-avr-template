#ifndef {{ cookiecutter.project_name | upper | replace("_", "") }}_CONSTANTS_H
#define {{ cookiecutter.project_name | upper | replace("_", "") }}_CONSTANTS_H

//============================================================================
// various constants for the application...
enum {
    BSP_TICKS_PER_SEC = 100, // number of system clock ticks in one second
    LED_L = 13               // the pin number of the on-board LED (L)
};

//............................................................................
#endif //{{ cookiecutter.project_name | upper | replace("_", "") }}_CONSTANTS_H
