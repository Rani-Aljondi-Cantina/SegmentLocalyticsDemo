#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "SEGLocalyticsIntegration.h"
#import "SEGLocalyticsIntegrationFactory.h"

FOUNDATION_EXPORT double Segment_LocalyticsVersionNumber;
FOUNDATION_EXPORT const unsigned char Segment_LocalyticsVersionString[];

