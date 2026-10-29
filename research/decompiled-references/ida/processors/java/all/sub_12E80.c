__int64 __fastcall sub_12E80(char a1, char a2)
{
  _QWORD v3[7]; // [rsp+0h] [rbp-38h] BYREF

  v3[1] = __readfsqword(0x28u);
  netnode_check(v3, "$ BootstrapMethods ~", 0, 0);
  if ( !a2 || (unsigned __int8)netnode_exist(v3) )
  {
    if ( !a1 )
      return v3[0];
  }
  else
  {
    netnode_check(v3, "$ BootstrapMethods ~", 0, 1);
    if ( !a1 )
      return v3[0];
  }
  if ( !(unsigned __int8)netnode_exist(v3) )
  {
    if ( !under_debugger )
      interr(10333, "$ BootstrapMethods ~");
    BUG();
  }
  return v3[0];
}

