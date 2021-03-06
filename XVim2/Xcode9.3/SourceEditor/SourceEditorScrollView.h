//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSScroller;
@protocol SourceEditorScrollViewDelegate;

@interface SourceEditorScrollView : NSScrollView
{
    BOOL _floatingSubviewsShouldMaskToBounds;
    BOOL _updatingAutoContentInsets;
    id <SourceEditorScrollViewDelegate> _sourceEditorScrollViewDelegate;
    NSScroller *_observedVerticalScroller;
    struct NSEdgeInsets _additionalContentInsets;
}

@property __weak NSScroller *observedVerticalScroller; // @synthesize observedVerticalScroller=_observedVerticalScroller;
@property BOOL updatingAutoContentInsets; // @synthesize updatingAutoContentInsets=_updatingAutoContentInsets;
@property struct NSEdgeInsets additionalContentInsets; // @synthesize additionalContentInsets=_additionalContentInsets;
@property __weak id <SourceEditorScrollViewDelegate> sourceEditorScrollViewDelegate; // @synthesize sourceEditorScrollViewDelegate=_sourceEditorScrollViewDelegate;
//- (void).cxx_destruct;
- (void)setFloatingSubviewsShouldMaskToBounds:(BOOL)arg1;
- (id)floatingSubviewsForAxis:(long long)arg1;
- (void)addFloatingSubview:(id)arg1 forAxis:(long long)arg2 positioned:(long long)arg3 relativeTo:(id)arg4;
- (id)_floatingSubviewsContainerForAxis:(long long)arg1;
- (id)floatingSubviewsContainerForAxis:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObservingVerticalScroller:(id)arg1;
- (void)stopObservingVerticalScroller;
- (BOOL)isObservingVerticalScroller;
- (void)setVerticalScroller:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_doScroller:(id)arg1 hitPart:(long long)arg2 multiplier:(double)arg3;
- (void)_updateAutomaticContentInsets;
- (void)updateAutomaticContentInsets;
- (void)dealloc;

@end

