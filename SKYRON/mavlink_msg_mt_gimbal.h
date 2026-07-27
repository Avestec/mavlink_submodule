#pragma once
// MESSAGE MT_Gimbal PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_MT_Gimbal 3335


typedef struct __mavlink_mt_gimbal_t {
 float Movement; /*<  float*/
 uint8_t Home; /*<  uint8_t*/
} mavlink_mt_gimbal_t;

#define MAVLINK_MSG_ID_MT_Gimbal_LEN 5
#define MAVLINK_MSG_ID_MT_Gimbal_MIN_LEN 5
#define MAVLINK_MSG_ID_3335_LEN 5
#define MAVLINK_MSG_ID_3335_MIN_LEN 5

#define MAVLINK_MSG_ID_MT_Gimbal_CRC 16
#define MAVLINK_MSG_ID_3335_CRC 16



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MT_Gimbal { \
    3335, \
    "MT_Gimbal", \
    2, \
    {  { "Movement", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_mt_gimbal_t, Movement) }, \
         { "Home", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_mt_gimbal_t, Home) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MT_Gimbal { \
    "MT_Gimbal", \
    2, \
    {  { "Movement", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_mt_gimbal_t, Movement) }, \
         { "Home", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_mt_gimbal_t, Home) }, \
         } \
}
#endif

/**
 * @brief Pack a mt_gimbal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Movement  float
 * @param Home  uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mt_gimbal_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float Movement, uint8_t Home)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MT_Gimbal_LEN];
    _mav_put_float(buf, 0, Movement);
    _mav_put_uint8_t(buf, 4, Home);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MT_Gimbal_LEN);
#else
    mavlink_mt_gimbal_t packet;
    packet.Movement = Movement;
    packet.Home = Home;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MT_Gimbal_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MT_Gimbal;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MT_Gimbal_MIN_LEN, MAVLINK_MSG_ID_MT_Gimbal_LEN, MAVLINK_MSG_ID_MT_Gimbal_CRC);
}

/**
 * @brief Pack a mt_gimbal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param Movement  float
 * @param Home  uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mt_gimbal_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float Movement, uint8_t Home)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MT_Gimbal_LEN];
    _mav_put_float(buf, 0, Movement);
    _mav_put_uint8_t(buf, 4, Home);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MT_Gimbal_LEN);
#else
    mavlink_mt_gimbal_t packet;
    packet.Movement = Movement;
    packet.Home = Home;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MT_Gimbal_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MT_Gimbal;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MT_Gimbal_MIN_LEN, MAVLINK_MSG_ID_MT_Gimbal_LEN, MAVLINK_MSG_ID_MT_Gimbal_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MT_Gimbal_MIN_LEN, MAVLINK_MSG_ID_MT_Gimbal_LEN);
#endif
}

/**
 * @brief Pack a mt_gimbal message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Movement  float
 * @param Home  uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mt_gimbal_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float Movement,uint8_t Home)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MT_Gimbal_LEN];
    _mav_put_float(buf, 0, Movement);
    _mav_put_uint8_t(buf, 4, Home);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MT_Gimbal_LEN);
#else
    mavlink_mt_gimbal_t packet;
    packet.Movement = Movement;
    packet.Home = Home;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MT_Gimbal_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MT_Gimbal;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MT_Gimbal_MIN_LEN, MAVLINK_MSG_ID_MT_Gimbal_LEN, MAVLINK_MSG_ID_MT_Gimbal_CRC);
}

/**
 * @brief Encode a mt_gimbal struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mt_gimbal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mt_gimbal_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mt_gimbal_t* mt_gimbal)
{
    return mavlink_msg_mt_gimbal_pack(system_id, component_id, msg, mt_gimbal->Movement, mt_gimbal->Home);
}

/**
 * @brief Encode a mt_gimbal struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mt_gimbal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mt_gimbal_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mt_gimbal_t* mt_gimbal)
{
    return mavlink_msg_mt_gimbal_pack_chan(system_id, component_id, chan, msg, mt_gimbal->Movement, mt_gimbal->Home);
}

/**
 * @brief Encode a mt_gimbal struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param mt_gimbal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mt_gimbal_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_mt_gimbal_t* mt_gimbal)
{
    return mavlink_msg_mt_gimbal_pack_status(system_id, component_id, _status, msg,  mt_gimbal->Movement, mt_gimbal->Home);
}

/**
 * @brief Send a mt_gimbal message
 * @param chan MAVLink channel to send the message
 *
 * @param Movement  float
 * @param Home  uint8_t
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mt_gimbal_send(mavlink_channel_t chan, float Movement, uint8_t Home)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MT_Gimbal_LEN];
    _mav_put_float(buf, 0, Movement);
    _mav_put_uint8_t(buf, 4, Home);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MT_Gimbal, buf, MAVLINK_MSG_ID_MT_Gimbal_MIN_LEN, MAVLINK_MSG_ID_MT_Gimbal_LEN, MAVLINK_MSG_ID_MT_Gimbal_CRC);
#else
    mavlink_mt_gimbal_t packet;
    packet.Movement = Movement;
    packet.Home = Home;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MT_Gimbal, (const char *)&packet, MAVLINK_MSG_ID_MT_Gimbal_MIN_LEN, MAVLINK_MSG_ID_MT_Gimbal_LEN, MAVLINK_MSG_ID_MT_Gimbal_CRC);
#endif
}

/**
 * @brief Send a mt_gimbal message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mt_gimbal_send_struct(mavlink_channel_t chan, const mavlink_mt_gimbal_t* mt_gimbal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mt_gimbal_send(chan, mt_gimbal->Movement, mt_gimbal->Home);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MT_Gimbal, (const char *)mt_gimbal, MAVLINK_MSG_ID_MT_Gimbal_MIN_LEN, MAVLINK_MSG_ID_MT_Gimbal_LEN, MAVLINK_MSG_ID_MT_Gimbal_CRC);
#endif
}

#if MAVLINK_MSG_ID_MT_Gimbal_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mt_gimbal_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float Movement, uint8_t Home)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, Movement);
    _mav_put_uint8_t(buf, 4, Home);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MT_Gimbal, buf, MAVLINK_MSG_ID_MT_Gimbal_MIN_LEN, MAVLINK_MSG_ID_MT_Gimbal_LEN, MAVLINK_MSG_ID_MT_Gimbal_CRC);
#else
    mavlink_mt_gimbal_t *packet = (mavlink_mt_gimbal_t *)msgbuf;
    packet->Movement = Movement;
    packet->Home = Home;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MT_Gimbal, (const char *)packet, MAVLINK_MSG_ID_MT_Gimbal_MIN_LEN, MAVLINK_MSG_ID_MT_Gimbal_LEN, MAVLINK_MSG_ID_MT_Gimbal_CRC);
#endif
}
#endif

#endif

// MESSAGE MT_Gimbal UNPACKING


/**
 * @brief Get field Movement from mt_gimbal message
 *
 * @return  float
 */
static inline float mavlink_msg_mt_gimbal_get_Movement(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field Home from mt_gimbal message
 *
 * @return  uint8_t
 */
static inline uint8_t mavlink_msg_mt_gimbal_get_Home(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a mt_gimbal message into a struct
 *
 * @param msg The message to decode
 * @param mt_gimbal C-struct to decode the message contents into
 */
static inline void mavlink_msg_mt_gimbal_decode(const mavlink_message_t* msg, mavlink_mt_gimbal_t* mt_gimbal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mt_gimbal->Movement = mavlink_msg_mt_gimbal_get_Movement(msg);
    mt_gimbal->Home = mavlink_msg_mt_gimbal_get_Home(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MT_Gimbal_LEN? msg->len : MAVLINK_MSG_ID_MT_Gimbal_LEN;
        memset(mt_gimbal, 0, MAVLINK_MSG_ID_MT_Gimbal_LEN);
    memcpy(mt_gimbal, _MAV_PAYLOAD(msg), len);
#endif
}
