#
# Be sure to run `pod lib lint CIOAuth.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'CIOAuth'
  s.version          = '0.1.18'
  s.summary          = 'A short description of CIOAuth.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/ladybirdDEV/CIOAuth'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'idbeny' => 'idbeny@163.com' }
  s.source           = { :git => 'https://github.com/ladybirdDEV/CIOAuth.git', :tag => s.version.to_s }
  
  s.ios.deployment_target = '13.0'
  
  s.static_framework = true

  s.pod_target_xcconfig = {
      'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = {
      'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  
  s.vendored_frameworks = "CIOAuth/CIOAuth.framework"
  
  s.dependency 'FBSDKLoginKit', '15.1.0'
  s.dependency 'GoogleSignIn', '7.0.0'
end
