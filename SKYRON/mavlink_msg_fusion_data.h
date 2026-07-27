#pragma once
// MESSAGE Fusion_data PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_Fusion_data 3340


typedef struct __mavlink_fusion_data_t {
 float distance; /*<  float*/
 float rotatory; /*<  float*/
} mavlink_fusion_data_t;

#define MAVLINK_MSG_ID_Fusion_data_LEN 8
#define MAVLINK_MSG_ID_Fusion_data_MIN_LEN 8
#define MAVLINK_MSG_ID_3340_LEN 8
#define MAVLINK_MSG_ID_3340_MIN_LEN 8

#define MAVLINK_MSG_ID_Fusion_data_CRC 46
#define MAVLINK_MSG_ID_3340_CRC 46



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_Fusion_data { \
    3340, \
    "Fusion_data", \
    2, \
    {  { "distance", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_fusion_data_t, distance) }, \
         { "rotatory", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_fusion_data_t, rotatory) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_Fusion_data { \
    "Fusion_data", \
    2, \
    {  { "distance", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_fusion_data_t, distance) }, \
         { "rotatory", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_fusion_data_t, rotatory) }, \
         } \
}
#endif

/**
 * @brief Pack a fusion_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param distance  float
 * @param rotatory  float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fusion_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float distance, float rotatory)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Fusion_data_LEN];
    _mav_put_float(buf, 0, distance);
    _mav_put_float(buf, 4, rotatory);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Fusion_data_LEN);
#else
    mavlink_fusion_data_t packet;
    packet.distance = distance;
    packet.rotatory = rotatory;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Fusion_data_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Fusion_data;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Fusion_data_MIN_LEN, MAVLINK_MSG_ID_Fusion_data_LEN, MAVLINK_MSG_ID_Fusion_data_CRC);
}

/**
 * @brief Pack a fusion_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param distance  float
 * @param rotatory  float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fusion_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float distance, float rotatory)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Fusion_data_LEN];
    _mav_put_float(buf, 0, distance);
    _mav_put_float(buf, 4, rotatory);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Fusion_data_LEN);
#else
    mavlink_fusion_data_t packet;
    packet.distance = distance;
    packet.rotatory = rotatory;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Fusion_data_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Fusion_data;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Fusion_data_MIN_LEN, MAVLINK_MSG_ID_Fusion_data_LEN, MAVLINK_MSG_ID_Fusion_data_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Fusion_data_MIN_LEN, MAVLINK_MSG_ID_Fusion_data_LEN);
#endif
}

/**
 * @brief Pack a fusion_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param distance  float
 * @param rotatory  float
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fusion_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float distance,float rotatory)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Fusion_data_LEN];
    _mav_put_float(buf, 0, distance);
    _mav_put_float(buf, 4, rotatory);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Fusion_data_LEN);
#else
    mavlink_fusion_data_t packet;
    packet.distance = distance;
    packet.rotatory = rotatory;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Fusion_data_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Fusion_data;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Fusion_data_MIN_LEN, MAVLINK_MSG_ID_Fusion_data_LEN, MAVLINK_MSG_ID_Fusion_data_CRC);
}

/**
 * @brief Encode a fusion_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param fusion_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fusion_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_fusion_data_t* fusion_data)
{
    return mavlink_msg_fusion_data_pack(system_id, component_id, msg, fusion_data->distance, fusion_data->rotatory);
}

/**
 * @brief Encode a fusion_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fusion_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fusion_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_fusion_data_t* fusion_data)
{
    return mavlink_msg_fusion_data_pack_chan(system_id, component_id, chan, msg, fusion_data->distance, fusion_data->rotatory);
}

/**
 * @brief Encode a fusion_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param fusion_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fusion_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_fusion_data_t* fusion_data)
{
    return mavlink_msg_fusion_data_pack_status(system_id, component_id, _status, msg,  fusion_data->distance, fusion_data->rotatory);
}

/**
 * @brief Send a fusion_data message
 * @param chan MAVLink channel to send the message
 *
 * @param distance  float
 * @param rotatory  float
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_fusion_data_send(mavlink_channel_t chan, float distance, float rotatory)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Fusion_data_LEN];
    _mav_put_float(buf, 0, distance);
    _mav_put_float(buf, 4, rotatory);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Fusion_data, buf, MAVLINK_MSG_ID_Fusion_data_MIN_LEN, MAVLINK_MSG_ID_Fusion_data_LEN, MAVLINK_MSG_ID_Fusion_data_CRC);
#else
    mavlink_fusion_data_t packet;
    packet.distance = distance;
    packet.rotatory = rotatory;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Fusion_data, (const char *)&packet, MAVLINK_MSG_ID_Fusion_data_MIN_LEN, MAVLINK_MSG_ID_Fusion_data_LEN, MAVLINK_MSG_ID_Fusion_data_CRC);
#endif
}

/**
 * @brief Send a fusion_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_fusion_data_send_struct(mavlink_channel_t chan, const mavlink_fusion_data_t* fusion_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_fusion_data_send(chan, fusion_data->distance, fusion_data->rotatory);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Fusion_data, (const char *)fusion_data, MAVLINK_MSG_ID_Fusion_data_MIN_LEN, MAVLINK_MSG_ID_Fusion_data_LEN, MAVLINK_MSG_ID_Fusion_data_CRC);
#endif
}

#if MAVLINK_MSG_ID_Fusion_data_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_fusion_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float distance, float rotatory)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, distance);
    _mav_put_float(buf, 4, rotatory);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Fusion_data, buf, MAVLINK_MSG_ID_Fusion_data_MIN_LEN, MAVLINK_MSG_ID_Fusion_data_LEN, MAVLINK_MSG_ID_Fusion_data_CRC);
#else
    mavlink_fusion_data_t *packet = (mavlink_fusion_data_t *)msgbuf;
    packet->distance = distance;
    packet->rotatory = rotatory;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Fusion_data, (const char *)packet, MAVLINK_MSG_ID_Fusion_data_MIN_LEN, MAVLINK_MSG_ID_Fusion_data_LEN, MAVLINK_MSG_ID_Fusion_data_CRC);
#endif
}
#endif

#endif

// MESSAGE Fusion_data UNPACKING


/**
 * @brief Get field distance from fusion_data message
 *
 * @return  float
 */
static inline float mavlink_msg_fusion_data_get_distance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field rotatory from fusion_data message
 *
 * @return  float
 */
static inline float mavlink_msg_fusion_data_get_rotatory(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a fusion_data message into a struct
 *
 * @param msg The message to decode
 * @param fusion_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_fusion_data_decode(const mavlink_message_t* msg, mavlink_fusion_data_t* fusion_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    fusion_data->distance = mavlink_msg_fusion_data_get_distance(msg);
    fusion_data->rotatory = mavlink_msg_fusion_data_get_rotatory(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_Fusion_data_LEN? msg->len : MAVLINK_MSG_ID_Fusion_data_LEN;
        memset(fusion_data, 0, MAVLINK_MSG_ID_Fusion_data_LEN);
    memcpy(fusion_data, _MAV_PAYLOAD(msg), len);
#endif
}
