#pragma once
// MESSAGE FIRMWARE_IDENTITY PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_FIRMWARE_IDENTITY 3371


typedef struct __mavlink_firmware_identity_t {
 uint64_t bl_git_hash; /*<  First 16 hex digits of the bootloader's git commit hash.*/
 uint64_t app_git_hash; /*<  First 16 hex digits of the application's git commit hash.*/
 uint32_t board; /*<  PCB id, enum board_e in UnifiedBootloader/common/Inc/headers.h (firmware repo), e.g. 201 = AV-MBI. 0 when the unit record is blank or invalid.*/
 uint32_t bl_build_time; /*< [s] Bootloader build time (UNIX time, UTC).*/
 uint32_t bl_crc32; /*<  image_crc32 from the bl_header: CRC-32/MPEG-2 of the installed bootloader as stored in its header (not recomputed), identifying which build is installed.*/
 uint32_t app_build_time; /*< [s] Application build time (UNIX time, UTC).*/
 uint32_t app_crc32; /*<  image_crc32 from the app_header: CRC-32/MPEG-2 of the installed application as stored in its header (not recomputed), for comparing against the image the host holds. An app that fails its CRC check at boot is reported as FIRMWARE_STATE_BL_APP_CRC_MISMATCH instead.*/
 uint8_t state; /*<  Running the application, or why the MCU stays in the bootloader.*/
 uint8_t mcu; /*<  MCU of this board; tells the two MCUs of a dual-MCU PCB apart. 0 when the unit record is blank or invalid.*/
 uint8_t board_rev; /*<  PCB revision (the Vn number). 255 when the unit record is blank or invalid.*/
 uint8_t board_variant; /*<  Board variant, 255 = not fixed.*/
 char board_serial[32]; /*<  Serial of this board from its unit record, for development use (optional), not the robot serial (see ONBOARD_COMPUTER_INFO.robot_serial_number). Empty when the unit record is blank or invalid.*/
 uint8_t bl_major; /*<  Bootloader major version.*/
 uint8_t bl_minor; /*<  Bootloader minor version.*/
 uint8_t bl_patch; /*<  Bootloader patch version.*/
 uint8_t bl_flags; /*<  Bootloader build flags: bit0 debug build, bit1 built from a dirty git tree.*/
 uint8_t app_major; /*<  Application major version. All application fields are 0 when there is no valid app_header.*/
 uint8_t app_minor; /*<  Application minor version.*/
 uint8_t app_patch; /*<  Application patch version.*/
 uint8_t app_flags; /*<  Application build flags: bit0 debug build, bit1 built from a dirty git tree.*/
} mavlink_firmware_identity_t;

#define MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN 80
#define MAVLINK_MSG_ID_FIRMWARE_IDENTITY_MIN_LEN 80
#define MAVLINK_MSG_ID_3371_LEN 80
#define MAVLINK_MSG_ID_3371_MIN_LEN 80

#define MAVLINK_MSG_ID_FIRMWARE_IDENTITY_CRC 11
#define MAVLINK_MSG_ID_3371_CRC 11

#define MAVLINK_MSG_FIRMWARE_IDENTITY_FIELD_BOARD_SERIAL_LEN 32

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FIRMWARE_IDENTITY { \
    3371, \
    "FIRMWARE_IDENTITY", \
    20, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_firmware_identity_t, state) }, \
         { "board", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_firmware_identity_t, board) }, \
         { "mcu", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_firmware_identity_t, mcu) }, \
         { "board_rev", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_firmware_identity_t, board_rev) }, \
         { "board_variant", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_firmware_identity_t, board_variant) }, \
         { "board_serial", NULL, MAVLINK_TYPE_CHAR, 32, 40, offsetof(mavlink_firmware_identity_t, board_serial) }, \
         { "bl_major", NULL, MAVLINK_TYPE_UINT8_T, 0, 72, offsetof(mavlink_firmware_identity_t, bl_major) }, \
         { "bl_minor", NULL, MAVLINK_TYPE_UINT8_T, 0, 73, offsetof(mavlink_firmware_identity_t, bl_minor) }, \
         { "bl_patch", NULL, MAVLINK_TYPE_UINT8_T, 0, 74, offsetof(mavlink_firmware_identity_t, bl_patch) }, \
         { "bl_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 75, offsetof(mavlink_firmware_identity_t, bl_flags) }, \
         { "bl_git_hash", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_firmware_identity_t, bl_git_hash) }, \
         { "bl_build_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_firmware_identity_t, bl_build_time) }, \
         { "bl_crc32", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_firmware_identity_t, bl_crc32) }, \
         { "app_major", NULL, MAVLINK_TYPE_UINT8_T, 0, 76, offsetof(mavlink_firmware_identity_t, app_major) }, \
         { "app_minor", NULL, MAVLINK_TYPE_UINT8_T, 0, 77, offsetof(mavlink_firmware_identity_t, app_minor) }, \
         { "app_patch", NULL, MAVLINK_TYPE_UINT8_T, 0, 78, offsetof(mavlink_firmware_identity_t, app_patch) }, \
         { "app_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 79, offsetof(mavlink_firmware_identity_t, app_flags) }, \
         { "app_git_hash", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_firmware_identity_t, app_git_hash) }, \
         { "app_build_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_firmware_identity_t, app_build_time) }, \
         { "app_crc32", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_firmware_identity_t, app_crc32) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FIRMWARE_IDENTITY { \
    "FIRMWARE_IDENTITY", \
    20, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_firmware_identity_t, state) }, \
         { "board", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_firmware_identity_t, board) }, \
         { "mcu", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_firmware_identity_t, mcu) }, \
         { "board_rev", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_firmware_identity_t, board_rev) }, \
         { "board_variant", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_firmware_identity_t, board_variant) }, \
         { "board_serial", NULL, MAVLINK_TYPE_CHAR, 32, 40, offsetof(mavlink_firmware_identity_t, board_serial) }, \
         { "bl_major", NULL, MAVLINK_TYPE_UINT8_T, 0, 72, offsetof(mavlink_firmware_identity_t, bl_major) }, \
         { "bl_minor", NULL, MAVLINK_TYPE_UINT8_T, 0, 73, offsetof(mavlink_firmware_identity_t, bl_minor) }, \
         { "bl_patch", NULL, MAVLINK_TYPE_UINT8_T, 0, 74, offsetof(mavlink_firmware_identity_t, bl_patch) }, \
         { "bl_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 75, offsetof(mavlink_firmware_identity_t, bl_flags) }, \
         { "bl_git_hash", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_firmware_identity_t, bl_git_hash) }, \
         { "bl_build_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_firmware_identity_t, bl_build_time) }, \
         { "bl_crc32", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_firmware_identity_t, bl_crc32) }, \
         { "app_major", NULL, MAVLINK_TYPE_UINT8_T, 0, 76, offsetof(mavlink_firmware_identity_t, app_major) }, \
         { "app_minor", NULL, MAVLINK_TYPE_UINT8_T, 0, 77, offsetof(mavlink_firmware_identity_t, app_minor) }, \
         { "app_patch", NULL, MAVLINK_TYPE_UINT8_T, 0, 78, offsetof(mavlink_firmware_identity_t, app_patch) }, \
         { "app_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 79, offsetof(mavlink_firmware_identity_t, app_flags) }, \
         { "app_git_hash", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_firmware_identity_t, app_git_hash) }, \
         { "app_build_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_firmware_identity_t, app_build_time) }, \
         { "app_crc32", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_firmware_identity_t, app_crc32) }, \
         } \
}
#endif

/**
 * @brief Pack a firmware_identity message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  Running the application, or why the MCU stays in the bootloader.
 * @param board  PCB id, enum board_e in UnifiedBootloader/common/Inc/headers.h (firmware repo), e.g. 201 = AV-MBI. 0 when the unit record is blank or invalid.
 * @param mcu  MCU of this board; tells the two MCUs of a dual-MCU PCB apart. 0 when the unit record is blank or invalid.
 * @param board_rev  PCB revision (the Vn number). 255 when the unit record is blank or invalid.
 * @param board_variant  Board variant, 255 = not fixed.
 * @param board_serial  Serial of this board from its unit record, for development use (optional), not the robot serial (see ONBOARD_COMPUTER_INFO.robot_serial_number). Empty when the unit record is blank or invalid.
 * @param bl_major  Bootloader major version.
 * @param bl_minor  Bootloader minor version.
 * @param bl_patch  Bootloader patch version.
 * @param bl_flags  Bootloader build flags: bit0 debug build, bit1 built from a dirty git tree.
 * @param bl_git_hash  First 16 hex digits of the bootloader's git commit hash.
 * @param bl_build_time [s] Bootloader build time (UNIX time, UTC).
 * @param bl_crc32  image_crc32 from the bl_header: CRC-32/MPEG-2 of the installed bootloader as stored in its header (not recomputed), identifying which build is installed.
 * @param app_major  Application major version. All application fields are 0 when there is no valid app_header.
 * @param app_minor  Application minor version.
 * @param app_patch  Application patch version.
 * @param app_flags  Application build flags: bit0 debug build, bit1 built from a dirty git tree.
 * @param app_git_hash  First 16 hex digits of the application's git commit hash.
 * @param app_build_time [s] Application build time (UNIX time, UTC).
 * @param app_crc32  image_crc32 from the app_header: CRC-32/MPEG-2 of the installed application as stored in its header (not recomputed), for comparing against the image the host holds. An app that fails its CRC check at boot is reported as FIRMWARE_STATE_BL_APP_CRC_MISMATCH instead.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_identity_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t state, uint32_t board, uint8_t mcu, uint8_t board_rev, uint8_t board_variant, const char *board_serial, uint8_t bl_major, uint8_t bl_minor, uint8_t bl_patch, uint8_t bl_flags, uint64_t bl_git_hash, uint32_t bl_build_time, uint32_t bl_crc32, uint8_t app_major, uint8_t app_minor, uint8_t app_patch, uint8_t app_flags, uint64_t app_git_hash, uint32_t app_build_time, uint32_t app_crc32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN];
    _mav_put_uint64_t(buf, 0, bl_git_hash);
    _mav_put_uint64_t(buf, 8, app_git_hash);
    _mav_put_uint32_t(buf, 16, board);
    _mav_put_uint32_t(buf, 20, bl_build_time);
    _mav_put_uint32_t(buf, 24, bl_crc32);
    _mav_put_uint32_t(buf, 28, app_build_time);
    _mav_put_uint32_t(buf, 32, app_crc32);
    _mav_put_uint8_t(buf, 36, state);
    _mav_put_uint8_t(buf, 37, mcu);
    _mav_put_uint8_t(buf, 38, board_rev);
    _mav_put_uint8_t(buf, 39, board_variant);
    _mav_put_uint8_t(buf, 72, bl_major);
    _mav_put_uint8_t(buf, 73, bl_minor);
    _mav_put_uint8_t(buf, 74, bl_patch);
    _mav_put_uint8_t(buf, 75, bl_flags);
    _mav_put_uint8_t(buf, 76, app_major);
    _mav_put_uint8_t(buf, 77, app_minor);
    _mav_put_uint8_t(buf, 78, app_patch);
    _mav_put_uint8_t(buf, 79, app_flags);
    _mav_put_char_array(buf, 40, board_serial, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN);
#else
    mavlink_firmware_identity_t packet;
    packet.bl_git_hash = bl_git_hash;
    packet.app_git_hash = app_git_hash;
    packet.board = board;
    packet.bl_build_time = bl_build_time;
    packet.bl_crc32 = bl_crc32;
    packet.app_build_time = app_build_time;
    packet.app_crc32 = app_crc32;
    packet.state = state;
    packet.mcu = mcu;
    packet.board_rev = board_rev;
    packet.board_variant = board_variant;
    packet.bl_major = bl_major;
    packet.bl_minor = bl_minor;
    packet.bl_patch = bl_patch;
    packet.bl_flags = bl_flags;
    packet.app_major = app_major;
    packet.app_minor = app_minor;
    packet.app_patch = app_patch;
    packet.app_flags = app_flags;
    mav_array_memcpy(packet.board_serial, board_serial, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FIRMWARE_IDENTITY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_CRC);
}

/**
 * @brief Pack a firmware_identity message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  Running the application, or why the MCU stays in the bootloader.
 * @param board  PCB id, enum board_e in UnifiedBootloader/common/Inc/headers.h (firmware repo), e.g. 201 = AV-MBI. 0 when the unit record is blank or invalid.
 * @param mcu  MCU of this board; tells the two MCUs of a dual-MCU PCB apart. 0 when the unit record is blank or invalid.
 * @param board_rev  PCB revision (the Vn number). 255 when the unit record is blank or invalid.
 * @param board_variant  Board variant, 255 = not fixed.
 * @param board_serial  Serial of this board from its unit record, for development use (optional), not the robot serial (see ONBOARD_COMPUTER_INFO.robot_serial_number). Empty when the unit record is blank or invalid.
 * @param bl_major  Bootloader major version.
 * @param bl_minor  Bootloader minor version.
 * @param bl_patch  Bootloader patch version.
 * @param bl_flags  Bootloader build flags: bit0 debug build, bit1 built from a dirty git tree.
 * @param bl_git_hash  First 16 hex digits of the bootloader's git commit hash.
 * @param bl_build_time [s] Bootloader build time (UNIX time, UTC).
 * @param bl_crc32  image_crc32 from the bl_header: CRC-32/MPEG-2 of the installed bootloader as stored in its header (not recomputed), identifying which build is installed.
 * @param app_major  Application major version. All application fields are 0 when there is no valid app_header.
 * @param app_minor  Application minor version.
 * @param app_patch  Application patch version.
 * @param app_flags  Application build flags: bit0 debug build, bit1 built from a dirty git tree.
 * @param app_git_hash  First 16 hex digits of the application's git commit hash.
 * @param app_build_time [s] Application build time (UNIX time, UTC).
 * @param app_crc32  image_crc32 from the app_header: CRC-32/MPEG-2 of the installed application as stored in its header (not recomputed), for comparing against the image the host holds. An app that fails its CRC check at boot is reported as FIRMWARE_STATE_BL_APP_CRC_MISMATCH instead.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_identity_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t state, uint32_t board, uint8_t mcu, uint8_t board_rev, uint8_t board_variant, const char *board_serial, uint8_t bl_major, uint8_t bl_minor, uint8_t bl_patch, uint8_t bl_flags, uint64_t bl_git_hash, uint32_t bl_build_time, uint32_t bl_crc32, uint8_t app_major, uint8_t app_minor, uint8_t app_patch, uint8_t app_flags, uint64_t app_git_hash, uint32_t app_build_time, uint32_t app_crc32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN];
    _mav_put_uint64_t(buf, 0, bl_git_hash);
    _mav_put_uint64_t(buf, 8, app_git_hash);
    _mav_put_uint32_t(buf, 16, board);
    _mav_put_uint32_t(buf, 20, bl_build_time);
    _mav_put_uint32_t(buf, 24, bl_crc32);
    _mav_put_uint32_t(buf, 28, app_build_time);
    _mav_put_uint32_t(buf, 32, app_crc32);
    _mav_put_uint8_t(buf, 36, state);
    _mav_put_uint8_t(buf, 37, mcu);
    _mav_put_uint8_t(buf, 38, board_rev);
    _mav_put_uint8_t(buf, 39, board_variant);
    _mav_put_uint8_t(buf, 72, bl_major);
    _mav_put_uint8_t(buf, 73, bl_minor);
    _mav_put_uint8_t(buf, 74, bl_patch);
    _mav_put_uint8_t(buf, 75, bl_flags);
    _mav_put_uint8_t(buf, 76, app_major);
    _mav_put_uint8_t(buf, 77, app_minor);
    _mav_put_uint8_t(buf, 78, app_patch);
    _mav_put_uint8_t(buf, 79, app_flags);
    _mav_put_char_array(buf, 40, board_serial, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN);
#else
    mavlink_firmware_identity_t packet;
    packet.bl_git_hash = bl_git_hash;
    packet.app_git_hash = app_git_hash;
    packet.board = board;
    packet.bl_build_time = bl_build_time;
    packet.bl_crc32 = bl_crc32;
    packet.app_build_time = app_build_time;
    packet.app_crc32 = app_crc32;
    packet.state = state;
    packet.mcu = mcu;
    packet.board_rev = board_rev;
    packet.board_variant = board_variant;
    packet.bl_major = bl_major;
    packet.bl_minor = bl_minor;
    packet.bl_patch = bl_patch;
    packet.bl_flags = bl_flags;
    packet.app_major = app_major;
    packet.app_minor = app_minor;
    packet.app_patch = app_patch;
    packet.app_flags = app_flags;
    mav_array_memcpy(packet.board_serial, board_serial, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FIRMWARE_IDENTITY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN);
#endif
}

/**
 * @brief Pack a firmware_identity message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param state  Running the application, or why the MCU stays in the bootloader.
 * @param board  PCB id, enum board_e in UnifiedBootloader/common/Inc/headers.h (firmware repo), e.g. 201 = AV-MBI. 0 when the unit record is blank or invalid.
 * @param mcu  MCU of this board; tells the two MCUs of a dual-MCU PCB apart. 0 when the unit record is blank or invalid.
 * @param board_rev  PCB revision (the Vn number). 255 when the unit record is blank or invalid.
 * @param board_variant  Board variant, 255 = not fixed.
 * @param board_serial  Serial of this board from its unit record, for development use (optional), not the robot serial (see ONBOARD_COMPUTER_INFO.robot_serial_number). Empty when the unit record is blank or invalid.
 * @param bl_major  Bootloader major version.
 * @param bl_minor  Bootloader minor version.
 * @param bl_patch  Bootloader patch version.
 * @param bl_flags  Bootloader build flags: bit0 debug build, bit1 built from a dirty git tree.
 * @param bl_git_hash  First 16 hex digits of the bootloader's git commit hash.
 * @param bl_build_time [s] Bootloader build time (UNIX time, UTC).
 * @param bl_crc32  image_crc32 from the bl_header: CRC-32/MPEG-2 of the installed bootloader as stored in its header (not recomputed), identifying which build is installed.
 * @param app_major  Application major version. All application fields are 0 when there is no valid app_header.
 * @param app_minor  Application minor version.
 * @param app_patch  Application patch version.
 * @param app_flags  Application build flags: bit0 debug build, bit1 built from a dirty git tree.
 * @param app_git_hash  First 16 hex digits of the application's git commit hash.
 * @param app_build_time [s] Application build time (UNIX time, UTC).
 * @param app_crc32  image_crc32 from the app_header: CRC-32/MPEG-2 of the installed application as stored in its header (not recomputed), for comparing against the image the host holds. An app that fails its CRC check at boot is reported as FIRMWARE_STATE_BL_APP_CRC_MISMATCH instead.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_firmware_identity_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t state,uint32_t board,uint8_t mcu,uint8_t board_rev,uint8_t board_variant,const char *board_serial,uint8_t bl_major,uint8_t bl_minor,uint8_t bl_patch,uint8_t bl_flags,uint64_t bl_git_hash,uint32_t bl_build_time,uint32_t bl_crc32,uint8_t app_major,uint8_t app_minor,uint8_t app_patch,uint8_t app_flags,uint64_t app_git_hash,uint32_t app_build_time,uint32_t app_crc32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN];
    _mav_put_uint64_t(buf, 0, bl_git_hash);
    _mav_put_uint64_t(buf, 8, app_git_hash);
    _mav_put_uint32_t(buf, 16, board);
    _mav_put_uint32_t(buf, 20, bl_build_time);
    _mav_put_uint32_t(buf, 24, bl_crc32);
    _mav_put_uint32_t(buf, 28, app_build_time);
    _mav_put_uint32_t(buf, 32, app_crc32);
    _mav_put_uint8_t(buf, 36, state);
    _mav_put_uint8_t(buf, 37, mcu);
    _mav_put_uint8_t(buf, 38, board_rev);
    _mav_put_uint8_t(buf, 39, board_variant);
    _mav_put_uint8_t(buf, 72, bl_major);
    _mav_put_uint8_t(buf, 73, bl_minor);
    _mav_put_uint8_t(buf, 74, bl_patch);
    _mav_put_uint8_t(buf, 75, bl_flags);
    _mav_put_uint8_t(buf, 76, app_major);
    _mav_put_uint8_t(buf, 77, app_minor);
    _mav_put_uint8_t(buf, 78, app_patch);
    _mav_put_uint8_t(buf, 79, app_flags);
    _mav_put_char_array(buf, 40, board_serial, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN);
#else
    mavlink_firmware_identity_t packet;
    packet.bl_git_hash = bl_git_hash;
    packet.app_git_hash = app_git_hash;
    packet.board = board;
    packet.bl_build_time = bl_build_time;
    packet.bl_crc32 = bl_crc32;
    packet.app_build_time = app_build_time;
    packet.app_crc32 = app_crc32;
    packet.state = state;
    packet.mcu = mcu;
    packet.board_rev = board_rev;
    packet.board_variant = board_variant;
    packet.bl_major = bl_major;
    packet.bl_minor = bl_minor;
    packet.bl_patch = bl_patch;
    packet.bl_flags = bl_flags;
    packet.app_major = app_major;
    packet.app_minor = app_minor;
    packet.app_patch = app_patch;
    packet.app_flags = app_flags;
    mav_array_memcpy(packet.board_serial, board_serial, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FIRMWARE_IDENTITY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_CRC);
}

/**
 * @brief Encode a firmware_identity struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param firmware_identity C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_identity_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_firmware_identity_t* firmware_identity)
{
    return mavlink_msg_firmware_identity_pack(system_id, component_id, msg, firmware_identity->state, firmware_identity->board, firmware_identity->mcu, firmware_identity->board_rev, firmware_identity->board_variant, firmware_identity->board_serial, firmware_identity->bl_major, firmware_identity->bl_minor, firmware_identity->bl_patch, firmware_identity->bl_flags, firmware_identity->bl_git_hash, firmware_identity->bl_build_time, firmware_identity->bl_crc32, firmware_identity->app_major, firmware_identity->app_minor, firmware_identity->app_patch, firmware_identity->app_flags, firmware_identity->app_git_hash, firmware_identity->app_build_time, firmware_identity->app_crc32);
}

/**
 * @brief Encode a firmware_identity struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param firmware_identity C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_identity_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_firmware_identity_t* firmware_identity)
{
    return mavlink_msg_firmware_identity_pack_chan(system_id, component_id, chan, msg, firmware_identity->state, firmware_identity->board, firmware_identity->mcu, firmware_identity->board_rev, firmware_identity->board_variant, firmware_identity->board_serial, firmware_identity->bl_major, firmware_identity->bl_minor, firmware_identity->bl_patch, firmware_identity->bl_flags, firmware_identity->bl_git_hash, firmware_identity->bl_build_time, firmware_identity->bl_crc32, firmware_identity->app_major, firmware_identity->app_minor, firmware_identity->app_patch, firmware_identity->app_flags, firmware_identity->app_git_hash, firmware_identity->app_build_time, firmware_identity->app_crc32);
}

/**
 * @brief Encode a firmware_identity struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param firmware_identity C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_firmware_identity_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_firmware_identity_t* firmware_identity)
{
    return mavlink_msg_firmware_identity_pack_status(system_id, component_id, _status, msg,  firmware_identity->state, firmware_identity->board, firmware_identity->mcu, firmware_identity->board_rev, firmware_identity->board_variant, firmware_identity->board_serial, firmware_identity->bl_major, firmware_identity->bl_minor, firmware_identity->bl_patch, firmware_identity->bl_flags, firmware_identity->bl_git_hash, firmware_identity->bl_build_time, firmware_identity->bl_crc32, firmware_identity->app_major, firmware_identity->app_minor, firmware_identity->app_patch, firmware_identity->app_flags, firmware_identity->app_git_hash, firmware_identity->app_build_time, firmware_identity->app_crc32);
}

/**
 * @brief Send a firmware_identity message
 * @param chan MAVLink channel to send the message
 *
 * @param state  Running the application, or why the MCU stays in the bootloader.
 * @param board  PCB id, enum board_e in UnifiedBootloader/common/Inc/headers.h (firmware repo), e.g. 201 = AV-MBI. 0 when the unit record is blank or invalid.
 * @param mcu  MCU of this board; tells the two MCUs of a dual-MCU PCB apart. 0 when the unit record is blank or invalid.
 * @param board_rev  PCB revision (the Vn number). 255 when the unit record is blank or invalid.
 * @param board_variant  Board variant, 255 = not fixed.
 * @param board_serial  Serial of this board from its unit record, for development use (optional), not the robot serial (see ONBOARD_COMPUTER_INFO.robot_serial_number). Empty when the unit record is blank or invalid.
 * @param bl_major  Bootloader major version.
 * @param bl_minor  Bootloader minor version.
 * @param bl_patch  Bootloader patch version.
 * @param bl_flags  Bootloader build flags: bit0 debug build, bit1 built from a dirty git tree.
 * @param bl_git_hash  First 16 hex digits of the bootloader's git commit hash.
 * @param bl_build_time [s] Bootloader build time (UNIX time, UTC).
 * @param bl_crc32  image_crc32 from the bl_header: CRC-32/MPEG-2 of the installed bootloader as stored in its header (not recomputed), identifying which build is installed.
 * @param app_major  Application major version. All application fields are 0 when there is no valid app_header.
 * @param app_minor  Application minor version.
 * @param app_patch  Application patch version.
 * @param app_flags  Application build flags: bit0 debug build, bit1 built from a dirty git tree.
 * @param app_git_hash  First 16 hex digits of the application's git commit hash.
 * @param app_build_time [s] Application build time (UNIX time, UTC).
 * @param app_crc32  image_crc32 from the app_header: CRC-32/MPEG-2 of the installed application as stored in its header (not recomputed), for comparing against the image the host holds. An app that fails its CRC check at boot is reported as FIRMWARE_STATE_BL_APP_CRC_MISMATCH instead.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_firmware_identity_send(mavlink_channel_t chan, uint8_t state, uint32_t board, uint8_t mcu, uint8_t board_rev, uint8_t board_variant, const char *board_serial, uint8_t bl_major, uint8_t bl_minor, uint8_t bl_patch, uint8_t bl_flags, uint64_t bl_git_hash, uint32_t bl_build_time, uint32_t bl_crc32, uint8_t app_major, uint8_t app_minor, uint8_t app_patch, uint8_t app_flags, uint64_t app_git_hash, uint32_t app_build_time, uint32_t app_crc32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN];
    _mav_put_uint64_t(buf, 0, bl_git_hash);
    _mav_put_uint64_t(buf, 8, app_git_hash);
    _mav_put_uint32_t(buf, 16, board);
    _mav_put_uint32_t(buf, 20, bl_build_time);
    _mav_put_uint32_t(buf, 24, bl_crc32);
    _mav_put_uint32_t(buf, 28, app_build_time);
    _mav_put_uint32_t(buf, 32, app_crc32);
    _mav_put_uint8_t(buf, 36, state);
    _mav_put_uint8_t(buf, 37, mcu);
    _mav_put_uint8_t(buf, 38, board_rev);
    _mav_put_uint8_t(buf, 39, board_variant);
    _mav_put_uint8_t(buf, 72, bl_major);
    _mav_put_uint8_t(buf, 73, bl_minor);
    _mav_put_uint8_t(buf, 74, bl_patch);
    _mav_put_uint8_t(buf, 75, bl_flags);
    _mav_put_uint8_t(buf, 76, app_major);
    _mav_put_uint8_t(buf, 77, app_minor);
    _mav_put_uint8_t(buf, 78, app_patch);
    _mav_put_uint8_t(buf, 79, app_flags);
    _mav_put_char_array(buf, 40, board_serial, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_IDENTITY, buf, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_CRC);
#else
    mavlink_firmware_identity_t packet;
    packet.bl_git_hash = bl_git_hash;
    packet.app_git_hash = app_git_hash;
    packet.board = board;
    packet.bl_build_time = bl_build_time;
    packet.bl_crc32 = bl_crc32;
    packet.app_build_time = app_build_time;
    packet.app_crc32 = app_crc32;
    packet.state = state;
    packet.mcu = mcu;
    packet.board_rev = board_rev;
    packet.board_variant = board_variant;
    packet.bl_major = bl_major;
    packet.bl_minor = bl_minor;
    packet.bl_patch = bl_patch;
    packet.bl_flags = bl_flags;
    packet.app_major = app_major;
    packet.app_minor = app_minor;
    packet.app_patch = app_patch;
    packet.app_flags = app_flags;
    mav_array_memcpy(packet.board_serial, board_serial, sizeof(char)*32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_IDENTITY, (const char *)&packet, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_CRC);
#endif
}

/**
 * @brief Send a firmware_identity message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_firmware_identity_send_struct(mavlink_channel_t chan, const mavlink_firmware_identity_t* firmware_identity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_firmware_identity_send(chan, firmware_identity->state, firmware_identity->board, firmware_identity->mcu, firmware_identity->board_rev, firmware_identity->board_variant, firmware_identity->board_serial, firmware_identity->bl_major, firmware_identity->bl_minor, firmware_identity->bl_patch, firmware_identity->bl_flags, firmware_identity->bl_git_hash, firmware_identity->bl_build_time, firmware_identity->bl_crc32, firmware_identity->app_major, firmware_identity->app_minor, firmware_identity->app_patch, firmware_identity->app_flags, firmware_identity->app_git_hash, firmware_identity->app_build_time, firmware_identity->app_crc32);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_IDENTITY, (const char *)firmware_identity, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_CRC);
#endif
}

#if MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_firmware_identity_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t state, uint32_t board, uint8_t mcu, uint8_t board_rev, uint8_t board_variant, const char *board_serial, uint8_t bl_major, uint8_t bl_minor, uint8_t bl_patch, uint8_t bl_flags, uint64_t bl_git_hash, uint32_t bl_build_time, uint32_t bl_crc32, uint8_t app_major, uint8_t app_minor, uint8_t app_patch, uint8_t app_flags, uint64_t app_git_hash, uint32_t app_build_time, uint32_t app_crc32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, bl_git_hash);
    _mav_put_uint64_t(buf, 8, app_git_hash);
    _mav_put_uint32_t(buf, 16, board);
    _mav_put_uint32_t(buf, 20, bl_build_time);
    _mav_put_uint32_t(buf, 24, bl_crc32);
    _mav_put_uint32_t(buf, 28, app_build_time);
    _mav_put_uint32_t(buf, 32, app_crc32);
    _mav_put_uint8_t(buf, 36, state);
    _mav_put_uint8_t(buf, 37, mcu);
    _mav_put_uint8_t(buf, 38, board_rev);
    _mav_put_uint8_t(buf, 39, board_variant);
    _mav_put_uint8_t(buf, 72, bl_major);
    _mav_put_uint8_t(buf, 73, bl_minor);
    _mav_put_uint8_t(buf, 74, bl_patch);
    _mav_put_uint8_t(buf, 75, bl_flags);
    _mav_put_uint8_t(buf, 76, app_major);
    _mav_put_uint8_t(buf, 77, app_minor);
    _mav_put_uint8_t(buf, 78, app_patch);
    _mav_put_uint8_t(buf, 79, app_flags);
    _mav_put_char_array(buf, 40, board_serial, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_IDENTITY, buf, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_CRC);
#else
    mavlink_firmware_identity_t *packet = (mavlink_firmware_identity_t *)msgbuf;
    packet->bl_git_hash = bl_git_hash;
    packet->app_git_hash = app_git_hash;
    packet->board = board;
    packet->bl_build_time = bl_build_time;
    packet->bl_crc32 = bl_crc32;
    packet->app_build_time = app_build_time;
    packet->app_crc32 = app_crc32;
    packet->state = state;
    packet->mcu = mcu;
    packet->board_rev = board_rev;
    packet->board_variant = board_variant;
    packet->bl_major = bl_major;
    packet->bl_minor = bl_minor;
    packet->bl_patch = bl_patch;
    packet->bl_flags = bl_flags;
    packet->app_major = app_major;
    packet->app_minor = app_minor;
    packet->app_patch = app_patch;
    packet->app_flags = app_flags;
    mav_array_memcpy(packet->board_serial, board_serial, sizeof(char)*32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FIRMWARE_IDENTITY, (const char *)packet, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_MIN_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_CRC);
#endif
}
#endif

#endif

// MESSAGE FIRMWARE_IDENTITY UNPACKING


/**
 * @brief Get field state from firmware_identity message
 *
 * @return  Running the application, or why the MCU stays in the bootloader.
 */
static inline uint8_t mavlink_msg_firmware_identity_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field board from firmware_identity message
 *
 * @return  PCB id, enum board_e in UnifiedBootloader/common/Inc/headers.h (firmware repo), e.g. 201 = AV-MBI. 0 when the unit record is blank or invalid.
 */
static inline uint32_t mavlink_msg_firmware_identity_get_board(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field mcu from firmware_identity message
 *
 * @return  MCU of this board; tells the two MCUs of a dual-MCU PCB apart. 0 when the unit record is blank or invalid.
 */
static inline uint8_t mavlink_msg_firmware_identity_get_mcu(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Get field board_rev from firmware_identity message
 *
 * @return  PCB revision (the Vn number). 255 when the unit record is blank or invalid.
 */
static inline uint8_t mavlink_msg_firmware_identity_get_board_rev(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  38);
}

/**
 * @brief Get field board_variant from firmware_identity message
 *
 * @return  Board variant, 255 = not fixed.
 */
static inline uint8_t mavlink_msg_firmware_identity_get_board_variant(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  39);
}

/**
 * @brief Get field board_serial from firmware_identity message
 *
 * @return  Serial of this board from its unit record, for development use (optional), not the robot serial (see ONBOARD_COMPUTER_INFO.robot_serial_number). Empty when the unit record is blank or invalid.
 */
static inline uint16_t mavlink_msg_firmware_identity_get_board_serial(const mavlink_message_t* msg, char *board_serial)
{
    return _MAV_RETURN_char_array(msg, board_serial, 32,  40);
}

/**
 * @brief Get field bl_major from firmware_identity message
 *
 * @return  Bootloader major version.
 */
static inline uint8_t mavlink_msg_firmware_identity_get_bl_major(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  72);
}

/**
 * @brief Get field bl_minor from firmware_identity message
 *
 * @return  Bootloader minor version.
 */
static inline uint8_t mavlink_msg_firmware_identity_get_bl_minor(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  73);
}

/**
 * @brief Get field bl_patch from firmware_identity message
 *
 * @return  Bootloader patch version.
 */
static inline uint8_t mavlink_msg_firmware_identity_get_bl_patch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  74);
}

/**
 * @brief Get field bl_flags from firmware_identity message
 *
 * @return  Bootloader build flags: bit0 debug build, bit1 built from a dirty git tree.
 */
static inline uint8_t mavlink_msg_firmware_identity_get_bl_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  75);
}

/**
 * @brief Get field bl_git_hash from firmware_identity message
 *
 * @return  First 16 hex digits of the bootloader's git commit hash.
 */
static inline uint64_t mavlink_msg_firmware_identity_get_bl_git_hash(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field bl_build_time from firmware_identity message
 *
 * @return [s] Bootloader build time (UNIX time, UTC).
 */
static inline uint32_t mavlink_msg_firmware_identity_get_bl_build_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field bl_crc32 from firmware_identity message
 *
 * @return  image_crc32 from the bl_header: CRC-32/MPEG-2 of the installed bootloader as stored in its header (not recomputed), identifying which build is installed.
 */
static inline uint32_t mavlink_msg_firmware_identity_get_bl_crc32(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field app_major from firmware_identity message
 *
 * @return  Application major version. All application fields are 0 when there is no valid app_header.
 */
static inline uint8_t mavlink_msg_firmware_identity_get_app_major(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  76);
}

/**
 * @brief Get field app_minor from firmware_identity message
 *
 * @return  Application minor version.
 */
static inline uint8_t mavlink_msg_firmware_identity_get_app_minor(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  77);
}

/**
 * @brief Get field app_patch from firmware_identity message
 *
 * @return  Application patch version.
 */
static inline uint8_t mavlink_msg_firmware_identity_get_app_patch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  78);
}

/**
 * @brief Get field app_flags from firmware_identity message
 *
 * @return  Application build flags: bit0 debug build, bit1 built from a dirty git tree.
 */
static inline uint8_t mavlink_msg_firmware_identity_get_app_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  79);
}

/**
 * @brief Get field app_git_hash from firmware_identity message
 *
 * @return  First 16 hex digits of the application's git commit hash.
 */
static inline uint64_t mavlink_msg_firmware_identity_get_app_git_hash(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field app_build_time from firmware_identity message
 *
 * @return [s] Application build time (UNIX time, UTC).
 */
static inline uint32_t mavlink_msg_firmware_identity_get_app_build_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  28);
}

/**
 * @brief Get field app_crc32 from firmware_identity message
 *
 * @return  image_crc32 from the app_header: CRC-32/MPEG-2 of the installed application as stored in its header (not recomputed), for comparing against the image the host holds. An app that fails its CRC check at boot is reported as FIRMWARE_STATE_BL_APP_CRC_MISMATCH instead.
 */
static inline uint32_t mavlink_msg_firmware_identity_get_app_crc32(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  32);
}

/**
 * @brief Decode a firmware_identity message into a struct
 *
 * @param msg The message to decode
 * @param firmware_identity C-struct to decode the message contents into
 */
static inline void mavlink_msg_firmware_identity_decode(const mavlink_message_t* msg, mavlink_firmware_identity_t* firmware_identity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    firmware_identity->bl_git_hash = mavlink_msg_firmware_identity_get_bl_git_hash(msg);
    firmware_identity->app_git_hash = mavlink_msg_firmware_identity_get_app_git_hash(msg);
    firmware_identity->board = mavlink_msg_firmware_identity_get_board(msg);
    firmware_identity->bl_build_time = mavlink_msg_firmware_identity_get_bl_build_time(msg);
    firmware_identity->bl_crc32 = mavlink_msg_firmware_identity_get_bl_crc32(msg);
    firmware_identity->app_build_time = mavlink_msg_firmware_identity_get_app_build_time(msg);
    firmware_identity->app_crc32 = mavlink_msg_firmware_identity_get_app_crc32(msg);
    firmware_identity->state = mavlink_msg_firmware_identity_get_state(msg);
    firmware_identity->mcu = mavlink_msg_firmware_identity_get_mcu(msg);
    firmware_identity->board_rev = mavlink_msg_firmware_identity_get_board_rev(msg);
    firmware_identity->board_variant = mavlink_msg_firmware_identity_get_board_variant(msg);
    mavlink_msg_firmware_identity_get_board_serial(msg, firmware_identity->board_serial);
    firmware_identity->bl_major = mavlink_msg_firmware_identity_get_bl_major(msg);
    firmware_identity->bl_minor = mavlink_msg_firmware_identity_get_bl_minor(msg);
    firmware_identity->bl_patch = mavlink_msg_firmware_identity_get_bl_patch(msg);
    firmware_identity->bl_flags = mavlink_msg_firmware_identity_get_bl_flags(msg);
    firmware_identity->app_major = mavlink_msg_firmware_identity_get_app_major(msg);
    firmware_identity->app_minor = mavlink_msg_firmware_identity_get_app_minor(msg);
    firmware_identity->app_patch = mavlink_msg_firmware_identity_get_app_patch(msg);
    firmware_identity->app_flags = mavlink_msg_firmware_identity_get_app_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN? msg->len : MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN;
        memset(firmware_identity, 0, MAVLINK_MSG_ID_FIRMWARE_IDENTITY_LEN);
    memcpy(firmware_identity, _MAV_PAYLOAD(msg), len);
#endif
}
