__int64 __fastcall sub_16CAA0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5, int a6, double a7, __m128 a8)
{
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned int v14; // r14d
  int v16; // ebp
  __int64 v17; // rsi
  unsigned int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r13
  double v22; // xmm0_8
  __int64 v23; // rax
  int v24; // eax
  size_t n; // [rsp+10h] [rbp-118h]
  unsigned int na; // [rsp+10h] [rbp-118h]
  __int64 nb; // [rsp+10h] [rbp-118h]
  unsigned __int8 v29[16]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v30[2]; // [rsp+30h] [rbp-F8h] BYREF
  void *src; // [rsp+40h] [rbp-E8h]
  __int128 v32; // [rsp+48h] [rbp-E0h]
  unsigned __int64 *v33[2]; // [rsp+60h] [rbp-C8h] BYREF
  void *v34; // [rsp+70h] [rbp-B8h]
  __int128 v35; // [rsp+78h] [rbp-B0h]
  _QWORD v36[3]; // [rsp+90h] [rbp-98h] BYREF
  char v37; // [rsp+A8h] [rbp-80h]
  __int64 v38; // [rsp+B0h] [rbp-78h]
  char v39; // [rsp+B8h] [rbp-70h]
  __int64 v40; // [rsp+C0h] [rbp-68h]
  __int64 v41; // [rsp+C8h] [rbp-60h]
  __int128 v42; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v43; // [rsp+E8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( a4 == a5 )
    return 0;
  v30[0] = 0;
  v30[1] = 0;
  src = nullptr;
  v32 = 0;
  sub_127FE0(a1, v30, a2, 0, a5, a6, 0.0, a8);
  sub_64000((__int64 *)v33, (__int64)v30, 0.0);
  v12 = v32;
  v34 = nullptr;
  v35 = 0;
  if ( (_QWORD)v32 )
  {
    nb = 16 * v32;
    v34 = (void *)qalloc_or_throw(16 * v32, (__int64)v30, 16 * v32, v11);
    *((_QWORD *)&v35 + 1) = v12;
    memcpy(v34, src, nb);
    *(_QWORD *)&v35 = v12;
  }
  v13 = sub_A9D90(a1, v33, a4, a5, 1u);
  if ( !v13 )
  {
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree((__int64)v34);
    }
    qfree((__int64)v33[0]);
    if ( src )
    {
      *(_QWORD *)&v32 = 0;
      qfree((__int64)src);
    }
    qfree(v30[0]);
    return 0;
  }
  n = v13;
  v14 = -1;
  if ( !(unsigned __int8)sub_1205A0(a3, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
  {
    v36[0] = off_4DDD78;
    v37 = 0;
    v36[1] = 0;
    v36[2] = 0;
    v38 = 0;
    v39 = 0;
    v40 = a2;
    v41 = 0;
    v42 = 0;
    v16 = sub_129C50((_QWORD *)a1, v30, n, a5, (__int64)v36, 0.0, a8);
    if ( v16
      || (v17 = *(int *)(a2 + 4),
          v18 = *(_DWORD *)(a2 + 4),
          na = sub_138140(*(_QWORD **)(a1 + 64), v17, 1, 0.0),
          na == -1) )
    {
      v14 = -1;
    }
    else
    {
      v21 = j__qalloc_or_throw(80, v17, v19, v20);
      *(_OWORD *)(v21 + 8) = 0;
      *(_QWORD *)(v21 + 40) = 0;
      *(_QWORD *)(v21 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v21 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v21 + 56) = 0;
      *(_QWORD *)(v21 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v21 + 72) = 0;
      sub_1253A0(v21, (__int64)a3);
      *(_QWORD *)&v22 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(na)).m128i_u64[0];
      *(_DWORD *)v29 = 1;
      *(double *)&v29[4] = v22;
      sub_125180((unsigned __int8 *)(v21 + 64), v29);
      sub_11CDA0((__int64)v29);
      sub_A3160(a1, (_QWORD *)v21, *(_QWORD *)(a4 + 16), v22);
      if ( !(_QWORD)v42 )
      {
        if ( !under_debugger )
          sub_383060(0xC47Eu, v22);
        BUG();
      }
      v23 = 0;
      do
      {
        sub_125180(*(unsigned __int8 **)(v41 + 8 * v23), (unsigned __int8 *)(v21 + 64));
        v23 = ++v16;
      }
      while ( v16 < (unsigned __int64)v42 );
      v24 = *(_DWORD *)(a1 + 24);
      v14 = v42;
      BYTE1(v24) &= ~2u;
      LOBYTE(v24) = v24 | 0x80;
      *(_DWORD *)(a1 + 24) = v24;
    }
    v36[0] = off_4DDD78;
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41);
    }
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree((__int64)v34);
  }
  qfree((__int64)v33[0]);
  if ( src )
  {
    *(_QWORD *)&v32 = 0;
    qfree((__int64)src);
  }
  qfree(v30[0]);
  return v14;
}

