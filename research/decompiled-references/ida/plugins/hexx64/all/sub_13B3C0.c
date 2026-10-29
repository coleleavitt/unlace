__int64 __fastcall sub_13B3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, double a7, __m128 a8)
{
  int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // r12d
  __m128i v13; // xmm0
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // [rsp+8h] [rbp-A0h]
  unsigned __int64 *v23[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v24; // [rsp+20h] [rbp-88h] BYREF
  __int128 v25; // [rsp+28h] [rbp-80h]
  __int64 v26[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v27; // [rsp+50h] [rbp-58h] BYREF
  __int128 v28; // [rsp+58h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v8 = *(_DWORD *)(a1 + 76);
  v29 = __readfsqword(0x28u);
  v9 = a3;
  LOBYTE(a3) = v8 == 6 || v8 == 1;
  if ( (_BYTE)a3 )
    return 0;
  v10 = a3;
  v13.m128i_i64[0] = 0;
  v23[0] = nullptr;
  v23[1] = nullptr;
  v24 = 0;
  v25 = 0;
  sub_127FE0(a1, (__int64 *)v23, v9, 0, a5, a6, 0.0, a8);
  if ( !(unsigned __int8)sub_64820(v23, (_QWORD *)(a1 + 80))
    || !(unsigned __int8)sub_317F40((__int64 *)(a1 + 96), (__int64)&v24) )
  {
    v14 = (__int64 *)v23;
    if ( sub_A9D90(a1, v23, *(_QWORD *)(a1 + 48), 0, 0x201u) )
    {
LABEL_6:
      v17 = j__qalloc_or_throw(80, (__int64)v14, v15, v16);
      v18 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v17 + 40) = 0;
      *(_QWORD *)(v17 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v17 + 56) = 0;
      *(_QWORD *)(v17 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v17 + 72) = 0;
      sub_330970(v17, v18);
      *(_DWORD *)v17 = 4;
      *(_DWORD *)(v17 + 4) |= 0x80u;
      sub_125180((unsigned __int8 *)(v17 + 32), (unsigned __int8 *)a2);
      sub_125180((unsigned __int8 *)(v17 + 64), (unsigned __int8 *)v9);
      if ( *(_DWORD *)(a2 + 4) != *(_DWORD *)(v9 + 4) )
      {
        if ( !under_debugger )
          sub_383060(0xC82Du, *(double *)v13.m128i_i64);
        BUG();
      }
      sub_A3160(a1, (_QWORD *)v17, 0, *(double *)v13.m128i_i64);
      *(_DWORD *)(a1 + 24) |= 0xA0u;
      v10 = 1;
      goto LABEL_8;
    }
    if ( !(unsigned __int8)sub_64880(v23) || (_QWORD)v25 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      v13.m128i_i64[0] = 0;
      v26[0] = 0;
      v26[1] = 0;
      v20 = *(_QWORD *)(v19 + 128);
      v21 = *(_QWORD *)(v19 + 1440);
      v28 = 0;
      v27 = 0;
      if ( v20 + v21 - 1 >= v21 )
      {
        v22 = v20;
        v27 = qvector_reserve((__int64)&v27, 0, 1, 16);
        v13 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v22);
        *(__m128i *)(v27 + 16 * v28) = v13;
        *(_QWORD *)&v28 = v28 + 1;
      }
      v14 = v26;
      if ( !(unsigned __int8)sub_64820(v23, v26)
        || (v14 = &v24, !(unsigned __int8)sub_317F40(&v27, (__int64)&v24))
        || *(_DWORD *)(a1 + 376) != 1
        || *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 != **(_DWORD **)(a1 + 368) )
      {
        sub_93B40(v26);
        goto LABEL_6;
      }
      sub_93B40(v26);
    }
  }
LABEL_8:
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  qfree((__int64)v23[0]);
  return v10;
}

