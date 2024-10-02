# SQLByte

![SQLByte: Elegant Networking in Swift](nvidia.png)

SQLByte provides a powerful interface for synchronizing and executing queries on a SQLite database. It acts as a wrapper that simplifies interaction with a local SQLite database, ensuring efficient handling of persistent local storage.

- [Features](#features)
- [Installation](#installation)
- [Example](#example)
- [License](#license)
- [Contact](#contact)

## Features
- [x] SQLite Query Execution: Easily execute SQL queries on a local SQLite database.
- [x] Persistent Local Storage: Manage long-term data storage on the device, with or without synchronization with a remote storage system.
- [x] Convenience Methods: Simplifies the processes of reading, writing, updating, and deleting data.

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
