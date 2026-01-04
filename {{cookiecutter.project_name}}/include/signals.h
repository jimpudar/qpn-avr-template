#ifndef {{ cookiecutter.project_name | upper | replace("_", "") }}_SIGNALS_H
#define {{ cookiecutter.project_name | upper | replace("_", "") }}_SIGNALS_H

#include "qpn.h"

enum {{ cookiecutter.ao_name | title }}Signals {
    EXAMPLE_SIGNAL = Q_USER_SIG,
};

#endif //{{ cookiecutter.project_name | upper | replace("_", "") }}_SIGNALS_H
