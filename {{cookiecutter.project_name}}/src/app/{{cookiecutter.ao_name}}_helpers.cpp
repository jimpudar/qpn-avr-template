#include "{{ cookiecutter.ao_name }}_helpers.h"
#include "constants.h"

void {{ cookiecutter.ao_name | title }}_armTimeout(QActive* me)
{
    QActive_armX(me,
                 0U,
                 BSP_TICKS_PER_SEC / 2U,
                 BSP_TICKS_PER_SEC / 2U);
}
