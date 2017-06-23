// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import Foundation;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC9Instamojo4Card")
@interface Card : NSObject
@property (nonatomic, copy) NSString * _Nonnull cardHolderName;
@property (nonatomic, copy) NSString * _Nonnull cardNumber;
@property (nonatomic, copy) NSString * _Nonnull date;
@property (nonatomic, copy) NSString * _Nonnull cvv;
@property (nonatomic) BOOL savedCard;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCardHolderName:(NSString * _Nonnull)cardHolderName cardNumber:(NSString * _Nonnull)cardNumber date:(NSString * _Nonnull)date cvv:(NSString * _Nonnull)cvv savedCard:(BOOL)savedCard OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getExpiryMonth SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getExpiryYear SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isValidCard SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isValidCardNumber SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isValidCardHolderName SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isValidDate SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isValidCVV SWIFT_WARN_UNUSED_RESULT;
@end

@class BrowserParams;

SWIFT_PROTOCOL("_TtP9Instamojo21JuspayRequestCallBack_")
@protocol JuspayRequestCallBack
- (void)onFinishWithParams:(BrowserParams * _Nonnull)params error:(NSString * _Nonnull)error;
@end

@class UIButton;
@class UITextField;
@class UIImageView;
@class MonthYearPickerView;
@class UILabel;
@class UIView;
@class Order;
@class Spinner;
@class UIBarButtonItem;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC9Instamojo12CardFormView")
@interface CardFormView : UIViewController <UITextFieldDelegate, JuspayRequestCallBack>
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified payButton;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified cvvTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified expiryDateTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified nameTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified cardNumberTextField;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified cardImageView;
@property (nonatomic, strong) IBOutlet MonthYearPickerView * _Null_unspecified expiryPickerView;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified cardNumberErrorLable;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified cardNumberDivider;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified nameDivider;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified nameErrorLable;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified expiryDateDivider;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified expiryDateErrorLable;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified cvvDivider;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified cvvErrorLable;
@property (nonatomic, strong) Order * _Null_unspecified order;
@property (nonatomic) NSInteger cardType;
@property (nonatomic) float amountToBePayed;
@property (nonatomic, strong) Spinner * _Null_unspecified spinner;
@property (nonatomic, strong) UITextField * _Null_unspecified textField;
@property (nonatomic) BOOL invalidEntries;
- (void)viewDidLoad;
- (void)doneButton_ClickedWithSender:(UIBarButtonItem * _Nonnull)sender;
- (void)prepareCheckOut;
- (void)checkOutCardWithCard:(Card * _Nonnull)card;
- (void)validateEntries;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
- (void)initUI SWIFT_METHOD_FAMILY(none);
- (BOOL)cardNumberDidChangeWithRange:(NSRange)range SWIFT_WARN_UNUSED_RESULT;
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
- (void)onFinishWithParams:(BrowserParams * _Nonnull)params error:(NSString * _Nonnull)error;
- (IBAction)checkout:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9Instamojo11CardOptions")
@interface CardOptions : NSObject
@property (nonatomic, copy) NSString * _Nonnull orderID;
@property (nonatomic, copy) NSString * _Nonnull url;
@property (nonatomic, copy) NSString * _Nonnull merchantID;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithOrderID:(NSString * _Nonnull)orderID url:(NSString * _Nonnull)url merchantID:(NSString * _Nonnull)merchantID OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)toString SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9Instamojo7EMIBank")
@interface EMIBank : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified bankName;
@property (nonatomic, copy) NSString * _Null_unspecified bankCode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9Instamojo10EMIOptions")
@interface EMIOptions : NSObject
@property (nonatomic, copy) NSString * _Nonnull merchantID;
@property (nonatomic, copy) NSString * _Nonnull orderID;
@property (nonatomic, copy) NSString * _Nonnull url;
@property (nonatomic, copy) NSArray<EMIBank *> * _Null_unspecified emiBanks;
@property (nonatomic, copy) NSString * _Null_unspecified selectedBankCode;
@property (nonatomic) NSInteger selectedTenure;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithMerchantID:(NSString * _Nonnull)merchantID orderID:(NSString * _Nonnull)orderID url:(NSString * _Nonnull)url emiBanks:(NSArray<EMIBank *> * _Nonnull)emiBanks OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class NSMutableArray;
@class UITableViewCell;

SWIFT_CLASS("_TtC9Instamojo14EMIOptionsView")
@interface EMIOptionsView : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified emiOptionsTableView;
@property (nonatomic, strong) NSMutableArray * _Null_unspecified values;
@property (nonatomic, strong) Order * _Null_unspecified order;
@property (nonatomic, strong) EMIBank * _Null_unspecified selectedBank;
- (void)viewDidLoad;
- (void)loadOptions;
- (double)getEMIAmountWithTotalAmount:(NSString * _Nonnull)totalAmount interest:(NSInteger)interest tenure:(NSInteger)tenure SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getFinalAmountWithAmount:(double)amount SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9Instamojo9Instamojo")
@interface Instamojo : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL instance;)
+ (BOOL)instance SWIFT_WARN_UNUSED_RESULT;
+ (void)setInstance:(BOOL)value;
/// Initizalise Instamojo
+ (void)setup;
+ (void)enableLogWithOption:(BOOL)option;
/// Sets the base url for all network calls
/// @param url String
+ (void)setBaseUrlWithUrl:(NSString * _Nonnull)url;
/// Invoke Pre Created Payment UI
/// @param order Order
+ (void)invokePaymentOptionsViewWithOrder:(Order * _Nonnull)order;
/// Invoke Payment For Custom UI
/// @param params BrowserParams
+ (void)makePaymentWithParams:(BrowserParams * _Nonnull)params;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class UIStoryboard;
@class NetBankingBanks;
@class Wallet;
@class UISearchController;

SWIFT_CLASS("_TtC9Instamojo15ListOptionsView")
@interface ListOptionsView : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchResultsUpdating>
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified banksTableView;
@property (nonatomic, copy) NSString * _Null_unspecified paymentOption;
@property (nonatomic, strong) Order * _Null_unspecified order;
@property (nonatomic, strong) UIStoryboard * _Nonnull mainStoryboard;
@property (nonatomic, copy) NSString * _Null_unspecified submissionURL;
@property (nonatomic, copy) NSArray<NetBankingBanks *> * _Null_unspecified netBanks;
@property (nonatomic, copy) NSArray<Wallet *> * _Null_unspecified wallets;
@property (nonatomic, copy) NSArray<EMIBank *> * _Null_unspecified banks;
@property (nonatomic, copy) NSArray<EMIBank *> * _Nonnull filteredEMIBanks;
@property (nonatomic, copy) NSArray<Wallet *> * _Nonnull filteredWallets;
@property (nonatomic, copy) NSArray<NetBankingBanks *> * _Nonnull filteredNetBanks;
@property (nonatomic, strong) UISearchController * _Nonnull resultSearchController;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)startJuspayBrowserWithParams:(BrowserParams * _Nonnull)params;
- (void)setOptions;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)updateSearchResultsForSearchController:(UISearchController * _Nonnull)searchController;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9Instamojo19MonthYearPickerView")
@interface MonthYearPickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource>
@property (nonatomic, copy) NSArray<NSString *> * _Null_unspecified months;
@property (nonatomic, copy) NSArray<NSNumber *> * _Null_unspecified years;
@property (nonatomic) NSInteger month;
@property (nonatomic) NSInteger year;
@property (nonatomic, copy) void (^ _Nullable onDateSelected)(NSInteger, NSInteger);
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)commonSetup;
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView * _Nonnull)pickerView SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)pickerView:(UIPickerView * _Nonnull)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)pickerView:(UIPickerView * _Nonnull)pickerView numberOfRowsInComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (void)pickerView:(UIPickerView * _Nonnull)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;
@end


@interface NSMutableURLRequest (SWIFT_EXTENSION(Instamojo))
- (void)setBodyContentWithParameters:(NSDictionary<NSString *, id> * _Nonnull)parameters;
@end


SWIFT_CLASS("_TtC9Instamojo15NetBankingBanks")
@interface NetBankingBanks : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified bankName;
@property (nonatomic, copy) NSString * _Null_unspecified bankCode;
- (nonnull instancetype)initWithBankName:(NSString * _Nonnull)bankName bankCode:(NSString * _Nonnull)bankCode OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC9Instamojo17NetBankingOptions")
@interface NetBankingOptions : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified url;
@property (nonatomic, copy) NSArray<NetBankingBanks *> * _Null_unspecified banks;
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url banks:(NSArray<NetBankingBanks *> * _Nonnull)banks OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getPostDataWithAccessToken:(NSString * _Nonnull)accessToken bankCode:(NSString * _Nonnull)bankCode SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class WalletOptions;
@class UPIOptions;
@class NSDictionary;

SWIFT_CLASS("_TtC9Instamojo5Order")
@interface Order : NSObject
@property (nonatomic, copy) NSString * _Nullable id;
@property (nonatomic, copy) NSString * _Nullable transactionID;
@property (nonatomic, copy) NSString * _Nullable buyerName;
@property (nonatomic, copy) NSString * _Nullable buyerEmail;
@property (nonatomic, copy) NSString * _Nullable buyerPhone;
@property (nonatomic, copy) NSString * _Nullable amount;
@property (nonatomic, copy) NSString * _Nullable orderDescription;
@property (nonatomic, copy) NSString * _Nullable currency;
@property (nonatomic, copy) NSString * _Nullable redirectionUrl;
@property (nonatomic, copy) NSString * _Nullable webhook;
@property (nonatomic, copy) NSString * _Nullable mode;
@property (nonatomic, copy) NSString * _Nullable authToken;
@property (nonatomic, copy) NSString * _Nullable resourceURI;
@property (nonatomic, copy) NSString * _Nullable clientID;
@property (nonatomic, strong) CardOptions * _Null_unspecified cardOptions;
@property (nonatomic, strong) NetBankingOptions * _Null_unspecified netBankingOptions;
@property (nonatomic, strong) EMIOptions * _Null_unspecified emiOptions;
@property (nonatomic, strong) WalletOptions * _Null_unspecified walletOptions;
@property (nonatomic, strong) UPIOptions * _Null_unspecified upiOptions;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAuthToken:(NSString * _Nonnull)authToken transactionID:(NSString * _Nonnull)transactionID buyerName:(NSString * _Nonnull)buyerName buyerEmail:(NSString * _Nonnull)buyerEmail buyerPhone:(NSString * _Nonnull)buyerPhone amount:(NSString * _Nonnull)amount description:(NSString * _Nonnull)description webhook:(NSString * _Nonnull)webhook OBJC_DESIGNATED_INITIALIZER;
- (BOOL)isValid SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary * _Nonnull)isValidName SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary * _Nonnull)isValidEmail SWIFT_WARN_UNUSED_RESULT;
- (BOOL)validateEmailWithEmail:(NSString * _Nonnull)email SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary * _Nonnull)isValidPhone SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary * _Nonnull)isValidAmount SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary * _Nonnull)isValidDescription SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary * _Nonnull)isValidTransactionID SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary * _Nonnull)isValidRedirectURL SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary * _Nonnull)isValidWebhook SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isValidURLWithUrlString:(NSString * _Nonnull)urlString SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP9Instamojo20OrderRequestCallBack_")
@protocol OrderRequestCallBack
- (void)onFinishWithOrder:(Order * _Nonnull)order error:(NSString * _Nonnull)error;
@end


SWIFT_CLASS("_TtC9Instamojo18PaymentOptionsView")
@interface PaymentOptionsView : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified paymentOptionsTableView;
@property (nonatomic, strong) Order * _Null_unspecified order;
@property (nonatomic, strong) NSMutableArray * _Nonnull paymentOptions;
@property (nonatomic) BOOL paymentCompleted;
@property (nonatomic, strong) UIStoryboard * _Nonnull mainStoryboard;
- (void)viewDidLoad;
- (void)backToViewController;
- (void)reloadDataBasedOnOrder;
- (void)didReceiveMemoryWarning;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)onNetBankingSelectedWithOptions:(NSString * _Nonnull)options;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillAppear:(BOOL)animated;
- (void)onCreditCardSelected;
- (void)onDebitCardSelected;
- (void)onEmiSelectedWithOptions:(NSString * _Nonnull)options;
- (void)onWalletSelectedWithOptions:(NSString * _Nonnull)options;
- (void)onUPISelected;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class JuspaySafeBrowser;

SWIFT_CLASS("_TtC9Instamojo21PaymentViewController")
@interface PaymentViewController : UIViewController
@property (nonatomic, strong) JuspaySafeBrowser * _Nonnull juspaySafeBrowser;
@property (nonatomic, strong) BrowserParams * _Null_unspecified params;
@property (nonatomic) BOOL cancelled;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (BOOL)navigationShouldPopOnBackButton SWIFT_WARN_UNUSED_RESULT;
- (void)viewWillDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UPISubmissionResponse;
@protocol UPICallBack;

SWIFT_CLASS("_TtC9Instamojo7Request")
@interface Request : NSObject
@property (nonatomic, strong) Order * _Nullable order;
@property (nonatomic, copy) NSString * _Nullable orderID;
@property (nonatomic, copy) NSString * _Nullable accessToken;
@property (nonatomic, strong) Card * _Nullable card;
@property (nonatomic, copy) NSString * _Nullable virtualPaymentAddress;
@property (nonatomic, strong) UPISubmissionResponse * _Nullable upiSubmissionResponse;
@property (nonatomic, strong) id <OrderRequestCallBack> _Nullable orderRequestCallBack;
@property (nonatomic, strong) id <JuspayRequestCallBack> _Nullable juspayRequestCallBack;
@property (nonatomic, strong) id <UPICallBack> _Nullable upiCallBack;
/// Network Request to create an order ID from Instamojo server.
/// @param order                Order model with all the mandatory fields set.
/// @param orderRequestCallBack OrderRequestCallBack interface for the Asynchronous Network Call.
- (nonnull instancetype)initWithOrder:(Order * _Nonnull)order orderRequestCallBack:(id <OrderRequestCallBack> _Nonnull)orderRequestCallBack OBJC_DESIGNATED_INITIALIZER;
/// Network Request to get order details from Juspay for JuspaySafeBrowser.
/// @param order                 Order model with all the mandatory fields set.
/// @param card                  Card with all the proper validations done.
/// @param jusPayRequestCallBack JusPayRequestCallBack for Asynchronous network call.
- (nonnull instancetype)initWithOrder:(Order * _Nonnull)order card:(Card * _Nonnull)card jusPayRequestCallBack:(id <JuspayRequestCallBack> _Nonnull)jusPayRequestCallBack OBJC_DESIGNATED_INITIALIZER;
/// Network request for UPISubmission Submission
/// @param order                 Order
/// @param virtualPaymentAddress String
/// @param upiCallback           UPICallback
- (nonnull instancetype)initWithOrder:(Order * _Nonnull)order virtualPaymentAddress:(NSString * _Nonnull)virtualPaymentAddress upiCallBack:(id <UPICallBack> _Nonnull)upiCallBack OBJC_DESIGNATED_INITIALIZER;
/// Network Request to check the status of the transaction
/// @param order                 Order
/// @param upiSubmissionResponse UPISubmissionResponse
/// @param upiCallback           UPICallback
- (nonnull instancetype)initWithOrder:(Order * _Nonnull)order upiSubmissionResponse:(UPISubmissionResponse * _Nonnull)upiSubmissionResponse upiCallback:(id <UPICallBack> _Nonnull)upiCallback OBJC_DESIGNATED_INITIALIZER;
/// Network request to fetch the order
/// @param accessToken           String
/// @param orderID               String
/// @param orderRequestCallBack  OrderRequestCallBack
- (nonnull instancetype)initWithOrderID:(NSString * _Nonnull)orderID accessToken:(NSString * _Nonnull)accessToken orderRequestCallBack:(id <OrderRequestCallBack> _Nonnull)orderRequestCallBack OBJC_DESIGNATED_INITIALIZER;
- (void)execute;
- (void)createOrder;
- (void)updateTransactionDetailsWithJsonResponse:(NSDictionary<NSString *, id> * _Nonnull)jsonResponse;
- (void)fetchOrder;
- (void)parseOrderWithResponse:(NSDictionary<NSString *, id> * _Nonnull)response;
- (void)juspayRequest;
- (void)executeUPIRequest;
- (UPISubmissionResponse * _Nonnull)parseUPIResponseWithResponse:(NSDictionary<NSString *, id> * _Nonnull)response SWIFT_WARN_UNUSED_RESULT;
- (void)upiStatusCheck;
- (NSString * _Nonnull)getUserAgent SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class UIActivityIndicatorView;
@class UIBlurEffect;
@class UIVisualEffect;

SWIFT_CLASS("_TtC9Instamojo7Spinner")
@interface Spinner : UIVisualEffectView
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, readonly, strong) UIView * _Nonnull background;
@property (nonatomic, readonly, strong) UIActivityIndicatorView * _Nonnull activityIndictor;
@property (nonatomic, readonly, strong) UILabel * _Nonnull label;
@property (nonatomic, readonly, strong) UIBlurEffect * _Nonnull blurEffect;
@property (nonatomic, readonly, strong) UIVisualEffectView * _Nonnull vibrancyView;
- (nonnull instancetype)initWithText:(NSString * _Nonnull)text OBJC_DESIGNATED_INITIALIZER;
- (void)setTextWithText:(NSString * _Nonnull)text;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)setup;
- (void)didMoveToSuperview;
- (void)show;
- (void)hide;
- (nonnull instancetype)initWithEffect:(UIVisualEffect * _Nullable)effect SWIFT_UNAVAILABLE;
@end


SWIFT_PROTOCOL("_TtP9Instamojo11UPICallBack_")
@protocol UPICallBack
- (void)onSubmissionWithUpiSubmissionResponse:(UPISubmissionResponse * _Nonnull)upiSubmissionResponse exception:(NSString * _Nonnull)exception;
- (void)onStatusCheckCompleteWithPaymentComplete:(BOOL)paymentComplete status:(NSInteger)status;
@end


SWIFT_CLASS("_TtC9Instamojo10UPIOptions")
@interface UPIOptions : NSObject
@property (nonatomic, copy) NSString * _Nonnull url;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9Instamojo14UPIPaymentView")
@interface UPIPaymentView : UIViewController <UPICallBack, UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified alertMessageView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified vpaDetailsView;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified vpa;
@property (nonatomic, strong) Order * _Null_unspecified order;
@property (nonatomic, strong) UPISubmissionResponse * _Null_unspecified upiSubmissionResponse;
@property (nonatomic, strong) Spinner * _Null_unspecified spinner;
@property (nonatomic) BOOL continueCheck;
- (void)viewDidLoad;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)verifyPaymentWithSender:(UIBarButtonItem * _Nonnull)sender;
- (void)onSubmissionWithUpiSubmissionResponse:(UPISubmissionResponse * _Nonnull)upiSubmissionResponse exception:(NSString * _Nonnull)exception;
- (void)checkForStatusTransaction;
- (void)onStatusCheckCompleteWithPaymentComplete:(BOOL)paymentComplete status:(NSInteger)status;
- (void)onPaymentStatusCompleteWithMessage:(NSString * _Nonnull)message;
- (void)showAlertWithTitle:(NSString * _Nonnull)title errorMessage:(NSString * _Nonnull)errorMessage;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9Instamojo21UPISubmissionResponse")
@interface UPISubmissionResponse : NSObject
@property (nonatomic, copy) NSString * _Nonnull paymentID;
@property (nonatomic) NSInteger statusCode;
@property (nonatomic, copy) NSString * _Nonnull payerVirtualAddress;
@property (nonatomic, copy) NSString * _Nonnull payeeVirtualAddress;
@property (nonatomic, copy) NSString * _Nonnull statusCheckURL;
@property (nonatomic, copy) NSString * _Nonnull upiBank;
@property (nonatomic, copy) NSString * _Nonnull statusMessage;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithPaymentID:(NSString * _Nonnull)paymentID statusCode:(NSInteger)statusCode payerVirtualAddress:(NSString * _Nonnull)payerVirtualAddress payeeVirtualAddress:(NSString * _Nonnull)payeeVirtualAddress statusCheckURL:(NSString * _Nonnull)statusCheckURL upiBank:(NSString * _Nonnull)upiBank statusMessage:(NSString * _Nonnull)statusMessage OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9Instamojo6Wallet")
@interface Wallet : NSObject
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic, copy) NSString * _Nonnull imageUrl;
@property (nonatomic, copy) NSString * _Nonnull walletID;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name imageUrl:(NSString * _Nonnull)imageUrl walletID:(NSString * _Nonnull)walletID OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9Instamojo13WalletOptions")
@interface WalletOptions : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified url;
@property (nonatomic, copy) NSArray<Wallet *> * _Null_unspecified wallets;
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url wallets:(NSArray<Wallet *> * _Nonnull)wallets OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getPostDataWithAccessToken:(NSString * _Nonnull)accessToken walletID:(NSString * _Nonnull)walletID SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

#pragma clang diagnostic pop
