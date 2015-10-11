//
//  CAudioMIDI.h
//  CAudioMIDI
//
//  Created by CHARLES GILLINGHAM on 9/20/15.
//  Copyright (c) 2015 CharlesGillingham. All rights reserved.
//

#import <Cocoa/Cocoa.h>

//! Project version number for CAudioMIDI.
FOUNDATION_EXPORT double CAudioMIDIVersionNumber;

//! Project version string for CAudioMIDI.
FOUNDATION_EXPORT const unsigned char CAudioMIDIVersionString[];

//--------------------------------------------------------------------------------------
#pragma mark                From CMusic
//--------------------------------------------------------------------------------------
#import <CAudioMIDI/CMusicNote.h>
#import <CAudioMIDI/CMusicHarmony.h>
#import <CAudioMIDI/CMusicHarmony+Scales.h>
#import <CAudioMIDI/CMusicHarmony+Chords.h>
#import <CAudioMIDI/CMusicHarmony+Convenience.h>

// Limit the types of harmony to the most common scales and chords in Western music.
#import <CAudioMIDI/CMusicWesternHarmony.h>

// User interface for harmony
#import <CAudioMIDI/CMusicHarmony+Description.h>
#import <CAudioMIDI/CMusicWesternHarmony+Description.h>
#import <CAudioMIDI/CMusicWesternHarmony+UI.h>

// Maintain a set of time lines.
#import <CAudioMIDI/CTime.h>
#import <CAudioMIDI/CTimeHierarchy.h>
#import <CAudioMIDI/CTimeMap.h>
#import <CAudioMIDI/CTimeMap+TimeString.h>

// A time map that captures all the time lines used in music.
#import <CAudioMIDI/CMusicTempoMeter.h>

//--------------------------------------------------------------------------------------
#pragma mark                From CMIDI
//--------------------------------------------------------------------------------------

// Representing time
#import <CAudioMIDI/CMIDI Time.h>

// MIDI messages
#import <CAudioMIDI/CMIDIMessage.h>

// Convenience methods for accessing and constructing messages
#import <CAudioMIDI/CMIDIMessage+ChannelMessage.h>
#import <CAudioMIDI/CMIDIMessage+SystemMessage.h>
#import <CAudioMIDI/CMIDIMessage+MetaMessage.h>
#import <CAudioMIDI/CMIDIMessage+Description.h>

// MIDI Files
#import <CAudioMIDI/CMIDIFile.h>
#import <CAudioMIDI/CMIDIFile+Description.h>

// Precision timing tools
#import <CAudioMIDI/CMIDIClock.h>
#import <CAudioMIDI/CMIDIClock+TimeString.h>

// A protocol for building MIDI signal chains
#import <CAudioMIDI/CMIDIReceiver CMIDISender.h>

// MIDI sequencer
#import <CAudioMIDI/CMIDISequence.h>
#import <CAudioMIDI/CMIDISequence+FileIO.h>

// Communicating with external devices and applications
#import <CAudioMIDI/CMIDIEndpoint.h>

// Use CMusic to help format time strings
#import <CAudioMIDI/CMIDITempoMeter.h>
#import <CAudioMIDI/CMIDIMessage+DescriptionWithTime.h>
#import <CAudioMIDI/CMIDIFile+DescriptionWithTime.h>

// Tools for building and debugging demo applications
#import <CAudioMIDI/CMIDIMonitor.h>
#import <CAudioMIDI/CMIDITransport.h>

// Some useful simple MIDI processors
#import <CAudioMIDI/CMIDISplitter.h>

//--------------------------------------------------------------------------------------
#pragma mark                From CAudioUnits
//--------------------------------------------------------------------------------------

#import <CAudioMIDI/CAudioUnit.h>
#import <CAudioMIDI/CAudioUnit+UI.h>
#import <CAudioMIDI/CAUErrors.h>

// The four types of audio units supported by this interface.
#import  <CAudioMIDI/CAudioGenerator.h>
#import  <CAudioMIDI/CAudioInstrument.h>
#import  <CAudioMIDI/CAudioEffect.h>
#import  <CAudioMIDI/CAudioOutput.h>

// The remaining headers should not be needed by a simple application.

// If you need multiple signal chains in the same application, you need to use a separate CAUGraph for each signal chain. Create the graph first, and then create each unit with it. Units may only be connected to other units from the same graph.
#import <CAudioMIDI/CAUGraph.h>

// A few basic examples, useful for demos and debugging.
#import <CAudioMIDI/CAudioUnit+Examples.h>

//--------------------------------------------------------------------------------------
#pragma mark                CAudioMIDI
//--------------------------------------------------------------------------------------

#import <CAudioMIDI/CAudioInstrument+CMIDI.h>
