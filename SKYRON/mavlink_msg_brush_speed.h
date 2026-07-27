#pragma once
// MESSAGE BRUSH_SPEED PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_BRUSH_SPEED 3365


typedef struct __mavlink_brush_speed_t {
 int32_t TPS; /*<  Surface prep brush speed in turns per second.*/
} mavlink_brush_speed_t;

#define MAVLINK_MSG_ID_BRUSH_SPEED_LEN 4
#define MAVLINK_MSG_ID_BRUSH_SPEED_MIN_LEN 4
#define MAVLINK_MSG_ID_3365_LEN 4
#define MAVLINK_MSG_ID_3365_MIN_LEN 4

#define MAVLINK_MSG_ID_BRUSH_SPEED_CRC 200
#define MAVLINK_MSG_ID_3365_CRC 200



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BRUSH_SPEED { \
    3365, \
    "BRUSH_SPEED", \
    1, \
    {  { "TPS", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_brush_speed_t, TPS) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BRUSH_SPEED { \
    "BRUSH_SPEED", \
    1, \
    {  { "TPS", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_brush_speed_t, TPS) }, \
         } \
}
#endif

/**
 * @brief Pack a brush_speed message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TPS  Surface prep brush speed in turns per second.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_brush_speed_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t TPS)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BRUSH_SPEED_LEN];
    _mav_put_int32_t(buf, 0, TPS);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BRUSH_SPEED_LEN);
#else
    mavlink_brush_speed_t packet;
    packet.TPS = TPS;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BRUSH_SPEED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BRUSH_SPEED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BRUSH_SPEED_MIN_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_CRC);
}

/**
 * @brief Pack a brush_speed message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param TPS  Surface prep brush speed in turns per second.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_brush_speed_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t TPS)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BRUSH_SPEED_LEN];
    _mav_put_int32_t(buf, 0, TPS);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BRUSH_SPEED_LEN);
#else
    mavlink_brush_speed_t packet;
    packet.TPS = TPS;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BRUSH_SPEED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BRUSH_SPEED;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_BRUSH_SPEED_MIN_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_BRUSH_SPEED_MIN_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_LEN);
#endif
}

/**
 * @brief Pack a brush_speed message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TPS  Surface prep brush speed in turns per second.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_brush_speed_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t TPS)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BRUSH_SPEED_LEN];
    _mav_put_int32_t(buf, 0, TPS);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BRUSH_SPEED_LEN);
#else
    mavlink_brush_speed_t packet;
    packet.TPS = TPS;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BRUSH_SPEED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BRUSH_SPEED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BRUSH_SPEED_MIN_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_CRC);
}

/**
 * @brief Encode a brush_speed struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param brush_speed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_brush_speed_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_brush_speed_t* brush_speed)
{
    return mavlink_msg_brush_speed_pack(system_id, component_id, msg, brush_speed->TPS);
}

/**
 * @brief Encode a brush_speed struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param brush_speed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_brush_speed_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_brush_speed_t* brush_speed)
{
    return mavlink_msg_brush_speed_pack_chan(system_id, component_id, chan, msg, brush_speed->TPS);
}

/**
 * @brief Encode a brush_speed struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param brush_speed C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_brush_speed_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_brush_speed_t* brush_speed)
{
    return mavlink_msg_brush_speed_pack_status(system_id, component_id, _status, msg,  brush_speed->TPS);
}

/**
 * @brief Send a brush_speed message
 * @param chan MAVLink channel to send the message
 *
 * @param TPS  Surface prep brush speed in turns per second.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_brush_speed_send(mavlink_channel_t chan, int32_t TPS)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BRUSH_SPEED_LEN];
    _mav_put_int32_t(buf, 0, TPS);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BRUSH_SPEED, buf, MAVLINK_MSG_ID_BRUSH_SPEED_MIN_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_CRC);
#else
    mavlink_brush_speed_t packet;
    packet.TPS = TPS;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BRUSH_SPEED, (const char *)&packet, MAVLINK_MSG_ID_BRUSH_SPEED_MIN_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_CRC);
#endif
}

/**
 * @brief Send a brush_speed message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_brush_speed_send_struct(mavlink_channel_t chan, const mavlink_brush_speed_t* brush_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_brush_speed_send(chan, brush_speed->TPS);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BRUSH_SPEED, (const char *)brush_speed, MAVLINK_MSG_ID_BRUSH_SPEED_MIN_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_CRC);
#endif
}

#if MAVLINK_MSG_ID_BRUSH_SPEED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_brush_speed_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t TPS)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, TPS);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BRUSH_SPEED, buf, MAVLINK_MSG_ID_BRUSH_SPEED_MIN_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_CRC);
#else
    mavlink_brush_speed_t *packet = (mavlink_brush_speed_t *)msgbuf;
    packet->TPS = TPS;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BRUSH_SPEED, (const char *)packet, MAVLINK_MSG_ID_BRUSH_SPEED_MIN_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_LEN, MAVLINK_MSG_ID_BRUSH_SPEED_CRC);
#endif
}
#endif

#endif

// MESSAGE BRUSH_SPEED UNPACKING


/**
 * @brief Get field TPS from brush_speed message
 *
 * @return  Surface prep brush speed in turns per second.
 */
static inline int32_t mavlink_msg_brush_speed_get_TPS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Decode a brush_speed message into a struct
 *
 * @param msg The message to decode
 * @param brush_speed C-struct to decode the message contents into
 */
static inline void mavlink_msg_brush_speed_decode(const mavlink_message_t* msg, mavlink_brush_speed_t* brush_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    brush_speed->TPS = mavlink_msg_brush_speed_get_TPS(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BRUSH_SPEED_LEN? msg->len : MAVLINK_MSG_ID_BRUSH_SPEED_LEN;
        memset(brush_speed, 0, MAVLINK_MSG_ID_BRUSH_SPEED_LEN);
    memcpy(brush_speed, _MAV_PAYLOAD(msg), len);
#endif
}
