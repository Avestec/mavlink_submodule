#pragma once
// MESSAGE Firmware_Hex PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_Firmware_Hex 3358


typedef struct __mavlink_firmware_hex_t {
 uint32_t Address; /*<  Start address of data*/
 uint8_t Length; /*<  Total length of data*/
 uint8_t Data[240]; /*<  Data to be written*/
} mavlink_firmware_hex_t;

#define MAVLINK_MSG_ID_Firmware_Hex_LEN 245
#define MAVLINK_MSG_ID_Firmware_Hex_MIN_LEN 245
#define MAVLINK_MSG_ID_3358_LEN 245
#define MAVLINK_MSG_ID_3358_MIN_LEN 245

#define MAVLINK_MSG_ID_Firmware_Hex_CRC 14
#define MAVLINK_MSG_ID_3358_CRC 14

#define MAVLINK_MSG_Firmware_Hex_FIELD_DATA_LEN 240

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_Firmware_Hex { \
    3358, \
    "Firmware_Hex", \
    3, \
    {  { "Address", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_firmware_hex_t, Address) }, \
         { "Length", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_firmware_hex_t, Length) }, \
         { "Data", NULL, MAVLINK_TYPE_UINT8_T, 240, 5, offsetof(mavlink_firmware_hex_t, Data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_Firmware_Hex { \
    "Firmware_Hex", \
    3, \
    {  { "Address", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_firmware_hex_t, Address) }, \
         { "Length", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_firmware_hex_t, Length) }, \
         { "Data", NULL, MAVLINK_TYPE_UINT8_T, 240, 5, offsetof(mavlink_firmware_hex_t, Data) }, \
         } \
}
#endif

/**
 * @brief Pack a firmware_hex message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Address  Start address of data
 * @param Length  Total length of data
 * @param Data  Data to be written
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_hex_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t Address, uint8_t Length, const uint8_t *Data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Firmware_Hex_LEN];
    _mav_put_uint32_t(buf, 0, Address);
    _mav_put_uint8_t(buf, 4, Length);
    _mav_put_uint8_t_array(buf, 5, Data, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Firmware_Hex_LEN);
#else
    mavlink_firmware_hex_t packet;
    packet.Address = Address;
    packet.Length = Length;
    mav_array_memcpy(packet.Data, Data, sizeof(uint8_t)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Firmware_Hex_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Firmware_Hex;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_Firmware_Hex_MIN_LEN, MAVLINK_MSG_ID_Firmware_Hex_LEN, MAVLINK_MSG_ID_Firmware_Hex_CRC);
}

/**
 * @brief Pack a firmware_hex message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param Address  Start address of data
 * @param Length  Total length of data
 * @param Data  Data to be written
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_hex_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t Address, uint8_t Length, const uint8_t *Data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Firmware_Hex_LEN];
    _mav_put_uint32_t(buf, 0, Address);
    _mav_put_uint8_t(buf, 4, Length);
    _mav_put_uint8_t_array(buf, 5, Data, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Firmware_Hex_LEN);
#else
    mavlink_firmware_hex_t packet;
    packet.Address = Address;
    packet.Length = Length;
    mav_array_memcpy(packet.Data, Data, sizeof(uint8_t)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Firmware_Hex_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Firmware_Hex;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Firmware_Hex_MIN_LEN, MAVLINK_MSG_ID_Firmware_Hex_LEN, MAVLINK_MSG_ID_Firmware_Hex_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_Firmware_Hex_MIN_LEN, MAVLINK_MSG_ID_Firmware_Hex_LEN);
#endif
}

/**
 * @brief Pack a firmware_hex message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Address  Start address of data
 * @param Length  Total length of data
 * @param Data  Data to be written
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_hex_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t Address,uint8_t Length,const uint8_t *Data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Firmware_Hex_LEN];
    _mav_put_uint32_t(buf, 0, Address);
    _mav_put_uint8_t(buf, 4, Length);
    _mav_put_uint8_t_array(buf, 5, Data, 240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_Firmware_Hex_LEN);
#else
    mavlink_firmware_hex_t packet;
    packet.Address = Address;
    packet.Length = Length;
    mav_array_memcpy(packet.Data, Data, sizeof(uint8_t)*240);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_Firmware_Hex_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_Firmware_Hex;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_Firmware_Hex_MIN_LEN, MAVLINK_MSG_ID_Firmware_Hex_LEN, MAVLINK_MSG_ID_Firmware_Hex_CRC);
}

/**
 * @brief Encode a firmware_hex struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param firmware_hex C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_hex_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_firmware_hex_t* firmware_hex)
{
    return mavlink_msg_firmware_hex_pack(system_id, component_id, msg, firmware_hex->Address, firmware_hex->Length, firmware_hex->Data);
}

/**
 * @brief Encode a firmware_hex struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param firmware_hex C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_hex_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_firmware_hex_t* firmware_hex)
{
    return mavlink_msg_firmware_hex_pack_chan(system_id, component_id, chan, msg, firmware_hex->Address, firmware_hex->Length, firmware_hex->Data);
}

/**
 * @brief Encode a firmware_hex struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param firmware_hex C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_hex_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_firmware_hex_t* firmware_hex)
{
    return mavlink_msg_firmware_hex_pack_status(system_id, component_id, _status, msg,  firmware_hex->Address, firmware_hex->Length, firmware_hex->Data);
}

/**
 * @brief Send a firmware_hex message
 * @param chan MAVLink channel to send the message
 *
 * @param Address  Start address of data
 * @param Length  Total length of data
 * @param Data  Data to be written
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_firmware_hex_send(mavlink_channel_t chan, uint32_t Address, uint8_t Length, const uint8_t *Data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_Firmware_Hex_LEN];
    _mav_put_uint32_t(buf, 0, Address);
    _mav_put_uint8_t(buf, 4, Length);
    _mav_put_uint8_t_array(buf, 5, Data, 240);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_Hex, buf, MAVLINK_MSG_ID_Firmware_Hex_MIN_LEN, MAVLINK_MSG_ID_Firmware_Hex_LEN, MAVLINK_MSG_ID_Firmware_Hex_CRC);
#else
    mavlink_firmware_hex_t packet;
    packet.Address = Address;
    packet.Length = Length;
    mav_array_memcpy(packet.Data, Data, sizeof(uint8_t)*240);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_Hex, (const char *)&packet, MAVLINK_MSG_ID_Firmware_Hex_MIN_LEN, MAVLINK_MSG_ID_Firmware_Hex_LEN, MAVLINK_MSG_ID_Firmware_Hex_CRC);
#endif
}

/**
 * @brief Send a firmware_hex message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_firmware_hex_send_struct(mavlink_channel_t chan, const mavlink_firmware_hex_t* firmware_hex)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_firmware_hex_send(chan, firmware_hex->Address, firmware_hex->Length, firmware_hex->Data);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_Hex, (const char *)firmware_hex, MAVLINK_MSG_ID_Firmware_Hex_MIN_LEN, MAVLINK_MSG_ID_Firmware_Hex_LEN, MAVLINK_MSG_ID_Firmware_Hex_CRC);
#endif
}

#if MAVLINK_MSG_ID_Firmware_Hex_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_firmware_hex_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t Address, uint8_t Length, const uint8_t *Data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, Address);
    _mav_put_uint8_t(buf, 4, Length);
    _mav_put_uint8_t_array(buf, 5, Data, 240);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_Hex, buf, MAVLINK_MSG_ID_Firmware_Hex_MIN_LEN, MAVLINK_MSG_ID_Firmware_Hex_LEN, MAVLINK_MSG_ID_Firmware_Hex_CRC);
#else
    mavlink_firmware_hex_t *packet = (mavlink_firmware_hex_t *)msgbuf;
    packet->Address = Address;
    packet->Length = Length;
    mav_array_memcpy(packet->Data, Data, sizeof(uint8_t)*240);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_Firmware_Hex, (const char *)packet, MAVLINK_MSG_ID_Firmware_Hex_MIN_LEN, MAVLINK_MSG_ID_Firmware_Hex_LEN, MAVLINK_MSG_ID_Firmware_Hex_CRC);
#endif
}
#endif

#endif

// MESSAGE Firmware_Hex UNPACKING


/**
 * @brief Get field Address from firmware_hex message
 *
 * @return  Start address of data
 */
static inline uint32_t mavlink_msg_firmware_hex_get_Address(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field Length from firmware_hex message
 *
 * @return  Total length of data
 */
static inline uint8_t mavlink_msg_firmware_hex_get_Length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field Data from firmware_hex message
 *
 * @return  Data to be written
 */
static inline uint16_t mavlink_msg_firmware_hex_get_Data(const mavlink_message_t* msg, uint8_t *Data)
{
    return _MAV_RETURN_uint8_t_array(msg, Data, 240,  5);
}

/**
 * @brief Decode a firmware_hex message into a struct
 *
 * @param msg The message to decode
 * @param firmware_hex C-struct to decode the message contents into
 */
static inline void mavlink_msg_firmware_hex_decode(const mavlink_message_t* msg, mavlink_firmware_hex_t* firmware_hex)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    firmware_hex->Address = mavlink_msg_firmware_hex_get_Address(msg);
    firmware_hex->Length = mavlink_msg_firmware_hex_get_Length(msg);
    mavlink_msg_firmware_hex_get_Data(msg, firmware_hex->Data);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_Firmware_Hex_LEN? msg->len : MAVLINK_MSG_ID_Firmware_Hex_LEN;
        memset(firmware_hex, 0, MAVLINK_MSG_ID_Firmware_Hex_LEN);
    memcpy(firmware_hex, _MAV_PAYLOAD(msg), len);
#endif
}
