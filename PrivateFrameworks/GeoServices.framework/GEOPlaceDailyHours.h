/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDailyHours : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _dayOfWeekRange;
    NSArray * _openIntervals;
}

@property (readonly) struct _NSRange { unsigned int x1; unsigned int x2; } dayOfWeekRange;
@property (readonly) NSArray *openIntervals;

+ (id)dailyHours:(id)arg1 forDays:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

- (struct _NSRange { unsigned int x1; unsigned int x2; })dayOfWeekRange;
- (void)dealloc;
- (id)description;
- (id)openIntervals;

@end
