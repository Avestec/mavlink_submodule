#pragma once
// MESSAGE FIRMWARE_DATA PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_FIRMWARE_DATA 3373


typedef struct __mavlink_firmware_data_t {
 uint32_t offset; /*< [bytes] Offset of the chunk from APP_BASE, a multiple of 4.*/
 uint8_t target_system; /*<  System ID.*/
 uint8_t target_component; /*<  Component ID.*/
 uint8_t mcu; /*<  MCU the chunk is for; selects the MCU on a dual-MCU PCB.*/
 uint8_t length; /*< [bytes] Bytes used in data, a multiple of 4, 4..240.*/
 uint8_t data[240]; /*<  Image bytes.*/
} mavlink_firmware_data_t;

#define MAVLINK_MSG_ID_FIRMWARE_DATA_LEN 248
#define MAVLINK_MSG_ID_FIRMWARE_DATA_MIN_LEN 248
#define MAVLINK_MSG_ID_3373_LEN 248
#define MAVLINK_MSG_ID_3373_MIN_LEN 248

#define MAVLINK_MSG_ID_FIRMWARE_DATA_CRC 122
#define MAVLINK_MSG_ID_3373_CRC 122

#define MAVLINK_MSG_FIRMWARE_DATA_FIELD_DATA_LEN 240

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FIRMWARE_DATA { \
    3373, \
    "FIRMWARE_DATA", \
    6, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_firmware_data_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_firmware_data_t, target_component) }, \
         { "mcu", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_firmware_data_t, mcu) }, \
         { "offset", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_firmware_data_t, offset) }, \
         { "length", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_firmware_data_t, length) }, \
         { "data", NULL, MAVLINK_TYPE_UINT8_T, 240, 8, offsetof(mavlink_firmware_data_t, data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FIRMWARE_DATA { \
    "FIRMWARE_DATA", \
    6, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_firmware_data_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_firmware_data_t, target_component) }, \
         { "mcu", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_firmware_data_t, mcu) }, \
         { "offset", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_firmware_data_t, offset) }, \
         { "length", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_firmware_data_t, length) }, \
         { "data", NULL, MAVLINK_TYPE_UINT8_T, 240, 8, offsetof(mavlink_firmware_data_t, data) }, \
         } \
}
#endif

/**
 * @brief Pack a firmware_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param mcu  MCU the chunk is for; selects the MCU on a dual-MCU PCB.
 * @param offset [bytes] Offset of the chunk from APP_BASE, a multiple of 4.
 * @param length [bytes] Bytes used in data, a multiple of 4, 4..240.
 * @param data  Image bytes.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t mcu, uint32_t offset, uint8_t length, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_DATA_LEN];
    _mav_put_uint32_t(buf, 0, offset);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, mcu);
    _mav_put_uint8_t(buf, 7, length);
    _mav_put_uint8_t_array(buf, 8, data, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN);
#else
    mavlink_firmware_data_t packet;
    packet.offset = offset;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.mcu = mcu;
    packet.length = length;
    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FIRMWARE_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FIRMWARE_DATA_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_CRC);
}

/**
 * @brief Pack a firmware_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param mcu  MCU the chunk is for; selects the MCU on a dual-MCU PCB.
 * @param offset [bytes] Offset of the chunk from APP_BASE, a multiple of 4.
 * @param length [bytes] Bytes used in data, a multiple of 4, 4..240.
 * @param data  Image bytes.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t mcu, uint32_t offset, uint8_t length, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_DATA_LEN];
    _mav_put_uint32_t(buf, 0, offset);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, mcu);
    _mav_put_uint8_t(buf, 7, length);
    _mav_put_uint8_t_array(buf, 8, data, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN);
#else
    mavlink_firmware_data_t packet;
    packet.offset = offset;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.mcu = mcu;
    packet.length = length;
    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FIRMWARE_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FIRMWARE_DATA_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FIRMWARE_DATA_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN);
#endif
}

/**
 * @brief Pack a firmware_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param mcu  MCU the chunk is for; selects the MCU on a dual-MCU PCB.
 * @param offset [bytes] Offset of the chunk from APP_BASE, a multiple of 4.
 * @param length [bytes] Bytes used in data, a multiple of 4, 4..240.
 * @param data  Image bytes.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t mcu,uint32_t offset,uint8_t length,const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_DATA_LEN];
    _mav_put_uint32_t(buf, 0, offset);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, mcu);
    _mav_put_uint8_t(buf, 7, length);
    _mav_put_uint8_t_array(buf, 8, data, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN);
#else
    mavlink_firmware_data_t packet;
    packet.offset = offset;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.mcu = mcu;
    packet.length = length;
    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FIRMWARE_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FIRMWARE_DATA_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_CRC);
}

/**
 * @brief Encode a firmware_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param firmware_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_firmware_data_t* firmware_data)
{
    return mavlink_msg_firmware_data_pack(system_id, component_id, msg, firmware_data->target_system, firmware_data->target_component, firmware_data->mcu, firmware_data->offset, firmware_data->length, firmware_data->data);
}

/**
 * @brief Encode a firmware_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param firmware_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_firmware_data_t* firmware_data)
{
    return mavlink_msg_firmware_data_pack_chan(system_id, component_id, chan, msg, firmware_data->target_system, firmware_data->target_component, firmware_data->mcu, firmware_data->offset, firmware_data->length, firmware_data->data);
}

/**
 * @brief Encode a firmware_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param firmware_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_firmware_data_t* firmware_data)
{
    return mavlink_msg_firmware_data_pack_status(system_id, component_id, _status, msg,  firmware_data->target_system, firmware_data->target_component, firmware_data->mcu, firmware_data->offset, firmware_data->length, firmware_data->data);
}

/**
 * @brief Send a firmware_data message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param mcu  MCU the chunk is for; selects the MCU on a dual-MCU PCB.
 * @param offset [bytes] Offset of the chunk from APP_BASE, a multiple of 4.
 * @param length [bytes] Bytes used in data, a multiple of 4, 4..240.
 * @param data  Image bytes.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_firmware_data_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t mcu, uint32_t offset, uint8_t length, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_DATA_LEN];
    _mav_put_uint32_t(buf, 0, offset);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, mcu);
    _mav_put_uint8_t(buf, 7, length);
    _mav_put_uint8_t_array(buf, 8, data, 240);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_DATA, buf, MAVLINK_MSG_ID_FIRMWARE_DATA_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_CRC);
#else
    mavlink_firmware_data_t packet;
    packet.offset = offset;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.mcu = mcu;
    packet.length = length;
    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*240);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_DATA, (const char *)&packet, MAVLINK_MSG_ID_FIRMWARE_DATA_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_CRC);
#endif
}

/**
 * @brief Send a firmware_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_firmware_data_send_struct(mavlink_channel_t chan, const mavlink_firmware_data_t* firmware_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_firmware_data_send(chan, firmware_data->target_system, firmware_data->target_component, firmware_data->mcu, firmware_data->offset, firmware_data->length, firmware_data->data);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_DATA, (const char *)firmware_data, MAVLINK_MSG_ID_FIRMWARE_DATA_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_FIRMWARE_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_firmware_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t mcu, uint32_t offset, uint8_t length, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, offset);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, mcu);
    _mav_put_uint8_t(buf, 7, length);
    _mav_put_uint8_t_array(buf, 8, data, 240);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_DATA, buf, MAVLINK_MSG_ID_FIRMWARE_DATA_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_CRC);
#else
    mavlink_firmware_data_t *packet = (mavlink_firmware_data_t *)msgbuf;
    packet->offset = offset;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->mcu = mcu;
    packet->length = length;
    mav_array_memcpy(packet->data, data, sizeof(uint8_t)*240);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_DATA, (const char *)packet, MAVLINK_MSG_ID_FIRMWARE_DATA_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN, MAVLINK_MSG_ID_FIRMWARE_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE FIRMWARE_DATA UNPACKING


/**
 * @brief Get field target_system from firmware_data message
 *
 * @return  System ID.
 */
static inline uint8_t mavlink_msg_firmware_data_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field target_component from firmware_data message
 *
 * @return  Component ID.
 */
static inline uint8_t mavlink_msg_firmware_data_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field mcu from firmware_data message
 *
 * @return  MCU the chunk is for; selects the MCU on a dual-MCU PCB.
 */
static inline uint8_t mavlink_msg_firmware_data_get_mcu(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field offset from firmware_data message
 *
 * @return [bytes] Offset of the chunk from APP_BASE, a multiple of 4.
 */
static inline uint32_t mavlink_msg_firmware_data_get_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field length from firmware_data message
 *
 * @return [bytes] Bytes used in data, a multiple of 4, 4..240.
 */
static inline uint8_t mavlink_msg_firmware_data_get_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field data from firmware_data message
 *
 * @return  Image bytes.
 */
static inline uint16_t mavlink_msg_firmware_data_get_data(const mavlink_message_t* msg, uint8_t *data)
{
    return _MAV_RETURN_uint8_t_array(msg, data, 240,  8);
}

/**
 * @brief Decode a firmware_data message into a struct
 *
 * @param msg The message to decode
 * @param firmware_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_firmware_data_decode(const mavlink_message_t* msg, mavlink_firmware_data_t* firmware_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    firmware_data->offset = mavlink_msg_firmware_data_get_offset(msg);
    firmware_data->target_system = mavlink_msg_firmware_data_get_target_system(msg);
    firmware_data->target_component = mavlink_msg_firmware_data_get_target_component(msg);
    firmware_data->mcu = mavlink_msg_firmware_data_get_mcu(msg);
    firmware_data->length = mavlink_msg_firmware_data_get_length(msg);
    mavlink_msg_firmware_data_get_data(msg, firmware_data->data);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FIRMWARE_DATA_LEN? msg->len : MAVLINK_MSG_ID_FIRMWARE_DATA_LEN;
        memset(firmware_data, 0, MAVLINK_MSG_ID_FIRMWARE_DATA_LEN);
    memcpy(firmware_data, _MAV_PAYLOAD(msg), len);
#endif
}
