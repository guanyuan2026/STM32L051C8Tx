

2020.10.11

STM32L051_Bootloader

内含有IAP与APP两个程序。分别用keil打开，编译后下载。keil中设置了flash空间，不会互相覆盖。需通过串口助手进行测试，上电后运行IAP程序。
在IAP程序内，发送字符1会打印IAP Receive 1，发送字符2会跳转到APP。
在APP程序内，发送字符1会打印APP Receive 1，发送字符2会跳转到IAP。