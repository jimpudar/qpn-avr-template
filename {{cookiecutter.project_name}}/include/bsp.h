#ifndef {{ cookiecutter.project_name | upper | replace("_", "") }}_BSP_H
#define {{ cookiecutter.project_name | upper | replace("_", "") }}_BSP_H

#ifdef __cplusplus
extern "C" {
#endif

void BSP_init(void);
void BSP_ledOn(void);
void BSP_ledOff(void);

#ifdef __cplusplus
}
#endif

#endif //{{ cookiecutter.project_name | upper | replace("_", "") }}_BSP_H
