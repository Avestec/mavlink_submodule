#pragma once
// MESSAGE ONBOARD_MODULE_STATUS PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS 3370


typedef struct __mavlink_onboard_module_status_t {
 uint64_t timestamp; /*< [us] Timestamp (UNIX time or time since system boot).*/
 uint16_t module_id; /*<  Module this status is for.*/
 uint8_t state; /*<  Module state: each module reports only the states it has, each as the closest MAV_STATE (see the ONBOARD_MODULE entry; one-word labels in AvesCORE docs/SKYRON/ONBOARD_MODULE_STATUS.md). LED by state, same for every module: UNINIT grey, BOOT blinking green, STANDBY grey, ACTIVE green, CRITICAL yellow, EMERGENCY red.*/
} mavlink_onboard_module_status_t;

#define MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN 11
#define MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_MIN_LEN 11
#define MAVLINK_MSG_ID_3370_LEN 11
#define MAVLINK_MSG_ID_3370_MIN_LEN 11

#define MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_CRC 81
#define MAVLINK_MSG_ID_3370_CRC 81



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ONBOARD_MODULE_STATUS { \
    3370, \
    "ONBOARD_MODULE_STATUS", \
    3, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_onboard_module_status_t, timestamp) }, \
         { "module_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_onboard_module_status_t, module_id) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_onboard_module_status_t, state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ONBOARD_MODULE_STATUS { \
    "ONBOARD_MODULE_STATUS", \
    3, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_onboard_module_status_t, timestamp) }, \
         { "module_id", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_onboard_module_status_t, module_id) }, \
         { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_onboard_module_status_t, state) }, \
         } \
}
#endif

/**
 * @brief Pack a onboard_module_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [us] Timestamp (UNIX time or time since system boot).
 * @param module_id  Module this status is for.
 * @param state  Module state: each module reports only the states it has, each as the closest MAV_STATE (see the ONBOARD_MODULE entry; one-word labels in AvesCORE docs/SKYRON/ONBOARD_MODULE_STATUS.md). LED by state, same for every module: UNINIT grey, BOOT blinking green, STANDBY grey, ACTIVE green, CRITICAL yellow, EMERGENCY red.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_module_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint16_t module_id, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint16_t(buf, 8, module_id);
    _mav_put_uint8_t(buf, 10, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN);
#else
    mavlink_onboard_module_status_t packet;
    packet.timestamp = timestamp;
    packet.module_id = module_id;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_CRC);
}

/**
 * @brief Pack a onboard_module_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [us] Timestamp (UNIX time or time since system boot).
 * @param module_id  Module this status is for.
 * @param state  Module state: each module reports only the states it has, each as the closest MAV_STATE (see the ONBOARD_MODULE entry; one-word labels in AvesCORE docs/SKYRON/ONBOARD_MODULE_STATUS.md). LED by state, same for every module: UNINIT grey, BOOT blinking green, STANDBY grey, ACTIVE green, CRITICAL yellow, EMERGENCY red.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_module_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint16_t module_id, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint16_t(buf, 8, module_id);
    _mav_put_uint8_t(buf, 10, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN);
#else
    mavlink_onboard_module_status_t packet;
    packet.timestamp = timestamp;
    packet.module_id = module_id;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN);
#endif
}

/**
 * @brief Pack a onboard_module_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp [us] Timestamp (UNIX time or time since system boot).
 * @param module_id  Module this status is for.
 * @param state  Module state: each module reports only the states it has, each as the closest MAV_STATE (see the ONBOARD_MODULE entry; one-word labels in AvesCORE docs/SKYRON/ONBOARD_MODULE_STATUS.md). LED by state, same for every module: UNINIT grey, BOOT blinking green, STANDBY grey, ACTIVE green, CRITICAL yellow, EMERGENCY red.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_module_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint16_t module_id,uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint16_t(buf, 8, module_id);
    _mav_put_uint8_t(buf, 10, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN);
#else
    mavlink_onboard_module_status_t packet;
    packet.timestamp = timestamp;
    packet.module_id = module_id;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_CRC);
}

/**
 * @brief Encode a onboard_module_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param onboard_module_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_module_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_onboard_module_status_t* onboard_module_status)
{
    return mavlink_msg_onboard_module_status_pack(system_id, component_id, msg, onboard_module_status->timestamp, onboard_module_status->module_id, onboard_module_status->state);
}

/**
 * @brief Encode a onboard_module_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param onboard_module_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_module_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_onboard_module_status_t* onboard_module_status)
{
    return mavlink_msg_onboard_module_status_pack_chan(system_id, component_id, chan, msg, onboard_module_status->timestamp, onboard_module_status->module_id, onboard_module_status->state);
}

/**
 * @brief Encode a onboard_module_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param onboard_module_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_module_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_onboard_module_status_t* onboard_module_status)
{
    return mavlink_msg_onboard_module_status_pack_status(system_id, component_id, _status, msg,  onboard_module_status->timestamp, onboard_module_status->module_id, onboard_module_status->state);
}

/**
 * @brief Send a onboard_module_status message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp [us] Timestamp (UNIX time or time since system boot).
 * @param module_id  Module this status is for.
 * @param state  Module state: each module reports only the states it has, each as the closest MAV_STATE (see the ONBOARD_MODULE entry; one-word labels in AvesCORE docs/SKYRON/ONBOARD_MODULE_STATUS.md). LED by state, same for every module: UNINIT grey, BOOT blinking green, STANDBY grey, ACTIVE green, CRITICAL yellow, EMERGENCY red.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_onboard_module_status_send(mavlink_channel_t chan, uint64_t timestamp, uint16_t module_id, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint16_t(buf, 8, module_id);
    _mav_put_uint8_t(buf, 10, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS, buf, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_CRC);
#else
    mavlink_onboard_module_status_t packet;
    packet.timestamp = timestamp;
    packet.module_id = module_id;
    packet.state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS, (const char *)&packet, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_CRC);
#endif
}

/**
 * @brief Send a onboard_module_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_onboard_module_status_send_struct(mavlink_channel_t chan, const mavlink_onboard_module_status_t* onboard_module_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_onboard_module_status_send(chan, onboard_module_status->timestamp, onboard_module_status->module_id, onboard_module_status->state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS, (const char *)onboard_module_status, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_onboard_module_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint16_t module_id, uint8_t state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint16_t(buf, 8, module_id);
    _mav_put_uint8_t(buf, 10, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS, buf, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_CRC);
#else
    mavlink_onboard_module_status_t *packet = (mavlink_onboard_module_status_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->module_id = module_id;
    packet->state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS, (const char *)packet, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ONBOARD_MODULE_STATUS UNPACKING


/**
 * @brief Get field timestamp from onboard_module_status message
 *
 * @return [us] Timestamp (UNIX time or time since system boot).
 */
static inline uint64_t mavlink_msg_onboard_module_status_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field module_id from onboard_module_status message
 *
 * @return  Module this status is for.
 */
static inline uint16_t mavlink_msg_onboard_module_status_get_module_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field state from onboard_module_status message
 *
 * @return  Module state: each module reports only the states it has, each as the closest MAV_STATE (see the ONBOARD_MODULE entry; one-word labels in AvesCORE docs/SKYRON/ONBOARD_MODULE_STATUS.md). LED by state, same for every module: UNINIT grey, BOOT blinking green, STANDBY grey, ACTIVE green, CRITICAL yellow, EMERGENCY red.
 */
static inline uint8_t mavlink_msg_onboard_module_status_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Decode a onboard_module_status message into a struct
 *
 * @param msg The message to decode
 * @param onboard_module_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_onboard_module_status_decode(const mavlink_message_t* msg, mavlink_onboard_module_status_t* onboard_module_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    onboard_module_status->timestamp = mavlink_msg_onboard_module_status_get_timestamp(msg);
    onboard_module_status->module_id = mavlink_msg_onboard_module_status_get_module_id(msg);
    onboard_module_status->state = mavlink_msg_onboard_module_status_get_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN? msg->len : MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN;
        memset(onboard_module_status, 0, MAVLINK_MSG_ID_ONBOARD_MODULE_STATUS_LEN);
    memcpy(onboard_module_status, _MAV_PAYLOAD(msg), len);
#endif
}
