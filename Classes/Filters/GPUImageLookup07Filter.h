//
//  GPUImageLookup07.h
//  DLCImagePickerController
//
//  Created by Dmitri Cherniak on 8/19/12.
//  Copyright (c) 2012 Backspaces Inc. All rights reserved.
//

#import "GPUImageFilterGroup.h"

@class GPUImagePicture;


@interface GPUImageLookup07Filter : GPUImageFilterGroup
{
    GPUImagePicture *lookupImageSource;
}

@end
