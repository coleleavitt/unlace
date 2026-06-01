__int64 __fastcall sub_19E1E0(__int64 a1, __m128i a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // edx
  __int64 v14; // rax
  char v15[16]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v16[8]; // [rsp+10h] [rbp-40h] BYREF

  v16[3] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 8) || (v6 = *(_QWORD *)(a1 + 24)) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC9C0u, *(double *)a2.m128i_i64);
LABEL_20:
    BUG();
  }
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL) + 8LL);
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 && *(_BYTE *)v8 == 2 )
  {
    v14 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL), *(_DWORD *)(v8 + 4), 1);
    v6 = *(_QWORD *)(a1 + 24);
    v7 += v14;
  }
  sub_123A40((__int64)v15, (unsigned __int8 *)v6, a4, a5);
  v9 = *(_QWORD *)(a1 + 8) == 0;
  v16[1] = 0;
  v16[0] = 0xFFFFFFFF00000000LL;
  if ( v9 || !*(_QWORD *)(a1 + 24) )
  {
    if ( !under_debugger )
      sub_383060(0xC9BFu, *(double *)a2.m128i_i64);
    goto LABEL_20;
  }
  v10 = *(_QWORD *)(a1 + 32);
  if ( v10 && *(_BYTE *)v10 == 2 && sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL), *(_DWORD *)(v10 + 4), 1) )
    sub_125180((unsigned __int8 *)v16, *(unsigned __int8 **)(a1 + 32));
  sub_11CA10((char *)(*(_QWORD *)(a1 + 16) + 32LL), v15);
  sub_11CA10((char *)(*(_QWORD *)(a1 + 16) + 48LL), (char *)v16);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = 12;
  if ( !*(_BYTE *)(v11 + 48) )
    v12 = 4;
  *(_DWORD *)v11 = v12;
  sub_15BC70(*(unsigned int **)(a1 + 16), *(unsigned __int8 **)a1, 0, 0, nullptr, nullptr, a2, a6, 0);
  sub_11CDA0((__int64)v16);
  sub_11CDA0((__int64)v15);
  return v7;
}

