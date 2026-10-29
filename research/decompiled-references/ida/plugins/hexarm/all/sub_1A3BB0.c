__int64 __fastcall sub_1A3BB0(__int64 a1)
{
  __int64 *v1; // r14
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  _DWORD *v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  void *v11; // rbp
  __int64 v12; // rdx
  __int128 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // r15
  __m128i si128; // xmm0
  __int64 v21; // r12
  int v22; // eax
  void *v23; // rdi
  bool v24; // zf
  size_t n[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 *v26; // [rsp+10h] [rbp-78h]
  __int64 v27; // [rsp+18h] [rbp-70h]
  __int64 v28; // [rsp+20h] [rbp-68h] BYREF
  __int64 v29; // [rsp+28h] [rbp-60h]
  void *v30; // [rsp+30h] [rbp-58h] BYREF
  __m128i v31; // [rsp+38h] [rbp-50h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v1 = (__int64 *)(a1 + 160);
  v32 = __readfsqword(0x28u);
  v26 = (__int64 *)(a1 + 120);
  if ( !(unsigned __int8)sub_64220((_QWORD *)(a1 + 120), (_QWORD *)(a1 + 160)) )
    return 0xFFFFFFFFLL;
  v27 = a1 + 136;
  if ( !(unsigned __int8)sub_318300(a1 + 176, a1 + 136) )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 8);
  else
    v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
    return 0;
  *(_QWORD *)(a1 + 8) = 0;
  sub_1A2E60(a1);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = (_DWORD *)sub_A97D0(*(_QWORD *)a1, v1, v5, 0, 1u);
      v7 = v6;
      if ( !v6 )
        break;
      v8 = *(_QWORD *)a1;
      if ( *v6 == 4 )
      {
        v22 = sub_194BE0(a1, v8, (__int64)v6);
        if ( v22 )
          goto LABEL_49;
        v8 = *(_QWORD *)a1;
      }
      if ( !*(_QWORD *)(a1 + 56) )
      {
        v22 = sub_1A3840(a1, v8, v7);
        if ( v22 )
        {
LABEL_49:
          if ( v22 == -1 )
            return 0xFFFFFFFFLL;
          if ( *(_QWORD *)(a1 + 72) )
          {
            v5 = *((_QWORD *)v7 + 1);
            LOBYTE(v9) = 1;
            if ( !*(_QWORD *)(a1 + 56) )
              goto LABEL_52;
            goto LABEL_15;
          }
LABEL_58:
          v24 = *(_QWORD *)(a1 + 56) == 0;
          LOBYTE(v9) = 1;
          *(__m128i *)(a1 + 64) = _mm_unpacklo_epi64(
                                    _mm_loadl_epi64((const __m128i *)a1),
                                    (__m128i)(unsigned __int64)v7);
          v5 = *((_QWORD *)v7 + 1);
          if ( v24 )
            goto LABEL_52;
LABEL_15:
          if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 88) )
          {
            v11 = *(void **)(a1 + 56);
            goto LABEL_17;
          }
          goto LABEL_61;
        }
        v8 = *(_QWORD *)a1;
      }
      v9 = sub_1A3AA0((_QWORD *)a1, v8, v7);
      if ( v9 == -1 )
        return 0xFFFFFFFFLL;
      v10 = *(_QWORD *)(a1 + 56);
      if ( !*(_QWORD *)(a1 + 72) )
      {
        if ( v9 != 1 )
        {
          v5 = *((_QWORD *)v7 + 1);
          LOBYTE(v9) = 0;
          if ( !v10 )
          {
            if ( *(_BYTE *)(a1 + 244) )
              return 0xFFFFFFFFLL;
            goto LABEL_52;
          }
          goto LABEL_15;
        }
        goto LABEL_58;
      }
      v5 = *((_QWORD *)v7 + 1);
      if ( v10 )
        goto LABEL_15;
LABEL_61:
      if ( *(_BYTE *)(a1 + 244) && (v9 & 1) == 0 )
        return 0xFFFFFFFFLL;
LABEL_52:
      if ( sub_122670((__int64)v1, a1 + 200) )
        return 0xFFFFFFFFLL;
    }
    v12 = *(_QWORD *)(a1 + 24);
    v11 = *(void **)(a1 + 56);
    if ( !v12 )
      goto LABEL_17;
    if ( v11 )
    {
      if ( *(_QWORD *)(a1 + 88) )
        goto LABEL_18;
      *(_QWORD *)&v13 = *(_QWORD *)a1;
      *((_QWORD *)&v13 + 1) = &v28;
      v28 = 0;
      v29 = 0;
      v30 = nullptr;
      v31 = 0;
      sub_1238E0(v13, v12, 0, 0xFFFF0000);
    }
    else
    {
      v28 = 0;
      v31 = 0;
      v29 = 0;
      v30 = nullptr;
      sub_642D0(&v28, v26);
      v19 = *(_QWORD *)(a1 + 144);
      if ( v19 )
      {
        n[0] = 16 * v19;
        v11 = (void *)qalloc_or_throw();
        memcpy(v11, *(const void **)(a1 + 136), n[0]);
      }
      si128 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
      if ( v30 )
      {
        *(__m128i *)n = si128;
        v31.m128i_i64[0] = 0;
        qfree();
        si128 = _mm_load_si128((const __m128i *)n);
      }
      v30 = v11;
      v31 = si128;
    }
    v14 = *(_QWORD *)a1;
    if ( *(int *)(*(_QWORD *)a1 + 376LL) <= 0 )
      break;
    v15 = 0;
    n[0] = (size_t)&v30;
    do
    {
      v16 = *(_QWORD *)(v14 + 64);
      v17 = *(unsigned int *)(*(_QWORD *)(v14 + 368) + 4 * v15);
      if ( (unsigned int)v17 >= *(_DWORD *)(v16 + 64) )
      {
        if ( !under_debugger )
          sub_3835A0(52719);
        BUG();
      }
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + 528) + 8 * v17);
      if ( (unsigned __int8)sub_64220(&v28, (_QWORD *)(v18 + 120)) && (unsigned __int8)sub_318300(v18 + 136, n[0]) )
      {
        if ( v7 )
          goto LABEL_55;
        if ( !*(_QWORD *)(a1 + 56) )
        {
          v21 = *(_QWORD *)a1;
          if ( !(unsigned __int8)sub_64220(v26, (_QWORD *)(*(_QWORD *)a1 + 200LL))
            || !(unsigned __int8)sub_318300(v21 + 216, v27) )
          {
            goto LABEL_42;
          }
        }
        v7 = (_DWORD *)v18;
      }
      v14 = *(_QWORD *)a1;
      ++v15;
    }
    while ( *(_DWORD *)(*(_QWORD *)a1 + 376LL) > (int)v15 );
    if ( !v7 )
      break;
LABEL_55:
    v23 = v30;
    *(_QWORD *)a1 = v7;
    v5 = *((_QWORD *)v7 + 6);
    if ( v23 )
    {
      v31.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
  }
LABEL_42:
  if ( v30 )
  {
    v31.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  v11 = *(void **)(a1 + 56);
LABEL_17:
  if ( !v11 )
    return 0;
LABEL_18:
  result = 1;
  if ( !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 88) )
    return *(_BYTE *)(a1 + 244) ^ 1u;
  return result;
}

