
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_ADC_CHANNEL_SETUP 0
#define K_SYSCALL_ADC_READ 1
#define K_SYSCALL_ADC_READ_ASYNC 2
#define K_SYSCALL_ATOMIC_ADD 3
#define K_SYSCALL_ATOMIC_AND 4
#define K_SYSCALL_ATOMIC_CAS 5
#define K_SYSCALL_ATOMIC_NAND 6
#define K_SYSCALL_ATOMIC_OR 7
#define K_SYSCALL_ATOMIC_PTR_CAS 8
#define K_SYSCALL_ATOMIC_PTR_SET 9
#define K_SYSCALL_ATOMIC_SET 10
#define K_SYSCALL_ATOMIC_SUB 11
#define K_SYSCALL_ATOMIC_XOR 12
#define K_SYSCALL_BBRAM_CHECK_INVALID 13
#define K_SYSCALL_BBRAM_CHECK_POWER 14
#define K_SYSCALL_BBRAM_CHECK_STANDBY_POWER 15
#define K_SYSCALL_BBRAM_GET_SIZE 16
#define K_SYSCALL_BBRAM_READ 17
#define K_SYSCALL_BBRAM_WRITE 18
#define K_SYSCALL_BEHAVIOR_GET_LOCALITY 19
#define K_SYSCALL_BEHAVIOR_KEYMAP_BINDING_CONVERT_CENTRAL_STATE_DEPENDENT_PARAMS 20
#define K_SYSCALL_BEHAVIOR_KEYMAP_BINDING_PRESSED 21
#define K_SYSCALL_BEHAVIOR_KEYMAP_BINDING_RELEASED 22
#define K_SYSCALL_BEHAVIOR_SENSOR_KEYMAP_BINDING_TRIGGERED 23
#define K_SYSCALL_CAN_ADD_RX_FILTER_MSGQ 24
#define K_SYSCALL_CAN_GET_CORE_CLOCK 25
#define K_SYSCALL_CAN_GET_MAX_FILTERS 26
#define K_SYSCALL_CAN_GET_STATE 27
#define K_SYSCALL_CAN_RECOVER 28
#define K_SYSCALL_CAN_REMOVE_RX_FILTER 29
#define K_SYSCALL_CAN_SEND 30
#define K_SYSCALL_CAN_SET_MODE 31
#define K_SYSCALL_CAN_SET_TIMING 32
#define K_SYSCALL_CLOCK_GETTIME 33
#define K_SYSCALL_COUNTER_CANCEL_CHANNEL_ALARM 34
#define K_SYSCALL_COUNTER_GET_FREQUENCY 35
#define K_SYSCALL_COUNTER_GET_GUARD_PERIOD 36
#define K_SYSCALL_COUNTER_GET_MAX_TOP_VALUE 37
#define K_SYSCALL_COUNTER_GET_NUM_OF_CHANNELS 38
#define K_SYSCALL_COUNTER_GET_PENDING_INT 39
#define K_SYSCALL_COUNTER_GET_TOP_VALUE 40
#define K_SYSCALL_COUNTER_GET_VALUE 41
#define K_SYSCALL_COUNTER_IS_COUNTING_UP 42
#define K_SYSCALL_COUNTER_SET_CHANNEL_ALARM 43
#define K_SYSCALL_COUNTER_SET_GUARD_PERIOD 44
#define K_SYSCALL_COUNTER_SET_TOP_VALUE 45
#define K_SYSCALL_COUNTER_START 46
#define K_SYSCALL_COUNTER_STOP 47
#define K_SYSCALL_COUNTER_TICKS_TO_US 48
#define K_SYSCALL_COUNTER_US_TO_TICKS 49
#define K_SYSCALL_DAC_CHANNEL_SETUP 50
#define K_SYSCALL_DAC_WRITE_VALUE 51
#define K_SYSCALL_DEVICE_GET_BINDING 52
#define K_SYSCALL_DEVICE_IS_READY 53
#define K_SYSCALL_DMA_CHAN_FILTER 54
#define K_SYSCALL_DMA_RELEASE_CHANNEL 55
#define K_SYSCALL_DMA_REQUEST_CHANNEL 56
#define K_SYSCALL_DMA_RESUME 57
#define K_SYSCALL_DMA_START 58
#define K_SYSCALL_DMA_STOP 59
#define K_SYSCALL_DMA_SUSPEND 60
#define K_SYSCALL_EC_HOST_CMD_PERIPH_INIT 61
#define K_SYSCALL_EC_HOST_CMD_PERIPH_SEND 62
#define K_SYSCALL_EEPROM_GET_SIZE 63
#define K_SYSCALL_EEPROM_READ 64
#define K_SYSCALL_EEPROM_WRITE 65
#define K_SYSCALL_ENTROPY_GET_ENTROPY 66
#define K_SYSCALL_ESPI_CONFIG 67
#define K_SYSCALL_ESPI_FLASH_ERASE 68
#define K_SYSCALL_ESPI_GET_CHANNEL_STATUS 69
#define K_SYSCALL_ESPI_READ_FLASH 70
#define K_SYSCALL_ESPI_READ_LPC_REQUEST 71
#define K_SYSCALL_ESPI_READ_REQUEST 72
#define K_SYSCALL_ESPI_RECEIVE_OOB 73
#define K_SYSCALL_ESPI_RECEIVE_VWIRE 74
#define K_SYSCALL_ESPI_SAF_ACTIVATE 75
#define K_SYSCALL_ESPI_SAF_CONFIG 76
#define K_SYSCALL_ESPI_SAF_FLASH_ERASE 77
#define K_SYSCALL_ESPI_SAF_FLASH_READ 78
#define K_SYSCALL_ESPI_SAF_FLASH_WRITE 79
#define K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS 80
#define K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS 81
#define K_SYSCALL_ESPI_SEND_OOB 82
#define K_SYSCALL_ESPI_SEND_VWIRE 83
#define K_SYSCALL_ESPI_WRITE_FLASH 84
#define K_SYSCALL_ESPI_WRITE_LPC_REQUEST 85
#define K_SYSCALL_ESPI_WRITE_REQUEST 86
#define K_SYSCALL_EXT_POWER_DISABLE 87
#define K_SYSCALL_EXT_POWER_ENABLE 88
#define K_SYSCALL_EXT_POWER_GET 89
#define K_SYSCALL_FLASH_ERASE 90
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 91
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 92
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 93
#define K_SYSCALL_FLASH_GET_PARAMETERS 94
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 95
#define K_SYSCALL_FLASH_READ 96
#define K_SYSCALL_FLASH_READ_JEDEC_ID 97
#define K_SYSCALL_FLASH_SFDP_READ 98
#define K_SYSCALL_FLASH_SIMULATOR_GET_MEMORY 99
#define K_SYSCALL_FLASH_WRITE 100
#define K_SYSCALL_GPIO_GET_PENDING_INT 101
#define K_SYSCALL_GPIO_PIN_CONFIGURE 102
#define K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE 103
#define K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW 104
#define K_SYSCALL_GPIO_PORT_GET_RAW 105
#define K_SYSCALL_GPIO_PORT_SET_BITS_RAW 106
#define K_SYSCALL_GPIO_PORT_SET_MASKED_RAW 107
#define K_SYSCALL_GPIO_PORT_TOGGLE_BITS 108
#define K_SYSCALL_HWINFO_CLEAR_RESET_CAUSE 109
#define K_SYSCALL_HWINFO_GET_DEVICE_ID 110
#define K_SYSCALL_HWINFO_GET_RESET_CAUSE 111
#define K_SYSCALL_HWINFO_GET_SUPPORTED_RESET_CAUSE 112
#define K_SYSCALL_I2C_CONFIGURE 113
#define K_SYSCALL_I2C_GET_CONFIG 114
#define K_SYSCALL_I2C_RECOVER_BUS 115
#define K_SYSCALL_I2C_SLAVE_DRIVER_REGISTER 116
#define K_SYSCALL_I2C_SLAVE_DRIVER_UNREGISTER 117
#define K_SYSCALL_I2C_TRANSFER 118
#define K_SYSCALL_I2S_BUF_READ 119
#define K_SYSCALL_I2S_BUF_WRITE 120
#define K_SYSCALL_I2S_CONFIGURE 121
#define K_SYSCALL_I2S_TRIGGER 122
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 123
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 124
#define K_SYSCALL_IPM_SEND 125
#define K_SYSCALL_IPM_SET_ENABLED 126
#define K_SYSCALL_IVSHMEM_GET_ID 127
#define K_SYSCALL_IVSHMEM_GET_MEM 128
#define K_SYSCALL_IVSHMEM_GET_VECTORS 129
#define K_SYSCALL_IVSHMEM_INT_PEER 130
#define K_SYSCALL_IVSHMEM_REGISTER_HANDLER 131
#define K_SYSCALL_KSCAN_CONFIG 132
#define K_SYSCALL_KSCAN_DISABLE_CALLBACK 133
#define K_SYSCALL_KSCAN_ENABLE_CALLBACK 134
#define K_SYSCALL_K_BUSY_WAIT 135
#define K_SYSCALL_K_CONDVAR_BROADCAST 136
#define K_SYSCALL_K_CONDVAR_INIT 137
#define K_SYSCALL_K_CONDVAR_SIGNAL 138
#define K_SYSCALL_K_CONDVAR_WAIT 139
#define K_SYSCALL_K_EVENT_INIT 140
#define K_SYSCALL_K_EVENT_POST 141
#define K_SYSCALL_K_EVENT_SET 142
#define K_SYSCALL_K_EVENT_WAIT 143
#define K_SYSCALL_K_EVENT_WAIT_ALL 144
#define K_SYSCALL_K_FLOAT_DISABLE 145
#define K_SYSCALL_K_FLOAT_ENABLE 146
#define K_SYSCALL_K_FUTEX_WAIT 147
#define K_SYSCALL_K_FUTEX_WAKE 148
#define K_SYSCALL_K_IS_PREEMPT_THREAD 149
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_IN_GET 150
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_OUT_GET 151
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_EVICTION_GET 152
#define K_SYSCALL_K_MEM_PAGING_STATS_GET 153
#define K_SYSCALL_K_MEM_PAGING_THREAD_STATS_GET 154
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 155
#define K_SYSCALL_K_MSGQ_GET 156
#define K_SYSCALL_K_MSGQ_GET_ATTRS 157
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 158
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 159
#define K_SYSCALL_K_MSGQ_PEEK 160
#define K_SYSCALL_K_MSGQ_PURGE 161
#define K_SYSCALL_K_MSGQ_PUT 162
#define K_SYSCALL_K_MUTEX_INIT 163
#define K_SYSCALL_K_MUTEX_LOCK 164
#define K_SYSCALL_K_MUTEX_UNLOCK 165
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 166
#define K_SYSCALL_K_OBJECT_ALLOC 167
#define K_SYSCALL_K_OBJECT_RELEASE 168
#define K_SYSCALL_K_PIPE_ALLOC_INIT 169
#define K_SYSCALL_K_PIPE_BUFFER_FLUSH 170
#define K_SYSCALL_K_PIPE_FLUSH 171
#define K_SYSCALL_K_PIPE_GET 172
#define K_SYSCALL_K_PIPE_PUT 173
#define K_SYSCALL_K_PIPE_READ_AVAIL 174
#define K_SYSCALL_K_PIPE_WRITE_AVAIL 175
#define K_SYSCALL_K_POLL 176
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 177
#define K_SYSCALL_K_POLL_SIGNAL_INIT 178
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 179
#define K_SYSCALL_K_POLL_SIGNAL_RESET 180
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 181
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 182
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 183
#define K_SYSCALL_K_QUEUE_GET 184
#define K_SYSCALL_K_QUEUE_INIT 185
#define K_SYSCALL_K_QUEUE_IS_EMPTY 186
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 187
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 188
#define K_SYSCALL_K_SEM_COUNT_GET 189
#define K_SYSCALL_K_SEM_GIVE 190
#define K_SYSCALL_K_SEM_INIT 191
#define K_SYSCALL_K_SEM_RESET 192
#define K_SYSCALL_K_SEM_TAKE 193
#define K_SYSCALL_K_SLEEP 194
#define K_SYSCALL_K_STACK_ALLOC_INIT 195
#define K_SYSCALL_K_STACK_POP 196
#define K_SYSCALL_K_STACK_PUSH 197
#define K_SYSCALL_K_STR_OUT 198
#define K_SYSCALL_K_THREAD_ABORT 199
#define K_SYSCALL_K_THREAD_CREATE 200
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 201
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 202
#define K_SYSCALL_K_THREAD_DEADLINE_SET 203
#define K_SYSCALL_K_THREAD_JOIN 204
#define K_SYSCALL_K_THREAD_NAME_COPY 205
#define K_SYSCALL_K_THREAD_NAME_SET 206
#define K_SYSCALL_K_THREAD_PRIORITY_GET 207
#define K_SYSCALL_K_THREAD_PRIORITY_SET 208
#define K_SYSCALL_K_THREAD_RESUME 209
#define K_SYSCALL_K_THREAD_STACK_SPACE_GET 210
#define K_SYSCALL_K_THREAD_START 211
#define K_SYSCALL_K_THREAD_SUSPEND 212
#define K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS 213
#define K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS 214
#define K_SYSCALL_K_TIMER_EXPIRES_TICKS 215
#define K_SYSCALL_K_TIMER_REMAINING_TICKS 216
#define K_SYSCALL_K_TIMER_START 217
#define K_SYSCALL_K_TIMER_STATUS_GET 218
#define K_SYSCALL_K_TIMER_STATUS_SYNC 219
#define K_SYSCALL_K_TIMER_STOP 220
#define K_SYSCALL_K_TIMER_USER_DATA_GET 221
#define K_SYSCALL_K_TIMER_USER_DATA_SET 222
#define K_SYSCALL_K_UPTIME_TICKS 223
#define K_SYSCALL_K_USLEEP 224
#define K_SYSCALL_K_WAKEUP 225
#define K_SYSCALL_K_YIELD 226
#define K_SYSCALL_LED_BLINK 227
#define K_SYSCALL_LED_GET_INFO 228
#define K_SYSCALL_LED_OFF 229
#define K_SYSCALL_LED_ON 230
#define K_SYSCALL_LED_SET_BRIGHTNESS 231
#define K_SYSCALL_LED_SET_CHANNEL 232
#define K_SYSCALL_LED_SET_COLOR 233
#define K_SYSCALL_LED_WRITE_CHANNELS 234
#define K_SYSCALL_LOG_BUFFERED_CNT 235
#define K_SYSCALL_LOG_FILTER_SET 236
#define K_SYSCALL_LOG_PANIC 237
#define K_SYSCALL_LOG_PROCESS 238
#define K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT 239
#define K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT 240
#define K_SYSCALL_MBOX_MAX_CHANNELS_GET 241
#define K_SYSCALL_MBOX_MTU_GET 242
#define K_SYSCALL_MBOX_SEND 243
#define K_SYSCALL_MBOX_SET_ENABLED 244
#define K_SYSCALL_MDIO_BUS_DISABLE 245
#define K_SYSCALL_MDIO_BUS_ENABLE 246
#define K_SYSCALL_MDIO_READ 247
#define K_SYSCALL_MDIO_WRITE 248
#define K_SYSCALL_NET_ADDR_NTOP 249
#define K_SYSCALL_NET_ADDR_PTON 250
#define K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX 251
#define K_SYSCALL_NET_IF_GET_BY_INDEX 252
#define K_SYSCALL_NET_IF_IPV4_ADDR_ADD_BY_INDEX 253
#define K_SYSCALL_NET_IF_IPV4_ADDR_LOOKUP_BY_INDEX 254
#define K_SYSCALL_NET_IF_IPV4_ADDR_RM_BY_INDEX 255
#define K_SYSCALL_NET_IF_IPV4_SET_GW_BY_INDEX 256
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_INDEX 257
#define K_SYSCALL_NET_IF_IPV6_ADDR_ADD_BY_INDEX 258
#define K_SYSCALL_NET_IF_IPV6_ADDR_LOOKUP_BY_INDEX 259
#define K_SYSCALL_NET_IF_IPV6_ADDR_RM_BY_INDEX 260
#define K_SYSCALL_NRF_QSPI_NOR_BASE_CLOCK_DIV_FORCE 261
#define K_SYSCALL_PECI_CONFIG 262
#define K_SYSCALL_PECI_DISABLE 263
#define K_SYSCALL_PECI_ENABLE 264
#define K_SYSCALL_PECI_TRANSFER 265
#define K_SYSCALL_PHY_CONFIGURE_LINK 266
#define K_SYSCALL_PHY_GET_LINK_STATE 267
#define K_SYSCALL_PHY_LINK_CALLBACK_SET 268
#define K_SYSCALL_PHY_READ 269
#define K_SYSCALL_PHY_WRITE 270
#define K_SYSCALL_PS2_CONFIG 271
#define K_SYSCALL_PS2_DISABLE_CALLBACK 272
#define K_SYSCALL_PS2_ENABLE_CALLBACK 273
#define K_SYSCALL_PS2_READ 274
#define K_SYSCALL_PS2_WRITE 275
#define K_SYSCALL_PTP_CLOCK_GET 276
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 277
#define K_SYSCALL_PWM_PIN_CAPTURE_CYCLES 278
#define K_SYSCALL_PWM_PIN_DISABLE_CAPTURE 279
#define K_SYSCALL_PWM_PIN_ENABLE_CAPTURE 280
#define K_SYSCALL_PWM_PIN_SET_CYCLES 281
#define K_SYSCALL_SENSOR_ATTR_GET 282
#define K_SYSCALL_SENSOR_ATTR_SET 283
#define K_SYSCALL_SENSOR_CHANNEL_GET 284
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 285
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 286
#define K_SYSCALL_SPI_RELEASE 287
#define K_SYSCALL_SPI_TRANSCEIVE 288
#define K_SYSCALL_SYSCON_GET_BASE 289
#define K_SYSCALL_SYSCON_GET_SIZE 290
#define K_SYSCALL_SYSCON_READ_REG 291
#define K_SYSCALL_SYSCON_WRITE_REG 292
#define K_SYSCALL_SYS_CACHE_DATA_ALL 293
#define K_SYSCALL_SYS_CACHE_DATA_RANGE 294
#define K_SYSCALL_SYS_CACHE_INSTR_ALL 295
#define K_SYSCALL_SYS_CACHE_INSTR_RANGE 296
#define K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET 297
#define K_SYSCALL_SYS_CSRAND_GET 298
#define K_SYSCALL_SYS_RAND32_GET 299
#define K_SYSCALL_SYS_RAND_GET 300
#define K_SYSCALL_UART_CONFIGURE 301
#define K_SYSCALL_UART_CONFIG_GET 302
#define K_SYSCALL_UART_DRV_CMD 303
#define K_SYSCALL_UART_ERR_CHECK 304
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 305
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 306
#define K_SYSCALL_UART_IRQ_IS_PENDING 307
#define K_SYSCALL_UART_IRQ_RX_DISABLE 308
#define K_SYSCALL_UART_IRQ_RX_ENABLE 309
#define K_SYSCALL_UART_IRQ_TX_DISABLE 310
#define K_SYSCALL_UART_IRQ_TX_ENABLE 311
#define K_SYSCALL_UART_IRQ_UPDATE 312
#define K_SYSCALL_UART_LINE_CTRL_GET 313
#define K_SYSCALL_UART_LINE_CTRL_SET 314
#define K_SYSCALL_UART_MUX_FIND 315
#define K_SYSCALL_UART_POLL_IN 316
#define K_SYSCALL_UART_POLL_IN_U16 317
#define K_SYSCALL_UART_POLL_OUT 318
#define K_SYSCALL_UART_POLL_OUT_U16 319
#define K_SYSCALL_UART_RX_DISABLE 320
#define K_SYSCALL_UART_RX_ENABLE 321
#define K_SYSCALL_UART_RX_ENABLE_U16 322
#define K_SYSCALL_UART_TX 323
#define K_SYSCALL_UART_TX_ABORT 324
#define K_SYSCALL_UART_TX_U16 325
#define K_SYSCALL_USER_FAULT 326
#define K_SYSCALL_WDT_DISABLE 327
#define K_SYSCALL_WDT_FEED 328
#define K_SYSCALL_WDT_SETUP 329
#define K_SYSCALL_ZEPHYR_FPUTC 330
#define K_SYSCALL_ZEPHYR_FWRITE 331
#define K_SYSCALL_ZEPHYR_READ_STDIN 332
#define K_SYSCALL_ZEPHYR_WRITE_STDOUT 333
#define K_SYSCALL_ZSOCK_ACCEPT 334
#define K_SYSCALL_ZSOCK_BIND 335
#define K_SYSCALL_ZSOCK_CLOSE 336
#define K_SYSCALL_ZSOCK_CONNECT 337
#define K_SYSCALL_ZSOCK_FCNTL 338
#define K_SYSCALL_ZSOCK_GETHOSTNAME 339
#define K_SYSCALL_ZSOCK_GETSOCKNAME 340
#define K_SYSCALL_ZSOCK_GETSOCKOPT 341
#define K_SYSCALL_ZSOCK_GET_CONTEXT_OBJECT 342
#define K_SYSCALL_ZSOCK_INET_PTON 343
#define K_SYSCALL_ZSOCK_LISTEN 344
#define K_SYSCALL_ZSOCK_POLL 345
#define K_SYSCALL_ZSOCK_RECVFROM 346
#define K_SYSCALL_ZSOCK_SELECT 347
#define K_SYSCALL_ZSOCK_SENDMSG 348
#define K_SYSCALL_ZSOCK_SENDTO 349
#define K_SYSCALL_ZSOCK_SETSOCKOPT 350
#define K_SYSCALL_ZSOCK_SHUTDOWN 351
#define K_SYSCALL_ZSOCK_SOCKET 352
#define K_SYSCALL_ZSOCK_SOCKETPAIR 353
#define K_SYSCALL_Z_CURRENT_GET 354
#define K_SYSCALL_Z_ERRNO 355
#define K_SYSCALL_Z_LOG_HEXDUMP_FROM_USER 356
#define K_SYSCALL_Z_LOG_MSG2_RUNTIME_VCREATE 357
#define K_SYSCALL_Z_LOG_MSG2_STATIC_CREATE 358
#define K_SYSCALL_Z_LOG_STRING_FROM_USER 359
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK 360
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK 361
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 362
#define K_SYSCALL_BAD 363
#define K_SYSCALL_LIMIT 364


#ifndef _ASMLANGUAGE

#include <stdint.h>

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */
