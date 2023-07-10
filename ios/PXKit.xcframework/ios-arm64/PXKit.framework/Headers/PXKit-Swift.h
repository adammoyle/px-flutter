#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8.1 (swiftlang-5.8.0.124.5 clang-1403.0.22.11.100)
#ifndef PXKIT_SWIFT_H
#define PXKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PXKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;
@class NSNumber;

SWIFT_CLASS_NAMED("Account")
@interface PXAccount : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable trackedSubscriptionId;
@property (nonatomic, copy) NSString * _Nullable industry;
@property (nonatomic, strong) NSNumber * _Nullable numberOfEmployees;
@property (nonatomic, copy) NSString * _Nullable sicCode;
@property (nonatomic, copy) NSString * _Nullable website;
@property (nonatomic, copy) NSString * _Nullable naicsCode;
@property (nonatomic, copy) NSString * _Nullable plan;
@property (nonatomic, copy) NSString * _Nullable countryCode;
@property (nonatomic, copy) NSString * _Nullable countryName;
@property (nonatomic, copy) NSString * _Nullable stateCode;
@property (nonatomic, copy) NSString * _Nullable stateName;
@property (nonatomic, copy) NSString * _Nullable city;
@property (nonatomic, copy) NSString * _Nullable street;
@property (nonatomic, copy) NSString * _Nullable continent;
@property (nonatomic, copy) NSString * _Nullable postalCode;
@property (nonatomic, copy) NSString * _Nullable regionName;
@property (nonatomic, copy) NSString * _Nullable timeZone;
@property (nonatomic, strong) NSNumber * _Nullable latitude;
@property (nonatomic, strong) NSNumber * _Nullable longitude;
@property (nonatomic, copy) NSString * _Nullable sfdcId;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable customAttributes;
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@protocol GPXCrypto;
@class PXConnection;
@class UIApplication;
@class UIWindow;

SWIFT_CLASS_NAMED("AnalyticsConfigurations")
@interface PXAnalyticsConfigurations : NSObject
/// apiKey for GPX engine
@property (nonatomic, copy) NSString * _Nonnull apiKey;
/// Encrypt and decrypt protocol which writes encrypted data to the file with your own encryption/decryption algorithm
@property (nonatomic, strong) id <GPXCrypto> _Nullable crypto;
@property (nonatomic, strong) PXConnection * _Nonnull connection;
/// flushQueue size of the events, default is 30
/// precondition:
/// must be greater than 20
@property (nonatomic) NSInteger flushQueueSize;
/// maxQueueSize size of the events, default is 1000
/// precondition:
/// must be greater than 100 and less than 2000
@property (nonatomic) NSInteger maxQueueSize;
/// dispatch time interval of the events, default 60
/// precondition:
/// must be greater than 30
@property (nonatomic) NSTimeInterval flushInterval;
/// This alows the SDK to track application life cycle events eg: <code>APP_OPENED</code>, <code>APP_BACKGROUNDED</code>, <code>APP_INSTALLED</code>, default true
@property (nonatomic) BOOL trackApplicationLifecycleEvents;
/// This automatically records all the screen’s with in the UIViewController hirarchey a <code>viewWillAppear(animated:)</code> used, default true
@property (nonatomic) BOOL recordScreenViews;
/// Reports the Uncaught exceptions and SIGNALS
/// note:
/// This will <code>kill</code> the process if it raises a SIGNAL exception
@property (nonatomic) BOOL enableCrashReporting;
@property (nonatomic, strong) UIApplication * _Nonnull application;
/// UIApplication root Window,
/// <ul>
///   <li>
///     default: <code>UIApplication.shared.windows.last</code>
///   </li>
///   <li>
///     With the current window you can enable two finger gesture to see ScreenName and ScreenClass
///   </li>
/// </ul>
@property (nonatomic, strong) UIWindow * _Nullable currentWindow;
/// This will start tracking tap events
/// <ul>
///   <li>
///     default: <code>false</code>
///   </li>
/// </ul>
@property (nonatomic) BOOL shouldTrackTapEvents;
/// This will start logging errors to server
/// <ul>
///   <li>
///     default: <code>false</code>
///   </li>
/// </ul>
@property (nonatomic) BOOL reportTrackingIssues;
/// This will disable whole SDK where no events will be created including ScreenViews, default true
@property (nonatomic) BOOL enabled;
- (nonnull instancetype)initWithApiKey:(NSString * _Nonnull)apiKey OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


enum PXHost : NSInteger;

SWIFT_CLASS_NAMED("Connection")
@interface PXConnection : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull host;
@property (nonatomic) NSTimeInterval timeoutIntervalForRequest;
@property (nonatomic) NSTimeInterval timeoutIntervalForResource;
- (nonnull instancetype)initWithCustomHost:(NSString * _Nonnull)customHost OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithHost:(enum PXHost)host OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class ScreenEvent;

SWIFT_CLASS_NAMED("EngagementCallBackModel")
@interface PXEngagementCallBackModel : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull actionText;
@property (nonatomic, readonly, copy) NSString * _Nonnull actionData;
@property (nonatomic, readonly, copy) NSString * _Nonnull actionsType;
@property (nonatomic, readonly, copy) NSString * _Nonnull engagementName;
@property (nonatomic, readonly, strong) ScreenEvent * _Nullable scope;
@property (nonatomic, readonly, copy) NSString * _Nonnull engagementId;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nonnull params;
- (NSDictionary<NSString *, id> * _Nullable)toJSON SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@protocol UIMapperConsuming;
@class PXGlobalContext;
@class PXUser;
@class WKWebView;
@class NSURL;

SWIFT_CLASS("_TtC5PXKit11GainsightPX")
@interface GainsightPX : NSObject
@property (nonatomic, weak) id <UIMapperConsuming> _Nullable uiMapperConsumer;
@property (nonatomic, strong) PXAnalyticsConfigurations * _Null_unspecified analyticsConfigurations;
@property (nonatomic, strong) PXGlobalContext * _Nullable globalContext;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) GainsightPX * _Nonnull shared;)
+ (GainsightPX * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (void)initialiseWithConfigurations:(PXAnalyticsConfigurations * _Nonnull)configurations completionBlock:(void (^ _Nullable)(NSString * _Nonnull, NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))completionBlock callback:(BOOL (^ _Nullable)(PXEngagementCallBackModel * _Nullable, NSError * _Nullable))callback;
- (void)initialiseWithConfigurations:(PXAnalyticsConfigurations * _Nonnull)configurations completionBlock:(void (^ _Nullable)(NSString * _Nonnull, NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))completionBlock;
+ (GainsightPX * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_MSG("Use GainsightPX.shared instead");
+ (void)debugLogsWithEnable:(BOOL)enable;
- (void)customWithEvent:(NSString * _Nonnull)event errorCompletionBlock:(void (^ _Nullable)(NSString * _Nonnull, NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))errorCompletionBlock;
- (void)customWithEvent:(NSString * _Nonnull)event properties:(NSDictionary<NSString *, id> * _Nullable)properties errorCompletionBlock:(void (^ _Nullable)(NSString * _Nonnull, NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))errorCompletionBlock;
- (void)screenWithTitle:(NSString * _Nonnull)title errorCompletionBlock:(void (^ _Nullable)(NSString * _Nonnull, NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))errorCompletionBlock;
- (void)screenWithTitle:(NSString * _Nonnull)title properties:(NSDictionary<NSString *, id> * _Nullable)properties errorCompletionBlock:(void (^ _Nullable)(NSString * _Nonnull, NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))errorCompletionBlock;
- (void)screenWithScreen:(ScreenEvent * _Nonnull)screen properties:(NSDictionary<NSString *, id> * _Nullable)properties errorCompletionBlock:(void (^ _Nullable)(NSString * _Nonnull, NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))errorCompletionBlock;
- (void)identifyWithUserId:(NSString * _Nonnull)userId errorCompletionBlock:(void (^ _Nullable)(NSString * _Nonnull, NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))errorCompletionBlock;
- (void)identifyWithUser:(PXUser * _Nonnull)user errorCompletionBlock:(void (^ _Nullable)(NSString * _Nonnull, NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))errorCompletionBlock;
- (void)setSupportedInterfaceOrientationsWithOrientation:(UIInterfaceOrientationMask)orientation;
- (void)startJSBridgeWithWebview:(WKWebView * _Nonnull)webview SWIFT_DEPRECATED_MSG("Use startTracking(webview:) instead.");
/// JSBridge
/// Parameter webview: WKWebView instance of a hybrid application.
/// Since: 1.7.0
/// \code
/// NSArray *filtered = [[[self view] subviews] filteredArrayUsingPredicate:[NSPredicate predicateWithBlock:^BOOL(id  _Nullable evaluatedObject, NSDictionary<NSString *,id> * _Nullable bindings) {
///    return [evaluatedObject isKindOfClass:[WKWebView class]];
/// }]];
/// WKWebView *webview = [filtered firstObject];
/// if (webview != nil) {
///     [[GainsightPX shared] startJSBridgeWithWebview:webview];
/// }
///
/// \endcode
- (void)startTrackingWithWebview:(WKWebView * _Nullable)webview;
- (void)stopTrackingWebView;
/// since:
/// 0.10.1
/// \code
///  let globalContext = GlobalContext()
/// globalContext.setString(key: "foo", value: "boo")
///  .setDate(key: "date", iso: <#isoDate#>)
///
/// GainsightPX.sharedInstance().globalContext(context: globalContext)
///
/// if globalContext?.hasKey(key: "foo" == true) {
///     globalContext?.removeKeys(keys: ["foo"])
///  }
///
/// \endcode<ul>
///   <li>
///     See: <code>GlobalContext.swift</code>
///   </li>
/// </ul>
/// \param context context object, if the context is nil it will clear the complete the data
///
- (void)globalContextWithContext:(PXGlobalContext * _Nullable)context;
- (void)flushWithErrorCompletionBlock:(void (^ _Nullable)(NSString * _Nonnull, NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))errorCompletionBlock;
+ (void)enable;
+ (void)disable;
- (void)engagementsWithEnable:(BOOL)enable;
- (void)reset;
- (void)hardReset;
+ (NSString * _Nonnull)libraryVersion SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)bridgeName SWIFT_WARN_UNUSED_RESULT;
- (void)enterEditingModeWithUrl:(NSURL * _Nonnull)url;
- (void)exitEditingMode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end







@interface GainsightPX (SWIFT_EXTENSION(PXKit))
/// Tap events
/// since:
/// 1.2
/// \param viewElements array of viewElements of tap
///
/// \param points indicate number of touches happened for a tap
///
- (void)trackTapWithViewElements:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)viewElements points:(NSInteger)points;
@end





@interface GainsightPX (SWIFT_EXTENSION(PXKit))
- (void)identifyWithUser:(PXUser * _Nonnull)user account:(PXAccount * _Nullable)account errorCompletionBlock:(void (^ _Nullable)(NSString * _Nonnull, NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))errorCompletionBlock;
@end


@class NSDate;

SWIFT_CLASS_NAMED("GlobalContext")
@interface PXGlobalContext : NSObject
- (PXGlobalContext * _Nonnull)setStringWithKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value SWIFT_WARN_UNUSED_RESULT;
- (PXGlobalContext * _Nonnull)setDoubleWithKey:(NSString * _Nonnull)key value:(double)value SWIFT_WARN_UNUSED_RESULT;
- (PXGlobalContext * _Nonnull)setBooleanWithKey:(NSString * _Nonnull)key value:(BOOL)value SWIFT_WARN_UNUSED_RESULT;
- (PXGlobalContext * _Nonnull)setDateWithKey:(NSString * _Nonnull)key value:(NSDate * _Nonnull)value SWIFT_WARN_UNUSED_RESULT;
- (PXGlobalContext * _Nonnull)setDateWithKey:(NSString * _Nonnull)key iso:(NSString * _Nonnull)iso SWIFT_WARN_UNUSED_RESULT;
- (BOOL)hasKeyWithKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (void)removeKeysWithKeys:(NSArray<NSString *> * _Nonnull)keys;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




/// Objc oriented Enum for host
typedef SWIFT_ENUM(NSInteger, PXHost, open) {
  PXHostUs = 0,
  PXHostEu = 1,
  PXHostUs2 = 2,
};


SWIFT_CLASS("_TtC5PXKit11ScreenEvent")
@interface ScreenEvent : NSObject
@property (nonatomic, copy) NSString * _Nonnull screenName;
@property (nonatomic, copy) NSString * _Nullable screenClass;
- (nonnull instancetype)initWithScreenName:(NSString * _Nonnull)screenName screenClass:(NSString * _Nullable)screenClass OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Responsible for handling all delegate callbacks for the underlying session.
SWIFT_CLASS("_TtC5PXKit15SessionDelegate")
@interface SessionDelegate : NSObject
/// Initializes the <code>SessionDelegate</code> instance.
///
/// returns:
/// The new <code>SessionDelegate</code> instance.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Returns a <code>Bool</code> indicating whether the <code>SessionDelegate</code> implements or inherits a method that can respond
/// to a specified message.
/// \param selector A selector that identifies a message.
///
///
/// returns:
/// <code>true</code> if the receiver implements or inherits a method that can respond to selector, otherwise <code>false</code>.
- (BOOL)respondsToSelector:(SEL _Nonnull)selector SWIFT_WARN_UNUSED_RESULT;
@end

@class NSURLSession;
@class NSURLSessionDownloadTask;

@interface SessionDelegate (SWIFT_EXTENSION(PXKit)) <NSURLSessionDownloadDelegate>
/// Tells the delegate that a download task has finished downloading.
/// \param session The session containing the download task that finished.
///
/// \param downloadTask The download task that finished.
///
/// \param location A file URL for the temporary file. Because the file is temporary, you must either
/// open the file for reading or move it to a permanent location in your app’s sandbox
/// container directory before returning from this delegate method.
///
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didFinishDownloadingToURL:(NSURL * _Nonnull)location;
/// Periodically informs the delegate about the download’s progress.
/// \param session The session containing the download task.
///
/// \param downloadTask The download task.
///
/// \param bytesWritten The number of bytes transferred since the last time this delegate
/// method was called.
///
/// \param totalBytesWritten The total number of bytes transferred so far.
///
/// \param totalBytesExpectedToWrite The expected length of the file, as provided by the Content-Length
/// header. If this header was not provided, the value is
/// <code>NSURLSessionTransferSizeUnknown</code>.
///
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didWriteData:(int64_t)bytesWritten totalBytesWritten:(int64_t)totalBytesWritten totalBytesExpectedToWrite:(int64_t)totalBytesExpectedToWrite;
/// Tells the delegate that the download task has resumed downloading.
/// \param session The session containing the download task that finished.
///
/// \param downloadTask The download task that resumed. See explanation in the discussion.
///
/// \param fileOffset If the file’s cache policy or last modified date prevents reuse of the
/// existing content, then this value is zero. Otherwise, this value is an
/// integer representing the number of bytes on disk that do not need to be
/// retrieved again.
///
/// \param expectedTotalBytes The expected length of the file, as provided by the Content-Length header.
/// If this header was not provided, the value is NSURLSessionTransferSizeUnknown.
///
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didResumeAtOffset:(int64_t)fileOffset expectedTotalBytes:(int64_t)expectedTotalBytes;
@end

@class NSURLSessionStreamTask;
@class NSInputStream;
@class NSOutputStream;

SWIFT_AVAILABILITY(tvos,introduced=9.0) SWIFT_AVAILABILITY(macos,introduced=10.11) SWIFT_AVAILABILITY(ios,introduced=9.0)
@interface SessionDelegate (SWIFT_EXTENSION(PXKit)) <NSURLSessionStreamDelegate>
/// Tells the delegate that the read side of the connection has been closed.
/// \param session The session.
///
/// \param streamTask The stream task.
///
- (void)URLSession:(NSURLSession * _Nonnull)session readClosedForStreamTask:(NSURLSessionStreamTask * _Nonnull)streamTask;
/// Tells the delegate that the write side of the connection has been closed.
/// \param session The session.
///
/// \param streamTask The stream task.
///
- (void)URLSession:(NSURLSession * _Nonnull)session writeClosedForStreamTask:(NSURLSessionStreamTask * _Nonnull)streamTask;
/// Tells the delegate that the system has determined that a better route to the host is available.
/// \param session The session.
///
/// \param streamTask The stream task.
///
- (void)URLSession:(NSURLSession * _Nonnull)session betterRouteDiscoveredForStreamTask:(NSURLSessionStreamTask * _Nonnull)streamTask;
/// Tells the delegate that the stream task has been completed and provides the unopened stream objects.
/// \param session The session.
///
/// \param streamTask The stream task.
///
/// \param inputStream The new input stream.
///
/// \param outputStream The new output stream.
///
- (void)URLSession:(NSURLSession * _Nonnull)session streamTask:(NSURLSessionStreamTask * _Nonnull)streamTask didBecomeInputStream:(NSInputStream * _Nonnull)inputStream outputStream:(NSOutputStream * _Nonnull)outputStream;
@end

@class NSURLSessionDataTask;
@class NSURLResponse;
@class NSData;
@class NSCachedURLResponse;

@interface SessionDelegate (SWIFT_EXTENSION(PXKit)) <NSURLSessionDataDelegate>
/// Tells the delegate that the data task received the initial reply (headers) from the server.
/// \param session The session containing the data task that received an initial reply.
///
/// \param dataTask The data task that received an initial reply.
///
/// \param response A URL response object populated with headers.
///
/// \param completionHandler A completion handler that your code calls to continue the transfer, passing a
/// constant to indicate whether the transfer should continue as a data task or
/// should become a download task.
///
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveResponse:(NSURLResponse * _Nonnull)response completionHandler:(void (^ _Nonnull)(NSURLSessionResponseDisposition))completionHandler;
/// Tells the delegate that the data task was changed to a download task.
/// \param session The session containing the task that was replaced by a download task.
///
/// \param dataTask The data task that was replaced by a download task.
///
/// \param downloadTask The new download task that replaced the data task.
///
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didBecomeDownloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask;
/// Tells the delegate that the data task has received some of the expected data.
/// \param session The session containing the data task that provided data.
///
/// \param dataTask The data task that provided data.
///
/// \param data A data object containing the transferred data.
///
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
/// Asks the delegate whether the data (or upload) task should store the response in the cache.
/// \param session The session containing the data (or upload) task.
///
/// \param dataTask The data (or upload) task.
///
/// \param proposedResponse The default caching behavior. This behavior is determined based on the current
/// caching policy and the values of certain received headers, such as the Pragma
/// and Cache-Control headers.
///
/// \param completionHandler A block that your handler must call, providing either the original proposed
/// response, a modified version of that response, or NULL to prevent caching the
/// response. If your delegate implements this method, it must call this completion
/// handler; otherwise, your app leaks memory.
///
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask willCacheResponse:(NSCachedURLResponse * _Nonnull)proposedResponse completionHandler:(void (^ _Nonnull)(NSCachedURLResponse * _Nullable))completionHandler;
@end

@class NSURLAuthenticationChallenge;
@class NSURLCredential;

@interface SessionDelegate (SWIFT_EXTENSION(PXKit)) <NSURLSessionDelegate>
/// Tells the delegate that the session has been invalidated.
/// \param session The session object that was invalidated.
///
/// \param error The error that caused invalidation, or nil if the invalidation was explicit.
///
- (void)URLSession:(NSURLSession * _Nonnull)session didBecomeInvalidWithError:(NSError * _Nullable)error;
/// Requests credentials from the delegate in response to a session-level authentication request from the
/// remote server.
/// \param session The session containing the task that requested authentication.
///
/// \param challenge An object that contains the request for authentication.
///
/// \param completionHandler A handler that your delegate method must call providing the disposition
/// and credential.
///
- (void)URLSession:(NSURLSession * _Nonnull)session didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
/// Tells the delegate that all messages enqueued for a session have been delivered.
/// \param session The session that no longer has any outstanding requests.
///
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession * _Nonnull)session;
@end

@class NSURLSessionTask;
@class NSHTTPURLResponse;
@class NSURLRequest;
@class NSURLSessionTaskMetrics;

@interface SessionDelegate (SWIFT_EXTENSION(PXKit)) <NSURLSessionTaskDelegate>
/// Tells the delegate that the remote server requested an HTTP redirect.
/// \param session The session containing the task whose request resulted in a redirect.
///
/// \param task The task whose request resulted in a redirect.
///
/// \param response An object containing the server’s response to the original request.
///
/// \param request A URL request object filled out with the new location.
///
/// \param completionHandler A closure that your handler should call with either the value of the request
/// parameter, a modified URL request object, or NULL to refuse the redirect and
/// return the body of the redirect response.
///
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task willPerformHTTPRedirection:(NSHTTPURLResponse * _Nonnull)response newRequest:(NSURLRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(NSURLRequest * _Nullable))completionHandler;
/// Requests credentials from the delegate in response to an authentication request from the remote server.
/// \param session The session containing the task whose request requires authentication.
///
/// \param task The task whose request requires authentication.
///
/// \param challenge An object that contains the request for authentication.
///
/// \param completionHandler A handler that your delegate method must call providing the disposition
/// and credential.
///
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
/// Tells the delegate when a task requires a new request body stream to send to the remote server.
/// \param session The session containing the task that needs a new body stream.
///
/// \param task The task that needs a new body stream.
///
/// \param completionHandler A completion handler that your delegate method should call with the new body stream.
///
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task needNewBodyStream:(void (^ _Nonnull)(NSInputStream * _Nullable))completionHandler;
/// Periodically informs the delegate of the progress of sending body content to the server.
/// \param session The session containing the data task.
///
/// \param task The data task.
///
/// \param bytesSent The number of bytes sent since the last time this delegate method was called.
///
/// \param totalBytesSent The total number of bytes sent so far.
///
/// \param totalBytesExpectedToSend The expected length of the body data.
///
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
/// Tells the delegate that the session finished collecting metrics for the task.
/// \param session The session collecting the metrics.
///
/// \param task The task whose metrics have been collected.
///
/// \param metrics The collected metrics.
///
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didFinishCollectingMetrics:(NSURLSessionTaskMetrics * _Nonnull)metrics SWIFT_AVAILABILITY(tvos,introduced=10.0) SWIFT_AVAILABILITY(macos,introduced=10.12) SWIFT_AVAILABILITY(ios,introduced=10.0);
/// Tells the delegate that the task finished transferring data.
/// \param session The session containing the task whose request finished transferring data.
///
/// \param task The task whose request finished transferring data.
///
/// \param error If an error occurred, an error object indicating how the transfer failed, otherwise nil.
///
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
@end


/// The task delegate is responsible for handling all delegate callbacks for the underlying task as well as
/// executing all operations attached to the serial operation queue upon task completion.
SWIFT_CLASS("_TtC5PXKit12TaskDelegate")
@interface TaskDelegate : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_PROTOCOL("_TtP5PXKit12TreeBuilding_")
@protocol TreeBuilding
- (NSDictionary<NSString *, id> * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
@end



















SWIFT_PROTOCOL("_TtP5PXKit17UIMapperConsuming_")
@protocol UIMapperConsuming
- (void)getViewPositionWithBuilder:(id <TreeBuilding> _Nonnull)builder completion:(void (^ _Nonnull)(NSArray<NSValue *> * _Nullable))completion;
- (void)getViewAtPositionWithScreenPosition:(CGPoint)screenPosition completion:(void (^ _Nonnull)(id <TreeBuilding> _Nullable))completion;
- (void)createDOMStructureWithCompletion:(void (^ _Nonnull)(id <TreeBuilding> _Nullable))completion;
- (NSString * _Nonnull)getFilterClass SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) BOOL isCrossPlatform;
@end














SWIFT_CLASS_NAMED("User")
@interface PXUser : NSObject
@property (nonatomic, copy) NSString * _Nonnull ide;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSString * _Nullable userHash;
@property (nonatomic, copy) NSString * _Nullable gender;
@property (nonatomic, copy) NSString * _Nullable lastName;
@property (nonatomic, copy) NSString * _Nullable firstName;
/// This can have ISO format, Epoch timestamp or a <code>Date</code> format
@property (nonatomic) id _Nullable signUpDate;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable role;
@property (nonatomic, copy) NSString * _Nullable subscriptionId;
@property (nonatomic, copy) NSString * _Nullable phone;
@property (nonatomic, copy) NSString * _Nullable countryCode;
@property (nonatomic, copy) NSString * _Nullable countryName;
@property (nonatomic, copy) NSString * _Nullable stateCode;
@property (nonatomic, copy) NSString * _Nullable stateName;
@property (nonatomic, copy) NSString * _Nullable city;
@property (nonatomic, copy) NSString * _Nullable street;
@property (nonatomic, copy) NSString * _Nullable continent;
@property (nonatomic, copy) NSString * _Nullable postalCode;
@property (nonatomic, copy) NSString * _Nullable regionName;
@property (nonatomic, copy) NSString * _Nullable timeZone;
@property (nonatomic, strong) NSNumber * _Nullable latitude;
@property (nonatomic, strong) NSNumber * _Nullable longitude;
@property (nonatomic, copy) NSString * _Nullable organization;
@property (nonatomic, copy) NSString * _Nullable organizationEmployees;
@property (nonatomic, copy) NSString * _Nullable organizationRevenue;
@property (nonatomic, copy) NSString * _Nullable organizationIndustry;
@property (nonatomic, copy) NSString * _Nullable organizationSicCode;
@property (nonatomic, strong) NSNumber * _Nullable organizationDuns;
@property (nonatomic, copy) NSString * _Nullable accountId;
/// This can have ISO format, Epoch timestamp or a <code>Date</code> format
@property (nonatomic) id _Nullable firstVisitDate;
@property (nonatomic, strong) NSNumber * _Nullable score;
@property (nonatomic, copy) NSString * _Nullable sfdcContactId;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable customAttributes;
- (nonnull instancetype)initWithUserId:(NSString * _Nonnull)userId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
