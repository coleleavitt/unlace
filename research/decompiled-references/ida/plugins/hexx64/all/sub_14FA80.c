__int64 __fastcall sub_14FA80(__int64 *a1, __m128i *a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rbp
  __int64 v7; // rsi
  _BYTE *v8; // rax
  _BYTE *v10; // rax
  _DWORD *v11; // rbp
  const __m128i *v12; // rdi
  __int64 v13; // rcx
  bool v14; // bp
  _QWORD *v15; // [rsp+0h] [rbp-38h] BYREF
  __int128 v16; // [rsp+8h] [rbp-30h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1206E0(a1[4]) )
    goto LABEL_21;
  a2 = (__m128i *)a1[2];
  if ( sub_11A5E0(a1[5], a2, a1[3], a1[4]) )
    goto LABEL_21;
  v11 = (_DWORD *)a1[4];
  if ( *v11 != 2 )
    return 0;
  if ( !a1[2] )
    return 1;
  a3 = 0.0;
  v15 = nullptr;
  v16 = 0;
  v15 = (_QWORD *)qvector_reserve((__int64)&v15, 0, 1, 8);
  v15[(_QWORD)v16] = v11;
  a2 = (__m128i *)a1[3];
  v12 = (const __m128i *)a1[2];
  *(_QWORD *)&v16 = v16 + 1;
  v14 = sub_A4C00(v12, (__int64)a2, (const void **)&v15, v13);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree((__int64)v15);
  }
  if ( v14 )
  {
LABEL_21:
    if ( a1[3] )
    {
      v6 = (_QWORD *)j__qalloc_or_throw(80, (__int64)a2, v4, v5);
      v7 = *(_QWORD *)(a1[4] + 24);
      v6[5] = 0;
      v6[4] = 0xFFFFFFFF00000000LL;
      v6[6] = 0xFFFFFFFF00000000LL;
      v6[7] = 0;
      v6[8] = 0xFFFFFFFF00000000LL;
      v6[9] = 0;
      sub_330970((__int64)v6, v7);
      sub_11D890((__int64)v6, a1[4]);
      sub_A3160(a1[2], v6, *(_QWORD *)(a1[3] + 16), a3);
      v8 = (_BYTE *)a1[6];
      if ( v8 )
        *v8 = 1;
      return 0;
    }
    v10 = (_BYTE *)a1[6];
    if ( v10 && *v10 )
    {
      if ( !under_debugger )
        sub_383060(0xC77Du, a3);
      BUG();
    }
    return 1;
  }
  return 0;
}

