/**
 * @file power.h
 * @author Dorian Benech
 * @brief
 * @version 1.0
 * @date 2023-10-11
 *
 * @copyright Copyright (c) 2023 GammaTroniques
 *
 */

#ifndef TEMPLATE_H
#define TEMPLATE_H

/*==============================================================================
 Local Include
===============================================================================*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
/*==============================================================================
 Public Defines
==============================================================================*/

/*==============================================================================
 Public Macro
==============================================================================*/

/*==============================================================================
 Public Type
==============================================================================*/

/*==============================================================================
 Public Variables Declaration
==============================================================================*/

/*==============================================================================
 Public Functions Declaration
==============================================================================*/

esp_err_t power_init();

esp_err_t power_set_frequency(uint32_t freq_Mhz);

esp_err_t power_set_zigbee();

uint32_t power_get_frequency();

#endif /* TEMPLATE_H */