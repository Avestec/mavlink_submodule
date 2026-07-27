#pragma once
// MESSAGE UT_Thickness PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_UT_Thickness 3337


typedef struct __mavlink_ut_thickness_t {
 float UT_Thickness; /*<  float*/
} mavlink_ut_thickness_t;

#define MAVLINK_MSG_ID_UT_Thickness_LEN 4
#define MAVLINK_MSG_ID_UT_Thickness_MIN_LEN 4
#define MAVLINK_MSG_ID_3337_LEN 4
#define MAVLINK_MSG_ID_3337_MIN_LEN 4

#define MAVLINK_MSG_ID_UT_Thickness_CRC 225
#define MAVLINK_MSG_ID_3337_CRC 225



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UT_Thickness { \
    3337, \
    "UT_Thickness", \
    1, \
    {  { "UT_Thickness", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ut_thickness_t, UT_Thickness) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UT_Thickness { \
    "UT_Thickness", \
    1, \
    {  { "UT_Thickness", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ut_thickness_t, UT_Thickness) }, \
         } \
}
#endif

/**
 * @brief Pack a ut_thickness message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param UT_Thickness  float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ut_thickness_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float UT_Thickness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UT_Thickness_LEN];
    _mav_put_float(buf, 0, UT_Thickness);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UT_Thickness_LEN);
#else
    mavlink_ut_thickness_t packet;
    packet.UT_Thickness = UT_Thickness;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UT_Thickness_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UT_Thickness;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UT_Thickness_MIN_LEN, MAVLINK_MSG_ID_UT_Thickness_LEN, MAVLINK_MSG_ID_UT_Thickness_CRC);
}

/**
 * @brief Pack a ut_thickness message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param UT_Thickness  float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ut_thickness_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float UT_Thickness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UT_Thickness_LEN];
    _mav_put_float(buf, 0, UT_Thickness);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UT_Thickness_LEN);
#else
    mavlink_ut_thickness_t packet;
    packet.UT_Thickness = UT_Thickness;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UT_Thickness_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UT_Thickness;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UT_Thickness_MIN_LEN, MAVLINK_MSG_ID_UT_Thickness_LEN, MAVLINK_MSG_ID_UT_Thickness_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_UT_Thickness_MIN_LEN, MAVLINK_MSG_ID_UT_Thickness_LEN);
#endif
}

/**
 * @brief Pack a ut_thickness message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param UT_Thickness  float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ut_thickness_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float UT_Thickness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UT_Thickness_LEN];
    _mav_put_float(buf, 0, UT_Thickness);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UT_Thickness_LEN);
#else
    mavlink_ut_thickness_t packet;
    packet.UT_Thickness = UT_Thickness;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UT_Thickness_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UT_Thickness;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UT_Thickness_MIN_LEN, MAVLINK_MSG_ID_UT_Thickness_LEN, MAVLINK_MSG_ID_UT_Thickness_CRC);
}

/**
 * @brief Encode a ut_thickness struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ut_thickness C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ut_thickness_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ut_thickness_t* ut_thickness)
{
    return mavlink_msg_ut_thickness_pack(system_id, component_id, msg, ut_thickness->UT_Thickness);
}

/**
 * @brief Encode a ut_thickness struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ut_thickness C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ut_thickness_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ut_thickness_t* ut_thickness)
{
    return mavlink_msg_ut_thickness_pack_chan(system_id, component_id, chan, msg, ut_thickness->UT_Thickness);
}

/**
 * @brief Encode a ut_thickness struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ut_thickness C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ut_thickness_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ut_thickness_t* ut_thickness)
{
    return mavlink_msg_ut_thickness_pack_status(system_id, component_id, _status, msg,  ut_thickness->UT_Thickness);
}

/**
 * @brief Send a ut_thickness message
 * @param chan MAVLink channel to send the message
 *
 * @param UT_Thickness  float
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ut_thickness_send(mavlink_channel_t chan, float UT_Thickness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UT_Thickness_LEN];
    _mav_put_float(buf, 0, UT_Thickness);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Thickness, buf, MAVLINK_MSG_ID_UT_Thickness_MIN_LEN, MAVLINK_MSG_ID_UT_Thickness_LEN, MAVLINK_MSG_ID_UT_Thickness_CRC);
#else
    mavlink_ut_thickness_t packet;
    packet.UT_Thickness = UT_Thickness;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Thickness, (const char *)&packet, MAVLINK_MSG_ID_UT_Thickness_MIN_LEN, MAVLINK_MSG_ID_UT_Thickness_LEN, MAVLINK_MSG_ID_UT_Thickness_CRC);
#endif
}

/**
 * @brief Send a ut_thickness message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ut_thickness_send_struct(mavlink_channel_t chan, const mavlink_ut_thickness_t* ut_thickness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ut_thickness_send(chan, ut_thickness->UT_Thickness);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Thickness, (const char *)ut_thickness, MAVLINK_MSG_ID_UT_Thickness_MIN_LEN, MAVLINK_MSG_ID_UT_Thickness_LEN, MAVLINK_MSG_ID_UT_Thickness_CRC);
#endif
}

#if MAVLINK_MSG_ID_UT_Thickness_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ut_thickness_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float UT_Thickness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, UT_Thickness);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Thickness, buf, MAVLINK_MSG_ID_UT_Thickness_MIN_LEN, MAVLINK_MSG_ID_UT_Thickness_LEN, MAVLINK_MSG_ID_UT_Thickness_CRC);
#else
    mavlink_ut_thickness_t *packet = (mavlink_ut_thickness_t *)msgbuf;
    packet->UT_Thickness = UT_Thickness;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UT_Thickness, (const char *)packet, MAVLINK_MSG_ID_UT_Thickness_MIN_LEN, MAVLINK_MSG_ID_UT_Thickness_LEN, MAVLINK_MSG_ID_UT_Thickness_CRC);
#endif
}
#endif

#endif

// MESSAGE UT_Thickness UNPACKING


/**
 * @brief Get field UT_Thickness from ut_thickness message
 *
 * @return  float
 */
static inline float mavlink_msg_ut_thickness_get_UT_Thickness(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a ut_thickness message into a struct
 *
 * @param msg The message to decode
 * @param ut_thickness C-struct to decode the message contents into
 */
static inline void mavlink_msg_ut_thickness_decode(const mavlink_message_t* msg, mavlink_ut_thickness_t* ut_thickness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ut_thickness->UT_Thickness = mavlink_msg_ut_thickness_get_UT_Thickness(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UT_Thickness_LEN? msg->len : MAVLINK_MSG_ID_UT_Thickness_LEN;
        memset(ut_thickness, 0, MAVLINK_MSG_ID_UT_Thickness_LEN);
    memcpy(ut_thickness, _MAV_PAYLOAD(msg), len);
#endif
}
