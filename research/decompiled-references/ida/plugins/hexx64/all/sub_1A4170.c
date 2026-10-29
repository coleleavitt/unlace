__int64 __fastcall sub_1A4170(__int64 a1, __m128 si128)
{
  unsigned __int64 **v2; // r14
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  _DWORD *v7; // rax
  _DWORD *v8; // r12
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  void *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbp
  const void **v20; // rsi
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // rdi
  bool v26; // zf
  size_t n[2]; // [rsp+0h] [rbp-88h] BYREF
  const void **v28; // [rsp+10h] [rbp-78h]
  __int64 v29; // [rsp+18h] [rbp-70h]
  __int64 v30; // [rsp+20h] [rbp-68h] BYREF
  __int64 v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+30h] [rbp-58h] BYREF
  __m128 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v2 = (unsigned __int64 **)(a1 + 160);
  v34 = __readfsqword(0x28u);
  v28 = (const void **)(a1 + 120);
  if ( !(unsigned __int8)sub_64820((_QWORD *)(a1 + 120), (_QWORD *)(a1 + 160)) )
    return 0xFFFFFFFFLL;
  v29 = a1 + 136;
  if ( !(unsigned __int8)sub_317F40((__int64 *)(a1 + 176), a1 + 136) )
    return 0xFFFFFFFFLL;
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 8);
  else
    v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
    return 0;
  *(_QWORD *)(a1 + 8) = 0;
  sub_1A3420(a1);
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = (_DWORD *)sub_A9D90(*(_QWORD *)a1, v2, v6, 0, 1u);
      v8 = v7;
      if ( !v7 )
        break;
      v9 = *(_QWORD *)a1;
      if ( *v7 == 4 )
      {
        v24 = sub_1951A0(a1, v9, (__int64)v7, *(double *)si128.m128_u64);
        if ( v24 )
          goto LABEL_49;
        v9 = *(_QWORD *)a1;
      }
      if ( !*(_QWORD *)(a1 + 56) )
      {
        v24 = sub_1A3E00(a1, v9, v8, *(double *)si128.m128_u64);
        if ( v24 )
        {
LABEL_49:
          if ( v24 == -1 )
            return 0xFFFFFFFFLL;
          if ( *(_QWORD *)(a1 + 72) )
          {
            v6 = *((_QWORD *)v8 + 1);
            LOBYTE(v10) = 1;
            if ( !*(_QWORD *)(a1 + 56) )
              goto LABEL_52;
            goto LABEL_15;
          }
LABEL_58:
          v26 = *(_QWORD *)(a1 + 56) == 0;
          LOBYTE(v10) = 1;
          si128 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)a1), (__m128i)(unsigned __int64)v8);
          *(__m128 *)(a1 + 64) = si128;
          v6 = *((_QWORD *)v8 + 1);
          if ( v26 )
            goto LABEL_52;
LABEL_15:
          if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 88) )
          {
            v12 = *(void **)(a1 + 56);
            goto LABEL_17;
          }
          goto LABEL_61;
        }
        v9 = *(_QWORD *)a1;
      }
      v10 = sub_1A4060((_QWORD *)a1, v9, v8, *(double *)si128.m128_u64);
      if ( v10 == -1 )
        return 0xFFFFFFFFLL;
      v11 = *(_QWORD *)(a1 + 56);
      if ( !*(_QWORD *)(a1 + 72) )
      {
        if ( v10 != 1 )
        {
          v6 = *((_QWORD *)v8 + 1);
          LOBYTE(v10) = 0;
          if ( !v11 )
          {
            if ( *(_BYTE *)(a1 + 244) )
              return 0xFFFFFFFFLL;
            goto LABEL_52;
          }
          goto LABEL_15;
        }
        goto LABEL_58;
      }
      v6 = *((_QWORD *)v8 + 1);
      if ( v11 )
        goto LABEL_15;
LABEL_61:
      if ( *(_BYTE *)(a1 + 244) && (v10 & 1) == 0 )
        return 0xFFFFFFFFLL;
LABEL_52:
      if ( sub_122C30((__int64)v2, a1 + 200) )
        return 0xFFFFFFFFLL;
    }
    v13 = *(_QWORD *)(a1 + 24);
    v12 = *(void **)(a1 + 56);
    if ( !v13 )
      goto LABEL_17;
    if ( v12 )
    {
      if ( *(_QWORD *)(a1 + 88) )
        goto LABEL_18;
      v14 = *(_QWORD *)a1;
      si128.m128_u64[0] = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      sub_123EA0(v14, &v30, v13, 0, 0xFFFF0000, 0.0);
    }
    else
    {
      v20 = v28;
      v30 = 0;
      v33 = 0;
      v31 = 0;
      v32 = 0;
      sub_648D0(&v30, v28, 0.0);
      v22 = *(_QWORD *)(a1 + 144);
      if ( v22 )
      {
        n[0] = 16 * v22;
        v12 = (void *)qalloc_or_throw(16 * v22, (__int64)v20, 16 * v22, v21);
        memcpy(v12, *(const void **)(a1 + 136), n[0]);
      }
      si128 = (__m128)_mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
      if ( v32 )
      {
        *(__m128 *)n = si128;
        v33.m128_u64[0] = 0;
        qfree(v32);
        si128 = (__m128)_mm_load_si128((const __m128i *)n);
      }
      v32 = (__int64)v12;
      v33 = si128;
    }
    v15 = *(_QWORD *)a1;
    if ( *(int *)(*(_QWORD *)a1 + 376LL) <= 0 )
      break;
    v16 = 0;
    n[0] = (size_t)&v32;
    do
    {
      v17 = *(_QWORD *)(v15 + 64);
      v18 = *(unsigned int *)(*(_QWORD *)(v15 + 368) + 4 * v16);
      if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 64) )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, *(double *)si128.m128_u64);
        BUG();
      }
      v19 = *(_QWORD *)(*(_QWORD *)(v17 + 528) + 8 * v18);
      if ( (unsigned __int8)sub_64820(&v30, (_QWORD *)(v19 + 120))
        && (unsigned __int8)sub_317F40((__int64 *)(v19 + 136), n[0]) )
      {
        if ( v8 )
          goto LABEL_55;
        if ( !*(_QWORD *)(a1 + 56) )
        {
          v23 = *(_QWORD *)a1;
          if ( !(unsigned __int8)sub_64820(v28, (_QWORD *)(*(_QWORD *)a1 + 200LL))
            || !(unsigned __int8)sub_317F40((__int64 *)(v23 + 216), v29) )
          {
            goto LABEL_42;
          }
        }
        v8 = (_DWORD *)v19;
      }
      v15 = *(_QWORD *)a1;
      ++v16;
    }
    while ( *(_DWORD *)(*(_QWORD *)a1 + 376LL) > (int)v16 );
    if ( !v8 )
      break;
LABEL_55:
    v25 = v32;
    *(_QWORD *)a1 = v8;
    v6 = *((_QWORD *)v8 + 6);
    if ( v25 )
    {
      v33.m128_u64[0] = 0;
      qfree(v25);
    }
    qfree(v30);
  }
LABEL_42:
  if ( v32 )
  {
    v33.m128_u64[0] = 0;
    qfree(v32);
  }
  qfree(v30);
  v12 = *(void **)(a1 + 56);
LABEL_17:
  if ( !v12 )
    return 0;
LABEL_18:
  result = 1;
  if ( !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 88) )
    return *(_BYTE *)(a1 + 244) ^ 1u;
  return result;
}

