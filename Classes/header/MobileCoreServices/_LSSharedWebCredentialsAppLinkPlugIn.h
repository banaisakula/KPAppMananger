/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn {
    NSString * _SWCServiceName;
    bool  _requiresApproval;
    bool  _usesDetailsDictionary;
}

@property (copy) NSString *SWCServiceName;
@property bool requiresApproval;
@property bool usesDetailsDictionary;

- (id)SWCServiceName;
- (bool)appHasApproval:(id)arg1;
- (id)callingBundleIdentifier;
- (void)dealloc;
- (void)getAppLinkWithCompletionHandler:(id /* block */)arg1;
- (bool)getApplicationProxy:(id*)arg1 forSWCResults:(id)arg2;
- (id)init;
- (bool)requiresApproval;
- (void)setRequiresApproval:(bool)arg1;
- (void)setSWCServiceName:(id)arg1;
- (void)setUsesDetailsDictionary:(bool)arg1;
- (bool)usesDetailsDictionary;

@end
