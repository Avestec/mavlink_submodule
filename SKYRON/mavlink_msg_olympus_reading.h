#pragma once
// MESSAGE Olympus_Reading PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_Olympus_Reading 3334


typedef struct __mavlink_olympus_reading_t {
 uint8_t data[3]; /*<  uint8_t_array*/
} mavlink_olympus_reading_t;

#define MAVLINK_MSG_ID_Olympus_Reading_LEN 3
#define MAVLINK_MSG_ID_Olympus_Reading_MIN_LEN 3
#define MAVLINK_MSG_ID_3334_LEN 3
#define MAVLINK_MSG_ID_3334_MIN_LEN 3

#define MAVLINK_MSG_ID_Olympus_Reading_CRC 238
#define MAVLINK_MSG_ID_3334_CRC 238

#define MAVLINK_MSG_Olympus_Reading_FIELD_DATA_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_Olympus_Reading { \
    3334, \
    "Olympus_Reading", \
    1, \
    {  { "data", NULL, MAVLINK_TYPE_UINT8_T, 3, 0, offsetof(mavlink_olympus_reading_t, data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_Olympus_Reading { \
    "Olympus_Reading", \
    1, \
    {  { "data", NULL, MAVLINK_TYPE_UINT8_T, 3, 0, offsetof(mavlink_olympus_reading_t, data) }, \
         } \
}
#endif

/**
 * @brief Pack a olympus_reading message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param data  uint8_t_array
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_olympus_reading_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Olympus_Reading_LEN];

    _mav_put_uint8_t_array(buf, 0, data, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Olympus_Reading_LEN);
#else
    mavlink_olympus_reading_t packet;

    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Olympus_Reading_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Olympus_Reading;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Olympus_Reading_MIN_LEN, MAVLINK_MSG_ID_Olympus_Reading_LEN, MAVLINK_MSG_ID_Olympus_Reading_CRC);
}

/**
 * @brief Pack a olympus_reading message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param data  uint8_t_array
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_olympus_reading_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Olympus_Reading_LEN];

    _mav_put_uint8_t_array(buf, 0, data, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Olympus_Reading_LEN);
#else
    mavlink_olympus_reading_t packet;

    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Olympus_Reading_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Olympus_Reading;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Olympus_Reading_MIN_LEN, MAVLINK_MSG_ID_Olympus_Reading_LEN, MAVLINK_MSG_ID_Olympus_Reading_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Olympus_Reading_MIN_LEN, MAVLINK_MSG_ID_Olympus_Reading_LEN);
#endif
}

/**
 * @brief Pack a olympus_reading message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param data  uint8_t_array
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_olympus_reading_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Olympus_Reading_LEN];

    _mav_put_uint8_t_array(buf, 0, data, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Olympus_Reading_LEN);
#else
    mavlink_olympus_reading_t packet;

    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Olympus_Reading_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Olympus_Reading;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Olympus_Reading_MIN_LEN, MAVLINK_MSG_ID_Olympus_Reading_LEN, MAVLINK_MSG_ID_Olympus_Reading_CRC);
}

/**
 * @brief Encode a olympus_reading struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param olympus_reading C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_olympus_reading_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_olympus_reading_t* olympus_reading)
{
    return mavlink_msg_olympus_reading_pack(system_id, component_id, msg, olympus_reading->data);
}

/**
 * @brief Encode a olympus_reading struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param olympus_reading C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_olympus_reading_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_olympus_reading_t* olympus_reading)
{
    return mavlink_msg_olympus_reading_pack_chan(system_id, component_id, chan, msg, olympus_reading->data);
}

/**
 * @brief Encode a olympus_reading struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param olympus_reading C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_olympus_reading_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_olympus_reading_t* olympus_reading)
{
    return mavlink_msg_olympus_reading_pack_status(system_id, component_id, _status, msg,  olympus_reading->data);
}

/**
 * @brief Send a olympus_reading message
 * @param chan MAVLink channel to send the message
 *
 * @param data  uint8_t_array
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_olympus_reading_send(mavlink_channel_t chan, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Olympus_Reading_LEN];

    _mav_put_uint8_t_array(buf, 0, data, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Olympus_Reading, buf, MAVLINK_MSG_ID_Olympus_Reading_MIN_LEN, MAVLINK_MSG_ID_Olympus_Reading_LEN, MAVLINK_MSG_ID_Olympus_Reading_CRC);
#else
    mavlink_olympus_reading_t packet;

    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Olympus_Reading, (const char *)&packet, MAVLINK_MSG_ID_Olympus_Reading_MIN_LEN, MAVLINK_MSG_ID_Olympus_Reading_LEN, MAVLINK_MSG_ID_Olympus_Reading_CRC);
#endif
}

/**
 * @brief Send a olympus_reading message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_olympus_reading_send_struct(mavlink_channel_t chan, const mavlink_olympus_reading_t* olympus_reading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_olympus_reading_send(chan, olympus_reading->data);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Olympus_Reading, (const char *)olympus_reading, MAVLINK_MSG_ID_Olympus_Reading_MIN_LEN, MAVLINK_MSG_ID_Olympus_Reading_LEN, MAVLINK_MSG_ID_Olympus_Reading_CRC);
#endif
}

#if MAVLINK_MSG_ID_Olympus_Reading_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_olympus_reading_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_uint8_t_array(buf, 0, data, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Olympus_Reading, buf, MAVLINK_MSG_ID_Olympus_Reading_MIN_LEN, MAVLINK_MSG_ID_Olympus_Reading_LEN, MAVLINK_MSG_ID_Olympus_Reading_CRC);
#else
    mavlink_olympus_reading_t *packet = (mavlink_olympus_reading_t *)msgbuf;

    mav_array_memcpy(packet->data, data, sizeof(uint8_t)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Olympus_Reading, (const char *)packet, MAVLINK_MSG_ID_Olympus_Reading_MIN_LEN, MAVLINK_MSG_ID_Olympus_Reading_LEN, MAVLINK_MSG_ID_Olympus_Reading_CRC);
#endif
}
#endif

#endif

// MESSAGE Olympus_Reading UNPACKING


/**
 * @brief Get field data from olympus_reading message
 *
 * @return  uint8_t_array
 */
static inline uint16_t mavlink_msg_olympus_reading_get_data(const mavlink_message_t* msg, uint8_t *data)
{
    return _MAV_RETURN_uint8_t_array(msg, data, 3,  0);
}

/**
 * @brief Decode a olympus_reading message into a struct
 *
 * @param msg The message to decode
 * @param olympus_reading C-struct to decode the message contents into
 */
static inline void mavlink_msg_olympus_reading_decode(const mavlink_message_t* msg, mavlink_olympus_reading_t* olympus_reading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_olympus_reading_get_data(msg, olympus_reading->data);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_Olympus_Reading_LEN? msg->len : MAVLINK_MSG_ID_Olympus_Reading_LEN;
        memset(olympus_reading, 0, MAVLINK_MSG_ID_Olympus_Reading_LEN);
    memcpy(olympus_reading, _MAV_PAYLOAD(msg), len);
#endif
}
