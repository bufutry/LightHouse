

#import <UIKit/UIKit.h>

@interface UIView (Extension)
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGPoint origin;

@property (nonatomic, assign ,readonly) CGFloat MaxX;
@property (nonatomic, assign ,readonly) CGFloat MaxY;
@property (nonatomic, assign ,readonly) CGFloat MinX;
@property (nonatomic, assign ,readonly) CGFloat MinY;

- (void)removeAllSubView;
- (void)layoutWithVFLH:(NSString*)h VFLV:(NSString *)v dicView:(NSDictionary*)dic;
@end
