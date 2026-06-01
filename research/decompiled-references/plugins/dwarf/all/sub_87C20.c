__int64 __fastcall sub_87C20(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // rax
  unsigned __int64 v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 i; // rax
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // r10
  unsigned __int64 v15; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v16[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = a1[11];
  v16[1] = __readfsqword(0x28u);
  v15 = 0;
  v16[0] = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int64 *, _QWORD *))(v2 + 72))(a2, &v15, v16) )
  {
    v3 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(a1[11] + 464LL))(v16[0]);
    sub_1D740((__int64)"ERROR: %s\n", v3);
  }
  v4 = v15;
  v5 = a1 + 38;
  if ( (*(unsigned int (__fastcall **)(__int64))(a1[11] + 48LL))(a2) )
    v5 = a1 + 35;
  v6 = *v5;
  v7 = *v5;
  v8 = 264 * v5[1];
  for ( i = 0xF83E0F83E0F83E1LL * (v8 >> 3); i > 0; i = i - 1 - v10 )
  {
    while ( 1 )
    {
      v10 = i >> 1;
      v11 = v7 + 264 * (i >> 1);
      v12 = *(_QWORD *)(v11 + 224);
      v13 = v12 & 0x7FFFFFFFFFFFFFFFLL;
      if ( v12 == -1 || !v13 )
      {
        if ( under_debugger )
          BUG();
        v7 = 30478;
        i = interr(30478);
      }
      if ( v13 < v4 )
        break;
      i = v10;
      if ( v10 <= 0 )
        goto LABEL_13;
    }
    v7 = v11 + 264;
  }
LABEL_13:
  if ( v7 == v8 + v6 )
    return 0;
  return v7;
}
