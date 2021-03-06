/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSharingCollectionViewItemSublayout : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _badgesContainerFrame;
    unsigned int  _badgesCorner;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    }  _badgesOffset;
    float  _bottomBadgeInset;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _floatingBadgesContainerFrame;
    NSIndexPath * _indexPath;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _itemFrame;
    struct CGPoint { 
        float x; 
        float y; 
    }  _optionBadgeCenter;
    UICollectionViewLayoutAttributes * _optionBadgeLayoutAttributes;
    struct CGPoint { 
        float x; 
        float y; 
    }  _selectionBadgeCenter;
    UICollectionViewLayoutAttributes * _selectionBadgeLayoutAttributes;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _visibleItemFrame;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } badgesContainerFrame;
@property (nonatomic) unsigned int badgesCorner;
@property (nonatomic) struct UIOffset { float x1; float x2; } badgesOffset;
@property (nonatomic) float bottomBadgeInset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } floatingBadgesContainerFrame;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } itemFrame;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *optionBadgeLayoutAttributes;
@property (nonatomic) struct CGSize { float x1; float x2; } optionBadgeSize;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *selectionBadgeLayoutAttributes;
@property (nonatomic) struct CGSize { float x1; float x2; } selectionBadgeSize;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleItemFrame;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })badgesContainerFrame;
- (unsigned int)badgesCorner;
- (struct UIOffset { float x1; float x2; })badgesOffset;
- (float)bottomBadgeInset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })floatingBadgesContainerFrame;
- (id)indexPath;
- (id)initWithIndexPath:(id)arg1 itemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })itemFrame;
- (id)optionBadgeLayoutAttributes;
- (struct CGSize { float x1; float x2; })optionBadgeSize;
- (void)prepareSublayout;
- (id)selectionBadgeLayoutAttributes;
- (struct CGSize { float x1; float x2; })selectionBadgeSize;
- (void)setBadgesCorner:(unsigned int)arg1;
- (void)setBadgesOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setBottomBadgeInset:(float)arg1;
- (void)setFloatingOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setOptionBadgeSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSelectionBadgeSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setVisibleItemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleItemFrame;

@end
