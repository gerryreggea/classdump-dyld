/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLTexture.h>

@interface VGLUncompressedTexture : VGLTexture {

	CGImageRef _image;
	char* _imageData;
	unsigned _pixelFormat;
	unsigned _colorFormat;
	CGImageBlockSetRef _blockSetRef;
	BOOL _fastPath;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(BOOL)decodeTexture;
-(BOOL)loadTexture;
-(BOOL)isFlipped;
-(BRectImp<float>)textureCoordinateRect:(CGRect)arg1 ;
@end
