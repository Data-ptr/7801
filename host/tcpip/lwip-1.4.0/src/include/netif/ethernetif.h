#ifndef _ETHERNETIF_H_
#define _ETHERNETIF_H_
#include "lwip/netif.h"

err_t ethernetif_input(void *dat, u32 len);//�����ý���ʱ��Ҫ��ĳ������ӿڽṹ�� netif �ṹָ
												//����Ϊ��������
err_t ethernetif_init(struct netif *netif);
#endif //#ifndef _ETHERNETIF_H_
