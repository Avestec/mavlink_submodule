#pragma once
// MESSAGE MT_OG PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_MT_OG 3341


typedef struct __mavlink_mt_og_t {
 uint8_t data[3]; /*<  uint8_t_array*/
} mavlink_mt_og_t;

#define MAVLINK_MSG_ID_MT_OG_LEN 3
#define MAVLINK_MSG_ID_MT_OG_MIN_LEN 3
#define MAVLINK_MSG_ID_3341_LEN 3
#define MAVLINK_MSG_ID_3341_MIN_LEN 3

#define MAVLINK_MSG_ID_MT_OG_CRC 109
#define MAVLINK_MSG_ID_3341_CRC 109

#define MAVLINK_MSG_MT_OG_FIELD_DATA_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MT_OG { \
    3341, \
    "MT_OG", \
    1, \
    {  { "data", NULL, MAVLINK_TYPE_UINT8_T, 3, 0, offsetof(mavlink_mt_og_t, data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MT_OG { \
    "MT_OG", \
    1, \
    {  { "data", NULL, MAVLINK_TYPE_UINT8_T, 3, 0, offsetof(mavlink_mt_og_t, data) }, \
         } \
}
#endif

/**
 * @brief Pack a mt_og message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param data  uint8_t_array
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mt_og_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MT_OG_LEN];

    _mav_put_uint8_t_array(buf, 0, data, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MT_OG_LEN);
#else
    mavlink_mt_og_t packet;

    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MT_OG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MT_OG;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MT_OG_MIN_LEN, MAVLINK_MSG_ID_MT_OG_LEN, MAVLINK_MSG_ID_MT_OG_CRC);
}

/**
 * @brief Pack a mt_og message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param data  uint8_t_array
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mt_og_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MT_OG_LEN];

    _mav_put_uint8_t_array(buf, 0, data, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MT_OG_LEN);
#else
    mavlink_mt_og_t packet;

    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MT_OG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MT_OG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MT_OG_MIN_LEN, MAVLINK_MSG_ID_MT_OG_LEN, MAVLINK_MSG_ID_MT_OG_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MT_OG_MIN_LEN, MAVLINK_MSG_ID_MT_OG_LEN);
#endif
}

/**
 * @brief Pack a mt_og message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param data  uint8_t_array
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mt_og_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MT_OG_LEN];

    _mav_put_uint8_t_array(buf, 0, data, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MT_OG_LEN);
#else
    mavlink_mt_og_t packet;

    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MT_OG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MT_OG;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MT_OG_MIN_LEN, MAVLINK_MSG_ID_MT_OG_LEN, MAVLINK_MSG_ID_MT_OG_CRC);
}

/**
 * @brief Encode a mt_og struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mt_og C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mt_og_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mt_og_t* mt_og)
{
    return mavlink_msg_mt_og_pack(system_id, component_id, msg, mt_og->data);
}

/**
 * @brief Encode a mt_og struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mt_og C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mt_og_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mt_og_t* mt_og)
{
    return mavlink_msg_mt_og_pack_chan(system_id, component_id, chan, msg, mt_og->data);
}

/**
 * @brief Encode a mt_og struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param mt_og C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mt_og_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_mt_og_t* mt_og)
{
    return mavlink_msg_mt_og_pack_status(system_id, component_id, _status, msg,  mt_og->data);
}

/**
 * @brief Send a mt_og message
 * @param chan MAVLink channel to send the message
 *
 * @param data  uint8_t_array
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mt_og_send(mavlink_channel_t chan, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MT_OG_LEN];

    _mav_put_uint8_t_array(buf, 0, data, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MT_OG, buf, MAVLINK_MSG_ID_MT_OG_MIN_LEN, MAVLINK_MSG_ID_MT_OG_LEN, MAVLINK_MSG_ID_MT_OG_CRC);
#else
    mavlink_mt_og_t packet;

    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MT_OG, (const char *)&packet, MAVLINK_MSG_ID_MT_OG_MIN_LEN, MAVLINK_MSG_ID_MT_OG_LEN, MAVLINK_MSG_ID_MT_OG_CRC);
#endif
}

/**
 * @brief Send a mt_og message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mt_og_send_struct(mavlink_channel_t chan, const mavlink_mt_og_t* mt_og)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mt_og_send(chan, mt_og->data);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MT_OG, (const char *)mt_og, MAVLINK_MSG_ID_MT_OG_MIN_LEN, MAVLINK_MSG_ID_MT_OG_LEN, MAVLINK_MSG_ID_MT_OG_CRC);
#endif
}

#if MAVLINK_MSG_ID_MT_OG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mt_og_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_uint8_t_array(buf, 0, data, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MT_OG, buf, MAVLINK_MSG_ID_MT_OG_MIN_LEN, MAVLINK_MSG_ID_MT_OG_LEN, MAVLINK_MSG_ID_MT_OG_CRC);
#else
    mavlink_mt_og_t *packet = (mavlink_mt_og_t *)msgbuf;

    mav_array_memcpy(packet->data, data, sizeof(uint8_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MT_OG, (const char *)packet, MAVLINK_MSG_ID_MT_OG_MIN_LEN, MAVLINK_MSG_ID_MT_OG_LEN, MAVLINK_MSG_ID_MT_OG_CRC);
#endif
}
#endif

#endif

// MESSAGE MT_OG UNPACKING


/**
 * @brief Get field data from mt_og message
 *
 * @return  uint8_t_array
 */
static inline uint16_t mavlink_msg_mt_og_get_data(const mavlink_message_t* msg, uint8_t *data)
{
    return _MAV_RETURN_uint8_t_array(msg, data, 3,  0);
}

/**
 * @brief Decode a mt_og message into a struct
 *
 * @param msg The message to decode
 * @param mt_og C-struct to decode the message contents into
 */
static inline void mavlink_msg_mt_og_decode(const mavlink_message_t* msg, mavlink_mt_og_t* mt_og)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mt_og_get_data(msg, mt_og->data);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MT_OG_LEN? msg->len : MAVLINK_MSG_ID_MT_OG_LEN;
        memset(mt_og, 0, MAVLINK_MSG_ID_MT_OG_LEN);
    memcpy(mt_og, _MAV_PAYLOAD(msg), len);
#endif
}
