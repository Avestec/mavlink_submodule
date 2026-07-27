#pragma once
// MESSAGE Encoder_Count PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_Encoder_Count 3336


typedef struct __mavlink_encoder_count_t {
 int32_t Encoder_count; /*<  int*/
} mavlink_encoder_count_t;

#define MAVLINK_MSG_ID_Encoder_Count_LEN 4
#define MAVLINK_MSG_ID_Encoder_Count_MIN_LEN 4
#define MAVLINK_MSG_ID_3336_LEN 4
#define MAVLINK_MSG_ID_3336_MIN_LEN 4

#define MAVLINK_MSG_ID_Encoder_Count_CRC 159
#define MAVLINK_MSG_ID_3336_CRC 159



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_Encoder_Count { \
    3336, \
    "Encoder_Count", \
    1, \
    {  { "Encoder_count", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_encoder_count_t, Encoder_count) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_Encoder_Count { \
    "Encoder_Count", \
    1, \
    {  { "Encoder_count", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_encoder_count_t, Encoder_count) }, \
         } \
}
#endif

/**
 * @brief Pack a encoder_count message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Encoder_count  int
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_encoder_count_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t Encoder_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Encoder_Count_LEN];
    _mav_put_int32_t(buf, 0, Encoder_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Encoder_Count_LEN);
#else
    mavlink_encoder_count_t packet;
    packet.Encoder_count = Encoder_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Encoder_Count_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Encoder_Count;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Encoder_Count_MIN_LEN, MAVLINK_MSG_ID_Encoder_Count_LEN, MAVLINK_MSG_ID_Encoder_Count_CRC);
}

/**
 * @brief Pack a encoder_count message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param Encoder_count  int
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_encoder_count_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t Encoder_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Encoder_Count_LEN];
    _mav_put_int32_t(buf, 0, Encoder_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Encoder_Count_LEN);
#else
    mavlink_encoder_count_t packet;
    packet.Encoder_count = Encoder_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Encoder_Count_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Encoder_Count;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Encoder_Count_MIN_LEN, MAVLINK_MSG_ID_Encoder_Count_LEN, MAVLINK_MSG_ID_Encoder_Count_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Encoder_Count_MIN_LEN, MAVLINK_MSG_ID_Encoder_Count_LEN);
#endif
}

/**
 * @brief Pack a encoder_count message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Encoder_count  int
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_encoder_count_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t Encoder_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Encoder_Count_LEN];
    _mav_put_int32_t(buf, 0, Encoder_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Encoder_Count_LEN);
#else
    mavlink_encoder_count_t packet;
    packet.Encoder_count = Encoder_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Encoder_Count_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Encoder_Count;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Encoder_Count_MIN_LEN, MAVLINK_MSG_ID_Encoder_Count_LEN, MAVLINK_MSG_ID_Encoder_Count_CRC);
}

/**
 * @brief Encode a encoder_count struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param encoder_count C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_encoder_count_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_encoder_count_t* encoder_count)
{
    return mavlink_msg_encoder_count_pack(system_id, component_id, msg, encoder_count->Encoder_count);
}

/**
 * @brief Encode a encoder_count struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param encoder_count C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_encoder_count_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_encoder_count_t* encoder_count)
{
    return mavlink_msg_encoder_count_pack_chan(system_id, component_id, chan, msg, encoder_count->Encoder_count);
}

/**
 * @brief Encode a encoder_count struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param encoder_count C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_encoder_count_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_encoder_count_t* encoder_count)
{
    return mavlink_msg_encoder_count_pack_status(system_id, component_id, _status, msg,  encoder_count->Encoder_count);
}

/**
 * @brief Send a encoder_count message
 * @param chan MAVLink channel to send the message
 *
 * @param Encoder_count  int
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_encoder_count_send(mavlink_channel_t chan, int32_t Encoder_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Encoder_Count_LEN];
    _mav_put_int32_t(buf, 0, Encoder_count);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Encoder_Count, buf, MAVLINK_MSG_ID_Encoder_Count_MIN_LEN, MAVLINK_MSG_ID_Encoder_Count_LEN, MAVLINK_MSG_ID_Encoder_Count_CRC);
#else
    mavlink_encoder_count_t packet;
    packet.Encoder_count = Encoder_count;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Encoder_Count, (const char *)&packet, MAVLINK_MSG_ID_Encoder_Count_MIN_LEN, MAVLINK_MSG_ID_Encoder_Count_LEN, MAVLINK_MSG_ID_Encoder_Count_CRC);
#endif
}

/**
 * @brief Send a encoder_count message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_encoder_count_send_struct(mavlink_channel_t chan, const mavlink_encoder_count_t* encoder_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_encoder_count_send(chan, encoder_count->Encoder_count);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Encoder_Count, (const char *)encoder_count, MAVLINK_MSG_ID_Encoder_Count_MIN_LEN, MAVLINK_MSG_ID_Encoder_Count_LEN, MAVLINK_MSG_ID_Encoder_Count_CRC);
#endif
}

#if MAVLINK_MSG_ID_Encoder_Count_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_encoder_count_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t Encoder_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, Encoder_count);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Encoder_Count, buf, MAVLINK_MSG_ID_Encoder_Count_MIN_LEN, MAVLINK_MSG_ID_Encoder_Count_LEN, MAVLINK_MSG_ID_Encoder_Count_CRC);
#else
    mavlink_encoder_count_t *packet = (mavlink_encoder_count_t *)msgbuf;
    packet->Encoder_count = Encoder_count;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Encoder_Count, (const char *)packet, MAVLINK_MSG_ID_Encoder_Count_MIN_LEN, MAVLINK_MSG_ID_Encoder_Count_LEN, MAVLINK_MSG_ID_Encoder_Count_CRC);
#endif
}
#endif

#endif

// MESSAGE Encoder_Count UNPACKING


/**
 * @brief Get field Encoder_count from encoder_count message
 *
 * @return  int
 */
static inline int32_t mavlink_msg_encoder_count_get_Encoder_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Decode a encoder_count message into a struct
 *
 * @param msg The message to decode
 * @param encoder_count C-struct to decode the message contents into
 */
static inline void mavlink_msg_encoder_count_decode(const mavlink_message_t* msg, mavlink_encoder_count_t* encoder_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    encoder_count->Encoder_count = mavlink_msg_encoder_count_get_Encoder_count(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_Encoder_Count_LEN? msg->len : MAVLINK_MSG_ID_Encoder_Count_LEN;
        memset(encoder_count, 0, MAVLINK_MSG_ID_Encoder_Count_LEN);
    memcpy(encoder_count, _MAV_PAYLOAD(msg), len);
#endif
}
