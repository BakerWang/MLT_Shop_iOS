//
//  AppDefs.h
//  bitmedia
//
//  Created by meng qian on 13-12-24.
//  Copyright (c) 2013年 thinktube. All rights reserved.
//

// TODO:将友盟的各种数据监控
#define UM_REGISTER                 @"Register"         // 注册
#define UM_LOGIN                    @"Login"            // 登陆
#define UM_START                    @"Start"            // 启动
#define UM_PAY                      @"SuccessPay"       // 支付
#define UM_FORUM                    @"forum"            // 进入论坛
#define UM_ORDER_YES                @"Orders_YES"       // 下单成功
#define UM_ORDER_NO                 @"Orders_NO"        // 下单失败
#define UM_SHARE                    @"share"            // 分享
#define UM_PAY_BAD                  @"BadPay"           // 支付失败




#define XAppDelegate ((AppDelegate *)[[UIApplication sharedApplication] delegate])
#define USER_DEFAULTS               [NSUserDefaults standardUserDefaults]
#define CODE_OK                     @"10000"
#define ERROR_TOKEN_OVERDUE         @"21315"
#define ERROR_PARAM                 @"10008"
#define ERROR_REPEAT                @"20017"
#define ERROR_NEED_LOGIN            @"20003"
#define COPYRIGHT                   @"\u00a9"


#warning 测试地址
//测试地址e
//#define BASE_API        @"http://192.168.1.199:8080"
#define BASE_API        @"http://www.manluotuo.com"

//#ifdef  USE_DEV
//#define BASE_API        @"http://www.manluotuo.com"
//
//#else
////#define NSLog(...) LogMessageF( __FILE__,__LINE__,__FUNCTION__, NULL, 0, __VA_ARGS__)
//
////#define BASE_API        @"http://appdemo.manluotuo.com"
//#define BASE_API        @"http://www.manluotuo.com"
//#endif

#define CUSTOMER_SERVICE_URL    @"http://webim.qiao.baidu.com/im/gateway?ucid=7217349&siteid=5114738&bid=be5ff86b6371ca9b1efa980a"


//////////////////////////////////////
// rect line //
#define SLIDE_FIX_HEIGHT    138.0
#define BRAND_FIX_HEIGHT    H_60 //1行3个品牌的高度
#define AREA_FIX_HEIGHT     170.0f //1行一个布局
#define SEP_HEIGHT          5.0f




#define HTTP_200        200
#define HTTP_400        400
#define HTTP_500        500
#define CAMERA_WIDTH    800
#define IMAGE_WH_RATIO  0.75

#define ERROR_USER_EXIST 4006

#define CELL_ICON_TAG   1001
#define CELL_TITLE_TAG  1002
#define CELL_BUBBLE_TAG 1003
#define CELL_TITLE_DETAIL_TAG 1004
#define CELL_SUBSTITUTE_TAG 1005

#define HOST_LOCAL_TAB      0
#define HOST_ONLINE_TAB     1
#define HOST_OFFLINE_TAB    2

#pragma mark - API KEYS

#define WEIBO_APP_KEY       @"829661249"
#define WEIBO_APP_ID        @"wb829661249"
#define WEIBO_APP_SECRET    @"6a5991b5a4950416ca9491eb863c19be"
#define WEIBO_REDIRECT_URI  @"https://api.weibo.com/oauth2/default.html"


//#define WXAPI_APP_ID        @"wxfad0032de4fc339a"

#define WXAPI_APP_ID        @"wx18098a9221270776"
#define WXPackage           @"Sign=WXPay"


#define QQ_API_URL_ID       @"tencent1104058323"
#define QQ_API_ID           @"1104058323"

#define UMENG_APPKEY        @"54fd6e07fd98c5b9ae000141"


#ifndef __QQAPI_ENABLE__
#define __QQAPI_ENABLE__ 1
#endif

/** 聚合快递查询openid */
#define JUHE_OPENID         @"JH412bd3fbbdaf0f97a0295530728eb018"

////////////////////////////////////////////

#define APP_NAME  [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleDisplayName"]
#define FAKE_SHARE_IMAGE    [UIImage imageNamed:@"avatar.png"]
#define APP_ICON            [UIImage imageNamed:@"Icon.png"]
#define GALLERY_COVER       @"GALLERY_COVER"
#define PLACEHOLDERIMAGE    [UIImage imageNamed:@"placeHolder"]


#define M_APPLEID @"802771888"
#define IS_IPHONE_5 ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )568 ) < DBL_EPSILON )

#define TOTAL_HEIGHT [[UIScreen mainScreen] bounds].size.height
#define WIDTH [UIScreen mainScreen].bounds.size.width


#define API_ADDRESS @"http://api.bitjin.net"
#define APITEST_ADDRESS @"http://apitest.bitjin.net"


#define SBUTTON_TAG     10
#define DEFAULT_PAGE_SIZE  20

#define DATETIME_FORMATE    @"yyyy/MM/dd HH:mm:ss +0800"  //@"yyyy-MM-dd hh:mm:ss"
#define DATE_FORMATE        @"yyyy-MM"
#define DATE_YMD_FORMATE    @"yyyy-MM-dd"

#pragma mark - mactive

#define T(a)    NSLocalizedString((a), nil)

#define INT(a)      [NSNumber numberWithInteger:(a)]
#define FLOAT(a)    [NSNumber numberWithFloat:(a)]
#define NUM_BOOL(a) [NSNumber numberWithBool:(a)]
#define C_SYMBOL @"-"

#define STR(a)  [NSString stringWithFormat:@"%@", (a)]
#define STR_INT(a)  [NSString stringWithFormat:@"%d", (a)]
#define STR_LONG(a)  [NSString stringWithFormat:@"%ld", (a)]
#define STR_NUM2(a)  [NSString stringWithFormat:@"%.2f", (a)]
#define STR_NUM0(a)  [NSString stringWithFormat:@"%.0f", (a)]

#define NUMBER_OR_NIL(a)	\
(((a) && [(a) isKindOfClass:[NSNumber class]]) ? (a) : nil)

#define STRING_OR_NIL(a)	\
(((a) && [(a) isKindOfClass:[NSString class]]) ? (a) : nil)

#define STRING_OR_EMPTY(a)	\
(((a) && [(a) isKindOfClass:[NSString class]]) ? (a) : @"")

#define kDateFormat  @"yyyy'-'MM'-'dd'T'HH':'mm':'ss'Z"

#define FONT_10 [UIFont systemFontOfSize:10.0f]
#define FONT_11 [UIFont systemFontOfSize:11.0f]
#define FONT_12 [UIFont systemFontOfSize:12.0f]
#define FONT_13 [UIFont systemFontOfSize:13.0f]
#define FONT_15 [UIFont systemFontOfSize:15.0f]
#define FONT_14 [UIFont systemFontOfSize:14.0f]
#define FONT_16 [UIFont systemFontOfSize:16.0f]
#define FONT_20 [UIFont systemFontOfSize:20.0f]
#define FONT_24 [UIFont systemFontOfSize:24.0f]
#define FONT_30 [UIFont systemFontOfSize:30.0f]
#define FONT_40 [UIFont systemFontOfSize:40.0f]
// font
#define CUSTOMFONT [UIFont fontWithName:@"Museo" size:16.0f]
#define LITTLECUSTOMFONT [UIFont fontWithName:@"Museo" size:13.0f]
#define CUSTOMFONT_12 [UIFont fontWithName:@"Museo" size:12.0f]
#define CUSTOMFONT_17 [UIFont fontWithName:@"Museo" size:17.0f]
#define CUSTOMFONT_16 [UIFont fontWithName:@"Museo" size:16.0f]
#define TINYCUSTOMFONT [UIFont fontWithName:@"Museo" size:11.0f]
#define TINYCUSTOMFONT [UIFont fontWithName:@"Museo" size:11.0f]
#define FONT_DIN_14 [UIFont fontWithName:@"DIN Alternate" size:14.0f]
#define FONT_DIN_20 [UIFont fontWithName:@"DIN Alternate" size:20.0f]
#define FONT_DIN_24 [UIFont fontWithName:@"DIN Alternate" size:24.0f]
#define FONT_DIN_30 [UIFont fontWithName:@"DIN Alternate" size:30.0f]

#define FONT_AWESOME_12 [UIFont fontWithName:@"FontAwesome" size:12.0f]
#define FONT_AWESOME_14 [UIFont fontWithName:@"FontAwesome" size:14.0f]
#define FONT_AWESOME_15 [UIFont fontWithName:@"FontAwesome" size:15.0f]
#define FONT_AWESOME_20 [UIFont fontWithName:@"FontAwesome" size:20.0f]
#define FONT_AWESOME_24 [UIFont fontWithName:@"FontAwesome" size:24.0f]
#define FONT_AWESOME_30 [UIFont fontWithName:@"FontAwesome" size:30.0f]
#define FONT_AWESOME_36 [UIFont fontWithName:@"FontAwesome" size:36.0f]
#define FONT_AWESOME_70 [UIFont fontWithName:@"FontAwesome" size:70.0f]

// font awesome
#define ICON_THUMBSUP   @"\uf164"
#define ICON_CALENDAR   @"\uf073"
#define ICON_DASHBOARD  @"\uf0e4"
#define ICON_RMB        @"\uf157"
#define ICON_THUMBSDOWN @"\uf165"
#define ICON_COLLECT    @"\uf005"
#define ICON_COMMENTS   @"\uf086"
#define ICON_TIMES_CIRCLE @"\uf057"
#define ICON_TIMES      @"\uf00d"
#define ICON_FLAG       @"\uf024"
#define ICON_CHECK      @"\uf00c"
#define ICON_CHECK_O    @"\uf058"
#define ICON_CIRCLE_O   @"\uf10c"
#define ICON_TIMES_O    @"\uf057"
#define ICON_SEARCH     @"\uf002"
#define ICON_BARCODE    @"\uf02a"
#define ICON_DOWNLOAD   @"\uf019"
#define ICON_SETTING    @"\uf013"
#define ICON_FEEDBACK   @"\uf075"
#define ICON_LIST       @"\uf00b"
#define ICON_BARCHART   @"\uf080"
#define ICON_MINE       @"\uf007"
#define ICON_LINK       @"\uf0c1"
#define ICON_LOGIN      @"\uf090"
#define ICON_LOGOUT     @"\uf08b"
#define ICON_SHARE      @"\uf064"
#define ICON_MORE       @"\uf141"
#define ICON_PENCIL     @"\uf044"
#define ICON_COLLECT_O  @"\uf006"
#define ICON_SHARE_O    @"\uf064"
#define ICON_INFO       @"\uf05a"
#define ICON_REPLY      @"\uf112"
#define ICON_PHOTO      @"\uf030"
#define ICON_EXCLAMATION @"\uf06a"
#define ICON_ARROW_LEFT @"\uf060"
#define ICON_ARROW_RIGHT @"\uf061"
#define ICON_ARROW_UP   @"\uf062"
#define ICON_ARROW_DOWN @"\uf063"
#define ICON_UPDATE     @"\uf01b"
#define ICON_LOGOUT     @"\uf08b"
#define ICON_BACK       @"\uf104"
#define ICON_FORWORD    @"\uf105"
#define ICON_MOBILE     @"\uf10b"
#define ICON_LOCK       @"\uf023"
#define ICON_BARS       @"\uf0c9"
#define ICON_SAVE       @"\uf0c7"
#define ICON_PLUS       @"\uf067"
#define ICON_LEVEL_UP   @"\uf148"
#define ICON_PLUS_CIRCLE @"\uf055"
#define ICON_MINUS_CIRCLE @"\uf056"
#define ICON_MINUS      @"\uf068"
#define ICON_COLUD_ONLINE @"\uf0ee"
#define ICON_COLUD_OFFLINE @"\uf0ed"
#define ICON_TRASH      @"\uf014"
#define ICON_SEND       @"\uf1d8"
#define ICON_LIGHTBULB  @"\uf0eb"
#define ICON_CHAIN      @"\uf0c1"
#define ICON_EYS        @"\uf06e"
#define ICON_UP         @"\uf077"
#define ICON_DOWN       @"\uf078"
#define ICON_REFRESH    @"\uf021"
#define ICON_HELP       @"\uf128"
#define ICON_ROTATE_LEFT     @"\uf0e2"
#define ICON_ROTATE_RIGHT     @"\uf01e"
#define ICON_CLOCK      @"\uf017"
#define ICON_TIMES_CIRCLE_O @"\uf05c"
#define ICON_SHARE_APP @"\uf1e0"
#define ICON_CHECKUPDATE @"\uf01e"
#define ICON_RIGHT      @"\uf054"
#define ICON_PHONE      @"\uf095"
#define ICON_ANGLE_DOWN @"\uf107"
#define ICON_ANGLE_UP   @"\uf106"

#define MAX_COMMENT_LENGTH      140
#define MAX_VINCODE_LENGTH      17
#define MAX_WEIBO_SHARE_LENGTH  115
#define IOS7_CONTENT_OFFSET     100.0f
#define IOS7_CONTENT_OFFSET_Y   64.0f
#define STATUS_BAR_HEIGHT       20.0f
#define TOP_HEIGHT              44.0f
#define TABBAR_HEIGHT           44.0f

#define TAKE_PHOTO_CELL_W 106.0f
#define TAKE_PHOTO_CELL_H 90.0f
#define CELL_HEIGHT             60.0f
#define CELL_WIDTH              320.0f/3
#define GOODS_CELL_HEIGHT     145.0f

#define LEFT_CELL_HEIGHT        50.0f
#define SECTION_HEADER_HEIGHT   20.0f
#define SECTION_FOOTER_HEIGHT   40.0f
#define LABEL_HEIGHT            20.0f
#define TITLE_HEIGHT            30.0
#define PROGRESSBAR_HEIGHT      2.5f

#define H_0     0.0f
#define H_4     4.0f
#define H_5     5.0f
#define H_6     6.0f
#define H_7     7.5f
#define H_8     8.0f
#define H_10    10.0f
#define H_12   12.0f
#define H_13    13.0f
#define H_14   14.0f
#define H_15   15.0f
#define H_16   16.0f
#define H_18   18.0f
#define H_19   19.0f
#define H_20   20.0f
#define H_21   21.0f
#define H_22   22.0f
#define H_24   24.0f
#define H_25   25.0f
#define H_26   26.0f
#define H_28   28.0f
#define H_30   30.0f
#define H_32   32.0f
#define H_36   36.0f
#define H_40   40.0f
#define H_45   45.0f
#define H_50   50.0f
#define H_52   52.0f
#define H_55   55.0f
#define H_56   56.0f
#define H_60   60.0f
#define H_70   70.0f
#define H_80   80.0f
#define H_90   90.0f
#define H_100  100.0f
#define H_110  110.0f
#define H_120  120.0f
#define H_130  130.0f
#define H_140  140.0f
#define H_150  150.0f
#define H_160  160.0f
#define H_180  180.0f
#define H_200  200.0f
#define H_220  220.0f
#define H_240  240.0f
#define H_250  250.0f
#define H_260  260.0f
#define H_280  280.0f
#define H_290  290.0f
#define H_300  300.0f
#define H_310  310.0f
#define H_160_180 160.0f-180.0f
#define H_550  550.0f

#define BUTTON_OFFSET           10.0f
#define LEFT_PADDING            8.0f
#define TOP_PADDING             8.0f

#define MAX_LEFT_DRAWER_WIDTH   240.0f
#define JPEG_QUALITY            0.85
#define NO_DATA_WIDTH           160.0f
#define NO_DATA_HEIGHT          70.0f

#define ISO_TIMEZONE_UTC_FORMAT     @"Z"
#define ISO_TIMEZONE_OFFSET_FORMAT  @"+%02d:%02d"

#define TITLE_MAX_WIDTH             150.0f
#define MIDDLE_COLUMN_WIDTH         220.0f
#define MIDDLE_COLUMN_FULL_WIDTH    288.0f

#define AMIX_W      TOTAL_WIDTH - LEFT_PADDING*2 -2
#define AMIX_EX     H_24 + TOP_PADDING * 5

// NSARRAY
#define TYRE_HEIGHT         (IS_IPHONE_5 ? 180.0f : 160.0f)
#define TYRE_WIDTH          (IS_IPHONE_5 ? 180.0f : 160.0f)
#define TOTAL_WIDTH         320.0f
#define COMMENT_MAX_WIDTH   240.0f

#define NAV_BAR_HEIGHT          26.0f
#define CATEGORY_BUTTON_HEIGHT  45.0f
#define CATEGORY_BUTTON_WIDTH   70.0f
#define CATEGORY_PER_ROW        4.0f

// category edit button
#define ADD_BUTTON_WIDTH        60.0
#define TABS_VIEW_HEIGHT        44.0
#define TABS_VIEW_WIDTH         80.0
#define ROUNDED_BUTTON_HEIGHT   30.0

// tabbar view height
#define BUTTON_H    30.0f
#define BUTTON_W    60.0f
#define BUTTON_SEP (TOTAL_WIDTH - BUTTON_W * 4)/5

// Signal
#define SIGNAL_WEIBO_BINDING                @"50001"
#define SIGNAL_LEFT_MENU                    @"50002"
#define SIGNAL_WEIBO_UNBINDING              @"50003"
#define SIGNAL_REPLY_COMMENT                @"50004"
#define SIGNAL_UP_COMMENT                   @"50005"
#define SIGNAL_UP_VEHICLE                   @"50015"
#define SIGNAL_DOWN_VEHICLE                 @"50016"
#define SIGNAL_COLLECT_VEHICLE              @"50017"
#define SIGNAL_READ_VEHICLE                 @"50018"
#define SIGNAL_SHARE_VEHICLE                @"50019"

#define SIGNAL_SHARE_SUCCESS                    @"50006"
#define SIGNAL_VEHICLE_IN_COMMENT               @"50010"
#define SIGNAL_CREATE_VEHICLE                   @"50030"
#define SIGNAL_PICK_VEHICLE_MODEL               @"50032"
#define SIGNAL_ONLINE_VEHICLE                   @"50033"
#define SIGNAL_EDIT_VEHICLE                     @"50034"
#define SIGNAL_DELETE_VEHICLE                   @"50035"
#define SIGNAL_TAP_VEHICLE                      @"50036"
#define SIGNAL_OFFLINE_VEHICLE                  @"50037"
#define SIGNAL_OFFLINE_VEHICLE_SURE             @"50137"
#define SIGNAL_CREATE_SHARE_VEHICLE             @"50138"
#define SIGNAL_CREATE_SUBSTITUTE_VEHICLE        @"50139"
#define SIGNAL_CREATE_SHARE_VEHICLE_AFTER_SHARE_ACCOUNT @"50140"

#define SIGNAL_SEND_VEHICLE                     @"50038"
#define SIGNAL_PICK_AREA_MODEL                  @"50039"
#define SIGNAL_PICK_DESC_MODEL                  @"50040"
#define SIGNAL_CHECK_VEHICLE_VIN                @"50041"
#define SIGNAL_BARCODE_SCAN_VIN                 @"50042"
#define SIGNAL_BARCODE_SCAN_SUCCESS             @"50043"
#define SIGNAL_AVATAR_UPLOAD_DONE               @"50044"
#define SIGNAL_STOP_SUBSTITUTE                  @"50045"
#define SIGNAL_STOP_SUBSTITUTE_SURE             @"50145"
#define SIGNAL_SUBSTITUTE_USER_GET_DONE @"50151"
#define SIGNAL_VEHICLE_COUNT_UPDATE_DONE @"50152"

#define SIGNAL_UPDATE_SUBSTITUTE_PRICE @"50046"


#define SIGNAL_CLONE_VEHICLE        @"50200"
#define SIGNAL_ADDRESS_OPERATE_DONE         @"50188"
#define SIGNAL_CHANGE_CART_GOODS_COUNT      @"50189"
#define SIGNAL_ORDER_ACTION                 @"50191"

#define SIGNAL_CHOOSE_MODLE_PICKER          @"50090" //重新选择步骤
#define SIGNAL_UPLOAD_GALLERY_PROGRESS      @"50091"
#define SIGNAL_UPDATE_GALLERY_FINISH        @"50092"
#define SIGNAL_ONLINE_VEHICLE_FINISH        @"50093"
#define SIGNAL_DELETE_VEHICLE_FINISH        @"50094"
#define SIGNAL_UPDATE_VEHICLE_FINISH        @"50095"
#define SIGNAL_STATUS_VEHICLE_FINISH        @"50096"
#define SIGNAL_SEND_VEHICLE_DONE            @"50097"
#define SIGNAL_MATCH_VEHICLE_DONE           @"50099"
#define SIGNAL_SEARCH_CATEGORY_BUTTON_CLICKED           @"50199"

#define SIGNAL_ONLINE_VEHICLE_FAIL          @"50098"
#define SIGNAL_MAIN_PAGE_TAPPED          @"50400"
#define SIGNAL_TAP_CELL                 @"50136"


#define NOTIFICATION_VEHICLE_EDIT_DONE      @"50300"
#define NOTIFICATION_QUICK_ADD_STEP         @"50301"

#define SIGNAL_UPLOADING_PROGRESS           @"51000"
#define SIGNAL_GO_TO_INDEX_PAGE             @"60000"
#define SIGNAL_GO_TO_INDEX                  @"60001"
#define SIGNAL_GO_TO                        @"60002"
#define SIGNAL_GO                           @"60003"
#define CERTRAL_BTN_CLICK                   @"60004"

#define SIGNAL_PAN                          @"60005"

#define LOGBTN_CLICK                        @"70000"

#define SETUP_DATA                          @"80000"
#define ON_ADD_BTN                          @"90000"
#define ON_DELETE_BTN                       @"90001"

#define SET_UP_DATA                         @"90002"
#define SET_UP_HOME_DATA                    @"90003"

#define NOWVERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
#define NOWBUILD [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"];

// UMENG

#define UMENG_UserLogin                     @"UserLogin,"
#define UMENG_UserRegister 					@"UserRegister"
#define UMENG_UserForgot 					@"UserForgot"
#define UMENG_UserReset 					@"UserReset"
#define UMENG_UserLogout 					@"UserLogout"
#define UMENG_UserSMSCreate 				@"UserSMSCreate"
#define UMENG_ShareAccountCreate            @"ShareAccountCreate"
#define UMENG_ShareAccountDelete            @"ShareAccountDelete"
#define UMENG_ShareAccountList              @"ShareAccountList"
#define UMENG_ListByVin 					@"ListByVin"
#define UMENG_UploadPicture 				@"UploadPicture"
#define UMENG_CreateGallery 				@"CreateGallery"
#define UMENG_UpdateGallery 				@"UpdateGallery"
#define UMENG_CreateVehicle 				@"CreateVehicle"
#define UMENG_ListVehicle 					@"ListVehicle"
#define UMENG_UpdateVehicle 				@"UpdateVehicle"
#define UMENG_DeleteVehicle 				@"DeleteVehicle"
#define UMENG_SendVehicle 					@"SendVehicle"
#define UMENG_SendVehicleInDetail           @"SendVehicleInDetail"
#define UMENG_QuickAdd 						@"QuickAdd"
#define UMENG_ViewLocalVehicle              @"ViewLocalVehicle"
#define UMENG_ViewOnlineVehicle             @"ViewOnlineVehicle"
#define UMENG_ViewOfflineVehicle            @"ViewOfflineVehicle"
#define UMENG_ViewVehicleDetail             @"ViewVehicleDetail"
#define UMENG_ViewLeftMenu 					@"ViewLeftMenu"
#define UMENG_wechatShare                   @"WechatShare"
#define UMENG_wechatFirendShare             @"WechatFirendShare"
#define UMENG_yixinShare                    @"YiXinShare"
#define UMENG_yixinFirendShare              @"YiXinFirendShare"
#define UMENG_QQFriendShare                 @"QQFriendShare"
#define UMENG_QQZoneShare                   @"QQZoneShare"
#define UMENG_historyList                   @"HistoryList"
#define UMENG_historyLogList                @"HistoryLogList"


// Color helpers

#define CELL_SELECTED_BGCOLOR 0.86
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f \
alpha:(a)]

#define HSVCOLOR(h,s,v) [UIColor colorWithHue:(h) saturation:(s) value:(v) alpha:1]
#define HSVACOLOR(h,s,v,a) [UIColor colorWithHue:(h) saturation:(s) value:(v) alpha:(a)]

#define RGBA(r,g,b,a) (r)/255.0f, (g)/255.0f, (b)/255.0f, (a)

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define TABBGCOLOR [UIColor colorWithRed:234.0f/255.0 green:246.0f/255.0 blue:242.0f/255.0 alpha:1.0]


#define BGCOLOR [UIColor colorWithRed:245.0f/255.0 green:245.0f/255.0 blue:245.0f/255.0 alpha:1.0]

#define GREENCOLOR [UIColor colorWithRed:43.0f/255.0f green:180.0f/255.0f blue:77.0f/255.0f alpha:1]
#define GREENLIGHTCOLOR [UIColor colorWithRed:126.0f/255.0f green:211.0f/255.0f blue:33.0f/255.0f alpha:1]
#define GREENLIGHTCOLOR2 [UIColor colorWithRed:184.0f/255.0f green:233.0f/255.0f blue:134.0f/255.0f alpha:1]
#define GREENDARKCOLOR [UIColor colorWithRed:0.0f/255.0f green:104.0f/255.0f blue:76.0f/255.0f alpha:1]

#define NameBackgroundColor [UIColor colorWithRed:193.0f/255.0f green:204.0f/255.0f blue:220.0f/255.0f alpha:0.5]
#define REDCOLOR [UIColor colorWithRed:225.0f/255.0f green:78.0f/255.0f blue:0.0f/255.0f alpha:1]
#define GRAYCOLOR [UIColor colorWithRed:158.0f/255.0f green:158.0f/255.0f blue:158.0f/255.0f alpha:1]
#define GRAYLIGHTCOLOR [UIColor colorWithRed:190.0f/255.0f green:190.0f/255.0f blue:190.0f/255.0f alpha:1]
#define GRAYLELIGHTCOLOR [UIColor colorWithRed:210.0f/255.0f green:210.0f/255.0f blue:210.0f/255.0f alpha:1]
#define GRAYEXLIGHTCOLOR [UIColor colorWithRed:236.0f/255.0f green:236.0f/255.0f blue:236.0f/255.0f alpha:1]

#define BLACKCOLOR [UIColor blackColor]

#define HANDLEBORDERCOLOR [UIColor colorWithRed:228.0f/255.0f green:228.0f/255.0f blue:228.0f/255.0f alpha:1].CGColor
#define HANDLEBGCOLOR [UIColor colorWithRed:248.0f/255.0f green:248.0f/255.0f blue:248.0f/255.0f alpha:1]
#define DARKCOLOR [UIColor colorWithRed:81.0f/255.0f green:84.0f/255.0f blue:90.0f/255.0f alpha:1]
#define DARKLIGHTCOLOR [UIColor colorWithRed:120.0f/255.0f green:120.0f/255.0f blue:120.0f/255.0f alpha:1]
#define WHITECOLOR [UIColor colorWithRed:255.0f/255.0f green:255.0f/255.0f blue:255.0f/255.0f alpha:1]
#define BlACKCOLOR [UIColor colorWithRed:30.0f/255.0f green:30.0f/255.0f blue:30.0f/255.0f alpha:1]

#define WHITEALPHACOLOR [UIColor colorWithRed:255.0f/255.0f green:255.0f/255.0f blue:255.0f/255.0f alpha:0.1]
#define WHITEALPHACOLOR2 [UIColor colorWithRed:255.0f/255.0f green:255.0f/255.0f blue:255.0f/255.0f alpha:0.5]

#define BlACKALPHACOLOR [UIColor colorWithRed:0.0f/255.0f green:0.0f/255.0f blue:0.0f/255.0f alpha:0.2]


//#define ORANGECOLOR [UIColor colorWithRed:254/255.0 green:124/255.0 blue:7/255.0 alpha:1]

#define ORANGECOLOR [UIColor colorWithRed:254.0f/255.0f green:143.0f/255.0f blue:7.0f/255.0f alpha:1]

#define ORANGE_DARK_COLOR [UIColor colorWithRed:239.0f/255.0f green:105.0f/255.0f blue:6.0f/255.0f alpha:1]
#define ORANGE_LIGHT_COLOR [UIColor colorWithRed:252.0f/255.0f green:242.0f/255.0f blue:174.0f/255.0f alpha:0.4f]

#define BLUECOLOR [UIColor colorWithRed:79.0f/255.0f green:178.0f/255.0f blue:237.0f/255.0f alpha:1]
#define BLUELIGHTCOLOR [UIColor colorWithRed:155.0f/255.0f green:203.0f/255.0f blue:250.0f/255.0f alpha:1]
#define BLUEDARKCOLOR [UIColor colorWithRed:55.0f/255.0f green:122.0f/255.0f blue:188.0f/255.0f alpha:1]

#define ORANGE_LINE_COLOR [UIColor colorWithRed:255.0f/255.0f green:198.0f/255.0f blue:0.0f/255.0f alpha:1]

#define SEPCOLOR [UIColor colorWithRed:200.0f/255.0f green:200.0f/255.0f blue:200.0f/255.0f alpha:1]

#define MY_BLACK [UIColor colorWithRed:50/255 green:50/255 blue:50/255 alpha:1]
#define MY_WHITE [UIColor colorWithRed:240.0f/255.0f green:240.0f/255.0f blue:240.0f/255.0f alpha:1]

//#define WHITECOLOR [UIColor whiteColor];

// ENUMs
typedef enum _MultilineTextAlign{
    //以下是枚举成员
    AlignLeft = NSTextAlignmentLeft,
    AlignCenter = NSTextAlignmentCenter,
    AlignRight = NSTextAlignmentRight
}MultilineTextAlign;

typedef NS_ENUM(NSUInteger, ListCellStatus)
{
    ListCellStatusUploading = 1,
    ListCellStatusFail      = 2,
    ListCellStatusSuccess   = 3
};


typedef enum _UserGroup
{
    UserGroupGuest = 1,
    UserGroupWeibo = 3,
    UserGroupQQ = 4
} UserGroup;

typedef NS_ENUM(NSUInteger,VehicleCacheType)
{
    VehicleCacheTypeCache = 1,
    VehicleCacheTypeCollection  = 2
};

typedef NS_ENUM(NSUInteger,VehicleCloudStatus)
{
    VehicleCloudLocal       = 0,
    VehicleCloudOnline      = 1,
    VehicleCloudOffline     = 2,
    VehicleCloudSold        = 3,
    VehicleCloudDistributed = 4
};

typedef NS_ENUM(NSUInteger,GalleryEditStatus)
{
    GalleryEditUpload       = 0,
    GalleryEditStill        = 2,
    GalleryEditUpdate       = 3,
    GalleryEditDelete       = 4
};

typedef NS_ENUM(NSUInteger,HelperStatus)
{
    HelperStatusIdle = 1,
    HelperStatusBusy = 2,
    HelperStatusWait = 3
};


// 确保数据从0开始没有跳帧
#define DETAIL_SOURCE_INDEX_OFFSET 20
// 需要跟UI调成一个顺序
typedef NS_ENUM(NSInteger, StepMenuRow){
    StepMenuVIN             = 0,
    StepMenuModel           = 1,
    StepMenuQuotedPriceIncludeTransferFee = 2,
    StepMenuQuotedPrice     = 3,
    StepMenuMileage         = 4,
    StepMenuPurpose         = 5,
    StepMenuColor           = 6,
    StepMenuInterior        = 7,
    StepMenuRegistrDate     = 8,
    StepMenuInspectionDate  = 9,
    StepMenuDescLong        = 10,
    StepMenuVehicleModel    = 11,
    
    StepMenuCommercialInsuranceExpireDate = 20,
    StepMenuAlcInsuranceExpireDate = 21,
    StepMenuBidPrice        = 22,
    StepMenuTradeTimes      = 23,
    StepMenuDescShort       = 24,
    StepMenuMaintenance     = 25,
    StepMenuAccident        = 26,
    StepMenuDocuments       = 27,
    StepMenuContact         = 28,
    StepMenuOfferPrice      = 29,
    
    PersonalFormAvatar          = 40,
    PersonalFormAccount         = 41,
    PersonalFormAddress         = 42,
    PersonalFormNickname        = 43,
    PersonalFormGender          = 44,
    PersonalFormPublicPhone     = 45,
    PersonalFormCompanyName     = 46,
//    PersonalFormCompanyMarket   = 47,
    PersonalFormCompanyAddress  = 47,
    PersonalFormLocation        = 48,
    PersonalFormUserLevel       = 49,
    PersonalFormAddressModel    = 50,
};

//typedef NS_ENUM(NSInteger, PersonalFormRow){
//    PersonalFormAccount         = 0,
//    PersonalFormAddress         = 1,
//    PersonalFormNickname        = 2,
//    PersonalFormGender          = 3,
//    PersonalFormPublicPhone     = 4,
//    PersonalFormCompanyName     = 5,
//    PersonalFormCompanyAddress  = 6,
//    PersonalFormLocation        = 7,
//    PersonalFormUserLevel       = 8,
//    PersonalFormAddressModel    = 11,
//};


typedef NS_ENUM(NSInteger, InputType){
    InputTypeInput          = 0,
    InputTypeSwitch         = 1,
    InputTypeTextView       = 2,
    InputTypeDataPicker     = 3,
    InputTypeMonthPicker    = 4,
    InputTypeDayPicker      = 5,
    InputTypeRadioGroup     = 6,
    InputTypeCamera         = 7,
    InputTypeModelPicker    = 8,
    InputTypePrice          = 9,
    InputTypePhone          = 10,
    InputTypeNoEdit         = 11,
    InputTypeJustShow       = 12,
    InputTypeAvatar         = 13
};

typedef NS_ENUM(NSInteger, LeftMenuRow){
    LeftMenuCommon      = 0,
    LeftMenuMain        = 1,
    LeftMenuProfile     = 2,
    LeftMenuSearch      = 3,
    LeftMenuCart        = 4,
    LeftMenuService     = 5,
    LeftMenuSetting     = 6,
    LeftMenuHelp        = 7,
    LeftMenuFeedback    = 8,
    LeftMenuUpdate      = 9,
    LeftMenuLogout      = 10,
    LeftMenuLogin       = 11,
    LeftMenuMore        = 12,
    LeftMenuBrandStreet = 13,
    LeftMenuPromotion   = 14,
    LeftMenuPresell     = 15,
};

typedef NS_ENUM(NSInteger, RightMenuRow){
    RightMenuSend       = 0,
    RightMenuSendLog    = 1,
    RightMenuEdit       = 2,
    RightMenuDelete     = 3,
    RightMenuOffline    = 4,
    RightMenuOnline     = 5,
};


typedef NS_ENUM(NSInteger, VehicleOpinionStatus){
    VehicleOpinionNone  = 0,
    VehicleOpinionUp    = 1,
    VehicleOpinionDown  = 2
};

typedef NS_ENUM(NSUInteger,ShareType)
{
    ShareTypeWechat         = 0,
    ShareTypeWechatFriend   = 1,
    ShareTypeWeibo          = 2,
    ShareTypeEmail          = 3,
    ShareTypeLink           = 4,
    ShareTypeQQFriend       = 5,
    ShareTypeQQZone         = 6,

};


typedef NS_ENUM(NSInteger, VehicleMode) {
    VehicleModeUnreaded = 0,
    VehicleModeReaded = 1
};

#define GET_DEFAULT(key) [[NSUserDefaults standardUserDefaults] objectForKey:(key)]
#define SET_DEFAULT(obj,key) [[NSUserDefaults standardUserDefaults]setObject:(obj) forKey:(key)]

#pragma mark - Core Data

#define MRSave() { \
[[NSManagedObjectContext MR_defaultContext] MR_saveToPersistentStoreAndWait]; \
NSLog(@"======MRSave======"); }


#define MOCSave(managedObjectContext) { \
NSError __autoreleasing *error = nil; \
NSAssert([managedObjectContext save:&error], @"-[NSManagedObjectContext save] error:\n\n%@", error); \
NSLog(@"======MOCSave======"); }

#define MOCCount(managedObjectContext, fetchRequest) \
NSManagedObjectContextCount(self, _cmd, managedObjectContext, fetchRequest)

#define MOCCountAll(managedObjectContext, entityName) \
MOCCount(_managedObjectContext, [NSFetchRequest fetchRequestWithEntityName:entityName])

#define MOCFetch(managedObjectContext, fetchRequest) \
NSManagedObjectContextFetch(self, _cmd, managedObjectContext, fetchRequest)

#define MOCFetchAll(managedObjectContext, entityName) \
MOCFetch(_managedObjectContext, [NSFetchRequest fetchRequestWithEntityName:entityName])

#define MOCDelete(managedObjectContext, fetchRequest, cascadeRelationships) \
NSManagedObjectContextDelete(self, _cmd, managedObjectContext, fetchRequest, cascadeRelationships)

#define MOCDeleteAll(managedObjectContext, entityName, cascadeRelationships) \
MOCDelete(managedObjectContext, [NSFetchRequest fetchRequestWithEntityName:entityName], cascadeRelationships)

#define FRCPerformFetch(fetchedResultsController) { \
NSError __autoreleasing *error = nil; \
NSAssert([fetchedResultsController performFetch:&error], @"-[NSFetchedResultsController performFetch:] error:\n\n%@", error); }

NS_INLINE NSUInteger NSManagedObjectContextCount(id self, SEL _cmd, NSManagedObjectContext *managedObjectContext, NSFetchRequest *fetchRequest) {
    NSError __autoreleasing *error = nil;
    NSUInteger objectsCount = [managedObjectContext countForFetchRequest:fetchRequest error:&error];
    NSAssert(objectsCount != NSNotFound, @"-[NSManagedObjectContext countForFetchRequest:error:] error:\n\n%@", error);
    return objectsCount;
}

NS_INLINE NSArray *NSManagedObjectContextFetch(id self, SEL _cmd, NSManagedObjectContext *managedObjectContext, NSFetchRequest *fetchRequest) {
    NSError __autoreleasing *error = nil;
    NSArray *fetchedObjects = [managedObjectContext executeFetchRequest:fetchRequest error:&error];
    NSAssert(fetchedObjects, @"-[NSManagedObjectContext executeFetchRequest:error:] error:\n\n%@", error);
    return fetchedObjects;
}

NS_INLINE void NSManagedObjectContextDelete(id self, SEL _cmd, NSManagedObjectContext *managedObjectContext, NSFetchRequest *fetchRequest, NSArray *cascadeRelationships) {
    fetchRequest.includesPropertyValues = NO;
    fetchRequest.includesPendingChanges = NO;
    fetchRequest.relationshipKeyPathsForPrefetching = cascadeRelationships;
    NSArray *fetchedObjects = MOCFetch(managedObjectContext, fetchRequest);
    for (NSManagedObject *fetchedObject in fetchedObjects) {
        [managedObjectContext deleteObject:fetchedObject];
    }
}

// keyboard nitifications

#define UIKeyboardNotificationsObserve() \
NSNotificationCenter *notificationCenter = [NSNotificationCenter defaultCenter]; \
[notificationCenter addObserver:self selector:@selector(keyboardWillShow:) name:UIKeyboardWillShowNotification object:nil];\
[notificationCenter addObserver:self selector:@selector(keyboardWillHide:) name:UIKeyboardWillHideNotification object:nil];\
[notificationCenter addObserver:self selector:@selector(keyboardWillChangeFrame:) name:UIKeyboardWillChangeFrameNotification object:nil];

#define NotificationsUnobserve() \
[[NSNotificationCenter defaultCenter] removeObserver:self];


NS_INLINE BOOL OSVersionIsAtLeastiOS7() {
    return (floor(NSFoundationVersionNumber) > NSFoundationVersionNumber_iOS_6_1);
}

NS_INLINE BOOL OSVersionIsOnlyiOS7() {
    return (floor(NSFoundationVersionNumber) > NSFoundationVersionNumber_iOS_6_1  && floor(NSFoundationVersionNumber) <= NSFoundationVersionNumber_iOS_7_1);
}

NS_INLINE BOOL OSVersionIsAtLeastiOS8() {
    return (floor(NSFoundationVersionNumber) > NSFoundationVersionNumber_iOS_7_1);
}

// 设备型号

#define IS_IPHONE_5 ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )568 ) < DBL_EPSILON )

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone) // iPhone and       iPod touch style UI

#define IS_IPHONE_4_AND_OLDER_IOS7 (IS_IPHONE && [[UIScreen mainScreen] bounds].size.height < 568.0f)
#define IS_IPHONE_4_AND_OLDER_IOS8 (IS_IPHONE && ([[UIScreen mainScreen] nativeBounds].size.height/[[UIScreen mainScreen] nativeScale]) < 568.0f)




#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)



NS_INLINE BOOL StringHasValue(id str) {
    return (str != nil) && (str != [NSNull null]) && (![str isEqualToString:@""]);
}

NS_INLINE BOOL NumberHasRealValue(id str) {
    return (str != nil) && (str != [NSNull null]) && (![str isEqualToNumber:[NSNumber numberWithInt:0]]);
}

NS_INLINE BOOL NumberHasValue(id str) {
    return (str != nil) && (str != [NSNull null]);
}

NS_INLINE BOOL BoolHasValue(id str) {
    return (str != nil) && (str != [NSNull null]);
}


NS_INLINE BOOL DictionaryHasValue(id dict)
{
    if ([dict isKindOfClass:[NSDictionary class]]) {

        NSArray * array = [dict allKeys];
        if ([array count]>0) {
            return YES;
        }else{
            return NO;
        }
    }else{
        return NO;
    }
}

NS_INLINE BOOL ArrayHasValue(id array)
{
    if ([array isKindOfClass:[NSArray class]]) {
        if ([array count]>0) {
            return YES;
        }else{
            return NO;
        }
    }else{
        return NO;
    }
    
}


#pragma mark -- trans logo
#pragma mark - R
#define VIEW_HEIGHT 250
#define RIGHT_IMAGE [UIImage imageNamed:@"right"]

#define RIGHT_IMAGE_FRAME   [[UIImageView alloc] initWithFrame:CGRectMake(270, 25, 10, 13)]
#define RIGHT_FRAME         [[UIImageView alloc] initWithFrame:CGRectMake(WIDTH-30, 20, 10, 13)]
#define TITLE_LABLE         [[UILabel alloc] initWithFrame:CGRectMake(10, 20, 300, 20)]






