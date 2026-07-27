#pragma once
// MESSAGE TWOD_LIDAR PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_TWOD_LIDAR 3369


typedef struct __mavlink_twod_lidar_t {
 uint8_t distance_buffer[128]; /*<  Array of distance measurements[8 by 16] from the 2D LIDAR sensor. Unit in mm*/
} mavlink_twod_lidar_t;

#define MAVLINK_MSG_ID_TWOD_LIDAR_LEN 128
#define MAVLINK_MSG_ID_TWOD_LIDAR_MIN_LEN 128
#define MAVLINK_MSG_ID_3369_LEN 128
#define MAVLINK_MSG_ID_3369_MIN_LEN 128

#define MAVLINK_MSG_ID_TWOD_LIDAR_CRC 227
#define MAVLINK_MSG_ID_3369_CRC 227

#define MAVLINK_MSG_TWOD_LIDAR_FIELD_DISTANCE_BUFFER_LEN 128

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TWOD_LIDAR { \
    3369, \
    "TWOD_LIDAR", \
    1, \
    {  { "distance_buffer", NULL, MAVLINK_TYPE_UINT8_T, 128, 0, offsetof(mavlink_twod_lidar_t, distance_buffer) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TWOD_LIDAR { \
    "TWOD_LIDAR", \
    1, \
    {  { "distance_buffer", NULL, MAVLINK_TYPE_UINT8_T, 128, 0, offsetof(mavlink_twod_lidar_t, distance_buffer) }, \
         } \
}
#endif

/**
 * @brief Pack a twod_lidar message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param distance_buffer  Array of distance measurements[8 by 16] from the 2D LIDAR sensor. Unit in mm
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_twod_lidar_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const uint8_t *distance_buffer)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TWOD_LIDAR_LEN];

    _mav_put_uint8_t_array(buf, 0, distance_buffer, 128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TWOD_LIDAR_LEN);
#else
    mavlink_twod_lidar_t packet;

    mav_array_memcpy(packet.distance_buffer, distance_buffer, sizeof(uint8_t)*128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TWOD_LIDAR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TWOD_LIDAR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TWOD_LIDAR_MIN_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_CRC);
}

/**
 * @brief Pack a twod_lidar message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param distance_buffer  Array of distance measurements[8 by 16] from the 2D LIDAR sensor. Unit in mm
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_twod_lidar_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const uint8_t *distance_buffer)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TWOD_LIDAR_LEN];

    _mav_put_uint8_t_array(buf, 0, distance_buffer, 128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TWOD_LIDAR_LEN);
#else
    mavlink_twod_lidar_t packet;

    mav_array_memcpy(packet.distance_buffer, distance_buffer, sizeof(uint8_t)*128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TWOD_LIDAR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TWOD_LIDAR;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TWOD_LIDAR_MIN_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TWOD_LIDAR_MIN_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_LEN);
#endif
}

/**
 * @brief Pack a twod_lidar message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param distance_buffer  Array of distance measurements[8 by 16] from the 2D LIDAR sensor. Unit in mm
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_twod_lidar_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const uint8_t *distance_buffer)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TWOD_LIDAR_LEN];

    _mav_put_uint8_t_array(buf, 0, distance_buffer, 128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TWOD_LIDAR_LEN);
#else
    mavlink_twod_lidar_t packet;

    mav_array_memcpy(packet.distance_buffer, distance_buffer, sizeof(uint8_t)*128);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TWOD_LIDAR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TWOD_LIDAR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TWOD_LIDAR_MIN_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_CRC);
}

/**
 * @brief Encode a twod_lidar struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param twod_lidar C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_twod_lidar_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_twod_lidar_t* twod_lidar)
{
    return mavlink_msg_twod_lidar_pack(system_id, component_id, msg, twod_lidar->distance_buffer);
}

/**
 * @brief Encode a twod_lidar struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param twod_lidar C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_twod_lidar_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_twod_lidar_t* twod_lidar)
{
    return mavlink_msg_twod_lidar_pack_chan(system_id, component_id, chan, msg, twod_lidar->distance_buffer);
}

/**
 * @brief Encode a twod_lidar struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param twod_lidar C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_twod_lidar_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_twod_lidar_t* twod_lidar)
{
    return mavlink_msg_twod_lidar_pack_status(system_id, component_id, _status, msg,  twod_lidar->distance_buffer);
}

/**
 * @brief Send a twod_lidar message
 * @param chan MAVLink channel to send the message
 *
 * @param distance_buffer  Array of distance measurements[8 by 16] from the 2D LIDAR sensor. Unit in mm
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_twod_lidar_send(mavlink_channel_t chan, const uint8_t *distance_buffer)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TWOD_LIDAR_LEN];

    _mav_put_uint8_t_array(buf, 0, distance_buffer, 128);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TWOD_LIDAR, buf, MAVLINK_MSG_ID_TWOD_LIDAR_MIN_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_CRC);
#else
    mavlink_twod_lidar_t packet;

    mav_array_memcpy(packet.distance_buffer, distance_buffer, sizeof(uint8_t)*128);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TWOD_LIDAR, (const char *)&packet, MAVLINK_MSG_ID_TWOD_LIDAR_MIN_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_CRC);
#endif
}

/**
 * @brief Send a twod_lidar message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_twod_lidar_send_struct(mavlink_channel_t chan, const mavlink_twod_lidar_t* twod_lidar)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_twod_lidar_send(chan, twod_lidar->distance_buffer);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TWOD_LIDAR, (const char *)twod_lidar, MAVLINK_MSG_ID_TWOD_LIDAR_MIN_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_CRC);
#endif
}

#if MAVLINK_MSG_ID_TWOD_LIDAR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_twod_lidar_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *distance_buffer)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_uint8_t_array(buf, 0, distance_buffer, 128);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TWOD_LIDAR, buf, MAVLINK_MSG_ID_TWOD_LIDAR_MIN_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_CRC);
#else
    mavlink_twod_lidar_t *packet = (mavlink_twod_lidar_t *)msgbuf;

    mav_array_memcpy(packet->distance_buffer, distance_buffer, sizeof(uint8_t)*128);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TWOD_LIDAR, (const char *)packet, MAVLINK_MSG_ID_TWOD_LIDAR_MIN_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_LEN, MAVLINK_MSG_ID_TWOD_LIDAR_CRC);
#endif
}
#endif

#endif

// MESSAGE TWOD_LIDAR UNPACKING


/**
 * @brief Get field distance_buffer from twod_lidar message
 *
 * @return  Array of distance measurements[8 by 16] from the 2D LIDAR sensor. Unit in mm
 */
static inline uint16_t mavlink_msg_twod_lidar_get_distance_buffer(const mavlink_message_t* msg, uint8_t *distance_buffer)
{
    return _MAV_RETURN_uint8_t_array(msg, distance_buffer, 128,  0);
}

/**
 * @brief Decode a twod_lidar message into a struct
 *
 * @param msg The message to decode
 * @param twod_lidar C-struct to decode the message contents into
 */
static inline void mavlink_msg_twod_lidar_decode(const mavlink_message_t* msg, mavlink_twod_lidar_t* twod_lidar)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_twod_lidar_get_distance_buffer(msg, twod_lidar->distance_buffer);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TWOD_LIDAR_LEN? msg->len : MAVLINK_MSG_ID_TWOD_LIDAR_LEN;
        memset(twod_lidar, 0, MAVLINK_MSG_ID_TWOD_LIDAR_LEN);
    memcpy(twod_lidar, _MAV_PAYLOAD(msg), len);
#endif
}
