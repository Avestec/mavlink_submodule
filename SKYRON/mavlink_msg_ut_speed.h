#pragma once
// MESSAGE UT_Speed PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_UT_Speed 3339


typedef struct __mavlink_ut_speed_t {
 uint16_t Speed; /*<  uint16_t*/
} mavlink_ut_speed_t;

#define MAVLINK_MSG_ID_UT_Speed_LEN 2
#define MAVLINK_MSG_ID_UT_Speed_MIN_LEN 2
#define MAVLINK_MSG_ID_3339_LEN 2
#define MAVLINK_MSG_ID_3339_MIN_LEN 2

#define MAVLINK_MSG_ID_UT_Speed_CRC 191
#define MAVLINK_MSG_ID_3339_CRC 191



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UT_Speed { \
    3339, \
    "UT_Speed", \
    1, \
    {  { "Speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ut_speed_t, Speed) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UT_Speed { \
    "UT_Speed", \
    1, \
    {  { "Speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ut_speed_t, Speed) }, \
         } \
}
#endif

/**
 * @brief Pack a ut_speed message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Speed  uint16_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ut_speed_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t Speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UT_Speed_LEN];
    _mav_put_uint16_t(buf, 0, Speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UT_Speed_LEN);
#else
    mavlink_ut_speed_t packet;
    packet.Speed = Speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UT_Speed_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UT_Speed;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UT_Speed_MIN_LEN, MAVLINK_MSG_ID_UT_Speed_LEN, MAVLINK_MSG_ID_UT_Speed_CRC);
}

/**
 * @brief Pack a ut_speed message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param Speed  uint16_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ut_speed_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t Speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UT_Speed_LEN];
    _mav_put_uint16_t(buf, 0, Speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UT_Speed_LEN);
#else
    mavlink_ut_speed_t packet;
    packet.Speed = Speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UT_Speed_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UT_Speed;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UT_Speed_MIN_LEN, MAVLINK_MSG_ID_UT_Speed_LEN, MAVLINK_MSG_ID_UT_Speed_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UT_Speed_MIN_LEN, MAVLINK_MSG_ID_UT_Speed_LEN);
#endif
}

/**
 * @brief Pack a ut_speed message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Speed  uint16_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ut_speed_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t Speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UT_Speed_LEN];
    _mav_put_uint16_t(buf, 0, Speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UT_Speed_LEN);
#else
    mavlink_ut_speed_t packet;
    packet.Speed = Speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UT_Speed_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UT_Speed;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UT_Speed_MIN_LEN, MAVLINK_MSG_ID_UT_Speed_LEN, MAVLINK_MSG_ID_UT_Speed_CRC);
}

/**
 * @brief Encode a ut_speed struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ut_speed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ut_speed_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ut_speed_t* ut_speed)
{
    return mavlink_msg_ut_speed_pack(system_id, component_id, msg, ut_speed->Speed);
}

/**
 * @brief Encode a ut_speed struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ut_speed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ut_speed_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ut_speed_t* ut_speed)
{
    return mavlink_msg_ut_speed_pack_chan(system_id, component_id, chan, msg, ut_speed->Speed);
}

/**
 * @brief Encode a ut_speed struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ut_speed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ut_speed_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ut_speed_t* ut_speed)
{
    return mavlink_msg_ut_speed_pack_status(system_id, component_id, _status, msg,  ut_speed->Speed);
}

/**
 * @brief Send a ut_speed message
 * @param chan MAVLink channel to send the message
 *
 * @param Speed  uint16_t
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ut_speed_send(mavlink_channel_t chan, uint16_t Speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UT_Speed_LEN];
    _mav_put_uint16_t(buf, 0, Speed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Speed, buf, MAVLINK_MSG_ID_UT_Speed_MIN_LEN, MAVLINK_MSG_ID_UT_Speed_LEN, MAVLINK_MSG_ID_UT_Speed_CRC);
#else
    mavlink_ut_speed_t packet;
    packet.Speed = Speed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Speed, (const char *)&packet, MAVLINK_MSG_ID_UT_Speed_MIN_LEN, MAVLINK_MSG_ID_UT_Speed_LEN, MAVLINK_MSG_ID_UT_Speed_CRC);
#endif
}

/**
 * @brief Send a ut_speed message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ut_speed_send_struct(mavlink_channel_t chan, const mavlink_ut_speed_t* ut_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ut_speed_send(chan, ut_speed->Speed);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Speed, (const char *)ut_speed, MAVLINK_MSG_ID_UT_Speed_MIN_LEN, MAVLINK_MSG_ID_UT_Speed_LEN, MAVLINK_MSG_ID_UT_Speed_CRC);
#endif
}

#if MAVLINK_MSG_ID_UT_Speed_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ut_speed_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t Speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, Speed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Speed, buf, MAVLINK_MSG_ID_UT_Speed_MIN_LEN, MAVLINK_MSG_ID_UT_Speed_LEN, MAVLINK_MSG_ID_UT_Speed_CRC);
#else
    mavlink_ut_speed_t *packet = (mavlink_ut_speed_t *)msgbuf;
    packet->Speed = Speed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Speed, (const char *)packet, MAVLINK_MSG_ID_UT_Speed_MIN_LEN, MAVLINK_MSG_ID_UT_Speed_LEN, MAVLINK_MSG_ID_UT_Speed_CRC);
#endif
}
#endif

#endif

// MESSAGE UT_Speed UNPACKING


/**
 * @brief Get field Speed from ut_speed message
 *
 * @return  uint16_t
 */
static inline uint16_t mavlink_msg_ut_speed_get_Speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a ut_speed message into a struct
 *
 * @param msg The message to decode
 * @param ut_speed C-struct to decode the message contents into
 */
static inline void mavlink_msg_ut_speed_decode(const mavlink_message_t* msg, mavlink_ut_speed_t* ut_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ut_speed->Speed = mavlink_msg_ut_speed_get_Speed(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UT_Speed_LEN? msg->len : MAVLINK_MSG_ID_UT_Speed_LEN;
        memset(ut_speed, 0, MAVLINK_MSG_ID_UT_Speed_LEN);
    memcpy(ut_speed, _MAV_PAYLOAD(msg), len);
#endif
}
