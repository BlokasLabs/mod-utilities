/*
  LV2 Fifths Example Plugin
  Copyright 2014 David Robillard <d@drobilla.net>

  Permission to use, copy, modify, and/or distribute this software for any
  purpose with or without fee is hereby granted, provided that the above
  copyright notice and this permission notice appear in all copies.

  THIS SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
  WITH RRD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
  ACTION OF CONTRACT, NIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/

#ifndef NOTE2MIDI_URIS_H
#define NOTE2MIDI_URIS_H

#include </usr/local/lib/lv2/log.lv2/log.h>
#include </usr/local/lib/lv2/midi.lv2/midi.h>
#include </usr/local/lib/lv2/state.lv2/state.h>
  
#define NOTE2MIDI_URI "http://portalmod.com/plugins/MOD/note2midi"
#define NOTE2MIDI__sample      NOTE2MIDI_URI "#sample"
#define NOTE2MIDI__applySample NOTE2MIDI_URI "#applySample"
#define NOTE2MIDI__freeSample  NOTE2MIDI_URI "#freeSample"

typedef struct {
	LV2_URID atom_Blank;
	LV2_URID atom_Path;
	LV2_URID atom_Resource;
	LV2_URID atom_Sequence;
	LV2_URID atom_URID;
	LV2_URID atom_eventTransfer;
	LV2_URID applySample;
	LV2_URID sample;
	LV2_URID freeSample;
	LV2_URID midi_Event;
	LV2_URID patch_Set;
	LV2_URID patch_property;
	LV2_URID patch_value;
} Note2midiURIs;

static inline void
map_note2midi_uris(LV2_URID_Map* map, Note2midiURIs* uris)
{
	uris->atom_Blank         = map->map(map->handle, LV2_ATOM__Blank);
	uris->atom_Path          = map->map(map->handle, LV2_ATOM__Path);
	uris->atom_Resource      = map->map(map->handle, LV2_ATOM__Resource);
	uris->atom_Sequence      = map->map(map->handle, LV2_ATOM__Sequence);
	uris->atom_URID          = map->map(map->handle, LV2_ATOM__URID);
	uris->atom_eventTransfer = map->map(map->handle, LV2_ATOM__eventTransfer);
	uris->applySample     = map->map(map->handle, NOTE2MIDI__applySample);
	uris->freeSample      = map->map(map->handle, NOTE2MIDI__freeSample);
	uris->sample          = map->map(map->handle, NOTE2MIDI__sample);
	uris->midi_Event         = map->map(map->handle, LV2_MIDI__MidiEvent);
	uris->patch_Set          = map->map(map->handle, LV2_PATCH__Set);
	uris->patch_property     = map->map(map->handle, LV2_PATCH__property);
	uris->patch_value        = map->map(map->handle, LV2_PATCH__value);
}

#endif  /* NOTE2MIDI_URIS_H */