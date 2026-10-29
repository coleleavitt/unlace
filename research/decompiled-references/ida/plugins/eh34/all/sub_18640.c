__int64 __fastcall sub_18640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, double a6)
{
  __int64 v10; // rdi
  _QWORD v12[3]; // [rsp+0h] [rbp-68h] BYREF
  char v13; // [rsp+18h] [rbp-50h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( a5 >= 0 )
  {
    a6 = 0.0;
    *(_QWORD *)(a1 + 744) = -1;
    v10 = a1 + 840;
    *(_WORD *)(v10 + 1936) = -256;
    *(_QWORD *)(v10 - 120) = -1;
    *(_QWORD *)(v10 - 56) = 0;
    *(_QWORD *)(v10 + 1928) = -1;
    *(_OWORD *)(v10 - 88) = 0;
    *(_OWORD *)(v10 - 72) = 0;
    sub_E700(v10);
    sub_65F10(a1 + 2152);
    *(_QWORD *)(a1 + 2780) = 0;
  }
  if ( !*(_BYTE *)(a1 + 736) )
  {
    if ( !(unsigned __int8)auto_is_ok() )
      return 0;
    sub_18480(a1);
  }
  if ( *(_QWORD *)(a1 + 744) == -1 )
    *(_QWORD *)(a1 + 744) = *(_QWORD *)(a2 + 40);
  sub_3C780(v12, a1 + 792, a2, a3, a4, (unsigned int)a5);
  if ( v13 )
  {
    sub_17F40(a1, (__int64)"AUTOHIDE REGISTRY\n[WARN] flowchart(%a): %s\n", a6, *(const char **)(a2 + 40));
    if ( v13 )
    {
      if ( v12[0] )
      {
        v12[1] = 0;
        qfree(v12[0]);
      }
    }
  }
  return 0;
}

