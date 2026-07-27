#pragma once
// MESSAGE CRAWLER_HEADING PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_CRAWLER_HEADING 3362


typedef struct __mavlink_crawler_heading_t {
 float CRAWLER_HEADING; /*<  positive on the right*/
} mavlink_crawler_heading_t;

#define MAVLINK_MSG_ID_CRAWLER_HEADING_LEN 4
#define MAVLINK_MSG_ID_CRAWLER_HEADING_MIN_LEN 4
#define MAVLINK_MSG_ID_3362_LEN 4
#define MAVLINK_MSG_ID_3362_MIN_LEN 4

#define MAVLINK_MSG_ID_CRAWLER_HEADING_CRC 135
#define MAVLINK_MSG_ID_3362_CRC 135



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CRAWLER_HEADING { \
    3362, \
    "CRAWLER_HEADING", \
    1, \
    {  { "CRAWLER_HEADING", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_crawler_heading_t, CRAWLER_HEADING) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CRAWLER_HEADING { \
    "CRAWLER_HEADING", \
    1, \
    {  { "CRAWLER_HEADING", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_crawler_heading_t, CRAWLER_HEADING) }, \
         } \
}
#endif

/**
 * @brief Pack a crawler_heading message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param CRAWLER_HEADING  positive on the right
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_crawler_heading_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float CRAWLER_HEADING)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CRAWLER_HEADING_LEN];
    _mav_put_float(buf, 0, CRAWLER_HEADING);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN);
#else
    mavlink_crawler_heading_t packet;
    packet.CRAWLER_HEADING = CRAWLER_HEADING;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CRAWLER_HEADING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CRAWLER_HEADING_MIN_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_CRC);
}

/**
 * @brief Pack a crawler_heading message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param CRAWLER_HEADING  positive on the right
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_crawler_heading_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float CRAWLER_HEADING)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CRAWLER_HEADING_LEN];
    _mav_put_float(buf, 0, CRAWLER_HEADING);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN);
#else
    mavlink_crawler_heading_t packet;
    packet.CRAWLER_HEADING = CRAWLER_HEADING;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CRAWLER_HEADING;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CRAWLER_HEADING_MIN_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CRAWLER_HEADING_MIN_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN);
#endif
}

/**
 * @brief Pack a crawler_heading message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param CRAWLER_HEADING  positive on the right
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_crawler_heading_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float CRAWLER_HEADING)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CRAWLER_HEADING_LEN];
    _mav_put_float(buf, 0, CRAWLER_HEADING);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN);
#else
    mavlink_crawler_heading_t packet;
    packet.CRAWLER_HEADING = CRAWLER_HEADING;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CRAWLER_HEADING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CRAWLER_HEADING_MIN_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_CRC);
}

/**
 * @brief Encode a crawler_heading struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param crawler_heading C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_crawler_heading_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_crawler_heading_t* crawler_heading)
{
    return mavlink_msg_crawler_heading_pack(system_id, component_id, msg, crawler_heading->CRAWLER_HEADING);
}

/**
 * @brief Encode a crawler_heading struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param crawler_heading C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_crawler_heading_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_crawler_heading_t* crawler_heading)
{
    return mavlink_msg_crawler_heading_pack_chan(system_id, component_id, chan, msg, crawler_heading->CRAWLER_HEADING);
}

/**
 * @brief Encode a crawler_heading struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param crawler_heading C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_crawler_heading_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_crawler_heading_t* crawler_heading)
{
    return mavlink_msg_crawler_heading_pack_status(system_id, component_id, _status, msg,  crawler_heading->CRAWLER_HEADING);
}

/**
 * @brief Send a crawler_heading message
 * @param chan MAVLink channel to send the message
 *
 * @param CRAWLER_HEADING  positive on the right
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_crawler_heading_send(mavlink_channel_t chan, float CRAWLER_HEADING)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CRAWLER_HEADING_LEN];
    _mav_put_float(buf, 0, CRAWLER_HEADING);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CRAWLER_HEADING, buf, MAVLINK_MSG_ID_CRAWLER_HEADING_MIN_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_CRC);
#else
    mavlink_crawler_heading_t packet;
    packet.CRAWLER_HEADING = CRAWLER_HEADING;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CRAWLER_HEADING, (const char *)&packet, MAVLINK_MSG_ID_CRAWLER_HEADING_MIN_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_CRC);
#endif
}

/**
 * @brief Send a crawler_heading message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_crawler_heading_send_struct(mavlink_channel_t chan, const mavlink_crawler_heading_t* crawler_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_crawler_heading_send(chan, crawler_heading->CRAWLER_HEADING);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CRAWLER_HEADING, (const char *)crawler_heading, MAVLINK_MSG_ID_CRAWLER_HEADING_MIN_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_CRC);
#endif
}

#if MAVLINK_MSG_ID_CRAWLER_HEADING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_crawler_heading_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float CRAWLER_HEADING)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, CRAWLER_HEADING);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CRAWLER_HEADING, buf, MAVLINK_MSG_ID_CRAWLER_HEADING_MIN_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_CRC);
#else
    mavlink_crawler_heading_t *packet = (mavlink_crawler_heading_t *)msgbuf;
    packet->CRAWLER_HEADING = CRAWLER_HEADING;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CRAWLER_HEADING, (const char *)packet, MAVLINK_MSG_ID_CRAWLER_HEADING_MIN_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN, MAVLINK_MSG_ID_CRAWLER_HEADING_CRC);
#endif
}
#endif

#endif

// MESSAGE CRAWLER_HEADING UNPACKING


/**
 * @brief Get field CRAWLER_HEADING from crawler_heading message
 *
 * @return  positive on the right
 */
static inline float mavlink_msg_crawler_heading_get_CRAWLER_HEADING(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a crawler_heading message into a struct
 *
 * @param msg The message to decode
 * @param crawler_heading C-struct to decode the message contents into
 */
static inline void mavlink_msg_crawler_heading_decode(const mavlink_message_t* msg, mavlink_crawler_heading_t* crawler_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    crawler_heading->CRAWLER_HEADING = mavlink_msg_crawler_heading_get_CRAWLER_HEADING(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CRAWLER_HEADING_LEN? msg->len : MAVLINK_MSG_ID_CRAWLER_HEADING_LEN;
        memset(crawler_heading, 0, MAVLINK_MSG_ID_CRAWLER_HEADING_LEN);
    memcpy(crawler_heading, _MAV_PAYLOAD(msg), len);
#endif
}
