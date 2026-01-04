/*
    {{ cookiecutter.project_name }}
    Copyright (C) 2026 {{ cookiecutter.author }}

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include "qpn.h"
#include <Arduino.h>

#include "bsp.h"
#include "qm_generated/{{ cookiecutter.ao_name }}_sm.h"

{{ cookiecutter.ao_name | title }} AO_{{ cookiecutter.ao_name | title }};
static QEvt l_{{ cookiecutter.ao_name }}QSto[10];

QActiveCB const Q_ROM QF_active[] = {
    { (QActive *)0,           (QEvt *)0,        0U                  },
    { (QActive *)&AO_{{ cookiecutter.ao_name | title }},  l_{{ cookiecutter.ao_name }}QSto,     Q_DIM(l_{{ cookiecutter.ao_name }}QSto) }
};

void setup() {
    QF_init(Q_DIM(QF_active));

    QActive_ctor(&AO_{{ cookiecutter.ao_name | title }}.super, Q_STATE_CAST(&{{ cookiecutter.ao_name | title }}_initial));

    BSP_init();
}

void loop() {
    QF_run(); // run the QF-nano framework
}

ISR(TIMER2_COMPA_vect) {
    QF_tickXISR(0); // process time events for tick rate 0
}
