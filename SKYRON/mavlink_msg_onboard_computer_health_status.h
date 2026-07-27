#pragma once
// MESSAGE ONBOARD_COMPUTER_HEALTH_STATUS PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS 3350


typedef struct __mavlink_onboard_computer_health_status_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float storage_total_capacity; /*< [GB] Total capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.*/
 float storage_used_capacity; /*< [GB] Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.*/
 float storage_available_capacity; /*< [GB] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.*/
 float memory_percent; /*< [percent] Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.*/
 float cpu_percent; /*< [percent] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.*/
 float temperature; /*< [degree] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.*/
 char computer_name[32]; /*<  Textual storage name to be used in UI (microSD 1, Internal Memory, etc.) This is a NULL terminated string. If it is exactly 32 characters long, add a terminating NULL. If this string is empty, the generic type is shown to the user.*/
} mavlink_onboard_computer_health_status_t;

#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN 60
#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_MIN_LEN 60
#define MAVLINK_MSG_ID_3350_LEN 60
#define MAVLINK_MSG_ID_3350_MIN_LEN 60

#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_CRC 93
#define MAVLINK_MSG_ID_3350_CRC 93

#define MAVLINK_MSG_ONBOARD_COMPUTER_HEALTH_STATUS_FIELD_COMPUTER_NAME_LEN 32

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ONBOARD_COMPUTER_HEALTH_STATUS { \
    3350, \
    "ONBOARD_COMPUTER_HEALTH_STATUS", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_onboard_computer_health_status_t, time_boot_ms) }, \
         { "storage_total_capacity", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_onboard_computer_health_status_t, storage_total_capacity) }, \
         { "storage_used_capacity", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_onboard_computer_health_status_t, storage_used_capacity) }, \
         { "storage_available_capacity", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_onboard_computer_health_status_t, storage_available_capacity) }, \
         { "memory_percent", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_onboard_computer_health_status_t, memory_percent) }, \
         { "cpu_percent", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_onboard_computer_health_status_t, cpu_percent) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_onboard_computer_health_status_t, temperature) }, \
         { "computer_name", NULL, MAVLINK_TYPE_CHAR, 32, 28, offsetof(mavlink_onboard_computer_health_status_t, computer_name) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ONBOARD_COMPUTER_HEALTH_STATUS { \
    "ONBOARD_COMPUTER_HEALTH_STATUS", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_onboard_computer_health_status_t, time_boot_ms) }, \
         { "storage_total_capacity", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_onboard_computer_health_status_t, storage_total_capacity) }, \
         { "storage_used_capacity", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_onboard_computer_health_status_t, storage_used_capacity) }, \
         { "storage_available_capacity", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_onboard_computer_health_status_t, storage_available_capacity) }, \
         { "memory_percent", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_onboard_computer_health_status_t, memory_percent) }, \
         { "cpu_percent", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_onboard_computer_health_status_t, cpu_percent) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_onboard_computer_health_status_t, temperature) }, \
         { "computer_name", NULL, MAVLINK_TYPE_CHAR, 32, 28, offsetof(mavlink_onboard_computer_health_status_t, computer_name) }, \
         } \
}
#endif

/**
 * @brief Pack a onboard_computer_health_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param storage_total_capacity [GB] Total capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param storage_used_capacity [GB] Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param storage_available_capacity [GB] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param memory_percent [percent] Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param cpu_percent [percent] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param temperature [degree] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param computer_name  Textual storage name to be used in UI (microSD 1, Internal Memory, etc.) This is a NULL terminated string. If it is exactly 32 characters long, add a terminating NULL. If this string is empty, the generic type is shown to the user.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_computer_health_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float storage_total_capacity, float storage_used_capacity, float storage_available_capacity, float memory_percent, float cpu_percent, float temperature, const char *computer_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, storage_total_capacity);
    _mav_put_float(buf, 8, storage_used_capacity);
    _mav_put_float(buf, 12, storage_available_capacity);
    _mav_put_float(buf, 16, memory_percent);
    _mav_put_float(buf, 20, cpu_percent);
    _mav_put_float(buf, 24, temperature);
    _mav_put_char_array(buf, 28, computer_name, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN);
#else
    mavlink_onboard_computer_health_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.storage_total_capacity = storage_total_capacity;
    packet.storage_used_capacity = storage_used_capacity;
    packet.storage_available_capacity = storage_available_capacity;
    packet.memory_percent = memory_percent;
    packet.cpu_percent = cpu_percent;
    packet.temperature = temperature;
    mav_array_memcpy(packet.computer_name, computer_name, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_CRC);
}

/**
 * @brief Pack a onboard_computer_health_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param storage_total_capacity [GB] Total capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param storage_used_capacity [GB] Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param storage_available_capacity [GB] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param memory_percent [percent] Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param cpu_percent [percent] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param temperature [degree] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param computer_name  Textual storage name to be used in UI (microSD 1, Internal Memory, etc.) This is a NULL terminated string. If it is exactly 32 characters long, add a terminating NULL. If this string is empty, the generic type is shown to the user.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_computer_health_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float storage_total_capacity, float storage_used_capacity, float storage_available_capacity, float memory_percent, float cpu_percent, float temperature, const char *computer_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, storage_total_capacity);
    _mav_put_float(buf, 8, storage_used_capacity);
    _mav_put_float(buf, 12, storage_available_capacity);
    _mav_put_float(buf, 16, memory_percent);
    _mav_put_float(buf, 20, cpu_percent);
    _mav_put_float(buf, 24, temperature);
    _mav_put_char_array(buf, 28, computer_name, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN);
#else
    mavlink_onboard_computer_health_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.storage_total_capacity = storage_total_capacity;
    packet.storage_used_capacity = storage_used_capacity;
    packet.storage_available_capacity = storage_available_capacity;
    packet.memory_percent = memory_percent;
    packet.cpu_percent = cpu_percent;
    packet.temperature = temperature;
    mav_array_memcpy(packet.computer_name, computer_name, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN);
#endif
}

/**
 * @brief Pack a onboard_computer_health_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param storage_total_capacity [GB] Total capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param storage_used_capacity [GB] Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param storage_available_capacity [GB] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param memory_percent [percent] Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param cpu_percent [percent] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param temperature [degree] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param computer_name  Textual storage name to be used in UI (microSD 1, Internal Memory, etc.) This is a NULL terminated string. If it is exactly 32 characters long, add a terminating NULL. If this string is empty, the generic type is shown to the user.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_computer_health_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,float storage_total_capacity,float storage_used_capacity,float storage_available_capacity,float memory_percent,float cpu_percent,float temperature,const char *computer_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, storage_total_capacity);
    _mav_put_float(buf, 8, storage_used_capacity);
    _mav_put_float(buf, 12, storage_available_capacity);
    _mav_put_float(buf, 16, memory_percent);
    _mav_put_float(buf, 20, cpu_percent);
    _mav_put_float(buf, 24, temperature);
    _mav_put_char_array(buf, 28, computer_name, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN);
#else
    mavlink_onboard_computer_health_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.storage_total_capacity = storage_total_capacity;
    packet.storage_used_capacity = storage_used_capacity;
    packet.storage_available_capacity = storage_available_capacity;
    packet.memory_percent = memory_percent;
    packet.cpu_percent = cpu_percent;
    packet.temperature = temperature;
    mav_array_memcpy(packet.computer_name, computer_name, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_CRC);
}

/**
 * @brief Encode a onboard_computer_health_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param onboard_computer_health_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_computer_health_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_onboard_computer_health_status_t* onboard_computer_health_status)
{
    return mavlink_msg_onboard_computer_health_status_pack(system_id, component_id, msg, onboard_computer_health_status->time_boot_ms, onboard_computer_health_status->storage_total_capacity, onboard_computer_health_status->storage_used_capacity, onboard_computer_health_status->storage_available_capacity, onboard_computer_health_status->memory_percent, onboard_computer_health_status->cpu_percent, onboard_computer_health_status->temperature, onboard_computer_health_status->computer_name);
}

/**
 * @brief Encode a onboard_computer_health_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param onboard_computer_health_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_computer_health_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_onboard_computer_health_status_t* onboard_computer_health_status)
{
    return mavlink_msg_onboard_computer_health_status_pack_chan(system_id, component_id, chan, msg, onboard_computer_health_status->time_boot_ms, onboard_computer_health_status->storage_total_capacity, onboard_computer_health_status->storage_used_capacity, onboard_computer_health_status->storage_available_capacity, onboard_computer_health_status->memory_percent, onboard_computer_health_status->cpu_percent, onboard_computer_health_status->temperature, onboard_computer_health_status->computer_name);
}

/**
 * @brief Encode a onboard_computer_health_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param onboard_computer_health_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_computer_health_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_onboard_computer_health_status_t* onboard_computer_health_status)
{
    return mavlink_msg_onboard_computer_health_status_pack_status(system_id, component_id, _status, msg,  onboard_computer_health_status->time_boot_ms, onboard_computer_health_status->storage_total_capacity, onboard_computer_health_status->storage_used_capacity, onboard_computer_health_status->storage_available_capacity, onboard_computer_health_status->memory_percent, onboard_computer_health_status->cpu_percent, onboard_computer_health_status->temperature, onboard_computer_health_status->computer_name);
}

/**
 * @brief Send a onboard_computer_health_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param storage_total_capacity [GB] Total capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param storage_used_capacity [GB] Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param storage_available_capacity [GB] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param memory_percent [percent] Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param cpu_percent [percent] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param temperature [degree] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 * @param computer_name  Textual storage name to be used in UI (microSD 1, Internal Memory, etc.) This is a NULL terminated string. If it is exactly 32 characters long, add a terminating NULL. If this string is empty, the generic type is shown to the user.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_onboard_computer_health_status_send(mavlink_channel_t chan, uint32_t time_boot_ms, float storage_total_capacity, float storage_used_capacity, float storage_available_capacity, float memory_percent, float cpu_percent, float temperature, const char *computer_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, storage_total_capacity);
    _mav_put_float(buf, 8, storage_used_capacity);
    _mav_put_float(buf, 12, storage_available_capacity);
    _mav_put_float(buf, 16, memory_percent);
    _mav_put_float(buf, 20, cpu_percent);
    _mav_put_float(buf, 24, temperature);
    _mav_put_char_array(buf, 28, computer_name, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS, buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_CRC);
#else
    mavlink_onboard_computer_health_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.storage_total_capacity = storage_total_capacity;
    packet.storage_used_capacity = storage_used_capacity;
    packet.storage_available_capacity = storage_available_capacity;
    packet.memory_percent = memory_percent;
    packet.cpu_percent = cpu_percent;
    packet.temperature = temperature;
    mav_array_memcpy(packet.computer_name, computer_name, sizeof(char)*32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS, (const char *)&packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_CRC);
#endif
}

/**
 * @brief Send a onboard_computer_health_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_onboard_computer_health_status_send_struct(mavlink_channel_t chan, const mavlink_onboard_computer_health_status_t* onboard_computer_health_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_onboard_computer_health_status_send(chan, onboard_computer_health_status->time_boot_ms, onboard_computer_health_status->storage_total_capacity, onboard_computer_health_status->storage_used_capacity, onboard_computer_health_status->storage_available_capacity, onboard_computer_health_status->memory_percent, onboard_computer_health_status->cpu_percent, onboard_computer_health_status->temperature, onboard_computer_health_status->computer_name);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS, (const char *)onboard_computer_health_status, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_onboard_computer_health_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float storage_total_capacity, float storage_used_capacity, float storage_available_capacity, float memory_percent, float cpu_percent, float temperature, const char *computer_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, storage_total_capacity);
    _mav_put_float(buf, 8, storage_used_capacity);
    _mav_put_float(buf, 12, storage_available_capacity);
    _mav_put_float(buf, 16, memory_percent);
    _mav_put_float(buf, 20, cpu_percent);
    _mav_put_float(buf, 24, temperature);
    _mav_put_char_array(buf, 28, computer_name, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS, buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_CRC);
#else
    mavlink_onboard_computer_health_status_t *packet = (mavlink_onboard_computer_health_status_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->storage_total_capacity = storage_total_capacity;
    packet->storage_used_capacity = storage_used_capacity;
    packet->storage_available_capacity = storage_available_capacity;
    packet->memory_percent = memory_percent;
    packet->cpu_percent = cpu_percent;
    packet->temperature = temperature;
    mav_array_memcpy(packet->computer_name, computer_name, sizeof(char)*32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS, (const char *)packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ONBOARD_COMPUTER_HEALTH_STATUS UNPACKING


/**
 * @brief Get field time_boot_ms from onboard_computer_health_status message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_onboard_computer_health_status_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field storage_total_capacity from onboard_computer_health_status message
 *
 * @return [GB] Total capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 */
static inline float mavlink_msg_onboard_computer_health_status_get_storage_total_capacity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field storage_used_capacity from onboard_computer_health_status message
 *
 * @return [GB] Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 */
static inline float mavlink_msg_onboard_computer_health_status_get_storage_used_capacity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field storage_available_capacity from onboard_computer_health_status message
 *
 * @return [GB] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 */
static inline float mavlink_msg_onboard_computer_health_status_get_storage_available_capacity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field memory_percent from onboard_computer_health_status message
 *
 * @return [percent] Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 */
static inline float mavlink_msg_onboard_computer_health_status_get_memory_percent(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field cpu_percent from onboard_computer_health_status message
 *
 * @return [percent] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 */
static inline float mavlink_msg_onboard_computer_health_status_get_cpu_percent(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field temperature from onboard_computer_health_status message
 *
 * @return [degree] Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
 */
static inline float mavlink_msg_onboard_computer_health_status_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field computer_name from onboard_computer_health_status message
 *
 * @return  Textual storage name to be used in UI (microSD 1, Internal Memory, etc.) This is a NULL terminated string. If it is exactly 32 characters long, add a terminating NULL. If this string is empty, the generic type is shown to the user.
 */
static inline uint16_t mavlink_msg_onboard_computer_health_status_get_computer_name(const mavlink_message_t* msg, char *computer_name)
{
    return _MAV_RETURN_char_array(msg, computer_name, 32,  28);
}

/**
 * @brief Decode a onboard_computer_health_status message into a struct
 *
 * @param msg The message to decode
 * @param onboard_computer_health_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_onboard_computer_health_status_decode(const mavlink_message_t* msg, mavlink_onboard_computer_health_status_t* onboard_computer_health_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    onboard_computer_health_status->time_boot_ms = mavlink_msg_onboard_computer_health_status_get_time_boot_ms(msg);
    onboard_computer_health_status->storage_total_capacity = mavlink_msg_onboard_computer_health_status_get_storage_total_capacity(msg);
    onboard_computer_health_status->storage_used_capacity = mavlink_msg_onboard_computer_health_status_get_storage_used_capacity(msg);
    onboard_computer_health_status->storage_available_capacity = mavlink_msg_onboard_computer_health_status_get_storage_available_capacity(msg);
    onboard_computer_health_status->memory_percent = mavlink_msg_onboard_computer_health_status_get_memory_percent(msg);
    onboard_computer_health_status->cpu_percent = mavlink_msg_onboard_computer_health_status_get_cpu_percent(msg);
    onboard_computer_health_status->temperature = mavlink_msg_onboard_computer_health_status_get_temperature(msg);
    mavlink_msg_onboard_computer_health_status_get_computer_name(msg, onboard_computer_health_status->computer_name);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN? msg->len : MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN;
        memset(onboard_computer_health_status, 0, MAVLINK_MSG_ID_ONBOARD_COMPUTER_HEALTH_STATUS_LEN);
    memcpy(onboard_computer_health_status, _MAV_PAYLOAD(msg), len);
#endif
}
