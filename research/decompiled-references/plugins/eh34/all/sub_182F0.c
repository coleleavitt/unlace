__int64 __fastcall sub_182F0(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  unsigned int v4; // ebx
  _QWORD v6[3]; // [rsp+0h] [rbp-48h] BYREF
  char v7; // [rsp+18h] [rbp-30h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  sub_3CBC0(v6, a1 + 792, a2, a3);
  if ( v7 )
  {
    sub_17F40(a1, (__int64)"[WARN] begin_inlining(%a): %s\n", a4, *(const char **)(*(_QWORD *)(a2 + 8) + 40LL));
    v4 = *(_DWORD *)(a1 + 2780);
    if ( v7 && v6[0] )
    {
      v6[1] = 0;
      qfree(v6[0]);
    }
  }
  else
  {
    return LODWORD(v6[0]);
  }
  return v4;
}
