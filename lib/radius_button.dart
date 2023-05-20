import 'package:flutter/material.dart';

class RadiusButton extends StatelessWidget {
  const RadiusButton({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
      height: 50,
      width: 130,
      decoration: BoxDecoration(borderRadius: BorderRadius.circular(12), color: Colors.red.shade300),
      child: Text('I am a button from package'),
    );
  }
}
