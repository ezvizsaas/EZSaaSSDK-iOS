#
# Be sure to run `pod lib lint EZSaaSSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'EZSaaSSDK'
  s.version          = '1.0.0'
  s.summary          = 'SDK opened from EZSaaS to help customer connect with EZSaaS service'
  s.description      = 'EZSaaSSDK is opened from EZVIZ Hangzhou Co,.Ltd'

  s.homepage         = 'https://github.com/ezvizsaas/EZSaaSSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'ezvizsaas' => 'zhangkepei@hikvision.com' }
  s.source           = { :git => 'https://github.com/BossKinKa/EZSaaSSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'EZSaaSSDK/Classes/**/*'
  s.resources = 'EZSaaSSDK/Resource/*'
  s.dependency 'AFNetworking'
  s.dependency 'Masonry'
  s.dependency 'ReactiveObjC'
  s.dependency 'SDWebImage'
  s.dependency 'IQKeyboardManager'
  s.dependency 'WebViewJavascriptBridge'
  s.dependency 'FMDB'
  s.dependency 'EZOpenSDK'
  s.vendored_frameworks = 'EZSaaSSDK/Framework/*.framework'
end
