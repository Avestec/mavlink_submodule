#pragma once
// MESSAGE Firmware_Version PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_Firmware_Version 3360


typedef struct __mavlink_firmware_version_t {
 uint16_t MAJOR; /*<  MAJOR Version of firmware*/
 uint16_t MINOR; /*<  MINOR Version of firmware*/
 uint16_t PATCH; /*<  PATCH Version of firmware*/
 uint8_t target_device; /*<  uint8_t*/
} mavlink_firmware_version_t;

#define MAVLINK_MSG_ID_Firmware_Version_LEN 7
#define MAVLINK_MSG_ID_Firmware_Version_MIN_LEN 7
#define MAVLINK_MSG_ID_3360_LEN 7
#define MAVLINK_MSG_ID_3360_MIN_LEN 7

#define MAVLINK_MSG_ID_Firmware_Version_CRC 232
#define MAVLINK_MSG_ID_3360_CRC 232



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_Firmware_Version { \
    3360, \
    "Firmware_Version", \
    4, \
    {  { "target_device", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_firmware_version_t, target_device) }, \
         { "MAJOR", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_firmware_version_t, MAJOR) }, \
         { "MINOR", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_firmware_version_t, MINOR) }, \
         { "PATCH", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_firmware_version_t, PATCH) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_Firmware_Version { \
    "Firmware_Version", \
    4, \
    {  { "target_device", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_firmware_version_t, target_device) }, \
         { "MAJOR", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_firmware_version_t, MAJOR) }, \
         { "MINOR", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_firmware_version_t, MINOR) }, \
         { "PATCH", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_firmware_version_t, PATCH) }, \
         } \
}
#endif

/**
 * @brief Pack a firmware_version message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_device  uint8_t
 * @param MAJOR  MAJOR Version of firmware
 * @param MINOR  MINOR Version of firmware
 * @param PATCH  PATCH Version of firmware
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_version_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_device, uint16_t MAJOR, uint16_t MINOR, uint16_t PATCH)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Firmware_Version_LEN];
    _mav_put_uint16_t(buf, 0, MAJOR);
    _mav_put_uint16_t(buf, 2, MINOR);
    _mav_put_uint16_t(buf, 4, PATCH);
    _mav_put_uint8_t(buf, 6, target_device);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Firmware_Version_LEN);
#else
    mavlink_firmware_version_t packet;
    packet.MAJOR = MAJOR;
    packet.MINOR = MINOR;
    packet.PATCH = PATCH;
    packet.target_device = target_device;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Firmware_Version_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Firmware_Version;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Firmware_Version_MIN_LEN, MAVLINK_MSG_ID_Firmware_Version_LEN, MAVLINK_MSG_ID_Firmware_Version_CRC);
}

/**
 * @brief Pack a firmware_version message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_device  uint8_t
 * @param MAJOR  MAJOR Version of firmware
 * @param MINOR  MINOR Version of firmware
 * @param PATCH  PATCH Version of firmware
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_version_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_device, uint16_t MAJOR, uint16_t MINOR, uint16_t PATCH)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Firmware_Version_LEN];
    _mav_put_uint16_t(buf, 0, MAJOR);
    _mav_put_uint16_t(buf, 2, MINOR);
    _mav_put_uint16_t(buf, 4, PATCH);
    _mav_put_uint8_t(buf, 6, target_device);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Firmware_Version_LEN);
#else
    mavlink_firmware_version_t packet;
    packet.MAJOR = MAJOR;
    packet.MINOR = MINOR;
    packet.PATCH = PATCH;
    packet.target_device = target_device;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Firmware_Version_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Firmware_Version;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Firmware_Version_MIN_LEN, MAVLINK_MSG_ID_Firmware_Version_LEN, MAVLINK_MSG_ID_Firmware_Version_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Firmware_Version_MIN_LEN, MAVLINK_MSG_ID_Firmware_Version_LEN);
#endif
}

/**
 * @brief Pack a firmware_version message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_device  uint8_t
 * @param MAJOR  MAJOR Version of firmware
 * @param MINOR  MINOR Version of firmware
 * @param PATCH  PATCH Version of firmware
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_version_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_device,uint16_t MAJOR,uint16_t MINOR,uint16_t PATCH)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Firmware_Version_LEN];
    _mav_put_uint16_t(buf, 0, MAJOR);
    _mav_put_uint16_t(buf, 2, MINOR);
    _mav_put_uint16_t(buf, 4, PATCH);
    _mav_put_uint8_t(buf, 6, target_device);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Firmware_Version_LEN);
#else
    mavlink_firmware_version_t packet;
    packet.MAJOR = MAJOR;
    packet.MINOR = MINOR;
    packet.PATCH = PATCH;
    packet.target_device = target_device;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Firmware_Version_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Firmware_Version;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Firmware_Version_MIN_LEN, MAVLINK_MSG_ID_Firmware_Version_LEN, MAVLINK_MSG_ID_Firmware_Version_CRC);
}

/**
 * @brief Encode a firmware_version struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param firmware_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_version_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_firmware_version_t* firmware_version)
{
    return mavlink_msg_firmware_version_pack(system_id, component_id, msg, firmware_version->target_device, firmware_version->MAJOR, firmware_version->MINOR, firmware_version->PATCH);
}

/**
 * @brief Encode a firmware_version struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param firmware_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_version_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_firmware_version_t* firmware_version)
{
    return mavlink_msg_firmware_version_pack_chan(system_id, component_id, chan, msg, firmware_version->target_device, firmware_version->MAJOR, firmware_version->MINOR, firmware_version->PATCH);
}

/**
 * @brief Encode a firmware_version struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param firmware_version C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_version_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_firmware_version_t* firmware_version)
{
    return mavlink_msg_firmware_version_pack_status(system_id, component_id, _status, msg,  firmware_version->target_device, firmware_version->MAJOR, firmware_version->MINOR, firmware_version->PATCH);
}

/**
 * @brief Send a firmware_version message
 * @param chan MAVLink channel to send the message
 *
 * @param target_device  uint8_t
 * @param MAJOR  MAJOR Version of firmware
 * @param MINOR  MINOR Version of firmware
 * @param PATCH  PATCH Version of firmware
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_firmware_version_send(mavlink_channel_t chan, uint8_t target_device, uint16_t MAJOR, uint16_t MINOR, uint16_t PATCH)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Firmware_Version_LEN];
    _mav_put_uint16_t(buf, 0, MAJOR);
    _mav_put_uint16_t(buf, 2, MINOR);
    _mav_put_uint16_t(buf, 4, PATCH);
    _mav_put_uint8_t(buf, 6, target_device);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_Version, buf, MAVLINK_MSG_ID_Firmware_Version_MIN_LEN, MAVLINK_MSG_ID_Firmware_Version_LEN, MAVLINK_MSG_ID_Firmware_Version_CRC);
#else
    mavlink_firmware_version_t packet;
    packet.MAJOR = MAJOR;
    packet.MINOR = MINOR;
    packet.PATCH = PATCH;
    packet.target_device = target_device;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_Version, (const char *)&packet, MAVLINK_MSG_ID_Firmware_Version_MIN_LEN, MAVLINK_MSG_ID_Firmware_Version_LEN, MAVLINK_MSG_ID_Firmware_Version_CRC);
#endif
}

/**
 * @brief Send a firmware_version message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_firmware_version_send_struct(mavlink_channel_t chan, const mavlink_firmware_version_t* firmware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_firmware_version_send(chan, firmware_version->target_device, firmware_version->MAJOR, firmware_version->MINOR, firmware_version->PATCH);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_Version, (const char *)firmware_version, MAVLINK_MSG_ID_Firmware_Version_MIN_LEN, MAVLINK_MSG_ID_Firmware_Version_LEN, MAVLINK_MSG_ID_Firmware_Version_CRC);
#endif
}

#if MAVLINK_MSG_ID_Firmware_Version_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_firmware_version_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_device, uint16_t MAJOR, uint16_t MINOR, uint16_t PATCH)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, MAJOR);
    _mav_put_uint16_t(buf, 2, MINOR);
    _mav_put_uint16_t(buf, 4, PATCH);
    _mav_put_uint8_t(buf, 6, target_device);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_Version, buf, MAVLINK_MSG_ID_Firmware_Version_MIN_LEN, MAVLINK_MSG_ID_Firmware_Version_LEN, MAVLINK_MSG_ID_Firmware_Version_CRC);
#else
    mavlink_firmware_version_t *packet = (mavlink_firmware_version_t *)msgbuf;
    packet->MAJOR = MAJOR;
    packet->MINOR = MINOR;
    packet->PATCH = PATCH;
    packet->target_device = target_device;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_Version, (const char *)packet, MAVLINK_MSG_ID_Firmware_Version_MIN_LEN, MAVLINK_MSG_ID_Firmware_Version_LEN, MAVLINK_MSG_ID_Firmware_Version_CRC);
#endif
}
#endif

#endif

// MESSAGE Firmware_Version UNPACKING


/**
 * @brief Get field target_device from firmware_version message
 *
 * @return  uint8_t
 */
static inline uint8_t mavlink_msg_firmware_version_get_target_device(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field MAJOR from firmware_version message
 *
 * @return  MAJOR Version of firmware
 */
static inline uint16_t mavlink_msg_firmware_version_get_MAJOR(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field MINOR from firmware_version message
 *
 * @return  MINOR Version of firmware
 */
static inline uint16_t mavlink_msg_firmware_version_get_MINOR(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field PATCH from firmware_version message
 *
 * @return  PATCH Version of firmware
 */
static inline uint16_t mavlink_msg_firmware_version_get_PATCH(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Decode a firmware_version message into a struct
 *
 * @param msg The message to decode
 * @param firmware_version C-struct to decode the message contents into
 */
static inline void mavlink_msg_firmware_version_decode(const mavlink_message_t* msg, mavlink_firmware_version_t* firmware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    firmware_version->MAJOR = mavlink_msg_firmware_version_get_MAJOR(msg);
    firmware_version->MINOR = mavlink_msg_firmware_version_get_MINOR(msg);
    firmware_version->PATCH = mavlink_msg_firmware_version_get_PATCH(msg);
    firmware_version->target_device = mavlink_msg_firmware_version_get_target_device(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_Firmware_Version_LEN? msg->len : MAVLINK_MSG_ID_Firmware_Version_LEN;
        memset(firmware_version, 0, MAVLINK_MSG_ID_Firmware_Version_LEN);
    memcpy(firmware_version, _MAV_PAYLOAD(msg), len);
#endif
}
