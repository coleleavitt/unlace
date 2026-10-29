unsigned __int64 __fastcall sub_33C260(double a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  _DWORD *v6; // r13
  const char *v7; // r14
  const char *v9; // rax
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v4 = *(_DWORD *)(a4 + 8) == -1;
  v12 = __readfsqword(0x28u);
  if ( v4 && !batch )
  {
    v6 = (_DWORD *)(a4 + 8);
    sub_383450(*(_QWORD *)(a3 + 112), a4 + 8, 0);
  }
  else
  {
    v6 = (_DWORD *)(a4 + 8);
    sub_3310F0((__int64)&v10, (_DWORD *)(a4 + 8), a1);
    sub_6D0A0((__int64)"%a: %s\n", a1, *(const char **)(a4 + 16));
    if ( !batch )
      sub_2B4E70(
        (__int64)"Decompilation failure:\n%a: %s\n\nPlease refer to the manual to find appropriate actions",
        a1,
        *(const char **)(a4 + 16));
    if ( v10 )
    {
      v11 = 0;
      qfree(v10);
    }
  }
  if ( (BYTE1(*(_DWORD *)(a3 + 1336)) & 0x80u) != 0 )
  {
    v7 = s1;
    if ( *(_QWORD *)(a3 + 1320) )
      v7 = *(const char **)(a3 + 1312);
    if ( qfopen() )
    {
      sub_3310F0((__int64)&v10, v6, a1);
      sub_66AC0();
      if ( v10 )
      {
        v11 = 0;
        qfree(v10);
      }
      qfclose();
    }
    else
    {
      v9 = (const char *)qerrstr();
      sub_2B4E70((__int64)"%s: %s", v7, v9);
    }
    qexit();
  }
  return v12 - __readfsqword(0x28u);
}

