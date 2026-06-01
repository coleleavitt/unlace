unsigned __int64 __fastcall sub_3349E0(double a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v6; // r13
  const char *v7; // r14
  __int64 v8; // rdx
  const char *v10; // rax
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v4 = *(_DWORD *)(a4 + 8) == -1;
  v13 = __readfsqword(0x28u);
  if ( v4 && !batch )
  {
    v6 = a4 + 8;
    sub_37BB50(*(_QWORD *)(a3 + 112), a4 + 8, 0);
  }
  else
  {
    v6 = a4 + 8;
    sub_329A90((__int64)&v11, a4 + 8, a4);
    sub_66B20((__int64)"%a: %s\n", a1, *(const char **)(a4 + 16));
    if ( !batch )
      sub_2ADAF0(
        (__int64)"Decompilation failure:\n%a: %s\n\nPlease refer to the manual to find appropriate actions",
        a1,
        *(const char **)(a4 + 16));
    if ( v11 )
    {
      v12 = 0;
      qfree();
    }
  }
  if ( (BYTE1(*(_DWORD *)(a3 + 1336)) & 0x80u) != 0 )
  {
    v7 = s1;
    if ( *(_QWORD *)(a3 + 1320) )
      v7 = *(const char **)(a3 + 1312);
    if ( qfopen() )
    {
      sub_329A90((__int64)&v11, v6, v8);
      sub_60540();
      if ( v11 )
      {
        v12 = 0;
        qfree();
      }
      qfclose();
    }
    else
    {
      v10 = (const char *)qerrstr();
      sub_2ADAF0((__int64)"%s: %s", v7, v10);
    }
    qexit();
  }
  return v13 - __readfsqword(0x28u);
}

