#pragma once
// MESSAGE Firmware_CS PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_Firmware_CS 3359


typedef struct __mavlink_firmware_cs_t {
 uint8_t Checksum; /*<  Checksum of data*/
} mavlink_firmware_cs_t;

#define MAVLINK_MSG_ID_Firmware_CS_LEN 1
#define MAVLINK_MSG_ID_Firmware_CS_MIN_LEN 1
#define MAVLINK_MSG_ID_3359_LEN 1
#define MAVLINK_MSG_ID_3359_MIN_LEN 1

#define MAVLINK_MSG_ID_Firmware_CS_CRC 75
#define MAVLINK_MSG_ID_3359_CRC 75



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_Firmware_CS { \
    3359, \
    "Firmware_CS", \
    1, \
    {  { "Checksum", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_firmware_cs_t, Checksum) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_Firmware_CS { \
    "Firmware_CS", \
    1, \
    {  { "Checksum", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_firmware_cs_t, Checksum) }, \
         } \
}
#endif

/**
 * @brief Pack a firmware_cs message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Checksum  Checksum of data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_cs_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t Checksum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Firmware_CS_LEN];
    _mav_put_uint8_t(buf, 0, Checksum);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Firmware_CS_LEN);
#else
    mavlink_firmware_cs_t packet;
    packet.Checksum = Checksum;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Firmware_CS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Firmware_CS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Firmware_CS_MIN_LEN, MAVLINK_MSG_ID_Firmware_CS_LEN, MAVLINK_MSG_ID_Firmware_CS_CRC);
}

/**
 * @brief Pack a firmware_cs message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param Checksum  Checksum of data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_cs_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t Checksum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Firmware_CS_LEN];
    _mav_put_uint8_t(buf, 0, Checksum);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Firmware_CS_LEN);
#else
    mavlink_firmware_cs_t packet;
    packet.Checksum = Checksum;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Firmware_CS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Firmware_CS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Firmware_CS_MIN_LEN, MAVLINK_MSG_ID_Firmware_CS_LEN, MAVLINK_MSG_ID_Firmware_CS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Firmware_CS_MIN_LEN, MAVLINK_MSG_ID_Firmware_CS_LEN);
#endif
}

/**
 * @brief Pack a firmware_cs message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Checksum  Checksum of data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_cs_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t Checksum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Firmware_CS_LEN];
    _mav_put_uint8_t(buf, 0, Checksum);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Firmware_CS_LEN);
#else
    mavlink_firmware_cs_t packet;
    packet.Checksum = Checksum;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Firmware_CS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Firmware_CS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Firmware_CS_MIN_LEN, MAVLINK_MSG_ID_Firmware_CS_LEN, MAVLINK_MSG_ID_Firmware_CS_CRC);
}

/**
 * @brief Encode a firmware_cs struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param firmware_cs C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_cs_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_firmware_cs_t* firmware_cs)
{
    return mavlink_msg_firmware_cs_pack(system_id, component_id, msg, firmware_cs->Checksum);
}

/**
 * @brief Encode a firmware_cs struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param firmware_cs C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_cs_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_firmware_cs_t* firmware_cs)
{
    return mavlink_msg_firmware_cs_pack_chan(system_id, component_id, chan, msg, firmware_cs->Checksum);
}

/**
 * @brief Encode a firmware_cs struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param firmware_cs C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_cs_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_firmware_cs_t* firmware_cs)
{
    return mavlink_msg_firmware_cs_pack_status(system_id, component_id, _status, msg,  firmware_cs->Checksum);
}

/**
 * @brief Send a firmware_cs message
 * @param chan MAVLink channel to send the message
 *
 * @param Checksum  Checksum of data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_firmware_cs_send(mavlink_channel_t chan, uint8_t Checksum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Firmware_CS_LEN];
    _mav_put_uint8_t(buf, 0, Checksum);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_CS, buf, MAVLINK_MSG_ID_Firmware_CS_MIN_LEN, MAVLINK_MSG_ID_Firmware_CS_LEN, MAVLINK_MSG_ID_Firmware_CS_CRC);
#else
    mavlink_firmware_cs_t packet;
    packet.Checksum = Checksum;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_CS, (const char *)&packet, MAVLINK_MSG_ID_Firmware_CS_MIN_LEN, MAVLINK_MSG_ID_Firmware_CS_LEN, MAVLINK_MSG_ID_Firmware_CS_CRC);
#endif
}

/**
 * @brief Send a firmware_cs message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_firmware_cs_send_struct(mavlink_channel_t chan, const mavlink_firmware_cs_t* firmware_cs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_firmware_cs_send(chan, firmware_cs->Checksum);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_CS, (const char *)firmware_cs, MAVLINK_MSG_ID_Firmware_CS_MIN_LEN, MAVLINK_MSG_ID_Firmware_CS_LEN, MAVLINK_MSG_ID_Firmware_CS_CRC);
#endif
}

#if MAVLINK_MSG_ID_Firmware_CS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_firmware_cs_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t Checksum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, Checksum);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_CS, buf, MAVLINK_MSG_ID_Firmware_CS_MIN_LEN, MAVLINK_MSG_ID_Firmware_CS_LEN, MAVLINK_MSG_ID_Firmware_CS_CRC);
#else
    mavlink_firmware_cs_t *packet = (mavlink_firmware_cs_t *)msgbuf;
    packet->Checksum = Checksum;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_CS, (const char *)packet, MAVLINK_MSG_ID_Firmware_CS_MIN_LEN, MAVLINK_MSG_ID_Firmware_CS_LEN, MAVLINK_MSG_ID_Firmware_CS_CRC);
#endif
}
#endif

#endif

// MESSAGE Firmware_CS UNPACKING


/**
 * @brief Get field Checksum from firmware_cs message
 *
 * @return  Checksum of data
 */
static inline uint8_t mavlink_msg_firmware_cs_get_Checksum(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a firmware_cs message into a struct
 *
 * @param msg The message to decode
 * @param firmware_cs C-struct to decode the message contents into
 */
static inline void mavlink_msg_firmware_cs_decode(const mavlink_message_t* msg, mavlink_firmware_cs_t* firmware_cs)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    firmware_cs->Checksum = mavlink_msg_firmware_cs_get_Checksum(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_Firmware_CS_LEN? msg->len : MAVLINK_MSG_ID_Firmware_CS_LEN;
        memset(firmware_cs, 0, MAVLINK_MSG_ID_Firmware_CS_LEN);
    memcpy(firmware_cs, _MAV_PAYLOAD(msg), len);
#endif
}
