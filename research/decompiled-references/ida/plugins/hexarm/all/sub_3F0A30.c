__int64 __fastcall sub_3F0A30(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // rax
  char *v5; // r14
  __int64 v6; // r12
  unsigned int v7; // ebx
  char *s1; // [rsp+0h] [rbp-118h] BYREF
  __int128 v10; // [rsp+8h] [rbp-110h]
  _QWORD v11[31]; // [rsp+20h] [rbp-F8h] BYREF

  v11[25] = __readfsqword(0x28u);
  s1 = nullptr;
  v10 = 0;
  v4 = sub_40E900(a3, &s1);
  v5 = s1;
  v6 = v4;
  if ( !s1 )
    return 0;
  *a2 = 0;
  if ( !v4 )
  {
    if ( !(unsigned __int8)sub_1D2B20(a1[100], a3, v5) )
    {
      if ( !sub_1D2CC0(v5) )
        goto LABEL_4;
      if ( !(unsigned __int8)func_does_return() )
      {
        *(_DWORD *)(a1[2] + 24LL) |= 0x2000u;
        *a2 = 1;
      }
    }
    goto LABEL_7;
  }
  if ( !(unsigned __int8)func_does_return() )
  {
LABEL_4:
    v7 = 0;
    goto LABEL_8;
  }
  sub_40D710(v11, a1[1], a1[5]);
  v11[23] = a1;
  v11[0] = &off_4E6480;
  if ( !(unsigned int)sub_40F630(v11, v6) )
  {
    *a2 = 1;
    v11[0] = &off_4E6480;
    sub_40D800(v11);
LABEL_7:
    v7 = 1;
    goto LABEL_8;
  }
  v7 = 0;
  v11[0] = &off_4E6480;
  sub_40D800(v11);
LABEL_8:
  if ( s1 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v7;
}

