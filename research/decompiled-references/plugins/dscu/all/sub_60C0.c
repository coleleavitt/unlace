__int64 __fastcall sub_60C0(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[1] = __readfsqword(0x28u);
  if ( a2 == 95 )
  {
    netnode_check(v3, "$ dscu", 0, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL) = v3[0];
  }
  return 0;
}
