//
// Licensed under the terms in License.txt
//
// Copyright 2010 Allen Ding. All rights reserved.
//

#import "KiwiConfiguration.h"
#import "KWMatcher.h"

@interface KWBeEmptyMatcher : KWMatcher {
@private
    NSUInteger count;
}

#pragma mark -
#pragma mark Configuring Matchers

- (void)beEmpty;

@end
