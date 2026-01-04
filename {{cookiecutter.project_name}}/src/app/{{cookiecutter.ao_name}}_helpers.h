#ifndef {{ cookiecutter.project_name | upper | replace("_", "") }}_HELPERS_H
#define {{ cookiecutter.project_name | upper | replace("_", "") }}_HELPERS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "qpn.h"

void {{ cookiecutter.ao_name | title }}_armTimeout(QActive *me);

#ifdef __cplusplus
}
#endif

#endif //{{ cookiecutter.project_name | upper | replace("_", "") }}_HELPERS_H
