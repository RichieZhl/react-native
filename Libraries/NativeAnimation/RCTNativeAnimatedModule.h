/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import "RCTBridgeModule.h"
#import "RCTEventDispatcher.h"
#import "RCTEventEmitter.h"
#import "RCTSurfacePresenterStub.h"
#import "RCTUIManager.h"
#import "RCTUIManagerObserverCoordinator.h"
#import "RCTUIManagerUtils.h"

#import "RCTValueAnimatedNode.h"

@interface RCTNativeAnimatedModule : RCTEventEmitter <RCTBridgeModule, RCTValueAnimatedNodeObserver, RCTEventDispatcherObserver, RCTUIManagerObserver, RCTSurfacePresenterObserver>

@end
