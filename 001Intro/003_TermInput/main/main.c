//#include <stdio.h>
#include <string.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#define TAG "string"

void app_main(void){
	char c=0, str[100];
	memset(str, 0, sizeof(str));

	while(c != '\n'){
		c = getchar();

		if(c != 0xff){
			str[strlen(str)] = c;
			printf("%c", c);
		}
		vTaskDelay(pdTICKS_TO_MS(1000));
	}

	ESP_LOGI(TAG, "You typed in %s\n", str);

	while(1){
	}
}
