#pragma once
#include <SFML/Graphics.hpp>
#include "DEXGameObject.h"
#include "DEXTimingSection.h"
#include <vector>
#include <fstream>

class DEXMap : public sf::Drawable, sf::Transformable
{
	DEXMap(std::string map_filename);

private:
	// [GENERAL]
	std::string audio_filename;
	int audio_silence_intro_time;
	// audio hash skip
	int preview_time;
	int countdown;
	std::string sample_set_name;
	float /*double?*/ stack_leniency;
	// mode - only one
	bool letterbox_in_breaks;
	//bool story_fire_in_front;
	bool use_skin_sprites;
	//bool always_show_playfield;
	std::string overlay_position, skin_prefrence;
	bool epilepsy_warning;
	int countdown_offset;
	//bool special_style// - osu!mania
	bool widescreen_storyboard;
	bool sample_match_playback_rate;

	// [METADATA]
	std::string title, title_unicode;
	std::string artist, artist_unicode;
	std::string creator, version, sourece;
	std::vector<std::string> tags;
	int dexmap_id, dexmap_set_id;

	// [DIFFICULTY]  maybe double?
	float hp_drain_rate;	// 0-10
	float circle_size;	// 0-10
	float overall_difficulty;	// 0-10
	float approach_rate;	// 0-10
	float slider_multiplier;
	float silder_tick_rate;

	// [EVENTS] - TODO

	// [TIMING POINTS]
	DEXTimingSection current_timing_section;
	std::vector<DEXTimingSection> timing_points;

	// [COLOURS]
	unsigned color_iter;
	std::vector<sf::Color> colors;

	// [HIT OBJECTS]
	std::vector <DEXGameObject> game_objects;
};

