#include "relay.h"
#include "key.h"

void setup() {
  // put your setup code here, to run once:
  relay_init();
  key_init();  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //读取当前运行时间
  unsigned long current_time =  millis();
  // 非阻塞判断：时间到达间隔就切换状态
  if (current_time - previous_time >= interval) {
    // 更新上一次切换时间
    previous_time = current_time;
    // 翻转继电器状态
    relayState = !relayState;
    // 输出到继电器
    digitalWrite(RELAY_PIN, relayState);
  }
  if (KEY == 0)  
  {
    delay(10);
    if (KEY == 0)
    {
      Serial.println("key press!");
    }
  }
  else
  {
  }
}
