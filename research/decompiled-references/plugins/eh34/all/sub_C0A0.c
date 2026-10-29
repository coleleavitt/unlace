__int64 __fastcall sub_C0A0(__int64 a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // r12
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64 *); // rax
  __int64 (__fastcall *v6)(__int64, __int64 *, _QWORD); // rax
  unsigned int i; // eax
  void (__fastcall *v8)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v9)(__int64, __int64 *, _QWORD); // rax
  unsigned int v10; // r13d
  __int64 v11; // r14
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD); // rax
  unsigned int j; // r13d
  void (__fastcall *v14)(__int64, __int64 *, __int64); // rax
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v16)(__int64, __int64 *, _QWORD); // rax
  __int64 v17; // rax
  unsigned int k; // r14d
  void (__fastcall *v19)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v20)(__int64, __int64 *, _QWORD); // rax
  __int64 v22; // [rsp+8h] [rbp-70h]
  __int64 v23; // [rsp+10h] [rbp-68h] BYREF
  int v24; // [rsp+18h] [rbp-60h]
  __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 64);
  v27 = __readfsqword(0x28u);
  v3 = 16LL * a2;
  v4 = v3 + v2;
  sub_BEB0(&v23, (_BYTE *)a1, a2);
  hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64 *))get_hexdsp();
  if ( !hexdsp(217, &v23) )
  {
    v6 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp();
    for ( i = v6(227, &v23, 0); ; i = v9(227, &v23, v10 + 1) )
    {
      v10 = i;
      if ( v24 == i )
        break;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL * (int)i) != a2 )
      {
        v8 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp();
        v8(205, v4, v10);
      }
      v9 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp();
    }
    v25 = 0;
    v11 = *(_QWORD *)(a1 + 40) + v3;
    v26 = 0;
    v12 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp();
    for ( j = v12(227, v11, 0); *(_DWORD *)(v11 + 8) != j; j = v15(227, v11, j + 1) )
    {
      v22 = sub_C0A0(a1, j);
      v14 = (void (__fastcall *)(__int64, __int64 *, __int64))get_hexdsp();
      v14(207, &v25, v22);
      v15 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp();
    }
    v16 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp();
    LODWORD(v17) = v16(227, &v25, 0);
    for ( k = v17; (_DWORD)v26 != (_DWORD)v17; k = v17 )
    {
      v17 = (int)v17;
      if ( a2 != k )
      {
        while ( (_DWORD)v17 != -1 )
        {
          LODWORD(v17) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v17);
          if ( a2 == (_DWORD)v17 )
            goto LABEL_15;
        }
      }
      v19 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp();
      v19(205, v4, k);
LABEL_15:
      v20 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp();
      LODWORD(v17) = v20(227, &v25, k + 1);
    }
    qfree(v25);
  }
  qfree(v23);
  return v4;
}
