//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageAverageColor.h"

@class GLProgram;

@interface GPUImageLuminosity : GPUImageAverageColor
{
    GLProgram *secondFilterProgram;	// 264 = 0x108
    int secondFilterPositionAttribute;	// 272 = 0x110
    int secondFilterTextureCoordinateAttribute;	// 276 = 0x114
    int secondFilterInputTextureUniform;	// 280 = 0x118
    int secondFilterInputTextureUniform2;	// 284 = 0x11c
    int secondFilterTexelWidthUniform;	// 288 = 0x120
    int secondFilterTexelHeightUniform;	// 292 = 0x124
    CDUnknownBlockType _luminosityProcessingFinishedBlock;	// 296 = 0x128
}

@property(copy, nonatomic) CDUnknownBlockType luminosityProcessingFinishedBlock; // @synthesize luminosityProcessingFinishedBlock=_luminosityProcessingFinishedBlock;
- (void).cxx_destruct;
- (void)extractLuminosityAtFrameTime:(CDStruct_1b6d18a9)arg1;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2 sourceTexture:(unsigned int)arg3;
- (void)initializeSecondaryAttributes;
- (id)init;

@end
