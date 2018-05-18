Pod::Spec.new do |s|
s.name                = "OGBleSdk"
s.version             = "0.0.1"
s.summary             = 'OGAWA物联开放平台SDK'
s.license             = 'Copyright © 2012-2018'
s.author              = { "ogawaapp" => "ogawaapp@163.com" }
s.homepage            = 'https://github.com/ogawaapp/OGBleSdk'
s.source              = { :git => "https://github.com/ogawaapp/OGBleSdk.git", :tag => s.version.to_s }
s.platform            = :ios, '8.0'
s.frameworks          = "JavaScriptCore"
s.libraries           = "z", "stdc++"
s.vendored_frameworks = 'OGBleSdk.framework'
end
