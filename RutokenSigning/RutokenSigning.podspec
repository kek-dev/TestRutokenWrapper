Pod::Spec.new do |spec|

  # Metadata
  spec.name = "RutokenSigning"
  spec.version = "1.0.0"
  spec.summary = "Библиотека для подписи документов токеном Рутокен"
  spec.description = "Библиотека для подписи документов токеном Рутокен"
  spec.homepage = "https://bitbucket.region.vtb.ru/"

  # License
  spec.license = "Common Development and Distribution License"

  # Author
  spec.author = { "Azat Biktimirov" => "abiktimirov@inno.tech" }

  # Platform
  spec.platform = :ios, "13.0"

  # Location
  spec.source = { :git => "" }

  # Sources
  spec.source_files = "RutokenSigning/**/*.{h,m}", "RutokenSigning/**/*.swift"

  # Linking
  spec.vendored_frameworks = "Frameworks/rtengine.framework", "Frameworks/RtPcsc.framework", "Frameworks/openssl.framework", "Frameworks/rtpkcs11ecp.framework"
end
