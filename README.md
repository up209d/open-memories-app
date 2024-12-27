# Sony Open Memories App #

Experiment with Sony PlayMemories Android App by OpenMemories framework

## Installation ##
Install it here: [sony-pmca.appspot.com/apps](https://sony-pmca.appspot.com/apps)

## Requirements ##
Android Studio 2024.1.1
Configure Android Studio > Gradle JDK as Temurin `1.8` - Java 8 `1.8.0_422`
Using NDK `21.4.7075529`
Using Cmake `3.22.1`
Using BuildTools `30.0.2`

`local.properties`
```
sdk.dir=C\:\\Users\\UP\\AppData\\Local\\Android\\Sdk
ndk.dir=C\:\\Users\\UP\\AppData\\Local\\Android\\Sdk\\ndk\\21.4.7075529
org.gradle.java.home=C\:\\Program Files\\Java\\jdk1.8.0_421
```

## Build App ##
```bash
./gradlew build
```
