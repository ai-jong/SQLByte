# SQLByte

![SQLByte: Elegant Networking in Swift](nvidia.png)

SQLByte provides a powerful interface for integrating Gemini artificial intelligence capabilities into your iOS app, enabling seamless communication with advanced AI models.

- [Features](#features)
- [Installation](#installation)
- [Example](#example)
- [License](#license)
- [Contact](#contact)

## Features
- [x] Easy communication with Gemini AI for generating responses.
- [x] Robust handling of machine learning outputs and AI-driven results.
      
## Installation
### CocoaPods
[CocoaPods](https://cocoapods.org) is a dependency manager for Cocoa projects.<br> 
For usage and installation instructions, visit their website.<br> 
To integrate SQLByte into your Xcode project using CocoaPods, <br> specify it in your `Podfile`:

```ruby
platform :ios, '14.0'
use_frameworks!

target 'SQLByteExample' do
  pod "SQLByte", :git => 'https://github.com/ai-jong/SQLByte.git', :branch => 'main'
# pod 'SQLByte', :path => '../SQLByte/Release'
end

```

## Example
SQLByte's compact syntax and extensive feature set allow requests with powerful features like automatic retry to be written in just a few lines of code.

```swift
import SQLByte

func SQLByteTest() {
  var sqlByte = SQLByte(db: "test")
        
  sqlByte.query("CREATE TABLE IF NOT EXISTS Person(Name TEXT, Birth TEXT, Age REAL);") { (result : Dictionary) in
  }
        
  sqlByte.query("INSERT INTO Person(Name, Birth, Age) VALUES('Jon', '$Time', 21.5);") { (result : Dictionary) in
  }
        
  sqlByte.select("SELECT * FROM Person;") { (result : NSMutableArray) in
  }
}

```

## License
SQLByte is released under the MIT license.

## Contact
- [x] Author: John W. Blaine
- [x] Email: john.w.blaine@gmail.com
