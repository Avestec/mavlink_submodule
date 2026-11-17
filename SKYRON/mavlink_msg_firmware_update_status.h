#pragma once
// MESSAGE FIRMWARE_UPDATE_STATUS PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS 3374


typedef struct __mavlink_firmware_update_status_t {
 uint32_t next_offset; /*< [bytes] Offset from APP_BASE of the next chunk to send; equals image_size when complete.*/
 uint8_t mcu; /*<  MCU reporting.*/
 uint8_t result; /*<  Progress or error.*/
 uint8_t progress; /*< [%] Erase progress while ERASING, otherwise next_offset as a percentage of image_size.*/
} mavlink_firmware_update_status_t;

#define MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN 7
#define MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_MIN_LEN 7
#define MAVLINK_MSG_ID_3374_LEN 7
#define MAVLINK_MSG_ID_3374_MIN_LEN 7

#define MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_CRC 104
#define MAVLINK_MSG_ID_3374_CRC 104



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FIRMWARE_UPDATE_STATUS { \
    3374, \
    "FIRMWARE_UPDATE_STATUS", \
    4, \
    {  { "mcu", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_firmware_update_status_t, mcu) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_firmware_update_status_t, result) }, \
         { "next_offset", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_firmware_update_status_t, next_offset) }, \
         { "progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_firmware_update_status_t, progress) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FIRMWARE_UPDATE_STATUS { \
    "FIRMWARE_UPDATE_STATUS", \
    4, \
    {  { "mcu", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_firmware_update_status_t, mcu) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_firmware_update_status_t, result) }, \
         { "next_offset", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_firmware_update_status_t, next_offset) }, \
         { "progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_firmware_update_status_t, progress) }, \
         } \
}
#endif

/**
 * @brief Pack a firmware_update_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mcu  MCU reporting.
 * @param result  Progress or error.
 * @param next_offset [bytes] Offset from APP_BASE of the next chunk to send; equals image_size when complete.
 * @param progress [%] Erase progress while ERASING, otherwise next_offset as a percentage of image_size.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_update_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t mcu, uint8_t result, uint32_t next_offset, uint8_t progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, next_offset);
    _mav_put_uint8_t(buf, 4, mcu);
    _mav_put_uint8_t(buf, 5, result);
    _mav_put_uint8_t(buf, 6, progress);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN);
#else
    mavlink_firmware_update_status_t packet;
    packet.next_offset = next_offset;
    packet.mcu = mcu;
    packet.result = result;
    packet.progress = progress;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_CRC);
}

/**
 * @brief Pack a firmware_update_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param mcu  MCU reporting.
 * @param result  Progress or error.
 * @param next_offset [bytes] Offset from APP_BASE of the next chunk to send; equals image_size when complete.
 * @param progress [%] Erase progress while ERASING, otherwise next_offset as a percentage of image_size.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_update_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t mcu, uint8_t result, uint32_t next_offset, uint8_t progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, next_offset);
    _mav_put_uint8_t(buf, 4, mcu);
    _mav_put_uint8_t(buf, 5, result);
    _mav_put_uint8_t(buf, 6, progress);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN);
#else
    mavlink_firmware_update_status_t packet;
    packet.next_offset = next_offset;
    packet.mcu = mcu;
    packet.result = result;
    packet.progress = progress;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN);
#endif
}

/**
 * @brief Pack a firmware_update_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mcu  MCU reporting.
 * @param result  Progress or error.
 * @param next_offset [bytes] Offset from APP_BASE of the next chunk to send; equals image_size when complete.
 * @param progress [%] Erase progress while ERASING, otherwise next_offset as a percentage of image_size.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_update_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t mcu,uint8_t result,uint32_t next_offset,uint8_t progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, next_offset);
    _mav_put_uint8_t(buf, 4, mcu);
    _mav_put_uint8_t(buf, 5, result);
    _mav_put_uint8_t(buf, 6, progress);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN);
#else
    mavlink_firmware_update_status_t packet;
    packet.next_offset = next_offset;
    packet.mcu = mcu;
    packet.result = result;
    packet.progress = progress;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_CRC);
}

/**
 * @brief Encode a firmware_update_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param firmware_update_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_update_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_firmware_update_status_t* firmware_update_status)
{
    return mavlink_msg_firmware_update_status_pack(system_id, component_id, msg, firmware_update_status->mcu, firmware_update_status->result, firmware_update_status->next_offset, firmware_update_status->progress);
}

/**
 * @brief Encode a firmware_update_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param firmware_update_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_update_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_firmware_update_status_t* firmware_update_status)
{
    return mavlink_msg_firmware_update_status_pack_chan(system_id, component_id, chan, msg, firmware_update_status->mcu, firmware_update_status->result, firmware_update_status->next_offset, firmware_update_status->progress);
}

/**
 * @brief Encode a firmware_update_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param firmware_update_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_update_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_firmware_update_status_t* firmware_update_status)
{
    return mavlink_msg_firmware_update_status_pack_status(system_id, component_id, _status, msg,  firmware_update_status->mcu, firmware_update_status->result, firmware_update_status->next_offset, firmware_update_status->progress);
}

/**
 * @brief Send a firmware_update_status message
 * @param chan MAVLink channel to send the message
 *
 * @param mcu  MCU reporting.
 * @param result  Progress or error.
 * @param next_offset [bytes] Offset from APP_BASE of the next chunk to send; equals image_size when complete.
 * @param progress [%] Erase progress while ERASING, otherwise next_offset as a percentage of image_size.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_firmware_update_status_send(mavlink_channel_t chan, uint8_t mcu, uint8_t result, uint32_t next_offset, uint8_t progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, next_offset);
    _mav_put_uint8_t(buf, 4, mcu);
    _mav_put_uint8_t(buf, 5, result);
    _mav_put_uint8_t(buf, 6, progress);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS, buf, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_CRC);
#else
    mavlink_firmware_update_status_t packet;
    packet.next_offset = next_offset;
    packet.mcu = mcu;
    packet.result = result;
    packet.progress = progress;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS, (const char *)&packet, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_CRC);
#endif
}

/**
 * @brief Send a firmware_update_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_firmware_update_status_send_struct(mavlink_channel_t chan, const mavlink_firmware_update_status_t* firmware_update_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_firmware_update_status_send(chan, firmware_update_status->mcu, firmware_update_status->result, firmware_update_status->next_offset, firmware_update_status->progress);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS, (const char *)firmware_update_status, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_firmware_update_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t mcu, uint8_t result, uint32_t next_offset, uint8_t progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, next_offset);
    _mav_put_uint8_t(buf, 4, mcu);
    _mav_put_uint8_t(buf, 5, result);
    _mav_put_uint8_t(buf, 6, progress);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS, buf, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_CRC);
#else
    mavlink_firmware_update_status_t *packet = (mavlink_firmware_update_status_t *)msgbuf;
    packet->next_offset = next_offset;
    packet->mcu = mcu;
    packet->result = result;
    packet->progress = progress;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS, (const char *)packet, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE FIRMWARE_UPDATE_STATUS UNPACKING


/**
 * @brief Get field mcu from firmware_update_status message
 *
 * @return  MCU reporting.
 */
static inline uint8_t mavlink_msg_firmware_update_status_get_mcu(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field result from firmware_update_status message
 *
 * @return  Progress or error.
 */
static inline uint8_t mavlink_msg_firmware_update_status_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field next_offset from firmware_update_status message
 *
 * @return [bytes] Offset from APP_BASE of the next chunk to send; equals image_size when complete.
 */
static inline uint32_t mavlink_msg_firmware_update_status_get_next_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field progress from firmware_update_status message
 *
 * @return [%] Erase progress while ERASING, otherwise next_offset as a percentage of image_size.
 */
static inline uint8_t mavlink_msg_firmware_update_status_get_progress(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a firmware_update_status message into a struct
 *
 * @param msg The message to decode
 * @param firmware_update_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_firmware_update_status_decode(const mavlink_message_t* msg, mavlink_firmware_update_status_t* firmware_update_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    firmware_update_status->next_offset = mavlink_msg_firmware_update_status_get_next_offset(msg);
    firmware_update_status->mcu = mavlink_msg_firmware_update_status_get_mcu(msg);
    firmware_update_status->result = mavlink_msg_firmware_update_status_get_result(msg);
    firmware_update_status->progress = mavlink_msg_firmware_update_status_get_progress(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN? msg->len : MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN;
        memset(firmware_update_status, 0, MAVLINK_MSG_ID_FIRMWARE_UPDATE_STATUS_LEN);
    memcpy(firmware_update_status, _MAV_PAYLOAD(msg), len);
#endif
}
