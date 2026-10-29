__int64 sub_12F50()
{
  _QWORD v1[3]; // [rsp+0h] [rbp-18h] BYREF

  v1[1] = __readfsqword(0x28u);
  netnode_check(v1, "$ BootstrapMethods ~", 0, 0);
  if ( !(unsigned __int8)netnode_exist(v1) )
  {
    if ( !under_debugger )
      interr(10333, "$ BootstrapMethods ~");
    BUG();
  }
  return netnode_altval(v1[0], 0, 65);
}

