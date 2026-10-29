__int64 sub_4E700()
{
  __int64 result; // rax
  __int64 v1; // rdx
  _QWORD v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  netnode_check(v2, "$ eh34 metadata", 0, 0);
  if ( v2[0] == -1 )
    return 1;
  v2[0] = sub_1DD10();
  v1 = netnode_altval(v2[0], 0, 65);
  result = 0;
  if ( v1 != 1 )
  {
    netnode_kill(v2);
    return 1;
  }
  return result;
}

