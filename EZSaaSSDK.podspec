Pod::Spec.new do |s|
  s.name             = 'EZSaaSSDK'
  s.version          = '1.0.0'
  s.summary          = 'SDK opened from EZSaaS to help customer connect with EZSaaS service'
  s.description      = 'EZSaaSSDK is opened from EZVIZ Hangzhou Co,.Ltd'

  s.homepage         = 'https://github.com/ezvizsaas/EZSaaSSDK-iOS'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'ezvizsaas' => 'zhangkepei@hikvision.com' }
  s.source           = { :git => 'https://github.com/ezvizsaas/EZSaaSSDK-iOS.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

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
