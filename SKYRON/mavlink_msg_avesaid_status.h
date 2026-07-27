#pragma once
// MESSAGE AVESAID_STATUS PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_AVESAID_STATUS 3353


typedef struct __mavlink_avesaid_status_t {
 uint64_t timestamp; /*<  Time since system start (microseconds).*/
 uint8_t flag_mode_attachment_enabled; /*<  Attachment mode enabled.*/
 uint8_t flag_mode_partial_attachment_enabled; /*<  Partial attachment mode enabled.*/
 uint8_t flag_magnet_enabled; /*<  Magnet enabled.*/
 uint8_t flag_height_source_baro_enabled; /*<  Barometer used as height source.*/
 uint8_t flag_height_source_slam_enabled; /*<  SLAM used as height source.*/
 uint8_t flag_payload_enabled; /*<  payload status.*/
} mavlink_avesaid_status_t;

#define MAVLINK_MSG_ID_AVESAID_STATUS_LEN 14
#define MAVLINK_MSG_ID_AVESAID_STATUS_MIN_LEN 14
#define MAVLINK_MSG_ID_3353_LEN 14
#define MAVLINK_MSG_ID_3353_MIN_LEN 14

#define MAVLINK_MSG_ID_AVESAID_STATUS_CRC 238
#define MAVLINK_MSG_ID_3353_CRC 238



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AVESAID_STATUS { \
    3353, \
    "AVESAID_STATUS", \
    7, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_avesaid_status_t, timestamp) }, \
         { "flag_mode_attachment_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_avesaid_status_t, flag_mode_attachment_enabled) }, \
         { "flag_mode_partial_attachment_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_avesaid_status_t, flag_mode_partial_attachment_enabled) }, \
         { "flag_magnet_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_avesaid_status_t, flag_magnet_enabled) }, \
         { "flag_height_source_baro_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_avesaid_status_t, flag_height_source_baro_enabled) }, \
         { "flag_height_source_slam_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_avesaid_status_t, flag_height_source_slam_enabled) }, \
         { "flag_payload_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_avesaid_status_t, flag_payload_enabled) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AVESAID_STATUS { \
    "AVESAID_STATUS", \
    7, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_avesaid_status_t, timestamp) }, \
         { "flag_mode_attachment_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_avesaid_status_t, flag_mode_attachment_enabled) }, \
         { "flag_mode_partial_attachment_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_avesaid_status_t, flag_mode_partial_attachment_enabled) }, \
         { "flag_magnet_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_avesaid_status_t, flag_magnet_enabled) }, \
         { "flag_height_source_baro_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_avesaid_status_t, flag_height_source_baro_enabled) }, \
         { "flag_height_source_slam_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_avesaid_status_t, flag_height_source_slam_enabled) }, \
         { "flag_payload_enabled", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_avesaid_status_t, flag_payload_enabled) }, \
         } \
}
#endif

/**
 * @brief Pack a avesaid_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Time since system start (microseconds).
 * @param flag_mode_attachment_enabled  Attachment mode enabled.
 * @param flag_mode_partial_attachment_enabled  Partial attachment mode enabled.
 * @param flag_magnet_enabled  Magnet enabled.
 * @param flag_height_source_baro_enabled  Barometer used as height source.
 * @param flag_height_source_slam_enabled  SLAM used as height source.
 * @param flag_payload_enabled  payload status.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_avesaid_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t flag_mode_attachment_enabled, uint8_t flag_mode_partial_attachment_enabled, uint8_t flag_magnet_enabled, uint8_t flag_height_source_baro_enabled, uint8_t flag_height_source_slam_enabled, uint8_t flag_payload_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVESAID_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, flag_mode_attachment_enabled);
    _mav_put_uint8_t(buf, 9, flag_mode_partial_attachment_enabled);
    _mav_put_uint8_t(buf, 10, flag_magnet_enabled);
    _mav_put_uint8_t(buf, 11, flag_height_source_baro_enabled);
    _mav_put_uint8_t(buf, 12, flag_height_source_slam_enabled);
    _mav_put_uint8_t(buf, 13, flag_payload_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVESAID_STATUS_LEN);
#else
    mavlink_avesaid_status_t packet;
    packet.timestamp = timestamp;
    packet.flag_mode_attachment_enabled = flag_mode_attachment_enabled;
    packet.flag_mode_partial_attachment_enabled = flag_mode_partial_attachment_enabled;
    packet.flag_magnet_enabled = flag_magnet_enabled;
    packet.flag_height_source_baro_enabled = flag_height_source_baro_enabled;
    packet.flag_height_source_slam_enabled = flag_height_source_slam_enabled;
    packet.flag_payload_enabled = flag_payload_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVESAID_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVESAID_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AVESAID_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_CRC);
}

/**
 * @brief Pack a avesaid_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Time since system start (microseconds).
 * @param flag_mode_attachment_enabled  Attachment mode enabled.
 * @param flag_mode_partial_attachment_enabled  Partial attachment mode enabled.
 * @param flag_magnet_enabled  Magnet enabled.
 * @param flag_height_source_baro_enabled  Barometer used as height source.
 * @param flag_height_source_slam_enabled  SLAM used as height source.
 * @param flag_payload_enabled  payload status.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_avesaid_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, uint8_t flag_mode_attachment_enabled, uint8_t flag_mode_partial_attachment_enabled, uint8_t flag_magnet_enabled, uint8_t flag_height_source_baro_enabled, uint8_t flag_height_source_slam_enabled, uint8_t flag_payload_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVESAID_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, flag_mode_attachment_enabled);
    _mav_put_uint8_t(buf, 9, flag_mode_partial_attachment_enabled);
    _mav_put_uint8_t(buf, 10, flag_magnet_enabled);
    _mav_put_uint8_t(buf, 11, flag_height_source_baro_enabled);
    _mav_put_uint8_t(buf, 12, flag_height_source_slam_enabled);
    _mav_put_uint8_t(buf, 13, flag_payload_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVESAID_STATUS_LEN);
#else
    mavlink_avesaid_status_t packet;
    packet.timestamp = timestamp;
    packet.flag_mode_attachment_enabled = flag_mode_attachment_enabled;
    packet.flag_mode_partial_attachment_enabled = flag_mode_partial_attachment_enabled;
    packet.flag_magnet_enabled = flag_magnet_enabled;
    packet.flag_height_source_baro_enabled = flag_height_source_baro_enabled;
    packet.flag_height_source_slam_enabled = flag_height_source_slam_enabled;
    packet.flag_payload_enabled = flag_payload_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVESAID_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVESAID_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVESAID_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVESAID_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_LEN);
#endif
}

/**
 * @brief Pack a avesaid_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  Time since system start (microseconds).
 * @param flag_mode_attachment_enabled  Attachment mode enabled.
 * @param flag_mode_partial_attachment_enabled  Partial attachment mode enabled.
 * @param flag_magnet_enabled  Magnet enabled.
 * @param flag_height_source_baro_enabled  Barometer used as height source.
 * @param flag_height_source_slam_enabled  SLAM used as height source.
 * @param flag_payload_enabled  payload status.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_avesaid_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,uint8_t flag_mode_attachment_enabled,uint8_t flag_mode_partial_attachment_enabled,uint8_t flag_magnet_enabled,uint8_t flag_height_source_baro_enabled,uint8_t flag_height_source_slam_enabled,uint8_t flag_payload_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVESAID_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, flag_mode_attachment_enabled);
    _mav_put_uint8_t(buf, 9, flag_mode_partial_attachment_enabled);
    _mav_put_uint8_t(buf, 10, flag_magnet_enabled);
    _mav_put_uint8_t(buf, 11, flag_height_source_baro_enabled);
    _mav_put_uint8_t(buf, 12, flag_height_source_slam_enabled);
    _mav_put_uint8_t(buf, 13, flag_payload_enabled);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVESAID_STATUS_LEN);
#else
    mavlink_avesaid_status_t packet;
    packet.timestamp = timestamp;
    packet.flag_mode_attachment_enabled = flag_mode_attachment_enabled;
    packet.flag_mode_partial_attachment_enabled = flag_mode_partial_attachment_enabled;
    packet.flag_magnet_enabled = flag_magnet_enabled;
    packet.flag_height_source_baro_enabled = flag_height_source_baro_enabled;
    packet.flag_height_source_slam_enabled = flag_height_source_slam_enabled;
    packet.flag_payload_enabled = flag_payload_enabled;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVESAID_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVESAID_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AVESAID_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_CRC);
}

/**
 * @brief Encode a avesaid_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param avesaid_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_avesaid_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_avesaid_status_t* avesaid_status)
{
    return mavlink_msg_avesaid_status_pack(system_id, component_id, msg, avesaid_status->timestamp, avesaid_status->flag_mode_attachment_enabled, avesaid_status->flag_mode_partial_attachment_enabled, avesaid_status->flag_magnet_enabled, avesaid_status->flag_height_source_baro_enabled, avesaid_status->flag_height_source_slam_enabled, avesaid_status->flag_payload_enabled);
}

/**
 * @brief Encode a avesaid_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param avesaid_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_avesaid_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_avesaid_status_t* avesaid_status)
{
    return mavlink_msg_avesaid_status_pack_chan(system_id, component_id, chan, msg, avesaid_status->timestamp, avesaid_status->flag_mode_attachment_enabled, avesaid_status->flag_mode_partial_attachment_enabled, avesaid_status->flag_magnet_enabled, avesaid_status->flag_height_source_baro_enabled, avesaid_status->flag_height_source_slam_enabled, avesaid_status->flag_payload_enabled);
}

/**
 * @brief Encode a avesaid_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param avesaid_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_avesaid_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_avesaid_status_t* avesaid_status)
{
    return mavlink_msg_avesaid_status_pack_status(system_id, component_id, _status, msg,  avesaid_status->timestamp, avesaid_status->flag_mode_attachment_enabled, avesaid_status->flag_mode_partial_attachment_enabled, avesaid_status->flag_magnet_enabled, avesaid_status->flag_height_source_baro_enabled, avesaid_status->flag_height_source_slam_enabled, avesaid_status->flag_payload_enabled);
}

/**
 * @brief Send a avesaid_status message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  Time since system start (microseconds).
 * @param flag_mode_attachment_enabled  Attachment mode enabled.
 * @param flag_mode_partial_attachment_enabled  Partial attachment mode enabled.
 * @param flag_magnet_enabled  Magnet enabled.
 * @param flag_height_source_baro_enabled  Barometer used as height source.
 * @param flag_height_source_slam_enabled  SLAM used as height source.
 * @param flag_payload_enabled  payload status.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_avesaid_status_send(mavlink_channel_t chan, uint64_t timestamp, uint8_t flag_mode_attachment_enabled, uint8_t flag_mode_partial_attachment_enabled, uint8_t flag_magnet_enabled, uint8_t flag_height_source_baro_enabled, uint8_t flag_height_source_slam_enabled, uint8_t flag_payload_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVESAID_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, flag_mode_attachment_enabled);
    _mav_put_uint8_t(buf, 9, flag_mode_partial_attachment_enabled);
    _mav_put_uint8_t(buf, 10, flag_magnet_enabled);
    _mav_put_uint8_t(buf, 11, flag_height_source_baro_enabled);
    _mav_put_uint8_t(buf, 12, flag_height_source_slam_enabled);
    _mav_put_uint8_t(buf, 13, flag_payload_enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVESAID_STATUS, buf, MAVLINK_MSG_ID_AVESAID_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_CRC);
#else
    mavlink_avesaid_status_t packet;
    packet.timestamp = timestamp;
    packet.flag_mode_attachment_enabled = flag_mode_attachment_enabled;
    packet.flag_mode_partial_attachment_enabled = flag_mode_partial_attachment_enabled;
    packet.flag_magnet_enabled = flag_magnet_enabled;
    packet.flag_height_source_baro_enabled = flag_height_source_baro_enabled;
    packet.flag_height_source_slam_enabled = flag_height_source_slam_enabled;
    packet.flag_payload_enabled = flag_payload_enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVESAID_STATUS, (const char *)&packet, MAVLINK_MSG_ID_AVESAID_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_CRC);
#endif
}

/**
 * @brief Send a avesaid_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_avesaid_status_send_struct(mavlink_channel_t chan, const mavlink_avesaid_status_t* avesaid_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_avesaid_status_send(chan, avesaid_status->timestamp, avesaid_status->flag_mode_attachment_enabled, avesaid_status->flag_mode_partial_attachment_enabled, avesaid_status->flag_magnet_enabled, avesaid_status->flag_height_source_baro_enabled, avesaid_status->flag_height_source_slam_enabled, avesaid_status->flag_payload_enabled);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVESAID_STATUS, (const char *)avesaid_status, MAVLINK_MSG_ID_AVESAID_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_AVESAID_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_avesaid_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, uint8_t flag_mode_attachment_enabled, uint8_t flag_mode_partial_attachment_enabled, uint8_t flag_magnet_enabled, uint8_t flag_height_source_baro_enabled, uint8_t flag_height_source_slam_enabled, uint8_t flag_payload_enabled)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_uint8_t(buf, 8, flag_mode_attachment_enabled);
    _mav_put_uint8_t(buf, 9, flag_mode_partial_attachment_enabled);
    _mav_put_uint8_t(buf, 10, flag_magnet_enabled);
    _mav_put_uint8_t(buf, 11, flag_height_source_baro_enabled);
    _mav_put_uint8_t(buf, 12, flag_height_source_slam_enabled);
    _mav_put_uint8_t(buf, 13, flag_payload_enabled);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVESAID_STATUS, buf, MAVLINK_MSG_ID_AVESAID_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_CRC);
#else
    mavlink_avesaid_status_t *packet = (mavlink_avesaid_status_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->flag_mode_attachment_enabled = flag_mode_attachment_enabled;
    packet->flag_mode_partial_attachment_enabled = flag_mode_partial_attachment_enabled;
    packet->flag_magnet_enabled = flag_magnet_enabled;
    packet->flag_height_source_baro_enabled = flag_height_source_baro_enabled;
    packet->flag_height_source_slam_enabled = flag_height_source_slam_enabled;
    packet->flag_payload_enabled = flag_payload_enabled;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVESAID_STATUS, (const char *)packet, MAVLINK_MSG_ID_AVESAID_STATUS_MIN_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_LEN, MAVLINK_MSG_ID_AVESAID_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE AVESAID_STATUS UNPACKING


/**
 * @brief Get field timestamp from avesaid_status message
 *
 * @return  Time since system start (microseconds).
 */
static inline uint64_t mavlink_msg_avesaid_status_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field flag_mode_attachment_enabled from avesaid_status message
 *
 * @return  Attachment mode enabled.
 */
static inline uint8_t mavlink_msg_avesaid_status_get_flag_mode_attachment_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field flag_mode_partial_attachment_enabled from avesaid_status message
 *
 * @return  Partial attachment mode enabled.
 */
static inline uint8_t mavlink_msg_avesaid_status_get_flag_mode_partial_attachment_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field flag_magnet_enabled from avesaid_status message
 *
 * @return  Magnet enabled.
 */
static inline uint8_t mavlink_msg_avesaid_status_get_flag_magnet_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field flag_height_source_baro_enabled from avesaid_status message
 *
 * @return  Barometer used as height source.
 */
static inline uint8_t mavlink_msg_avesaid_status_get_flag_height_source_baro_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field flag_height_source_slam_enabled from avesaid_status message
 *
 * @return  SLAM used as height source.
 */
static inline uint8_t mavlink_msg_avesaid_status_get_flag_height_source_slam_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field flag_payload_enabled from avesaid_status message
 *
 * @return  payload status.
 */
static inline uint8_t mavlink_msg_avesaid_status_get_flag_payload_enabled(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Decode a avesaid_status message into a struct
 *
 * @param msg The message to decode
 * @param avesaid_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_avesaid_status_decode(const mavlink_message_t* msg, mavlink_avesaid_status_t* avesaid_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    avesaid_status->timestamp = mavlink_msg_avesaid_status_get_timestamp(msg);
    avesaid_status->flag_mode_attachment_enabled = mavlink_msg_avesaid_status_get_flag_mode_attachment_enabled(msg);
    avesaid_status->flag_mode_partial_attachment_enabled = mavlink_msg_avesaid_status_get_flag_mode_partial_attachment_enabled(msg);
    avesaid_status->flag_magnet_enabled = mavlink_msg_avesaid_status_get_flag_magnet_enabled(msg);
    avesaid_status->flag_height_source_baro_enabled = mavlink_msg_avesaid_status_get_flag_height_source_baro_enabled(msg);
    avesaid_status->flag_height_source_slam_enabled = mavlink_msg_avesaid_status_get_flag_height_source_slam_enabled(msg);
    avesaid_status->flag_payload_enabled = mavlink_msg_avesaid_status_get_flag_payload_enabled(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AVESAID_STATUS_LEN? msg->len : MAVLINK_MSG_ID_AVESAID_STATUS_LEN;
        memset(avesaid_status, 0, MAVLINK_MSG_ID_AVESAID_STATUS_LEN);
    memcpy(avesaid_status, _MAV_PAYLOAD(msg), len);
#endif
}
