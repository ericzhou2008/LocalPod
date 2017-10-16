//
//  TCMacroProtocol.h
//  TouCool
//
//  Created by 周勇 on 2017/7/13.
//  Copyright © 2017年 TouCool. All rights reserved.
//

#ifndef TCMacroProtocol_h
#define TCMacroProtocol_h
#import <Foundation/Foundation.h>

static NSString *const TCPlatform                                    = @"ios";///< 平台

static NSString *const TCResponseCode                                = @"code";///< 返回code key
static NSString *const TCResponseMsg                                 = @"msg";///< 返回msg key
static NSString *const TCResponseTs                                  = @"ts";///< 返回ts key

static NSString *const TCPostBodyKey                                 = @"postBody";///< postBody 上传文件内容key @{@"filename": @[@"file1", @"file2", @"file3"], @"file":@[image1, image12, image13], @"fileType":@"image/jpg"}
static NSString *const TCPostNameKey                                 = @"postname";///< postname 上传文件名key 服务器接收名称
static NSString *const TCPostFileKey                                 = @"postFile";///< postFile 上传文件内容key

static NSString *const TCPostFileTypeKey                             = @"fileType";///< fileType 文件类型
static NSString *const TCPostFileTypeImageKey                        = @"image/jpg";///< image/jpg 上传文件类型-图片 @"video/mp4" @"image/png" @"image/jpg" @"multipart/form-data"
static NSString *const TCPostFileTypeAudioKey                        = @"application/octet-stream";///< application/octet-stream 上传文件类型-音频 @"application/octer-stream" @"application/octet-stream" @"amr/mp3/wmr"
static NSString *const TCPostFileTypeVideoKey                        = @"video/mp4";///< 上传文件类型-视频 @"video/mp4"
static NSString *const TCPostFileTypeDocumentKey                     = @"document";///< 上传文件类型-文档

/* ------ CODE ------ */
static NSUInteger const TCCODE_SUCCESS                               = 0;///< 0：正常
static NSUInteger const TCCODE_FAIL_REQ_PARA_ERROR                   = 400;///< 400：请求参数错误
static NSUInteger const TCCODE_FAIL_SIGN_VERIFY_FAIL                 = 401;///< 401：签名校验失败   -   token失效或者被解绑被挤下线
static NSUInteger const TCCODE_FAIL_AUTH_SET_REJECT                  = 403;///< 403：权限设置原因拒绝请求
static NSUInteger const TCCODE_FAIL_SYS_INERROR                      = 500;///< 500：系统服务内部错误
static NSUInteger const TCCODE_FAIL_MOBILE_UNBIND                    = 502;///< 502：手机已解绑，且未上报硬件mac信息   -   需要用户复制Mac地址后登入
static NSUInteger const TCCODE_FAIL_NeedChangeDevice                 = 504;///< 504：帐号已绑定其他手机(imei不匹配）  引导用户去更换手机



#pragma mark - ---- 通用接口 ----
/* ------ 通用接口 : 通用接口 ------ */
static NSString *const TCMethodDeviceinfo_upload                     = @"deviceinfo/upload";///< POST-common/deviceinfo/upload上报硬件信息
static NSString *const TCMethodGetsmscode                            = @"getsmscode";///< POST-common/getsmscode 获取手机号验证码
static NSString *const TCMethodSchool_list                           = @"school/list";///< GET-common/school/list 获取学校列表


#pragma mark - 学生接口
/* ------ 校长直通车相关接口 ------ */
static NSString *const TCMethodPresidentmsg_detail                   = @"presidentmsg/detail";///< POST-stud/presidentmsg/detail 获取直通车单个信息
static NSString *const TCMethodPresidentmsg_list                     = @"presidentmsg/list";///< POST-stud/presidentmsg/list 获取校长直通车列表
static NSString *const TCMethodPresidentmsg_new                      = @"presidentmsg/new";///< POST-stud/presidentmsg/new 发送校长直通车

/* ------ 学生登陆注册绑定接口 ------ */
static NSString *const TCMethodBind                                  = @"bind";///< POST-stud/bind 学生绑定
static NSString *const TCMethodChangephone                           = @"changephone";///< POST-stud/changephone 更换录陆手机好
static NSString *const TCMethodChangeDevice                          = @"changedevice";///< POST /api/1.0/stud/changedevice 更换登录手机设备
static NSString *const TCMethodChangepwd                             = @"changepwd";///< POST /api/1.0/stud/changepwd 修改登录密码
static NSString *const TCMethodLogin                                 = @"login";///< POST-stud/login 登录
static NSString *const TCMethodRegister                              = @"register";///< POST-stud/register 学生注册
static NSString *const TCMethodResetpwd                              = @"resetpwd";///< POST-stud/resetpwd 重置密码

/* ------ 学生实习相关接口 ------ */
static NSString *const TCMethodInternship_sign_detail                = @"internship/sign/detail";///< POST-stud/internship/sign/detail 获取实习签到详情
static NSString *const TCMethodInternship_sign_list                  = @"internship/sign/list";///< POST-stud/internship/sign/list 按月获取实习签到列表
static NSString *const TCMethodInternship_signin                     = @"internship/signin";///< POST-stud/internship/signin 学生实习签到

/* ------ 学生用户相关接口 ------ */
static NSString *const TCMethodSigninfo_detail                       = @"signinfo/detail";///< POST-stud/signinfo/detail 获取学生作息信息


/* ------ 学生作息签到接口 ------ */
static NSString *const TCMethodRest_sign_detail                      = @"rest/sign/detail";///< POST-stud/rest/sign/detail 获取签到详情
static NSString *const TCMethodRest_sign_list                        = @"rest/sign/list";///< POST-stud/rest/sign/list 按月获取作息签到列表
static NSString *const TCMethodRest_signin                           = @"rest/signin";///< POST-stud/rest/signin 学生作息签到

/* ------ 学生sos相关接口 ------ */
static NSString *const TCMethodSos_new                               = @"sos/new";///< POST-stud/sos/new sos发起求助
static NSString *const TCMethodSos_reportloc                         = @"sos/reportloc";///< POST-stud/sos/reportloc sos救援位置定时上报
static NSString *const TCMethodSos_reportvoice                       = @"sos/reportvoice";///< POST-stud/sos/reportvoice sos救援语音定时上报
static NSString *const TCMethodSos_stop                              = @"sos/stop";///< POST-stud/sos/stop sos救援终止

/* ------ 个人信息接口 ------ */
static NSString *const TCMethodUserinfo_detail                       = @"userinfo/detail";///< POST-stud/userinfo/detail 学生-获取个人信息[todo]
static NSString *const TCMethodUserinfo_update                       = @"userinfo/update";///< POST-stud/userinfo/update 学生-更新个人信息[todo]
static NSString *const TCMethodUserinfo                              = @"userinfo";///< 老师-获取个人信息
static NSString *const TCMethodAppissue_report                       = @"appissue/report";///< 上报用户反馈

#pragma mark - 教师接口
/* ------ 教职工查询SOS接口 ------ */
static NSString *const TCMethodSos_active                            = @"sos/active";///< GET /api/1.0/teacher/sos/active 获取SOS当前需要救援的SOS（老师登出后查询/sosStatus=1）
static NSString *const TCMethodSos_detail                            = @"sos/detail";///< GET /api/1.0/teacher/sos/detail 查看历史救援详情
static NSString *const TCMethodSos_latest                            = @"sos/latest";///< GET /api/1.0/teacher/sos/latest SOS 最新信息（app定时查询更新）
static NSString *const TCMethodSos_list                              = @"sos/list";///< GET /api/1.0/teacher/sos/list 获取SOS列表

/* ------ 教职工查询作息打卡信息接口 ------ */
static NSString *const TCMethodRest_sign_approve                     = @"rest/sign/approve";///< GET /api/1.0/teacher/rest/sign/approve 录入作息打卡签到跟进信息
//static NSString *const TCMethodRest_sign_detail                      = @"rest/sign/detail";///< GET /api/1.0/teacher/rest/sign/detail 获取签到详情
static NSString *const TCMethodRest_singin_list                      = @"rest/singin/list";///< GET /api/1.0/teacher/rest/singin/list 获取作息打卡学生信息（按机构 状态 时间段查询）
static NSString *const TCMethodRest_statistics                       = @"rest/statistics";///< GET /api/1.0/teacher/rest/statistics 按机构获取作息安全统计信息
static NSString *const TCMethodRest_unusual_class_ranklist           = @"rest/unusual/class/ranklist";///< GET /api/1.0/teacher/rest/unusual/class/ranklist 异常统计分析-获取班级学生异常排行
static NSString *const TCMethodRest_unusual_class_statistics         = @"rest/unusual/class/statistics";///< GET /api/1.0/teacher/rest/unusual/class/statistics 异常统计分析-获取班级统计信息
static NSString *const TCMethodRest_unusual_college_statistics       = @"rest/unusual/college/statistics";///< GET /api/1.0/teacher/rest/unusual/college/statistics 异常统计分析-获取学院统计信息
static NSString *const TCMethodRest_unusual_student_days             = @"rest/unusual/student/days";///< GET /api/1.0/teacher/rest/unusual/student/days 异常统计分析-获取学生异常打卡日期列表

/* ------ 教职工查询实习签到信息接口 ------ */
static NSString *const TCMethodInternship_sign_approve               = @"internship/sign/approve";///< GET /api/1.0/teacher/internship/sign/approve 录入实习打卡签到跟进信息
//static NSString *const TCMethodInternship_sign_detail                = @"internship/sign/detail";///< GET /api/1.0/teacher/internship/sign/detail 获取单次学生实习打卡详情
static NSString *const TCMethodInternship_singin_list                = @"internship/singin/list";///< GET /api/1.0/teacher/internship/singin/list 获取作息实习打卡学生信息（按机构 状态 时间段查询）
static NSString *const TCMethodInternship_statistics                 = @"internship/statistics";///< GET /api/1.0/teacher/internship/statistics 按机构获取实习安全统计信息(按学校机构）
static NSString *const TCMethodInternship_statistics_company         = @"internship/statistics/company";///< GET /api/1.0/teacher/internship/statistics/company 按机构获取实习安全统计信息(按公司）
static NSString *const TCMethodInternship_unusual_class_ranklist     = @"internship/unusual/class/ranklist";///< GET /api/1.0/teacher/internship/unusual/class/ranklist 实习打卡统计信息-获取班级学生异常排行
static NSString *const TCMethodInternship_unusual_class_statistics   = @"internship/unusual/class/statistics";///< GET /api/1.0/teacher/internship/unusual/class/statistics 获取异常实习打卡统计信息（按班级）
static NSString *const TCMethodInternship_unusual_college_statistics = @"internship/unusual/college/statistics";///< GET /api/1.0/teacher/internship/unusual/college/statistics 获取异常实习打卡统计信息（按学院）
static NSString *const TCMethodInternship_unusual_student_days       = @"internship/unusual/student/days";///< GET /api/1.0/teacher/internship/unusual/student/days 实习打卡统计信息-获取学生异常打卡日期列表
static NSString *const TCMethodInternship_userinfo                   = @"internship/userinfo";///< GET /api/1.0/teacher/internship/userinfo 获取老师实习单位信息

/* ------ 教职工登陆接口 ------ */
//static NSString *const TCMethodAppissue_report                       = @"appissue/report";///< POST /api/1.0/teacher/appissue/report 上报用户反馈
//static NSString *const TCMethodChangephone                           = @"changephone";///< POST /api/1.0/teacher/changephone 更换登陆手机号
//static NSString *const TCMethodChangepwd                             = @"changepwd";///< POST /api/1.0/teacher/changepwd 修改密码
//static NSString *const TCMethodLogin                                 = @"login";///< POST /api/1.0/teacher/login 登录
//static NSString *const TCMethodResetpwd                              = @"resetpwd";///< POST /api/1.0/teacher/resetpwd 忘记密码
//static NSString *const TCMethodUserinfo                              = @"userinfo";///< GET /api/1.0/teacher/userinfo 获取老师组织机构信息
//static NSString *const TCMethodUserinfo_detail                       = @"userinfo/detail";///< POST /api/1.0/teacher/userinfo/detail 获取个人信息
//static NSString *const TCMethodUserinfo_update                       = @"userinfo/update";///< POST /api/1.0/teacher/userinfo/update 更新个人信息

/* ------ 设备相关统计报表接口 ------ */
static NSString *const TCMethodDevicestats_absentschool_detail       = @"devicestats/absentschool/detail";///< GET /api/1.0/teacher/devicestats/absentschool/detail 获取严重逃课详细信息
static NSString *const TCMethodDevicestats_absentschool_list         = @"devicestats/absentschool/list";///< GET /api/1.0/teacher/devicestats/absentschool/list 获取严重逃课统计信息
static NSString *const TCMethodDevicestats_indoor_detail             = @"devicestats/indoor/detail";///< GET /api/1.0/teacher/devicestats/indoor/detail 获取超级宅详细信息
static NSString *const TCMethodDevicestats_indoor_list               = @"devicestats/indoor/list";///< GET /api/1.0/teacher/devicestats/indoor/list 获取超级宅统计信息
static NSString *const TCMethodDevicestats_losscontact_list          = @"devicestats/losscontact/list";///< GET /api/1.0/teacher/devicestats/losscontact/list 获取学生失联统计信息
static NSString *const TCMethodDevicestats_unusualout_detail         = @"devicestats/unusualout/detail";///< GET /api/1.0/teacher/devicestats/unusualout/detail 获取异常出入详细信息
static NSString *const TCMethodDevicestats_unusualout_list           = @"devicestats/unusualout/list";///< GET /api/1.0/teacher/devicestats/unusualout/list 获取异常出入统计信息


/* ------ 设备数据上报接口 ------ */
static NSString *const TCMethodDevice_uploaddata                     = @"device/uploaddata";///< POST /api/1.0/device/uploaddata 设备数据上报

#endif /* TCMacroProtocol_h */






