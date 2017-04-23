/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUStatusBarManager : NSObject {
    NSTimer * _callDurationUpdateTimer;
    NSString * _currentAbbreviatedStatusBarString;
    NSString * _currentStatusBarString;
//    <TUStatusBarManagerDelegate> * _delegate;
}

@property (nonatomic, retain) NSTimer *callDurationUpdateTimer;
@property (nonatomic, retain) NSString *currentAbbreviatedStatusBarString;
@property (nonatomic, retain) NSString *currentStatusBarString;
//@property (nonatomic) <TUStatusBarManagerDelegate> *delegate;
@property (nonatomic, readonly, retain) TUCall *displayedCall;

//- (void).cxx_destruct;
- (id)callDurationUpdateTimer;
- (void)clearStatusBarInCallState;
- (id)currentAbbreviatedStatusBarString;
- (id)currentStatusBarString;
- (void)dealloc;
- (id)delegate;
- (id)displayedCall;
- (void)emergencyCallBackModeChangedNotification;
- (BOOL)inCallServiceWantsSuppressionOfInCallStatusBar;
- (id)init;
- (void)setCallDurationUpdateTimer:(id)arg1;
- (void)setCurrentAbbreviatedStatusBarString:(id)arg1;
- (void)setCurrentStatusBarString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStatusBarStyleOverridesForCall:(id)arg1;
- (BOOL)shouldSetStatusBarOverridesForCall:(id)arg1;
- (void)startListeningForNotifications;
- (id)statusBarPreambleForCall:(id)arg1;
- (void)updateStatusBarCallDuration;
- (void)updateStatusBarDurationForCall:(id)arg1;
- (void)updateStatusBarState;
- (void)updateStatusBarStateForCall:(id)arg1;

@end
