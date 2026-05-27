#include "relay.h"


// 继电器当前状态
bool relayState = LOW;// 初始状态：断开
// 非阻塞延时变量
unsigned long previous_time = 0;  // 记录上一次切换时间
// 翻转时间间隔
const long interval = 2000;       // 2000ms = 2s

void relay_init()
{
  // 设置继电器引脚为输出模式
  pinMode(RELAY_PIN, OUTPUT);
  // 初始状态输出
  digitalWrite(RELAY_PIN, relayState);
}