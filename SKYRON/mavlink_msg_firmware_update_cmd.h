#pragma once
// MESSAGE FIRMWARE_UPDATE_CMD PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD 3372


typedef struct __mavlink_firmware_update_cmd_t {
 uint32_t board; /*<  BEGIN: PCB id the image is built for (app_header.board, enum board_e in UnifiedBootloader/common/Inc/headers.h). Otherwise 0.*/
 uint32_t image_size; /*< [bytes] BEGIN: image size from APP_BASE, a multiple of 4 (app_header.image_size). Otherwise 0.*/
 uint32_t image_crc32; /*<  BEGIN: CRC-32 of the image (app_header.image_crc32). Otherwise 0.*/
 uint8_t target_system; /*<  System ID.*/
 uint8_t target_component; /*<  Component ID.*/
 uint8_t command; /*<  Action.*/
 uint8_t mcu; /*<  MCU addressed; selects the MCU on a dual-MCU PCB.*/
 uint8_t board_rev; /*<  BEGIN: PCB revision the image is built for, 255 = any. Otherwise 0.*/
 uint8_t board_variant; /*<  BEGIN: board variant the image is built for, 255 = any. Otherwise 0.*/
 uint8_t app_major; /*<  BEGIN: major version of the image. Otherwise 0.*/
} mavlink_firmware_update_cmd_t;

#define MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN 19
#define MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_MIN_LEN 19
#define MAVLINK_MSG_ID_3372_LEN 19
#define MAVLINK_MSG_ID_3372_MIN_LEN 19

#define MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_CRC 176
#define MAVLINK_MSG_ID_3372_CRC 176



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FIRMWARE_UPDATE_CMD { \
    3372, \
    "FIRMWARE_UPDATE_CMD", \
    10, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_firmware_update_cmd_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_firmware_update_cmd_t, target_component) }, \
         { "command", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_firmware_update_cmd_t, command) }, \
         { "mcu", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_firmware_update_cmd_t, mcu) }, \
         { "board", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_firmware_update_cmd_t, board) }, \
         { "board_rev", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_firmware_update_cmd_t, board_rev) }, \
         { "board_variant", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_firmware_update_cmd_t, board_variant) }, \
         { "app_major", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_firmware_update_cmd_t, app_major) }, \
         { "image_size", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_firmware_update_cmd_t, image_size) }, \
         { "image_crc32", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_firmware_update_cmd_t, image_crc32) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FIRMWARE_UPDATE_CMD { \
    "FIRMWARE_UPDATE_CMD", \
    10, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_firmware_update_cmd_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_firmware_update_cmd_t, target_component) }, \
         { "command", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_firmware_update_cmd_t, command) }, \
         { "mcu", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_firmware_update_cmd_t, mcu) }, \
         { "board", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_firmware_update_cmd_t, board) }, \
         { "board_rev", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_firmware_update_cmd_t, board_rev) }, \
         { "board_variant", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_firmware_update_cmd_t, board_variant) }, \
         { "app_major", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_firmware_update_cmd_t, app_major) }, \
         { "image_size", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_firmware_update_cmd_t, image_size) }, \
         { "image_crc32", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_firmware_update_cmd_t, image_crc32) }, \
         } \
}
#endif

/**
 * @brief Pack a firmware_update_cmd message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param command  Action.
 * @param mcu  MCU addressed; selects the MCU on a dual-MCU PCB.
 * @param board  BEGIN: PCB id the image is built for (app_header.board, enum board_e in UnifiedBootloader/common/Inc/headers.h). Otherwise 0.
 * @param board_rev  BEGIN: PCB revision the image is built for, 255 = any. Otherwise 0.
 * @param board_variant  BEGIN: board variant the image is built for, 255 = any. Otherwise 0.
 * @param app_major  BEGIN: major version of the image. Otherwise 0.
 * @param image_size [bytes] BEGIN: image size from APP_BASE, a multiple of 4 (app_header.image_size). Otherwise 0.
 * @param image_crc32  BEGIN: CRC-32 of the image (app_header.image_crc32). Otherwise 0.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_update_cmd_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t command, uint8_t mcu, uint32_t board, uint8_t board_rev, uint8_t board_variant, uint8_t app_major, uint32_t image_size, uint32_t image_crc32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN];
    _mav_put_uint32_t(buf, 0, board);
    _mav_put_uint32_t(buf, 4, image_size);
    _mav_put_uint32_t(buf, 8, image_crc32);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, command);
    _mav_put_uint8_t(buf, 15, mcu);
    _mav_put_uint8_t(buf, 16, board_rev);
    _mav_put_uint8_t(buf, 17, board_variant);
    _mav_put_uint8_t(buf, 18, app_major);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN);
#else
    mavlink_firmware_update_cmd_t packet;
    packet.board = board;
    packet.image_size = image_size;
    packet.image_crc32 = image_crc32;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.command = command;
    packet.mcu = mcu;
    packet.board_rev = board_rev;
    packet.board_variant = board_variant;
    packet.app_major = app_major;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_CRC);
}

/**
 * @brief Pack a firmware_update_cmd message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param command  Action.
 * @param mcu  MCU addressed; selects the MCU on a dual-MCU PCB.
 * @param board  BEGIN: PCB id the image is built for (app_header.board, enum board_e in UnifiedBootloader/common/Inc/headers.h). Otherwise 0.
 * @param board_rev  BEGIN: PCB revision the image is built for, 255 = any. Otherwise 0.
 * @param board_variant  BEGIN: board variant the image is built for, 255 = any. Otherwise 0.
 * @param app_major  BEGIN: major version of the image. Otherwise 0.
 * @param image_size [bytes] BEGIN: image size from APP_BASE, a multiple of 4 (app_header.image_size). Otherwise 0.
 * @param image_crc32  BEGIN: CRC-32 of the image (app_header.image_crc32). Otherwise 0.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_update_cmd_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t command, uint8_t mcu, uint32_t board, uint8_t board_rev, uint8_t board_variant, uint8_t app_major, uint32_t image_size, uint32_t image_crc32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN];
    _mav_put_uint32_t(buf, 0, board);
    _mav_put_uint32_t(buf, 4, image_size);
    _mav_put_uint32_t(buf, 8, image_crc32);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, command);
    _mav_put_uint8_t(buf, 15, mcu);
    _mav_put_uint8_t(buf, 16, board_rev);
    _mav_put_uint8_t(buf, 17, board_variant);
    _mav_put_uint8_t(buf, 18, app_major);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN);
#else
    mavlink_firmware_update_cmd_t packet;
    packet.board = board;
    packet.image_size = image_size;
    packet.image_crc32 = image_crc32;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.command = command;
    packet.mcu = mcu;
    packet.board_rev = board_rev;
    packet.board_variant = board_variant;
    packet.app_major = app_major;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN);
#endif
}

/**
 * @brief Pack a firmware_update_cmd message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param command  Action.
 * @param mcu  MCU addressed; selects the MCU on a dual-MCU PCB.
 * @param board  BEGIN: PCB id the image is built for (app_header.board, enum board_e in UnifiedBootloader/common/Inc/headers.h). Otherwise 0.
 * @param board_rev  BEGIN: PCB revision the image is built for, 255 = any. Otherwise 0.
 * @param board_variant  BEGIN: board variant the image is built for, 255 = any. Otherwise 0.
 * @param app_major  BEGIN: major version of the image. Otherwise 0.
 * @param image_size [bytes] BEGIN: image size from APP_BASE, a multiple of 4 (app_header.image_size). Otherwise 0.
 * @param image_crc32  BEGIN: CRC-32 of the image (app_header.image_crc32). Otherwise 0.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_update_cmd_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t command,uint8_t mcu,uint32_t board,uint8_t board_rev,uint8_t board_variant,uint8_t app_major,uint32_t image_size,uint32_t image_crc32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN];
    _mav_put_uint32_t(buf, 0, board);
    _mav_put_uint32_t(buf, 4, image_size);
    _mav_put_uint32_t(buf, 8, image_crc32);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, command);
    _mav_put_uint8_t(buf, 15, mcu);
    _mav_put_uint8_t(buf, 16, board_rev);
    _mav_put_uint8_t(buf, 17, board_variant);
    _mav_put_uint8_t(buf, 18, app_major);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN);
#else
    mavlink_firmware_update_cmd_t packet;
    packet.board = board;
    packet.image_size = image_size;
    packet.image_crc32 = image_crc32;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.command = command;
    packet.mcu = mcu;
    packet.board_rev = board_rev;
    packet.board_variant = board_variant;
    packet.app_major = app_major;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_CRC);
}

/**
 * @brief Encode a firmware_update_cmd struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param firmware_update_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_update_cmd_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_firmware_update_cmd_t* firmware_update_cmd)
{
    return mavlink_msg_firmware_update_cmd_pack(system_id, component_id, msg, firmware_update_cmd->target_system, firmware_update_cmd->target_component, firmware_update_cmd->command, firmware_update_cmd->mcu, firmware_update_cmd->board, firmware_update_cmd->board_rev, firmware_update_cmd->board_variant, firmware_update_cmd->app_major, firmware_update_cmd->image_size, firmware_update_cmd->image_crc32);
}

/**
 * @brief Encode a firmware_update_cmd struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param firmware_update_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_update_cmd_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_firmware_update_cmd_t* firmware_update_cmd)
{
    return mavlink_msg_firmware_update_cmd_pack_chan(system_id, component_id, chan, msg, firmware_update_cmd->target_system, firmware_update_cmd->target_component, firmware_update_cmd->command, firmware_update_cmd->mcu, firmware_update_cmd->board, firmware_update_cmd->board_rev, firmware_update_cmd->board_variant, firmware_update_cmd->app_major, firmware_update_cmd->image_size, firmware_update_cmd->image_crc32);
}

/**
 * @brief Encode a firmware_update_cmd struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param firmware_update_cmd C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_update_cmd_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_firmware_update_cmd_t* firmware_update_cmd)
{
    return mavlink_msg_firmware_update_cmd_pack_status(system_id, component_id, _status, msg,  firmware_update_cmd->target_system, firmware_update_cmd->target_component, firmware_update_cmd->command, firmware_update_cmd->mcu, firmware_update_cmd->board, firmware_update_cmd->board_rev, firmware_update_cmd->board_variant, firmware_update_cmd->app_major, firmware_update_cmd->image_size, firmware_update_cmd->image_crc32);
}

/**
 * @brief Send a firmware_update_cmd message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID.
 * @param target_component  Component ID.
 * @param command  Action.
 * @param mcu  MCU addressed; selects the MCU on a dual-MCU PCB.
 * @param board  BEGIN: PCB id the image is built for (app_header.board, enum board_e in UnifiedBootloader/common/Inc/headers.h). Otherwise 0.
 * @param board_rev  BEGIN: PCB revision the image is built for, 255 = any. Otherwise 0.
 * @param board_variant  BEGIN: board variant the image is built for, 255 = any. Otherwise 0.
 * @param app_major  BEGIN: major version of the image. Otherwise 0.
 * @param image_size [bytes] BEGIN: image size from APP_BASE, a multiple of 4 (app_header.image_size). Otherwise 0.
 * @param image_crc32  BEGIN: CRC-32 of the image (app_header.image_crc32). Otherwise 0.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_firmware_update_cmd_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t command, uint8_t mcu, uint32_t board, uint8_t board_rev, uint8_t board_variant, uint8_t app_major, uint32_t image_size, uint32_t image_crc32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN];
    _mav_put_uint32_t(buf, 0, board);
    _mav_put_uint32_t(buf, 4, image_size);
    _mav_put_uint32_t(buf, 8, image_crc32);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, command);
    _mav_put_uint8_t(buf, 15, mcu);
    _mav_put_uint8_t(buf, 16, board_rev);
    _mav_put_uint8_t(buf, 17, board_variant);
    _mav_put_uint8_t(buf, 18, app_major);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD, buf, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_CRC);
#else
    mavlink_firmware_update_cmd_t packet;
    packet.board = board;
    packet.image_size = image_size;
    packet.image_crc32 = image_crc32;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.command = command;
    packet.mcu = mcu;
    packet.board_rev = board_rev;
    packet.board_variant = board_variant;
    packet.app_major = app_major;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD, (const char *)&packet, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_CRC);
#endif
}

/**
 * @brief Send a firmware_update_cmd message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_firmware_update_cmd_send_struct(mavlink_channel_t chan, const mavlink_firmware_update_cmd_t* firmware_update_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_firmware_update_cmd_send(chan, firmware_update_cmd->target_system, firmware_update_cmd->target_component, firmware_update_cmd->command, firmware_update_cmd->mcu, firmware_update_cmd->board, firmware_update_cmd->board_rev, firmware_update_cmd->board_variant, firmware_update_cmd->app_major, firmware_update_cmd->image_size, firmware_update_cmd->image_crc32);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD, (const char *)firmware_update_cmd, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_CRC);
#endif
}

#if MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_firmware_update_cmd_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t command, uint8_t mcu, uint32_t board, uint8_t board_rev, uint8_t board_variant, uint8_t app_major, uint32_t image_size, uint32_t image_crc32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, board);
    _mav_put_uint32_t(buf, 4, image_size);
    _mav_put_uint32_t(buf, 8, image_crc32);
    _mav_put_uint8_t(buf, 12, target_system);
    _mav_put_uint8_t(buf, 13, target_component);
    _mav_put_uint8_t(buf, 14, command);
    _mav_put_uint8_t(buf, 15, mcu);
    _mav_put_uint8_t(buf, 16, board_rev);
    _mav_put_uint8_t(buf, 17, board_variant);
    _mav_put_uint8_t(buf, 18, app_major);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD, buf, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_CRC);
#else
    mavlink_firmware_update_cmd_t *packet = (mavlink_firmware_update_cmd_t *)msgbuf;
    packet->board = board;
    packet->image_size = image_size;
    packet->image_crc32 = image_crc32;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->command = command;
    packet->mcu = mcu;
    packet->board_rev = board_rev;
    packet->board_variant = board_variant;
    packet->app_major = app_major;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD, (const char *)packet, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_CRC);
#endif
}
#endif

#endif

// MESSAGE FIRMWARE_UPDATE_CMD UNPACKING


/**
 * @brief Get field target_system from firmware_update_cmd message
 *
 * @return  System ID.
 */
static inline uint8_t mavlink_msg_firmware_update_cmd_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field target_component from firmware_update_cmd message
 *
 * @return  Component ID.
 */
static inline uint8_t mavlink_msg_firmware_update_cmd_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field command from firmware_update_cmd message
 *
 * @return  Action.
 */
static inline uint8_t mavlink_msg_firmware_update_cmd_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field mcu from firmware_update_cmd message
 *
 * @return  MCU addressed; selects the MCU on a dual-MCU PCB.
 */
static inline uint8_t mavlink_msg_firmware_update_cmd_get_mcu(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field board from firmware_update_cmd message
 *
 * @return  BEGIN: PCB id the image is built for (app_header.board, enum board_e in UnifiedBootloader/common/Inc/headers.h). Otherwise 0.
 */
static inline uint32_t mavlink_msg_firmware_update_cmd_get_board(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field board_rev from firmware_update_cmd message
 *
 * @return  BEGIN: PCB revision the image is built for, 255 = any. Otherwise 0.
 */
static inline uint8_t mavlink_msg_firmware_update_cmd_get_board_rev(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field board_variant from firmware_update_cmd message
 *
 * @return  BEGIN: board variant the image is built for, 255 = any. Otherwise 0.
 */
static inline uint8_t mavlink_msg_firmware_update_cmd_get_board_variant(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field app_major from firmware_update_cmd message
 *
 * @return  BEGIN: major version of the image. Otherwise 0.
 */
static inline uint8_t mavlink_msg_firmware_update_cmd_get_app_major(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field image_size from firmware_update_cmd message
 *
 * @return [bytes] BEGIN: image size from APP_BASE, a multiple of 4 (app_header.image_size). Otherwise 0.
 */
static inline uint32_t mavlink_msg_firmware_update_cmd_get_image_size(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field image_crc32 from firmware_update_cmd message
 *
 * @return  BEGIN: CRC-32 of the image (app_header.image_crc32). Otherwise 0.
 */
static inline uint32_t mavlink_msg_firmware_update_cmd_get_image_crc32(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Decode a firmware_update_cmd message into a struct
 *
 * @param msg The message to decode
 * @param firmware_update_cmd C-struct to decode the message contents into
 */
static inline void mavlink_msg_firmware_update_cmd_decode(const mavlink_message_t* msg, mavlink_firmware_update_cmd_t* firmware_update_cmd)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    firmware_update_cmd->board = mavlink_msg_firmware_update_cmd_get_board(msg);
    firmware_update_cmd->image_size = mavlink_msg_firmware_update_cmd_get_image_size(msg);
    firmware_update_cmd->image_crc32 = mavlink_msg_firmware_update_cmd_get_image_crc32(msg);
    firmware_update_cmd->target_system = mavlink_msg_firmware_update_cmd_get_target_system(msg);
    firmware_update_cmd->target_component = mavlink_msg_firmware_update_cmd_get_target_component(msg);
    firmware_update_cmd->command = mavlink_msg_firmware_update_cmd_get_command(msg);
    firmware_update_cmd->mcu = mavlink_msg_firmware_update_cmd_get_mcu(msg);
    firmware_update_cmd->board_rev = mavlink_msg_firmware_update_cmd_get_board_rev(msg);
    firmware_update_cmd->board_variant = mavlink_msg_firmware_update_cmd_get_board_variant(msg);
    firmware_update_cmd->app_major = mavlink_msg_firmware_update_cmd_get_app_major(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN? msg->len : MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN;
        memset(firmware_update_cmd, 0, MAVLINK_MSG_ID_FIRMWARE_UPDATE_CMD_LEN);
    memcpy(firmware_update_cmd, _MAV_PAYLOAD(msg), len);
#endif
}
