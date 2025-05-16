﻿#ifndef PROPERTYVALUETABLE_H
#define PROPERTYVALUETABLE_H

#include <cstdint>
#include <vector>
#include "CameraRemote_SDK.h"
#include "Text.h"

namespace cli
{
static const int MAX_CURRENT_STR = 255;


template <typename T>
struct PropertyValueEntry
{
    int writable; // -1:Initial, 0:false, 1:true
    T current;
    std::vector<T> possible;
    PropertyValueEntry()
    {
        writable = -1;
    }
};

struct PropertyValueTable
{
    PropertyValueEntry<std::uint32_t> sdk_mode;
    PropertyValueEntry<std::uint16_t> f_number;
    PropertyValueEntry<std::uint32_t> iso_sensitivity;
    PropertyValueEntry<std::uint32_t> shutter_speed;
    PropertyValueEntry<std::uint16_t> position_key_setting;
    PropertyValueEntry<std::uint32_t> exposure_program_mode;
    PropertyValueEntry<std::uint32_t> still_capture_mode;
    PropertyValueEntry<std::uint16_t> focus_mode;
    PropertyValueEntry<std::uint16_t> focus_area;
    PropertyValueEntry<std::uint16_t> live_view_image_quality;
    PropertyValueEntry<std::uint8_t> media_slot1_full_format_enable_status;
    PropertyValueEntry<std::uint8_t> media_slot2_full_format_enable_status;
    PropertyValueEntry<std::uint8_t> media_slot1_quick_format_enable_status;
    PropertyValueEntry<std::uint8_t> media_slot2_quick_format_enable_status;
    PropertyValueEntry<std::uint16_t> white_balance;
    PropertyValueEntry<std::uint16_t> customwb_capture_standby;
    PropertyValueEntry<std::uint16_t> customwb_capture_standby_cancel;
    PropertyValueEntry<std::uint16_t> customwb_capture_operation;
    PropertyValueEntry<std::uint16_t> customwb_capture_execution_state;
    PropertyValueEntry<std::uint8_t> zoom_operation_status;
    PropertyValueEntry<std::uint8_t> zoom_setting_type;
    PropertyValueEntry<std::uint8_t> zoom_types_status;
    PropertyValueEntry<std::int8_t> zoom_speed_range;
    PropertyValueEntry<std::uint8_t> save_zoom_and_focus_position;
    PropertyValueEntry<std::uint8_t> load_zoom_and_focus_position;
    PropertyValueEntry<std::uint8_t> remocon_zoom_speed_type;
    PropertyValueEntry<std::uint8_t> aps_c_of_full_switching_setting;
    PropertyValueEntry<std::uint8_t> aps_c_of_full_switching_enable_status;
    PropertyValueEntry<std::uint8_t> camera_setting_save_read_state;
    PropertyValueEntry<std::uint8_t> camera_setting_save_operation;
    PropertyValueEntry<std::uint8_t> camera_setting_read_operation;
    PropertyValueEntry<std::uint8_t>  camera_setting_reset_enable_status;
    PropertyValueEntry<std::uint8_t> gain_base_sensitivity;
    PropertyValueEntry<std::uint8_t> gain_base_iso_sensitivity;
    PropertyValueEntry<std::uint8_t>  monitor_lut_setting;
    PropertyValueEntry<std::uint16_t>  exposure_index;
    PropertyValueEntry<std::uint16_t> baselook_value;
    PropertyValueEntry<std::uint8_t> playback_media;
    PropertyValueEntry<std::uint8_t> iris_mode_setting;
    PropertyValueEntry<std::uint8_t> shutter_mode_setting;
    PropertyValueEntry<std::uint8_t> gain_control_setting;
    PropertyValueEntry<std::uint8_t> exposure_control_type;
    PropertyValueEntry<std::uint32_t> iso_current_sensitivity;
    PropertyValueEntry<std::uint16_t> recording_setting;
    PropertyValueEntry<std::uint32_t> dispmode_candidate;
    PropertyValueEntry<std::uint32_t> dispmode_setting;
    PropertyValueEntry<std::uint8_t> dispmode;
    PropertyValueEntry<std::int8_t> gain_db_value;
    PropertyValueEntry<std::int8_t> white_balance_tint;
    PropertyValueEntry<std::int16_t> white_balance_tint_step;
    PropertyValueEntry<std::uint64_t> shutter_speed_value;
    PropertyValueEntry<std::uint8_t> movie_rec_button_toggle_enable_status;
    PropertyValueEntry<std::uint16_t> media_slot1_status;
    PropertyValueEntry<std::uint16_t> media_slot2_status;
    PropertyValueEntry<std::uint16_t> media_slot3_status;
    PropertyValueEntry<std::uint16_t> focus_bracket_shot_num;
    PropertyValueEntry<std::uint8_t> focus_bracket_focus_range;
    PropertyValueEntry<std::uint8_t> image_stabilization_steady_shot;
    PropertyValueEntry<std::uint8_t> movie_image_stabilization_steady_shot;
    PropertyValueEntry<std::uint8_t> silent_mode;
    PropertyValueEntry<std::uint8_t> silent_mode_aperture_drive_in_af;
    PropertyValueEntry<std::uint8_t> silent_mode_shutter_when_power_off;
    PropertyValueEntry<std::uint8_t> silent_mode_auto_pixel_mapping;
    PropertyValueEntry<std::uint8_t> shutter_type;
    PropertyValueEntry<std::uint16_t> movie_shooting_mode;
    PropertyValueEntry<std::uint16_t> focus_position_setting;
    PropertyValueEntry<std::uint16_t> focus_position_current_value;
    PropertyValueEntry<std::uint8_t> focus_driving_status;
    PropertyValueEntry<std::uint32_t> zoom_distance;
    PropertyValueEntry<std::uint8_t> customwb_size_setting;
    PropertyValueEntry<std::uint8_t> time_shift_shooting;
    PropertyValueEntry<std::uint64_t> extended_shutter_speed;
	PropertyValueEntry<std::uint8_t>  media_slot1_recording_available_type;
    PropertyValueEntry<std::uint8_t>  media_slot2_recording_available_type;
    PropertyValueEntry<std::uint8_t>  media_slot3_recording_available_type;
    PropertyValueEntry<std::uint32_t> camera_button_function;
    PropertyValueEntry<std::uint32_t> camera_button_function_multi;
    PropertyValueEntry<std::uint32_t> camera_dial_function;
    PropertyValueEntry<std::uint16_t> camera_button_function_status;
    PropertyValueEntry<std::uint32_t> camera_lever_function;
    PropertyValueEntry<std::uint16_t> zoom_position_setting;
    PropertyValueEntry<std::uint16_t> zoom_position_current_value;
    PropertyValueEntry<std::uint8_t> zoom_driving_status;
    PropertyValueEntry<std::uint16_t> movie_recording_media;
    PropertyValueEntry<std::uint8_t> recorder_main_status;
    PropertyValueEntry<std::uint8_t> recording_state;
    PropertyValueEntry<std::uint8_t> debug_mode;
};

std::vector<std::uint16_t> parse_f_number(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint32_t> parse_iso_sensitivity(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint32_t> parse_shutter_speed(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint64_t> parse_extended_shutter_speed(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_position_key_setting(unsigned char const * buf, std::uint32_t nval);
std::vector<std::uint32_t> parse_exposure_program_mode(unsigned char const * buf, std::uint32_t nval);
std::vector<std::uint32_t> parse_still_capture_mode(unsigned char const * buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_focus_mode(unsigned char const * buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_focus_area(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_live_view_image_quality(unsigned char const * buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_media_slotx_format_enable_status(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_white_balance(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_customwb_capture_standby(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_customwb_capture_standby_cancel(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_customwb_capture_operation(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_customwb_capture_execution_state(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_zoom_operation_status(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_zoom_setting_type(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_zoom_types_status(unsigned char const* buf, std::uint32_t nval);
std::vector<std::int8_t> parse_zoom_operation(unsigned char const* buf, std::uint32_t nval);
std::vector<std::int8_t> parse_zoom_speed_range(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_save_zoom_and_focus_position(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_load_zoom_and_focus_position(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_remocon_zoom_speed_type(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_gain_base_sensitivity(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_gain_base_iso_sensitivity(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_monitor_lut_setting(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_exposure_index(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_baselook_value(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_playback_media(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_iris_mode_setting(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_shutter_mode_setting(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_gain_control_setting(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_exposure_control_type(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_recording_setting(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint32_t> parse_dispmode_candidate(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint32_t> parse_dispmode_setting(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_dispmode(unsigned char const* buf, std::uint32_t nval);
std::vector<std::int8_t> parse_gain_db_value(unsigned char const* buf, std::int32_t nval);
std::vector<std::int8_t> parse_white_balance_tint(unsigned char const* buf, std::int32_t nval);
std::vector<std::int16_t> parse_white_balance_tint_step(unsigned char const* buf, std::int32_t nval);
std::vector<std::uint64_t> parse_shutter_speed_value(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_focus_bracket_shot_num(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_focus_bracket_focus_range(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_image_stabilization_steady_shot(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_movie_image_stabilization_steady_shot(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_silent_mode(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_silent_mode_aperture_drive_in_af(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_silent_mode_shutter_when_power_off(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_silent_mode_auto_pixel_mapping(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_shutter_type(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_movie_shooting_mode(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_focus_position(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_focus_driving_status(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint32_t> parse_zoom_distance(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_customwb_size_setting(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_time_shift_shooting(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_slotx_rec_available(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint32_t> parse_camera_button_function(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint32_t> parse_camera_button_function_multi(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint32_t> parse_camera_dial_function(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_camera_button_function_status(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint32_t> parse_camera_lever_function(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_zoom_position(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint16_t> parse_movie_recording_media(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_recorder_main_status(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_recording_state(unsigned char const* buf, std::uint32_t nval);
std::vector<std::int8_t> parse_tele_wide_lever_value_capability(unsigned char const* buf, std::uint32_t nval);
std::vector<std::uint8_t> parse_debugmode(unsigned char const* buf, std::uint32_t nval);

text format_f_number(std::uint16_t f_number);
text format_iso_sensitivity(std::uint32_t iso);
text format_shutter_speed(std::uint32_t shutter_speed);
text format_extended_shutter_speed(std::uint64_t extended_shutter_speed);
text format_position_key_setting(std::uint16_t position_key_setting);
text format_exposure_program_mode(std::uint32_t exposure_program_mode);
text format_still_capture_mode(std::uint32_t still_capture_mode);
text format_focus_mode(std::uint16_t focus_mode);
text format_focus_area(std::uint16_t focus_area);
text format_live_view_image_quality(std::uint16_t focus_mode);
text format_media_slotx_format_enable_status(std::uint8_t media_slotx_format_enable_status);
text format_white_balance(std::uint16_t value);
text format_customwb_capture_standby(std::uint16_t customwb_capture_standby);
text format_customwb_capture_standby_cancel(std::uint16_t customwb_capture_standby_cancel);
text format_customwb_capture_operation(std::uint16_t customwb_capture_operation);
text format_customwb_capture_execution_state(std::uint16_t customwb_capture_execution_state);
text format_zoom_operation_status(std::uint8_t zoom_operation_status);
text format_zoom_setting_type(std::uint8_t zoom_setting_type);
text format_zoom_types_status(std::uint8_t zoom_types_status);
text format_remocon_zoom_speed_type(std::uint8_t remocon_zoom_speed_type);
text format_aps_c_or_full_switching_setting(std::uint8_t aps_c_or_full_switching);
text format_aps_c_or_full_switching_enable_status(std::uint8_t aps_c_or_full_switching_enable_status);
text format_camera_setting_save_operation(std::uint16_t camera_setting_save_operation);
text format_camera_setting_read_operation(std::uint16_t camera_setting_save_operation);
text format_camera_setting_save_read_state(std::uint8_t customwb_capture_execution_state);
text format_camera_setting_reset_enable_status(std::uint8_t camera_setting_reset_enable_status);
text format_gain_base_sensitivity(std::uint8_t gain_base);
text format_gain_base_iso_sensitivity(std::uint8_t gain_base_iso);
text format_monitor_lut_setting(std::uint8_t body_key_lock);
text format_baselook_value(std::uint8_t baselook_value);
text format_playback_media(std::uint8_t playback_media);
text format_shutter_mode_setting(std::uint8_t shutter_mode_setting);
text format_iris_mode_setting(std::uint8_t iris_mode_setting);
text format_exposure_control_type(std::uint8_t exposure_control_type);
text format_gain_control_setting(std::uint8_t gain_control_setting);
text format_recording_setting(std::uint16_t recording_setting);
text format_dispmode(std::uint8_t dispmode);
text format_movie_rec_button_toggle_enable_status(std::uint8_t movie_rec_button_toggle_enable_status);
text format_shutter_speed_value(std::uint64_t shutter_speed_value);
text format_media_slotx_status(std::uint8_t media_slotx_status);
text format_image_stabilization_steady_shot(std::uint8_t image_stabilization_steady_shot);
text format_movie_image_stabilization_steady_shot(std::uint8_t movie_image_stabilization_steady_shot);
text format_silent_mode(std::uint8_t silent_mode);
text format_silent_mode_aperture_drive_in_af(std::uint8_t aperture_drive_in_af);
text format_silent_mode_shutter_when_power_off(std::uint8_t when_power_off);
text format_silent_mode_auto_pixel_mapping(std::uint8_t auto_pixel_mapping);
text format_shutter_type(std::uint8_t shutter_type);
text format_movie_shooting_mode(std::uint16_t movie_shooting_mode);
text format_focus_driving_status(std::uint8_t focus_driving_status);
text format_media_slotx_rec_available(std::uint8_t rec_available);
text format_customwb_size_setting(std::uint8_t customwb_size_setting);
text format_time_shift_shooting(std::uint8_t time_shift_shooting);
text format_monitoring_is_delivery(std::uint8_t sts);
text format_camera_button_function_status(std::uint8_t status);
text format_camera_button_function(std::uint32_t camera_button_function);
text format_camera_dial_function(std::uint32_t camera_dial_function);
text format_camera_lever_function(std::uint32_t camera_lever_function);
text format_zoom_driving_status(std::uint8_t zoom_driving_status);
text format_contents_info_content_type(std::uint32_t content_type);
text format_contents_info_group_type(std::uint32_t group_type);
text format_contents_info_rating(std::int32_t rating);
text format_contents_file_file_format(std::uint32_t file_format);
text format_contents_file_video_codec(std::uint32_t video_codec);
text format_contents_file_gop_structure(std::uint32_t gop_structure);
text format_contents_file_aspect_ratio(std::uint32_t aspect_ratio);
text format_contents_file_color_format(std::uint32_t color_format);
text format_contents_file_scan_type(std::uint32_t scan_type);
text format_contents_file_profile_indication(std::uint32_t profile_indication);
text format_contents_file_rdd18meta_capture_gamma_equation(std::uint32_t rdd18meta_capture_gamma_equation);
text format_contents_file_rdd18meta_color_primaries(std::uint32_t rdd18meta_color_primaries);
text format_contents_file_rdd18meta_coding_equations(std::uint32_t rdd18meta_coding_equations);
text format_contents_file_audio_codec(std::uint32_t audio_codec);
text format_contents_file_number_of_channels(std::uint32_t number_of_channels);
text format_debug_mode(std::uint8_t debug_mode);

} // namespace cli

#endif // !PROPERTYVALUETABLE_H
