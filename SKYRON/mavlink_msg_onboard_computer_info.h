#pragma once
// MESSAGE ONBOARD_COMPUTER_INFO PACKING

#include <stdint.h>

#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO 3364


typedef struct __mavlink_onboard_computer_info_t {
 uint64_t time_usec; /*< [us] Timestamp (UNIX Epoch, microseconds). Converted from ROS Time at send.*/
 uint64_t uid; /*<  Unique hardware identifier. Jetson: device-tree fuse-burned serial; x86: DMI product serial hash. Stable across OS reinstalls.*/
 uint32_t total_memory; /*<  Total installed system RAM in MiB.*/
 uint32_t total_storage; /*<  Total root-partition storage in MiB.*/
 uint32_t total_operation_time; /*<  Cumulative powered-on time in seconds across all boots. Monotonic-clock based, NTP-independent. Persisted across reboots.*/
 uint32_t boot_count; /*<  Number of times this system has booted since first deployment.*/
 uint16_t processor_speed; /*<  Processor maximum frequency in MHz.*/
 uint8_t processor_cores; /*<  Number of physical processor cores.*/
 uint8_t processor_threads; /*<  Number of logical processor threads (equals cores on ARM; 2x cores on x86 HyperThreading).*/
 uint8_t robot_type; /*<  Robot/vehicle platform type as reported by the firmware (Sensor_Status.vehicle).*/
 char software_version[16]; /*<  AvesCore software version string (git tag or abbreviated commit hash).*/
 char software_build_date[12]; /*<  Git commit date of the running software (YYYY-MM-DD).*/
 char computer_name[32]; /*<  System hostname.*/
 char processor_model[24]; /*<  Processor model string. Jetson: device-tree model; x86: cpuinfo model name.*/
 char architecture[8]; /*<  CPU architecture string (e.g. aarch64, x86_64).*/
 char mac_address[18]; /*<  Primary network interface MAC address (XX:XX:XX:XX:XX:XX).*/
 char ip_address[16]; /*<  Primary network interface IP address.*/
 char os_distro[16]; /*<  Operating system distribution name (e.g. Ubuntu).*/
 char kernel_version[24]; /*<  Linux kernel version string (uname -r).*/
 char ros_distro[8]; /*<  ROS distribution name (e.g. Humble).*/
 char l4t_version[10]; /*<  NVIDIA L4T BSP version (e.g. R36.4.3). Empty string on non-Jetson platforms.*/
 char cuda_version[10]; /*<  CUDA toolkit version (e.g. 12.6.11). Empty string if CUDA not installed.*/
 char jetpack_version[8]; /*<  NVIDIA JetPack SDK version (e.g. 6.1). Derived from installed nvidia-jetpack package. Empty string on non-Jetson platforms.*/
 char robot_serial_number[11]; /*<  Robot serial number (format XX#####YY, e.g. SN55555BB). Read from ~/records/config/robot_serial_number. Empty string if not provisioned.*/
} mavlink_onboard_computer_info_t;

#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN 250
#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_MIN_LEN 250
#define MAVLINK_MSG_ID_3364_LEN 250
#define MAVLINK_MSG_ID_3364_MIN_LEN 250

#define MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_CRC 95
#define MAVLINK_MSG_ID_3364_CRC 95

#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_SOFTWARE_VERSION_LEN 16
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_SOFTWARE_BUILD_DATE_LEN 12
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_COMPUTER_NAME_LEN 32
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_PROCESSOR_MODEL_LEN 24
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_ARCHITECTURE_LEN 8
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_MAC_ADDRESS_LEN 18
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_IP_ADDRESS_LEN 16
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_OS_DISTRO_LEN 16
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_KERNEL_VERSION_LEN 24
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_ROS_DISTRO_LEN 8
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_L4T_VERSION_LEN 10
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_CUDA_VERSION_LEN 10
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_JETPACK_VERSION_LEN 8
#define MAVLINK_MSG_ONBOARD_COMPUTER_INFO_FIELD_ROBOT_SERIAL_NUMBER_LEN 11

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ONBOARD_COMPUTER_INFO { \
    3364, \
    "ONBOARD_COMPUTER_INFO", \
    24, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_onboard_computer_info_t, time_usec) }, \
         { "uid", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_onboard_computer_info_t, uid) }, \
         { "total_memory", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_onboard_computer_info_t, total_memory) }, \
         { "total_storage", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_onboard_computer_info_t, total_storage) }, \
         { "total_operation_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_onboard_computer_info_t, total_operation_time) }, \
         { "boot_count", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_onboard_computer_info_t, boot_count) }, \
         { "processor_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_onboard_computer_info_t, processor_speed) }, \
         { "processor_cores", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_onboard_computer_info_t, processor_cores) }, \
         { "processor_threads", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_onboard_computer_info_t, processor_threads) }, \
         { "robot_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_onboard_computer_info_t, robot_type) }, \
         { "software_version", NULL, MAVLINK_TYPE_CHAR, 16, 37, offsetof(mavlink_onboard_computer_info_t, software_version) }, \
         { "software_build_date", NULL, MAVLINK_TYPE_CHAR, 12, 53, offsetof(mavlink_onboard_computer_info_t, software_build_date) }, \
         { "computer_name", NULL, MAVLINK_TYPE_CHAR, 32, 65, offsetof(mavlink_onboard_computer_info_t, computer_name) }, \
         { "processor_model", NULL, MAVLINK_TYPE_CHAR, 24, 97, offsetof(mavlink_onboard_computer_info_t, processor_model) }, \
         { "architecture", NULL, MAVLINK_TYPE_CHAR, 8, 121, offsetof(mavlink_onboard_computer_info_t, architecture) }, \
         { "mac_address", NULL, MAVLINK_TYPE_CHAR, 18, 129, offsetof(mavlink_onboard_computer_info_t, mac_address) }, \
         { "ip_address", NULL, MAVLINK_TYPE_CHAR, 16, 147, offsetof(mavlink_onboard_computer_info_t, ip_address) }, \
         { "os_distro", NULL, MAVLINK_TYPE_CHAR, 16, 163, offsetof(mavlink_onboard_computer_info_t, os_distro) }, \
         { "kernel_version", NULL, MAVLINK_TYPE_CHAR, 24, 179, offsetof(mavlink_onboard_computer_info_t, kernel_version) }, \
         { "ros_distro", NULL, MAVLINK_TYPE_CHAR, 8, 203, offsetof(mavlink_onboard_computer_info_t, ros_distro) }, \
         { "l4t_version", NULL, MAVLINK_TYPE_CHAR, 10, 211, offsetof(mavlink_onboard_computer_info_t, l4t_version) }, \
         { "cuda_version", NULL, MAVLINK_TYPE_CHAR, 10, 221, offsetof(mavlink_onboard_computer_info_t, cuda_version) }, \
         { "jetpack_version", NULL, MAVLINK_TYPE_CHAR, 8, 231, offsetof(mavlink_onboard_computer_info_t, jetpack_version) }, \
         { "robot_serial_number", NULL, MAVLINK_TYPE_CHAR, 11, 239, offsetof(mavlink_onboard_computer_info_t, robot_serial_number) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ONBOARD_COMPUTER_INFO { \
    "ONBOARD_COMPUTER_INFO", \
    24, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_onboard_computer_info_t, time_usec) }, \
         { "uid", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_onboard_computer_info_t, uid) }, \
         { "total_memory", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_onboard_computer_info_t, total_memory) }, \
         { "total_storage", NULL, MAVLINK_TYPE_UINT32_T, 0, 20, offsetof(mavlink_onboard_computer_info_t, total_storage) }, \
         { "total_operation_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 24, offsetof(mavlink_onboard_computer_info_t, total_operation_time) }, \
         { "boot_count", NULL, MAVLINK_TYPE_UINT32_T, 0, 28, offsetof(mavlink_onboard_computer_info_t, boot_count) }, \
         { "processor_speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 32, offsetof(mavlink_onboard_computer_info_t, processor_speed) }, \
         { "processor_cores", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_onboard_computer_info_t, processor_cores) }, \
         { "processor_threads", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_onboard_computer_info_t, processor_threads) }, \
         { "robot_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_onboard_computer_info_t, robot_type) }, \
         { "software_version", NULL, MAVLINK_TYPE_CHAR, 16, 37, offsetof(mavlink_onboard_computer_info_t, software_version) }, \
         { "software_build_date", NULL, MAVLINK_TYPE_CHAR, 12, 53, offsetof(mavlink_onboard_computer_info_t, software_build_date) }, \
         { "computer_name", NULL, MAVLINK_TYPE_CHAR, 32, 65, offsetof(mavlink_onboard_computer_info_t, computer_name) }, \
         { "processor_model", NULL, MAVLINK_TYPE_CHAR, 24, 97, offsetof(mavlink_onboard_computer_info_t, processor_model) }, \
         { "architecture", NULL, MAVLINK_TYPE_CHAR, 8, 121, offsetof(mavlink_onboard_computer_info_t, architecture) }, \
         { "mac_address", NULL, MAVLINK_TYPE_CHAR, 18, 129, offsetof(mavlink_onboard_computer_info_t, mac_address) }, \
         { "ip_address", NULL, MAVLINK_TYPE_CHAR, 16, 147, offsetof(mavlink_onboard_computer_info_t, ip_address) }, \
         { "os_distro", NULL, MAVLINK_TYPE_CHAR, 16, 163, offsetof(mavlink_onboard_computer_info_t, os_distro) }, \
         { "kernel_version", NULL, MAVLINK_TYPE_CHAR, 24, 179, offsetof(mavlink_onboard_computer_info_t, kernel_version) }, \
         { "ros_distro", NULL, MAVLINK_TYPE_CHAR, 8, 203, offsetof(mavlink_onboard_computer_info_t, ros_distro) }, \
         { "l4t_version", NULL, MAVLINK_TYPE_CHAR, 10, 211, offsetof(mavlink_onboard_computer_info_t, l4t_version) }, \
         { "cuda_version", NULL, MAVLINK_TYPE_CHAR, 10, 221, offsetof(mavlink_onboard_computer_info_t, cuda_version) }, \
         { "jetpack_version", NULL, MAVLINK_TYPE_CHAR, 8, 231, offsetof(mavlink_onboard_computer_info_t, jetpack_version) }, \
         { "robot_serial_number", NULL, MAVLINK_TYPE_CHAR, 11, 239, offsetof(mavlink_onboard_computer_info_t, robot_serial_number) }, \
         } \
}
#endif

/**
 * @brief Pack a onboard_computer_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (UNIX Epoch, microseconds). Converted from ROS Time at send.
 * @param uid  Unique hardware identifier. Jetson: device-tree fuse-burned serial; x86: DMI product serial hash. Stable across OS reinstalls.
 * @param total_memory  Total installed system RAM in MiB.
 * @param total_storage  Total root-partition storage in MiB.
 * @param total_operation_time  Cumulative powered-on time in seconds across all boots. Monotonic-clock based, NTP-independent. Persisted across reboots.
 * @param boot_count  Number of times this system has booted since first deployment.
 * @param processor_speed  Processor maximum frequency in MHz.
 * @param processor_cores  Number of physical processor cores.
 * @param processor_threads  Number of logical processor threads (equals cores on ARM; 2x cores on x86 HyperThreading).
 * @param robot_type  Robot/vehicle platform type as reported by the firmware (Sensor_Status.vehicle).
 * @param software_version  AvesCore software version string (git tag or abbreviated commit hash).
 * @param software_build_date  Git commit date of the running software (YYYY-MM-DD).
 * @param computer_name  System hostname.
 * @param processor_model  Processor model string. Jetson: device-tree model; x86: cpuinfo model name.
 * @param architecture  CPU architecture string (e.g. aarch64, x86_64).
 * @param mac_address  Primary network interface MAC address (XX:XX:XX:XX:XX:XX).
 * @param ip_address  Primary network interface IP address.
 * @param os_distro  Operating system distribution name (e.g. Ubuntu).
 * @param kernel_version  Linux kernel version string (uname -r).
 * @param ros_distro  ROS distribution name (e.g. Humble).
 * @param l4t_version  NVIDIA L4T BSP version (e.g. R36.4.3). Empty string on non-Jetson platforms.
 * @param cuda_version  CUDA toolkit version (e.g. 12.6.11). Empty string if CUDA not installed.
 * @param jetpack_version  NVIDIA JetPack SDK version (e.g. 6.1). Derived from installed nvidia-jetpack package. Empty string on non-Jetson platforms.
 * @param robot_serial_number  Robot serial number (format XX#####YY, e.g. SN55555BB). Read from ~/records/config/robot_serial_number. Empty string if not provisioned.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_computer_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint64_t uid, uint32_t total_memory, uint32_t total_storage, uint32_t total_operation_time, uint32_t boot_count, uint16_t processor_speed, uint8_t processor_cores, uint8_t processor_threads, uint8_t robot_type, const char *software_version, const char *software_build_date, const char *computer_name, const char *processor_model, const char *architecture, const char *mac_address, const char *ip_address, const char *os_distro, const char *kernel_version, const char *ros_distro, const char *l4t_version, const char *cuda_version, const char *jetpack_version, const char *robot_serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, uid);
    _mav_put_uint32_t(buf, 16, total_memory);
    _mav_put_uint32_t(buf, 20, total_storage);
    _mav_put_uint32_t(buf, 24, total_operation_time);
    _mav_put_uint32_t(buf, 28, boot_count);
    _mav_put_uint16_t(buf, 32, processor_speed);
    _mav_put_uint8_t(buf, 34, processor_cores);
    _mav_put_uint8_t(buf, 35, processor_threads);
    _mav_put_uint8_t(buf, 36, robot_type);
    _mav_put_char_array(buf, 37, software_version, 16);
    _mav_put_char_array(buf, 53, software_build_date, 12);
    _mav_put_char_array(buf, 65, computer_name, 32);
    _mav_put_char_array(buf, 97, processor_model, 24);
    _mav_put_char_array(buf, 121, architecture, 8);
    _mav_put_char_array(buf, 129, mac_address, 18);
    _mav_put_char_array(buf, 147, ip_address, 16);
    _mav_put_char_array(buf, 163, os_distro, 16);
    _mav_put_char_array(buf, 179, kernel_version, 24);
    _mav_put_char_array(buf, 203, ros_distro, 8);
    _mav_put_char_array(buf, 211, l4t_version, 10);
    _mav_put_char_array(buf, 221, cuda_version, 10);
    _mav_put_char_array(buf, 231, jetpack_version, 8);
    _mav_put_char_array(buf, 239, robot_serial_number, 11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN);
#else
    mavlink_onboard_computer_info_t packet;
    packet.time_usec = time_usec;
    packet.uid = uid;
    packet.total_memory = total_memory;
    packet.total_storage = total_storage;
    packet.total_operation_time = total_operation_time;
    packet.boot_count = boot_count;
    packet.processor_speed = processor_speed;
    packet.processor_cores = processor_cores;
    packet.processor_threads = processor_threads;
    packet.robot_type = robot_type;
    mav_array_memcpy(packet.software_version, software_version, sizeof(char)*16);
    mav_array_memcpy(packet.software_build_date, software_build_date, sizeof(char)*12);
    mav_array_memcpy(packet.computer_name, computer_name, sizeof(char)*32);
    mav_array_memcpy(packet.processor_model, processor_model, sizeof(char)*24);
    mav_array_memcpy(packet.architecture, architecture, sizeof(char)*8);
    mav_array_memcpy(packet.mac_address, mac_address, sizeof(char)*18);
    mav_array_memcpy(packet.ip_address, ip_address, sizeof(char)*16);
    mav_array_memcpy(packet.os_distro, os_distro, sizeof(char)*16);
    mav_array_memcpy(packet.kernel_version, kernel_version, sizeof(char)*24);
    mav_array_memcpy(packet.ros_distro, ros_distro, sizeof(char)*8);
    mav_array_memcpy(packet.l4t_version, l4t_version, sizeof(char)*10);
    mav_array_memcpy(packet.cuda_version, cuda_version, sizeof(char)*10);
    mav_array_memcpy(packet.jetpack_version, jetpack_version, sizeof(char)*8);
    mav_array_memcpy(packet.robot_serial_number, robot_serial_number, sizeof(char)*11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_CRC);
}

/**
 * @brief Pack a onboard_computer_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (UNIX Epoch, microseconds). Converted from ROS Time at send.
 * @param uid  Unique hardware identifier. Jetson: device-tree fuse-burned serial; x86: DMI product serial hash. Stable across OS reinstalls.
 * @param total_memory  Total installed system RAM in MiB.
 * @param total_storage  Total root-partition storage in MiB.
 * @param total_operation_time  Cumulative powered-on time in seconds across all boots. Monotonic-clock based, NTP-independent. Persisted across reboots.
 * @param boot_count  Number of times this system has booted since first deployment.
 * @param processor_speed  Processor maximum frequency in MHz.
 * @param processor_cores  Number of physical processor cores.
 * @param processor_threads  Number of logical processor threads (equals cores on ARM; 2x cores on x86 HyperThreading).
 * @param robot_type  Robot/vehicle platform type as reported by the firmware (Sensor_Status.vehicle).
 * @param software_version  AvesCore software version string (git tag or abbreviated commit hash).
 * @param software_build_date  Git commit date of the running software (YYYY-MM-DD).
 * @param computer_name  System hostname.
 * @param processor_model  Processor model string. Jetson: device-tree model; x86: cpuinfo model name.
 * @param architecture  CPU architecture string (e.g. aarch64, x86_64).
 * @param mac_address  Primary network interface MAC address (XX:XX:XX:XX:XX:XX).
 * @param ip_address  Primary network interface IP address.
 * @param os_distro  Operating system distribution name (e.g. Ubuntu).
 * @param kernel_version  Linux kernel version string (uname -r).
 * @param ros_distro  ROS distribution name (e.g. Humble).
 * @param l4t_version  NVIDIA L4T BSP version (e.g. R36.4.3). Empty string on non-Jetson platforms.
 * @param cuda_version  CUDA toolkit version (e.g. 12.6.11). Empty string if CUDA not installed.
 * @param jetpack_version  NVIDIA JetPack SDK version (e.g. 6.1). Derived from installed nvidia-jetpack package. Empty string on non-Jetson platforms.
 * @param robot_serial_number  Robot serial number (format XX#####YY, e.g. SN55555BB). Read from ~/records/config/robot_serial_number. Empty string if not provisioned.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_computer_info_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t time_usec, uint64_t uid, uint32_t total_memory, uint32_t total_storage, uint32_t total_operation_time, uint32_t boot_count, uint16_t processor_speed, uint8_t processor_cores, uint8_t processor_threads, uint8_t robot_type, const char *software_version, const char *software_build_date, const char *computer_name, const char *processor_model, const char *architecture, const char *mac_address, const char *ip_address, const char *os_distro, const char *kernel_version, const char *ros_distro, const char *l4t_version, const char *cuda_version, const char *jetpack_version, const char *robot_serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, uid);
    _mav_put_uint32_t(buf, 16, total_memory);
    _mav_put_uint32_t(buf, 20, total_storage);
    _mav_put_uint32_t(buf, 24, total_operation_time);
    _mav_put_uint32_t(buf, 28, boot_count);
    _mav_put_uint16_t(buf, 32, processor_speed);
    _mav_put_uint8_t(buf, 34, processor_cores);
    _mav_put_uint8_t(buf, 35, processor_threads);
    _mav_put_uint8_t(buf, 36, robot_type);
    _mav_put_char_array(buf, 37, software_version, 16);
    _mav_put_char_array(buf, 53, software_build_date, 12);
    _mav_put_char_array(buf, 65, computer_name, 32);
    _mav_put_char_array(buf, 97, processor_model, 24);
    _mav_put_char_array(buf, 121, architecture, 8);
    _mav_put_char_array(buf, 129, mac_address, 18);
    _mav_put_char_array(buf, 147, ip_address, 16);
    _mav_put_char_array(buf, 163, os_distro, 16);
    _mav_put_char_array(buf, 179, kernel_version, 24);
    _mav_put_char_array(buf, 203, ros_distro, 8);
    _mav_put_char_array(buf, 211, l4t_version, 10);
    _mav_put_char_array(buf, 221, cuda_version, 10);
    _mav_put_char_array(buf, 231, jetpack_version, 8);
    _mav_put_char_array(buf, 239, robot_serial_number, 11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN);
#else
    mavlink_onboard_computer_info_t packet;
    packet.time_usec = time_usec;
    packet.uid = uid;
    packet.total_memory = total_memory;
    packet.total_storage = total_storage;
    packet.total_operation_time = total_operation_time;
    packet.boot_count = boot_count;
    packet.processor_speed = processor_speed;
    packet.processor_cores = processor_cores;
    packet.processor_threads = processor_threads;
    packet.robot_type = robot_type;
    mav_array_memcpy(packet.software_version, software_version, sizeof(char)*16);
    mav_array_memcpy(packet.software_build_date, software_build_date, sizeof(char)*12);
    mav_array_memcpy(packet.computer_name, computer_name, sizeof(char)*32);
    mav_array_memcpy(packet.processor_model, processor_model, sizeof(char)*24);
    mav_array_memcpy(packet.architecture, architecture, sizeof(char)*8);
    mav_array_memcpy(packet.mac_address, mac_address, sizeof(char)*18);
    mav_array_memcpy(packet.ip_address, ip_address, sizeof(char)*16);
    mav_array_memcpy(packet.os_distro, os_distro, sizeof(char)*16);
    mav_array_memcpy(packet.kernel_version, kernel_version, sizeof(char)*24);
    mav_array_memcpy(packet.ros_distro, ros_distro, sizeof(char)*8);
    mav_array_memcpy(packet.l4t_version, l4t_version, sizeof(char)*10);
    mav_array_memcpy(packet.cuda_version, cuda_version, sizeof(char)*10);
    mav_array_memcpy(packet.jetpack_version, jetpack_version, sizeof(char)*8);
    mav_array_memcpy(packet.robot_serial_number, robot_serial_number, sizeof(char)*11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN);
#endif
}

/**
 * @brief Pack a onboard_computer_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (UNIX Epoch, microseconds). Converted from ROS Time at send.
 * @param uid  Unique hardware identifier. Jetson: device-tree fuse-burned serial; x86: DMI product serial hash. Stable across OS reinstalls.
 * @param total_memory  Total installed system RAM in MiB.
 * @param total_storage  Total root-partition storage in MiB.
 * @param total_operation_time  Cumulative powered-on time in seconds across all boots. Monotonic-clock based, NTP-independent. Persisted across reboots.
 * @param boot_count  Number of times this system has booted since first deployment.
 * @param processor_speed  Processor maximum frequency in MHz.
 * @param processor_cores  Number of physical processor cores.
 * @param processor_threads  Number of logical processor threads (equals cores on ARM; 2x cores on x86 HyperThreading).
 * @param robot_type  Robot/vehicle platform type as reported by the firmware (Sensor_Status.vehicle).
 * @param software_version  AvesCore software version string (git tag or abbreviated commit hash).
 * @param software_build_date  Git commit date of the running software (YYYY-MM-DD).
 * @param computer_name  System hostname.
 * @param processor_model  Processor model string. Jetson: device-tree model; x86: cpuinfo model name.
 * @param architecture  CPU architecture string (e.g. aarch64, x86_64).
 * @param mac_address  Primary network interface MAC address (XX:XX:XX:XX:XX:XX).
 * @param ip_address  Primary network interface IP address.
 * @param os_distro  Operating system distribution name (e.g. Ubuntu).
 * @param kernel_version  Linux kernel version string (uname -r).
 * @param ros_distro  ROS distribution name (e.g. Humble).
 * @param l4t_version  NVIDIA L4T BSP version (e.g. R36.4.3). Empty string on non-Jetson platforms.
 * @param cuda_version  CUDA toolkit version (e.g. 12.6.11). Empty string if CUDA not installed.
 * @param jetpack_version  NVIDIA JetPack SDK version (e.g. 6.1). Derived from installed nvidia-jetpack package. Empty string on non-Jetson platforms.
 * @param robot_serial_number  Robot serial number (format XX#####YY, e.g. SN55555BB). Read from ~/records/config/robot_serial_number. Empty string if not provisioned.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_onboard_computer_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint64_t uid,uint32_t total_memory,uint32_t total_storage,uint32_t total_operation_time,uint32_t boot_count,uint16_t processor_speed,uint8_t processor_cores,uint8_t processor_threads,uint8_t robot_type,const char *software_version,const char *software_build_date,const char *computer_name,const char *processor_model,const char *architecture,const char *mac_address,const char *ip_address,const char *os_distro,const char *kernel_version,const char *ros_distro,const char *l4t_version,const char *cuda_version,const char *jetpack_version,const char *robot_serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, uid);
    _mav_put_uint32_t(buf, 16, total_memory);
    _mav_put_uint32_t(buf, 20, total_storage);
    _mav_put_uint32_t(buf, 24, total_operation_time);
    _mav_put_uint32_t(buf, 28, boot_count);
    _mav_put_uint16_t(buf, 32, processor_speed);
    _mav_put_uint8_t(buf, 34, processor_cores);
    _mav_put_uint8_t(buf, 35, processor_threads);
    _mav_put_uint8_t(buf, 36, robot_type);
    _mav_put_char_array(buf, 37, software_version, 16);
    _mav_put_char_array(buf, 53, software_build_date, 12);
    _mav_put_char_array(buf, 65, computer_name, 32);
    _mav_put_char_array(buf, 97, processor_model, 24);
    _mav_put_char_array(buf, 121, architecture, 8);
    _mav_put_char_array(buf, 129, mac_address, 18);
    _mav_put_char_array(buf, 147, ip_address, 16);
    _mav_put_char_array(buf, 163, os_distro, 16);
    _mav_put_char_array(buf, 179, kernel_version, 24);
    _mav_put_char_array(buf, 203, ros_distro, 8);
    _mav_put_char_array(buf, 211, l4t_version, 10);
    _mav_put_char_array(buf, 221, cuda_version, 10);
    _mav_put_char_array(buf, 231, jetpack_version, 8);
    _mav_put_char_array(buf, 239, robot_serial_number, 11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN);
#else
    mavlink_onboard_computer_info_t packet;
    packet.time_usec = time_usec;
    packet.uid = uid;
    packet.total_memory = total_memory;
    packet.total_storage = total_storage;
    packet.total_operation_time = total_operation_time;
    packet.boot_count = boot_count;
    packet.processor_speed = processor_speed;
    packet.processor_cores = processor_cores;
    packet.processor_threads = processor_threads;
    packet.robot_type = robot_type;
    mav_array_memcpy(packet.software_version, software_version, sizeof(char)*16);
    mav_array_memcpy(packet.software_build_date, software_build_date, sizeof(char)*12);
    mav_array_memcpy(packet.computer_name, computer_name, sizeof(char)*32);
    mav_array_memcpy(packet.processor_model, processor_model, sizeof(char)*24);
    mav_array_memcpy(packet.architecture, architecture, sizeof(char)*8);
    mav_array_memcpy(packet.mac_address, mac_address, sizeof(char)*18);
    mav_array_memcpy(packet.ip_address, ip_address, sizeof(char)*16);
    mav_array_memcpy(packet.os_distro, os_distro, sizeof(char)*16);
    mav_array_memcpy(packet.kernel_version, kernel_version, sizeof(char)*24);
    mav_array_memcpy(packet.ros_distro, ros_distro, sizeof(char)*8);
    mav_array_memcpy(packet.l4t_version, l4t_version, sizeof(char)*10);
    mav_array_memcpy(packet.cuda_version, cuda_version, sizeof(char)*10);
    mav_array_memcpy(packet.jetpack_version, jetpack_version, sizeof(char)*8);
    mav_array_memcpy(packet.robot_serial_number, robot_serial_number, sizeof(char)*11);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_CRC);
}

/**
 * @brief Encode a onboard_computer_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param onboard_computer_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_computer_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_onboard_computer_info_t* onboard_computer_info)
{
    return mavlink_msg_onboard_computer_info_pack(system_id, component_id, msg, onboard_computer_info->time_usec, onboard_computer_info->uid, onboard_computer_info->total_memory, onboard_computer_info->total_storage, onboard_computer_info->total_operation_time, onboard_computer_info->boot_count, onboard_computer_info->processor_speed, onboard_computer_info->processor_cores, onboard_computer_info->processor_threads, onboard_computer_info->robot_type, onboard_computer_info->software_version, onboard_computer_info->software_build_date, onboard_computer_info->computer_name, onboard_computer_info->processor_model, onboard_computer_info->architecture, onboard_computer_info->mac_address, onboard_computer_info->ip_address, onboard_computer_info->os_distro, onboard_computer_info->kernel_version, onboard_computer_info->ros_distro, onboard_computer_info->l4t_version, onboard_computer_info->cuda_version, onboard_computer_info->jetpack_version, onboard_computer_info->robot_serial_number);
}

/**
 * @brief Encode a onboard_computer_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param onboard_computer_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_computer_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_onboard_computer_info_t* onboard_computer_info)
{
    return mavlink_msg_onboard_computer_info_pack_chan(system_id, component_id, chan, msg, onboard_computer_info->time_usec, onboard_computer_info->uid, onboard_computer_info->total_memory, onboard_computer_info->total_storage, onboard_computer_info->total_operation_time, onboard_computer_info->boot_count, onboard_computer_info->processor_speed, onboard_computer_info->processor_cores, onboard_computer_info->processor_threads, onboard_computer_info->robot_type, onboard_computer_info->software_version, onboard_computer_info->software_build_date, onboard_computer_info->computer_name, onboard_computer_info->processor_model, onboard_computer_info->architecture, onboard_computer_info->mac_address, onboard_computer_info->ip_address, onboard_computer_info->os_distro, onboard_computer_info->kernel_version, onboard_computer_info->ros_distro, onboard_computer_info->l4t_version, onboard_computer_info->cuda_version, onboard_computer_info->jetpack_version, onboard_computer_info->robot_serial_number);
}

/**
 * @brief Encode a onboard_computer_info struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param onboard_computer_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_onboard_computer_info_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_onboard_computer_info_t* onboard_computer_info)
{
    return mavlink_msg_onboard_computer_info_pack_status(system_id, component_id, _status, msg,  onboard_computer_info->time_usec, onboard_computer_info->uid, onboard_computer_info->total_memory, onboard_computer_info->total_storage, onboard_computer_info->total_operation_time, onboard_computer_info->boot_count, onboard_computer_info->processor_speed, onboard_computer_info->processor_cores, onboard_computer_info->processor_threads, onboard_computer_info->robot_type, onboard_computer_info->software_version, onboard_computer_info->software_build_date, onboard_computer_info->computer_name, onboard_computer_info->processor_model, onboard_computer_info->architecture, onboard_computer_info->mac_address, onboard_computer_info->ip_address, onboard_computer_info->os_distro, onboard_computer_info->kernel_version, onboard_computer_info->ros_distro, onboard_computer_info->l4t_version, onboard_computer_info->cuda_version, onboard_computer_info->jetpack_version, onboard_computer_info->robot_serial_number);
}

/**
 * @brief Send a onboard_computer_info message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (UNIX Epoch, microseconds). Converted from ROS Time at send.
 * @param uid  Unique hardware identifier. Jetson: device-tree fuse-burned serial; x86: DMI product serial hash. Stable across OS reinstalls.
 * @param total_memory  Total installed system RAM in MiB.
 * @param total_storage  Total root-partition storage in MiB.
 * @param total_operation_time  Cumulative powered-on time in seconds across all boots. Monotonic-clock based, NTP-independent. Persisted across reboots.
 * @param boot_count  Number of times this system has booted since first deployment.
 * @param processor_speed  Processor maximum frequency in MHz.
 * @param processor_cores  Number of physical processor cores.
 * @param processor_threads  Number of logical processor threads (equals cores on ARM; 2x cores on x86 HyperThreading).
 * @param robot_type  Robot/vehicle platform type as reported by the firmware (Sensor_Status.vehicle).
 * @param software_version  AvesCore software version string (git tag or abbreviated commit hash).
 * @param software_build_date  Git commit date of the running software (YYYY-MM-DD).
 * @param computer_name  System hostname.
 * @param processor_model  Processor model string. Jetson: device-tree model; x86: cpuinfo model name.
 * @param architecture  CPU architecture string (e.g. aarch64, x86_64).
 * @param mac_address  Primary network interface MAC address (XX:XX:XX:XX:XX:XX).
 * @param ip_address  Primary network interface IP address.
 * @param os_distro  Operating system distribution name (e.g. Ubuntu).
 * @param kernel_version  Linux kernel version string (uname -r).
 * @param ros_distro  ROS distribution name (e.g. Humble).
 * @param l4t_version  NVIDIA L4T BSP version (e.g. R36.4.3). Empty string on non-Jetson platforms.
 * @param cuda_version  CUDA toolkit version (e.g. 12.6.11). Empty string if CUDA not installed.
 * @param jetpack_version  NVIDIA JetPack SDK version (e.g. 6.1). Derived from installed nvidia-jetpack package. Empty string on non-Jetson platforms.
 * @param robot_serial_number  Robot serial number (format XX#####YY, e.g. SN55555BB). Read from ~/records/config/robot_serial_number. Empty string if not provisioned.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_onboard_computer_info_send(mavlink_channel_t chan, uint64_t time_usec, uint64_t uid, uint32_t total_memory, uint32_t total_storage, uint32_t total_operation_time, uint32_t boot_count, uint16_t processor_speed, uint8_t processor_cores, uint8_t processor_threads, uint8_t robot_type, const char *software_version, const char *software_build_date, const char *computer_name, const char *processor_model, const char *architecture, const char *mac_address, const char *ip_address, const char *os_distro, const char *kernel_version, const char *ros_distro, const char *l4t_version, const char *cuda_version, const char *jetpack_version, const char *robot_serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, uid);
    _mav_put_uint32_t(buf, 16, total_memory);
    _mav_put_uint32_t(buf, 20, total_storage);
    _mav_put_uint32_t(buf, 24, total_operation_time);
    _mav_put_uint32_t(buf, 28, boot_count);
    _mav_put_uint16_t(buf, 32, processor_speed);
    _mav_put_uint8_t(buf, 34, processor_cores);
    _mav_put_uint8_t(buf, 35, processor_threads);
    _mav_put_uint8_t(buf, 36, robot_type);
    _mav_put_char_array(buf, 37, software_version, 16);
    _mav_put_char_array(buf, 53, software_build_date, 12);
    _mav_put_char_array(buf, 65, computer_name, 32);
    _mav_put_char_array(buf, 97, processor_model, 24);
    _mav_put_char_array(buf, 121, architecture, 8);
    _mav_put_char_array(buf, 129, mac_address, 18);
    _mav_put_char_array(buf, 147, ip_address, 16);
    _mav_put_char_array(buf, 163, os_distro, 16);
    _mav_put_char_array(buf, 179, kernel_version, 24);
    _mav_put_char_array(buf, 203, ros_distro, 8);
    _mav_put_char_array(buf, 211, l4t_version, 10);
    _mav_put_char_array(buf, 221, cuda_version, 10);
    _mav_put_char_array(buf, 231, jetpack_version, 8);
    _mav_put_char_array(buf, 239, robot_serial_number, 11);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO, buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_CRC);
#else
    mavlink_onboard_computer_info_t packet;
    packet.time_usec = time_usec;
    packet.uid = uid;
    packet.total_memory = total_memory;
    packet.total_storage = total_storage;
    packet.total_operation_time = total_operation_time;
    packet.boot_count = boot_count;
    packet.processor_speed = processor_speed;
    packet.processor_cores = processor_cores;
    packet.processor_threads = processor_threads;
    packet.robot_type = robot_type;
    mav_array_memcpy(packet.software_version, software_version, sizeof(char)*16);
    mav_array_memcpy(packet.software_build_date, software_build_date, sizeof(char)*12);
    mav_array_memcpy(packet.computer_name, computer_name, sizeof(char)*32);
    mav_array_memcpy(packet.processor_model, processor_model, sizeof(char)*24);
    mav_array_memcpy(packet.architecture, architecture, sizeof(char)*8);
    mav_array_memcpy(packet.mac_address, mac_address, sizeof(char)*18);
    mav_array_memcpy(packet.ip_address, ip_address, sizeof(char)*16);
    mav_array_memcpy(packet.os_distro, os_distro, sizeof(char)*16);
    mav_array_memcpy(packet.kernel_version, kernel_version, sizeof(char)*24);
    mav_array_memcpy(packet.ros_distro, ros_distro, sizeof(char)*8);
    mav_array_memcpy(packet.l4t_version, l4t_version, sizeof(char)*10);
    mav_array_memcpy(packet.cuda_version, cuda_version, sizeof(char)*10);
    mav_array_memcpy(packet.jetpack_version, jetpack_version, sizeof(char)*8);
    mav_array_memcpy(packet.robot_serial_number, robot_serial_number, sizeof(char)*11);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO, (const char *)&packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_CRC);
#endif
}

/**
 * @brief Send a onboard_computer_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_onboard_computer_info_send_struct(mavlink_channel_t chan, const mavlink_onboard_computer_info_t* onboard_computer_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_onboard_computer_info_send(chan, onboard_computer_info->time_usec, onboard_computer_info->uid, onboard_computer_info->total_memory, onboard_computer_info->total_storage, onboard_computer_info->total_operation_time, onboard_computer_info->boot_count, onboard_computer_info->processor_speed, onboard_computer_info->processor_cores, onboard_computer_info->processor_threads, onboard_computer_info->robot_type, onboard_computer_info->software_version, onboard_computer_info->software_build_date, onboard_computer_info->computer_name, onboard_computer_info->processor_model, onboard_computer_info->architecture, onboard_computer_info->mac_address, onboard_computer_info->ip_address, onboard_computer_info->os_distro, onboard_computer_info->kernel_version, onboard_computer_info->ros_distro, onboard_computer_info->l4t_version, onboard_computer_info->cuda_version, onboard_computer_info->jetpack_version, onboard_computer_info->robot_serial_number);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO, (const char *)onboard_computer_info, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_onboard_computer_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint64_t uid, uint32_t total_memory, uint32_t total_storage, uint32_t total_operation_time, uint32_t boot_count, uint16_t processor_speed, uint8_t processor_cores, uint8_t processor_threads, uint8_t robot_type, const char *software_version, const char *software_build_date, const char *computer_name, const char *processor_model, const char *architecture, const char *mac_address, const char *ip_address, const char *os_distro, const char *kernel_version, const char *ros_distro, const char *l4t_version, const char *cuda_version, const char *jetpack_version, const char *robot_serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint64_t(buf, 8, uid);
    _mav_put_uint32_t(buf, 16, total_memory);
    _mav_put_uint32_t(buf, 20, total_storage);
    _mav_put_uint32_t(buf, 24, total_operation_time);
    _mav_put_uint32_t(buf, 28, boot_count);
    _mav_put_uint16_t(buf, 32, processor_speed);
    _mav_put_uint8_t(buf, 34, processor_cores);
    _mav_put_uint8_t(buf, 35, processor_threads);
    _mav_put_uint8_t(buf, 36, robot_type);
    _mav_put_char_array(buf, 37, software_version, 16);
    _mav_put_char_array(buf, 53, software_build_date, 12);
    _mav_put_char_array(buf, 65, computer_name, 32);
    _mav_put_char_array(buf, 97, processor_model, 24);
    _mav_put_char_array(buf, 121, architecture, 8);
    _mav_put_char_array(buf, 129, mac_address, 18);
    _mav_put_char_array(buf, 147, ip_address, 16);
    _mav_put_char_array(buf, 163, os_distro, 16);
    _mav_put_char_array(buf, 179, kernel_version, 24);
    _mav_put_char_array(buf, 203, ros_distro, 8);
    _mav_put_char_array(buf, 211, l4t_version, 10);
    _mav_put_char_array(buf, 221, cuda_version, 10);
    _mav_put_char_array(buf, 231, jetpack_version, 8);
    _mav_put_char_array(buf, 239, robot_serial_number, 11);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO, buf, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_CRC);
#else
    mavlink_onboard_computer_info_t *packet = (mavlink_onboard_computer_info_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->uid = uid;
    packet->total_memory = total_memory;
    packet->total_storage = total_storage;
    packet->total_operation_time = total_operation_time;
    packet->boot_count = boot_count;
    packet->processor_speed = processor_speed;
    packet->processor_cores = processor_cores;
    packet->processor_threads = processor_threads;
    packet->robot_type = robot_type;
    mav_array_memcpy(packet->software_version, software_version, sizeof(char)*16);
    mav_array_memcpy(packet->software_build_date, software_build_date, sizeof(char)*12);
    mav_array_memcpy(packet->computer_name, computer_name, sizeof(char)*32);
    mav_array_memcpy(packet->processor_model, processor_model, sizeof(char)*24);
    mav_array_memcpy(packet->architecture, architecture, sizeof(char)*8);
    mav_array_memcpy(packet->mac_address, mac_address, sizeof(char)*18);
    mav_array_memcpy(packet->ip_address, ip_address, sizeof(char)*16);
    mav_array_memcpy(packet->os_distro, os_distro, sizeof(char)*16);
    mav_array_memcpy(packet->kernel_version, kernel_version, sizeof(char)*24);
    mav_array_memcpy(packet->ros_distro, ros_distro, sizeof(char)*8);
    mav_array_memcpy(packet->l4t_version, l4t_version, sizeof(char)*10);
    mav_array_memcpy(packet->cuda_version, cuda_version, sizeof(char)*10);
    mav_array_memcpy(packet->jetpack_version, jetpack_version, sizeof(char)*8);
    mav_array_memcpy(packet->robot_serial_number, robot_serial_number, sizeof(char)*11);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO, (const char *)packet, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_MIN_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE ONBOARD_COMPUTER_INFO UNPACKING


/**
 * @brief Get field time_usec from onboard_computer_info message
 *
 * @return [us] Timestamp (UNIX Epoch, microseconds). Converted from ROS Time at send.
 */
static inline uint64_t mavlink_msg_onboard_computer_info_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field uid from onboard_computer_info message
 *
 * @return  Unique hardware identifier. Jetson: device-tree fuse-burned serial; x86: DMI product serial hash. Stable across OS reinstalls.
 */
static inline uint64_t mavlink_msg_onboard_computer_info_get_uid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field total_memory from onboard_computer_info message
 *
 * @return  Total installed system RAM in MiB.
 */
static inline uint32_t mavlink_msg_onboard_computer_info_get_total_memory(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field total_storage from onboard_computer_info message
 *
 * @return  Total root-partition storage in MiB.
 */
static inline uint32_t mavlink_msg_onboard_computer_info_get_total_storage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  20);
}

/**
 * @brief Get field total_operation_time from onboard_computer_info message
 *
 * @return  Cumulative powered-on time in seconds across all boots. Monotonic-clock based, NTP-independent. Persisted across reboots.
 */
static inline uint32_t mavlink_msg_onboard_computer_info_get_total_operation_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  24);
}

/**
 * @brief Get field boot_count from onboard_computer_info message
 *
 * @return  Number of times this system has booted since first deployment.
 */
static inline uint32_t mavlink_msg_onboard_computer_info_get_boot_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  28);
}

/**
 * @brief Get field processor_speed from onboard_computer_info message
 *
 * @return  Processor maximum frequency in MHz.
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_processor_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  32);
}

/**
 * @brief Get field processor_cores from onboard_computer_info message
 *
 * @return  Number of physical processor cores.
 */
static inline uint8_t mavlink_msg_onboard_computer_info_get_processor_cores(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field processor_threads from onboard_computer_info message
 *
 * @return  Number of logical processor threads (equals cores on ARM; 2x cores on x86 HyperThreading).
 */
static inline uint8_t mavlink_msg_onboard_computer_info_get_processor_threads(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field robot_type from onboard_computer_info message
 *
 * @return  Robot/vehicle platform type as reported by the firmware (Sensor_Status.vehicle).
 */
static inline uint8_t mavlink_msg_onboard_computer_info_get_robot_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field software_version from onboard_computer_info message
 *
 * @return  AvesCore software version string (git tag or abbreviated commit hash).
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_software_version(const mavlink_message_t* msg, char *software_version)
{
    return _MAV_RETURN_char_array(msg, software_version, 16,  37);
}

/**
 * @brief Get field software_build_date from onboard_computer_info message
 *
 * @return  Git commit date of the running software (YYYY-MM-DD).
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_software_build_date(const mavlink_message_t* msg, char *software_build_date)
{
    return _MAV_RETURN_char_array(msg, software_build_date, 12,  53);
}

/**
 * @brief Get field computer_name from onboard_computer_info message
 *
 * @return  System hostname.
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_computer_name(const mavlink_message_t* msg, char *computer_name)
{
    return _MAV_RETURN_char_array(msg, computer_name, 32,  65);
}

/**
 * @brief Get field processor_model from onboard_computer_info message
 *
 * @return  Processor model string. Jetson: device-tree model; x86: cpuinfo model name.
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_processor_model(const mavlink_message_t* msg, char *processor_model)
{
    return _MAV_RETURN_char_array(msg, processor_model, 24,  97);
}

/**
 * @brief Get field architecture from onboard_computer_info message
 *
 * @return  CPU architecture string (e.g. aarch64, x86_64).
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_architecture(const mavlink_message_t* msg, char *architecture)
{
    return _MAV_RETURN_char_array(msg, architecture, 8,  121);
}

/**
 * @brief Get field mac_address from onboard_computer_info message
 *
 * @return  Primary network interface MAC address (XX:XX:XX:XX:XX:XX).
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_mac_address(const mavlink_message_t* msg, char *mac_address)
{
    return _MAV_RETURN_char_array(msg, mac_address, 18,  129);
}

/**
 * @brief Get field ip_address from onboard_computer_info message
 *
 * @return  Primary network interface IP address.
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_ip_address(const mavlink_message_t* msg, char *ip_address)
{
    return _MAV_RETURN_char_array(msg, ip_address, 16,  147);
}

/**
 * @brief Get field os_distro from onboard_computer_info message
 *
 * @return  Operating system distribution name (e.g. Ubuntu).
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_os_distro(const mavlink_message_t* msg, char *os_distro)
{
    return _MAV_RETURN_char_array(msg, os_distro, 16,  163);
}

/**
 * @brief Get field kernel_version from onboard_computer_info message
 *
 * @return  Linux kernel version string (uname -r).
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_kernel_version(const mavlink_message_t* msg, char *kernel_version)
{
    return _MAV_RETURN_char_array(msg, kernel_version, 24,  179);
}

/**
 * @brief Get field ros_distro from onboard_computer_info message
 *
 * @return  ROS distribution name (e.g. Humble).
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_ros_distro(const mavlink_message_t* msg, char *ros_distro)
{
    return _MAV_RETURN_char_array(msg, ros_distro, 8,  203);
}

/**
 * @brief Get field l4t_version from onboard_computer_info message
 *
 * @return  NVIDIA L4T BSP version (e.g. R36.4.3). Empty string on non-Jetson platforms.
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_l4t_version(const mavlink_message_t* msg, char *l4t_version)
{
    return _MAV_RETURN_char_array(msg, l4t_version, 10,  211);
}

/**
 * @brief Get field cuda_version from onboard_computer_info message
 *
 * @return  CUDA toolkit version (e.g. 12.6.11). Empty string if CUDA not installed.
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_cuda_version(const mavlink_message_t* msg, char *cuda_version)
{
    return _MAV_RETURN_char_array(msg, cuda_version, 10,  221);
}

/**
 * @brief Get field jetpack_version from onboard_computer_info message
 *
 * @return  NVIDIA JetPack SDK version (e.g. 6.1). Derived from installed nvidia-jetpack package. Empty string on non-Jetson platforms.
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_jetpack_version(const mavlink_message_t* msg, char *jetpack_version)
{
    return _MAV_RETURN_char_array(msg, jetpack_version, 8,  231);
}

/**
 * @brief Get field robot_serial_number from onboard_computer_info message
 *
 * @return  Robot serial number (format XX#####YY, e.g. SN55555BB). Read from ~/records/config/robot_serial_number. Empty string if not provisioned.
 */
static inline uint16_t mavlink_msg_onboard_computer_info_get_robot_serial_number(const mavlink_message_t* msg, char *robot_serial_number)
{
    return _MAV_RETURN_char_array(msg, robot_serial_number, 11,  239);
}

/**
 * @brief Decode a onboard_computer_info message into a struct
 *
 * @param msg The message to decode
 * @param onboard_computer_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_onboard_computer_info_decode(const mavlink_message_t* msg, mavlink_onboard_computer_info_t* onboard_computer_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    onboard_computer_info->time_usec = mavlink_msg_onboard_computer_info_get_time_usec(msg);
    onboard_computer_info->uid = mavlink_msg_onboard_computer_info_get_uid(msg);
    onboard_computer_info->total_memory = mavlink_msg_onboard_computer_info_get_total_memory(msg);
    onboard_computer_info->total_storage = mavlink_msg_onboard_computer_info_get_total_storage(msg);
    onboard_computer_info->total_operation_time = mavlink_msg_onboard_computer_info_get_total_operation_time(msg);
    onboard_computer_info->boot_count = mavlink_msg_onboard_computer_info_get_boot_count(msg);
    onboard_computer_info->processor_speed = mavlink_msg_onboard_computer_info_get_processor_speed(msg);
    onboard_computer_info->processor_cores = mavlink_msg_onboard_computer_info_get_processor_cores(msg);
    onboard_computer_info->processor_threads = mavlink_msg_onboard_computer_info_get_processor_threads(msg);
    onboard_computer_info->robot_type = mavlink_msg_onboard_computer_info_get_robot_type(msg);
    mavlink_msg_onboard_computer_info_get_software_version(msg, onboard_computer_info->software_version);
    mavlink_msg_onboard_computer_info_get_software_build_date(msg, onboard_computer_info->software_build_date);
    mavlink_msg_onboard_computer_info_get_computer_name(msg, onboard_computer_info->computer_name);
    mavlink_msg_onboard_computer_info_get_processor_model(msg, onboard_computer_info->processor_model);
    mavlink_msg_onboard_computer_info_get_architecture(msg, onboard_computer_info->architecture);
    mavlink_msg_onboard_computer_info_get_mac_address(msg, onboard_computer_info->mac_address);
    mavlink_msg_onboard_computer_info_get_ip_address(msg, onboard_computer_info->ip_address);
    mavlink_msg_onboard_computer_info_get_os_distro(msg, onboard_computer_info->os_distro);
    mavlink_msg_onboard_computer_info_get_kernel_version(msg, onboard_computer_info->kernel_version);
    mavlink_msg_onboard_computer_info_get_ros_distro(msg, onboard_computer_info->ros_distro);
    mavlink_msg_onboard_computer_info_get_l4t_version(msg, onboard_computer_info->l4t_version);
    mavlink_msg_onboard_computer_info_get_cuda_version(msg, onboard_computer_info->cuda_version);
    mavlink_msg_onboard_computer_info_get_jetpack_version(msg, onboard_computer_info->jetpack_version);
    mavlink_msg_onboard_computer_info_get_robot_serial_number(msg, onboard_computer_info->robot_serial_number);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN? msg->len : MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN;
        memset(onboard_computer_info, 0, MAVLINK_MSG_ID_ONBOARD_COMPUTER_INFO_LEN);
    memcpy(onboard_computer_info, _MAV_PAYLOAD(msg), len);
#endif
}
