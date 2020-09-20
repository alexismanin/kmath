import org.jetbrains.kotlin.gradle.tasks.KotlinCompile

plugins {
    java
    kotlin("jvm")
    kotlin("plugin.allopen") version "1.4.20-dev-3898-14"
    id("kotlinx.benchmark") version "0.2.0-dev-20"
}

allOpen.annotation("org.openjdk.jmh.annotations.State")

repositories {
    maven("https://dl.bintray.com/mipt-npm/scientifik")
    maven("https://dl.bintray.com/mipt-npm/dev")
    maven("https://dl.bintray.com/kotlin/kotlin-dev/")
    mavenCentral()
}

sourceSets.register("benchmarks")

dependencies {
//    implementation(project(":kmath-ast"))
    implementation(project(":kmath-core"))
    implementation(project(":kmath-coroutines"))
    implementation(project(":kmath-commons"))
    implementation(project(":kmath-prob"))
    implementation(project(":kmath-viktor"))
    implementation(project(":kmath-dimensions"))
    implementation("org.jetbrains.kotlinx:kotlinx-io-jvm:0.2.0-npm-dev-6")
    implementation("org.jetbrains.kotlinx:kotlinx.benchmark.runtime:0.2.0-dev-20")
    "benchmarksCompile"(sourceSets.main.get().output + sourceSets.main.get().compileClasspath) //sourceSets.main.output + sourceSets.main.runtimeClasspath
}

// Configure benchmark
benchmark {
    // Setup configurations
    targets
        // This one matches sourceSet name above
        .register("benchmarks")

    configurations.register("fast") {
        warmups = 5 // number of warmup iterations
        iterations = 3 // number of iterations
        iterationTime = 500 // time in seconds per iteration
        iterationTimeUnit = "ms" // time unity for iterationTime, default is seconds
    }
}

kotlin.sourceSets.all {
    with(languageSettings) {
        useExperimentalAnnotation("kotlin.contracts.ExperimentalContracts")
        useExperimentalAnnotation("kotlin.ExperimentalUnsignedTypes")
    }
}

tasks.withType<KotlinCompile> { kotlinOptions.jvmTarget = "11" }
