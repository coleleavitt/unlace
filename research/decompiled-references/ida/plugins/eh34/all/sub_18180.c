__int64 __fastcall sub_18180(__int64 a1, __int64 a2, double a3)
{
  _QWORD v4[3]; // [rsp+0h] [rbp-48h] BYREF
  char v5; // [rsp+18h] [rbp-30h]
  unsigned __int64 v6; // [rsp+28h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_3CDF0(v4, a1 + 792, a2);
  if ( v5 )
  {
    sub_17F40(a1, (__int64)"[WARN] microcode(%a): %s\n", a3, *(const char **)(a2 + 40));
    if ( v5 )
    {
      if ( v4[0] )
      {
        v4[1] = 0;
        qfree(v4[0]);
      }
    }
  }
  return 0;
}

