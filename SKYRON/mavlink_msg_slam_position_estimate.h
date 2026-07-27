#pragma once
// MESSAGE SLAM_POSITION_ESTIMATE PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE 3351


typedef struct __mavlink_slam_position_estimate_t {
 uint64_t usec; /*< [us] Timestamp (UNIX time or time since system boot)*/
 float x; /*< [m] SLAM X position*/
 float y; /*< [m] SLAM Y position*/
 float z; /*< [m] SLAM Z position*/
 float q1; /*<  Quaternion component 1, w (1 in null-rotation)*/
 float q2; /*<  Quaternion component 2, x (0 in null-rotation)*/
 float q3; /*<  Quaternion component 3, y (0 in null-rotation)*/
 float q4; /*<  Quaternion component 4, z (0 in null-rotation)*/
} mavlink_slam_position_estimate_t;

#define MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN 36
#define MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_MIN_LEN 36
#define MAVLINK_MSG_ID_3351_LEN 36
#define MAVLINK_MSG_ID_3351_MIN_LEN 36

#define MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_CRC 203
#define MAVLINK_MSG_ID_3351_CRC 203



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SLAM_POSITION_ESTIMATE { \
    3351, \
    "SLAM_POSITION_ESTIMATE", \
    8, \
    {  { "usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_slam_position_estimate_t, usec) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_slam_position_estimate_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_slam_position_estimate_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_slam_position_estimate_t, z) }, \
         { "q1", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_slam_position_estimate_t, q1) }, \
         { "q2", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_slam_position_estimate_t, q2) }, \
         { "q3", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_slam_position_estimate_t, q3) }, \
         { "q4", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_slam_position_estimate_t, q4) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SLAM_POSITION_ESTIMATE { \
    "SLAM_POSITION_ESTIMATE", \
    8, \
    {  { "usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_slam_position_estimate_t, usec) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_slam_position_estimate_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_slam_position_estimate_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_slam_position_estimate_t, z) }, \
         { "q1", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_slam_position_estimate_t, q1) }, \
         { "q2", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_slam_position_estimate_t, q2) }, \
         { "q3", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_slam_position_estimate_t, q3) }, \
         { "q4", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_slam_position_estimate_t, q4) }, \
         } \
}
#endif

/**
 * @brief Pack a slam_position_estimate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param usec [us] Timestamp (UNIX time or time since system boot)
 * @param x [m] SLAM X position
 * @param y [m] SLAM Y position
 * @param z [m] SLAM Z position
 * @param q1  Quaternion component 1, w (1 in null-rotation)
 * @param q2  Quaternion component 2, x (0 in null-rotation)
 * @param q3  Quaternion component 3, y (0 in null-rotation)
 * @param q4  Quaternion component 4, z (0 in null-rotation)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_slam_position_estimate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t usec, float x, float y, float z, float q1, float q2, float q3, float q4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN];
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 20, q1);
    _mav_put_float(buf, 24, q2);
    _mav_put_float(buf, 28, q3);
    _mav_put_float(buf, 32, q4);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN);
#else
    mavlink_slam_position_estimate_t packet;
    packet.usec = usec;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.q1 = q1;
    packet.q2 = q2;
    packet.q3 = q3;
    packet.q4 = q4;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_CRC);
}

/**
 * @brief Pack a slam_position_estimate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param usec [us] Timestamp (UNIX time or time since system boot)
 * @param x [m] SLAM X position
 * @param y [m] SLAM Y position
 * @param z [m] SLAM Z position
 * @param q1  Quaternion component 1, w (1 in null-rotation)
 * @param q2  Quaternion component 2, x (0 in null-rotation)
 * @param q3  Quaternion component 3, y (0 in null-rotation)
 * @param q4  Quaternion component 4, z (0 in null-rotation)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_slam_position_estimate_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t usec, float x, float y, float z, float q1, float q2, float q3, float q4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN];
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 20, q1);
    _mav_put_float(buf, 24, q2);
    _mav_put_float(buf, 28, q3);
    _mav_put_float(buf, 32, q4);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN);
#else
    mavlink_slam_position_estimate_t packet;
    packet.usec = usec;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.q1 = q1;
    packet.q2 = q2;
    packet.q3 = q3;
    packet.q4 = q4;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN);
#endif
}

/**
 * @brief Pack a slam_position_estimate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param usec [us] Timestamp (UNIX time or time since system boot)
 * @param x [m] SLAM X position
 * @param y [m] SLAM Y position
 * @param z [m] SLAM Z position
 * @param q1  Quaternion component 1, w (1 in null-rotation)
 * @param q2  Quaternion component 2, x (0 in null-rotation)
 * @param q3  Quaternion component 3, y (0 in null-rotation)
 * @param q4  Quaternion component 4, z (0 in null-rotation)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_slam_position_estimate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t usec,float x,float y,float z,float q1,float q2,float q3,float q4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN];
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 20, q1);
    _mav_put_float(buf, 24, q2);
    _mav_put_float(buf, 28, q3);
    _mav_put_float(buf, 32, q4);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN);
#else
    mavlink_slam_position_estimate_t packet;
    packet.usec = usec;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.q1 = q1;
    packet.q2 = q2;
    packet.q3 = q3;
    packet.q4 = q4;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_CRC);
}

/**
 * @brief Encode a slam_position_estimate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param slam_position_estimate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_slam_position_estimate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_slam_position_estimate_t* slam_position_estimate)
{
    return mavlink_msg_slam_position_estimate_pack(system_id, component_id, msg, slam_position_estimate->usec, slam_position_estimate->x, slam_position_estimate->y, slam_position_estimate->z, slam_position_estimate->q1, slam_position_estimate->q2, slam_position_estimate->q3, slam_position_estimate->q4);
}

/**
 * @brief Encode a slam_position_estimate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param slam_position_estimate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_slam_position_estimate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_slam_position_estimate_t* slam_position_estimate)
{
    return mavlink_msg_slam_position_estimate_pack_chan(system_id, component_id, chan, msg, slam_position_estimate->usec, slam_position_estimate->x, slam_position_estimate->y, slam_position_estimate->z, slam_position_estimate->q1, slam_position_estimate->q2, slam_position_estimate->q3, slam_position_estimate->q4);
}

/**
 * @brief Encode a slam_position_estimate struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param slam_position_estimate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_slam_position_estimate_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_slam_position_estimate_t* slam_position_estimate)
{
    return mavlink_msg_slam_position_estimate_pack_status(system_id, component_id, _status, msg,  slam_position_estimate->usec, slam_position_estimate->x, slam_position_estimate->y, slam_position_estimate->z, slam_position_estimate->q1, slam_position_estimate->q2, slam_position_estimate->q3, slam_position_estimate->q4);
}

/**
 * @brief Send a slam_position_estimate message
 * @param chan MAVLink channel to send the message
 *
 * @param usec [us] Timestamp (UNIX time or time since system boot)
 * @param x [m] SLAM X position
 * @param y [m] SLAM Y position
 * @param z [m] SLAM Z position
 * @param q1  Quaternion component 1, w (1 in null-rotation)
 * @param q2  Quaternion component 2, x (0 in null-rotation)
 * @param q3  Quaternion component 3, y (0 in null-rotation)
 * @param q4  Quaternion component 4, z (0 in null-rotation)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_slam_position_estimate_send(mavlink_channel_t chan, uint64_t usec, float x, float y, float z, float q1, float q2, float q3, float q4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN];
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 20, q1);
    _mav_put_float(buf, 24, q2);
    _mav_put_float(buf, 28, q3);
    _mav_put_float(buf, 32, q4);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE, buf, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_CRC);
#else
    mavlink_slam_position_estimate_t packet;
    packet.usec = usec;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.q1 = q1;
    packet.q2 = q2;
    packet.q3 = q3;
    packet.q4 = q4;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE, (const char *)&packet, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_CRC);
#endif
}

/**
 * @brief Send a slam_position_estimate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_slam_position_estimate_send_struct(mavlink_channel_t chan, const mavlink_slam_position_estimate_t* slam_position_estimate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_slam_position_estimate_send(chan, slam_position_estimate->usec, slam_position_estimate->x, slam_position_estimate->y, slam_position_estimate->z, slam_position_estimate->q1, slam_position_estimate->q2, slam_position_estimate->q3, slam_position_estimate->q4);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE, (const char *)slam_position_estimate, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_slam_position_estimate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t usec, float x, float y, float z, float q1, float q2, float q3, float q4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, usec);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 20, q1);
    _mav_put_float(buf, 24, q2);
    _mav_put_float(buf, 28, q3);
    _mav_put_float(buf, 32, q4);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE, buf, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_CRC);
#else
    mavlink_slam_position_estimate_t *packet = (mavlink_slam_position_estimate_t *)msgbuf;
    packet->usec = usec;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->q1 = q1;
    packet->q2 = q2;
    packet->q3 = q3;
    packet->q4 = q4;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE, (const char *)packet, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_CRC);
#endif
}
#endif

#endif

// MESSAGE SLAM_POSITION_ESTIMATE UNPACKING


/**
 * @brief Get field usec from slam_position_estimate message
 *
 * @return [us] Timestamp (UNIX time or time since system boot)
 */
static inline uint64_t mavlink_msg_slam_position_estimate_get_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field x from slam_position_estimate message
 *
 * @return [m] SLAM X position
 */
static inline float mavlink_msg_slam_position_estimate_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y from slam_position_estimate message
 *
 * @return [m] SLAM Y position
 */
static inline float mavlink_msg_slam_position_estimate_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field z from slam_position_estimate message
 *
 * @return [m] SLAM Z position
 */
static inline float mavlink_msg_slam_position_estimate_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field q1 from slam_position_estimate message
 *
 * @return  Quaternion component 1, w (1 in null-rotation)
 */
static inline float mavlink_msg_slam_position_estimate_get_q1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field q2 from slam_position_estimate message
 *
 * @return  Quaternion component 2, x (0 in null-rotation)
 */
static inline float mavlink_msg_slam_position_estimate_get_q2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field q3 from slam_position_estimate message
 *
 * @return  Quaternion component 3, y (0 in null-rotation)
 */
static inline float mavlink_msg_slam_position_estimate_get_q3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field q4 from slam_position_estimate message
 *
 * @return  Quaternion component 4, z (0 in null-rotation)
 */
static inline float mavlink_msg_slam_position_estimate_get_q4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Decode a slam_position_estimate message into a struct
 *
 * @param msg The message to decode
 * @param slam_position_estimate C-struct to decode the message contents into
 */
static inline void mavlink_msg_slam_position_estimate_decode(const mavlink_message_t* msg, mavlink_slam_position_estimate_t* slam_position_estimate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    slam_position_estimate->usec = mavlink_msg_slam_position_estimate_get_usec(msg);
    slam_position_estimate->x = mavlink_msg_slam_position_estimate_get_x(msg);
    slam_position_estimate->y = mavlink_msg_slam_position_estimate_get_y(msg);
    slam_position_estimate->z = mavlink_msg_slam_position_estimate_get_z(msg);
    slam_position_estimate->q1 = mavlink_msg_slam_position_estimate_get_q1(msg);
    slam_position_estimate->q2 = mavlink_msg_slam_position_estimate_get_q2(msg);
    slam_position_estimate->q3 = mavlink_msg_slam_position_estimate_get_q3(msg);
    slam_position_estimate->q4 = mavlink_msg_slam_position_estimate_get_q4(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN? msg->len : MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN;
        memset(slam_position_estimate, 0, MAVLINK_MSG_ID_SLAM_POSITION_ESTIMATE_LEN);
    memcpy(slam_position_estimate, _MAV_PAYLOAD(msg), len);
#endif
}
