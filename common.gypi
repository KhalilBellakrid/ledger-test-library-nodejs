{
  'target_defaults': {
    'default_configuration': 'Debug',
    'cflags': ['-Wall', '-fvisibility=hidden'],
    'cflags_cc': [ '<@(_cflags)', '-std=c++14', '-fexceptions', '-frtti' ],
    'xcode_settings': {
      'OTHER_CFLAGS' : ['<@(_cflags)'],
      'OTHER_CPLUSPLUSFLAGS' : ['<@(_cflags_cc)'],
      'CLANG_CXX_LANGUAGE_STANDARD': 'c++14',
      'CLANG_CXX_LIBRARY': 'libc++',
      'CLANG_ENABLE_OBJC_ARC': 'YES',
    },
    'conditions': [
      ['OS=="ios"',
        {
          'xcode_settings' : {
            'SDKROOT': 'iphoneos',
            'SUPPORTED_PLATFORMS': 'iphonesimulator iphoneos',
          },
        }
      ],
      ['OS=="mac"',
        {
          'xcode_settings+' : {
            'SDKROOT': 'macosx',
          },
        }
      ],
    ],
    'configurations': {
      'Debug': {
        'defines': [ 'DEBUG' ],
        'cflags' : [ '-g', '-O0' ],
        'xcode_settings' : {
          'GCC_OPTIMIZATION_LEVEL': '0',
          'ONLY_ACTIVE_ARCH': 'YES',
        },
      },
      'Release': {
        'defines': [ 'NDEBUG' ],
        'cflags': [
          '-Os',
          '-fomit-frame-pointer',
          '-fdata-sections',
          '-ffunction-sections',
        ],
        'cflags_cc': [ '<@(_cflags)', '-std=c++14', '-fexceptions', '-frtti' ],
        'xcode_settings': {
          'DEAD_CODE_STRIPPING': 'YES',
        },
      },
    },
  },
}