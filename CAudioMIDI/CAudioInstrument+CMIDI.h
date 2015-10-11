//
//  CAudioInstrument+CMIDI.h
//  CAudioMIDI
//
//  Created by CHARLES GILLINGHAM on 9/20/15.
//  Copyright (c) 2015 CharlesGillingham. All rights reserved.
//

#import "CAudioInstrument.h"
#import "CMIDIReceiver CMIDISender.h"

@interface CAudioInstrument (CMIDI) <CMIDIReceiver>
- (void) respondToMIDI:(CMIDIMessage *)message;
@end
