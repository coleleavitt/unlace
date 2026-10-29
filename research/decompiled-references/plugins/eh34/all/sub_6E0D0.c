__int64 __fastcall sub_6E0D0(__int64 a1, const char *a2)
{
  __int64 v2; // r13
  const char *v3; // r12
  __int64 v4; // rbx
  void (__fastcall *hexdsp)(__int64, _QWORD *, __int64, __int64, _QWORD); // rax
  unsigned __int8 (__fastcall *v6)(__int64, _QWORD *, const char *); // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *, const char *); // rax
  char v10; // al
  _QWORD v11[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v2 = a1;
  v3 = a2;
  v14 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 56);
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    v11[0] = 0;
    v11[1] = 0;
    v12 = 0;
    v13 = 0;
    hexdsp = (void (__fastcall *)(__int64, _QWORD *, __int64, __int64, _QWORD))get_hexdsp(a1, a2);
    hexdsp(376, v11, v2, v4, 0);
    v6 = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, const char *))get_hexdsp(376, (const char *)v11);
    if ( v6(223, v11, v3) )
    {
      v7 = v12;
      if ( !v12 )
        goto LABEL_5;
      goto LABEL_4;
    }
    v9 = (__int64 (__fastcall *)(__int64, __int64 *, const char *))get_hexdsp(223, (const char *)v11);
    a2 = (const char *)&v12;
    v10 = v9(235, &v12, v3 + 16);
    v7 = v12;
    if ( v10 )
      break;
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12);
    }
    a1 = v11[0];
    qfree(v11[0]);
    v4 = *(_QWORD *)(v4 + 16);
    if ( !v4 )
      return 0;
  }
  if ( v12 )
  {
LABEL_4:
    *(_QWORD *)&v13 = 0;
    qfree(v7);
  }
LABEL_5:
  qfree(v11[0]);
  return v4;
}
