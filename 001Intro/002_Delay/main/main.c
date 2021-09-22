#include <stdio.h>
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define TAG "LOG"

void app_main(void)
{
	int i=0;
	ESP_LOGW(TAG, "pdMS_TO_TICKS(1000) = %d", pdMS_TO_TICKS(1000));		//converts the input value (in ms) into no. of ticks equivalent

	while(1){
		vTaskDelay(pdMS_TO_TICKS(1));		//Delay APIs
		ESP_LOGI(TAG, "LOGGED AFTER %d", i++);	//Log information

	}

}
