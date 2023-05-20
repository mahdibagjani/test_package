import 'package:flutter_test/flutter_test.dart';
import 'package:untitled1/untitled1.dart';
import 'package:untitled1/untitled1_platform_interface.dart';
import 'package:untitled1/untitled1_method_channel.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

class MockUntitled1Platform
    with MockPlatformInterfaceMixin
    implements Untitled1Platform {

  @override
  Future<String?> getPlatformVersion() => Future.value('42');
}

void main() {
  final Untitled1Platform initialPlatform = Untitled1Platform.instance;

  test('$MethodChannelUntitled1 is the default instance', () {
    expect(initialPlatform, isInstanceOf<MethodChannelUntitled1>());
  });

  test('getPlatformVersion', () async {
    Untitled1 untitled1Plugin = Untitled1();
    MockUntitled1Platform fakePlatform = MockUntitled1Platform();
    Untitled1Platform.instance = fakePlatform;

    expect(await untitled1Plugin.getPlatformVersion(), '42');
  });
}
