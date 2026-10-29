unsigned __int64 __fastcall sub_321ED0(__int64 a1, char a2, double a3, __m128 a4)
{
  int v5; // r12d
  __m128i v6; // xmm0
  int v7; // r15d
  __int64 v8; // rbx
  int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // r10
  int v14; // r11d
  __int64 v15; // rsi
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r9
  __m128i v21; // xmm0
  double v22; // xmm0_8
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  int flags; // eax
  char v37; // al
  __m128i v38; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+28h] [rbp-A0h]
  _QWORD v41[5]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v42; // [rsp+68h] [rbp-60h]
  __int128 v43; // [rsp+70h] [rbp-58h]
  __int64 v44; // [rsp+80h] [rbp-48h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( !a2 && !under_debugger && *(char *)(*(_QWORD *)(a1 + 1496) + 1337LL) >= 0 || *(int *)(a1 + 4) < 0 )
    return v45 - __readfsqword(0x28u);
  v5 = *(_DWORD *)a1;
  v6.m128i_i64[0] = 0;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 520);
  v40 = 0;
  v39 = 0;
  v9 = v5 & 0xC;
  memset(&v41[1], 0, 32);
  v41[0] = off_4DE3D8;
  v42 = 0;
  v44 = 0;
  v43 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        sub_31EDC0(v8, (__int64)v41);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v7) != v8 )
          sub_31B4C0((__int64)v41, 0xC6BEu, *(double *)v6.m128i_i64);
        if ( !v9 && (*(_BYTE *)(v8 + 24) & 2) == 0 && (*(_BYTE *)(a1 + 1) & 2) == 0 )
          break;
        v8 = *(_QWORD *)(v8 + 8);
        ++v7;
        if ( !v8 )
          goto LABEL_13;
      }
      v6 = _mm_unpacklo_epi64(
             (__m128i)*(unsigned __int64 *)(v8 + 32),
             (__m128i)(unsigned __int64)(*(_QWORD *)(v8 + 40) - *(_QWORD *)(v8 + 32)));
      v38 = v6;
      if ( (unsigned __int8)sub_317E70(&v39, &v38, 0) )
        break;
      sub_316BB0(&v39, &v38, *(double *)v6.m128i_i64, a4);
      v8 = *(_QWORD *)(v8 + 8);
      ++v7;
      if ( !v8 )
        goto LABEL_13;
    }
    if ( !under_debugger )
      sub_383060(0xC6BFu, *(double *)v6.m128i_i64);
LABEL_163:
    BUG();
  }
LABEL_13:
  if ( *(_DWORD *)(a1 + 64) != v7 )
  {
    if ( !under_debugger )
      sub_383060(0xC6C0u, *(double *)v6.m128i_i64);
    goto LABEL_163;
  }
  if ( *(_DWORD *)(a1 + 4) > 0x1FFFFu )
  {
    if ( !under_debugger )
      sub_383060(0xC6C1u, *(double *)v6.m128i_i64);
    goto LABEL_163;
  }
  v10 = *(_QWORD *)(a1 + 128);
  if ( v10 < 0 || (v11 = *(_QWORD *)(a1 + 136), v11 < 0) || (v12 = *(_QWORD *)(a1 + 152), v12 < 0) )
  {
    if ( !under_debugger )
      sub_383060(0xC6C2u, *(double *)v6.m128i_i64);
    goto LABEL_163;
  }
  v13 = *(_QWORD *)(a1 + 1480);
  v14 = *(_DWORD *)a1 & 4;
  if ( !v14 )
  {
    if ( !v13 )
    {
      if ( !under_debugger )
        sub_383060(0xCDDDu, *(double *)v6.m128i_i64);
      goto LABEL_163;
    }
LABEL_20:
    v15 = *(_QWORD *)(a1 + 1472);
    v6 = _mm_loadu_si128((const __m128i *)(v15 + 8));
    v16 = (unsigned __int64 *)(v15 + 8);
    v6.m128i_i64[0] = _mm_add_epi64(v6, _mm_srli_si128(v6, 8)).m128i_u64[0];
    if ( v6.m128i_i64[0] != v11 )
    {
      if ( !under_debugger )
        sub_383060(0xCDDEu, *(double *)v6.m128i_i64);
      goto LABEL_163;
    }
    if ( v12 != *(_QWORD *)(v15 + 24) )
    {
      if ( !under_debugger )
        sub_383060(0xCDDFu, *(double *)v6.m128i_i64);
      goto LABEL_163;
    }
    if ( *(_QWORD *)(v15 + 40 * v13 - 32) )
    {
      if ( !under_debugger )
        sub_383060(0xCDE0u, *(double *)v6.m128i_i64);
      goto LABEL_163;
    }
    v17 = 0;
    while ( 1 )
    {
      ++v17;
      v16 += 5;
      if ( v17 >= v13 )
        break;
      v18 = v16[1];
      v19 = v18 + *v16;
      if ( *(v16 - 5) != v19 )
      {
        if ( !under_debugger )
          sub_383060(0xCDE1u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      v20 = v16[2];
      if ( (!v18 || v20 < *v16 || v19 - 1 < v20) && v20 != v19 )
      {
        if ( !under_debugger )
          sub_383060(0xCDE2u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
    }
    if ( v10 >= *(_QWORD *)(a1 + 168) )
    {
      if ( v9 )
      {
LABEL_60:
        if ( !v14 )
          sub_321090(a1, (__int64)v41, 1, *(double *)v6.m128i_i64);
        goto LABEL_62;
      }
LABEL_35:
      if ( v10 < v11 )
      {
        if ( !under_debugger )
          sub_383060(0xC6C4u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      if ( v11 < v12 )
      {
        if ( !under_debugger )
          sub_383060(0xC6C5u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      v21 = _mm_loadu_si128((const __m128i *)(a1 + 88));
      *(_QWORD *)&v22 = _mm_add_epi64(v21, _mm_srli_si128(v21, 8)).m128i_u64[0];
      if ( v11 < *(__int64 *)&v22 )
      {
        if ( !under_debugger )
          sub_383060(0xC6C6u, v22);
        goto LABEL_163;
      }
      v23 = sub_1CE9E0(a1);
      if ( v23 )
      {
        if ( v23[4] != *(_QWORD *)(a1 + 88) )
        {
          if ( !under_debugger )
            sub_383060(0xC6C7u, v22);
          goto LABEL_163;
        }
        if ( *((unsigned __int16 *)v23 + 20) != *(_QWORD *)(a1 + 96) )
        {
          if ( !under_debugger )
            sub_383060(0xC6C8u, v22);
          goto LABEL_163;
        }
        if ( v23[7] != *(_QWORD *)(a1 + 104) )
        {
          if ( !under_debugger )
            sub_383060(0xC9F8u, v22);
          goto LABEL_163;
        }
        if ( *(_DWORD *)(a1 + 116) != (unsigned int)get_frame_retsize() )
        {
          if ( !under_debugger )
            sub_383060(0xC6C9u, v22);
          goto LABEL_163;
        }
      }
      v24 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (*(_BYTE *)(a1 + 5) & 0x20) != 0 )
        {
          if ( !v24 )
          {
            if ( !under_debugger )
              sub_383060(0xCDBAu, v22);
            goto LABEL_163;
          }
        }
        else if ( v24 )
        {
          if ( !under_debugger )
            sub_383060(0xCDBBu, v22);
          goto LABEL_163;
        }
      }
      else if ( !v24 )
      {
        if ( !under_debugger )
          sub_383060(0xCD8Cu, v22);
        goto LABEL_163;
      }
      v6 = _mm_loadu_si128((const __m128i *)(a1 + 536));
      v25 = *(_QWORD *)(a1 + 1440);
      v6.m128i_i64[0] = _mm_add_epi64(v6, _mm_srli_si128(v6, 8)).m128i_u64[0];
      if ( v25 != v6.m128i_i64[0] )
      {
        if ( !under_debugger )
          sub_383060(0xCB82u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      if ( *(_QWORD *)(a1 + 568) != v25 )
      {
        if ( !under_debugger )
          sub_383060(0xCB83u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      v26 = *(_QWORD *)(a1 + 136);
      if ( *(_QWORD *)(a1 + 576) != v26 )
      {
        if ( !under_debugger )
          sub_383060(0xCB84u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      v27 = v25 + v26;
      if ( *(_QWORD *)(a1 + 600) != v27 )
      {
        if ( !under_debugger )
          sub_383060(0xCB85u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      v28 = *(int *)(a1 + 116);
      if ( *(_QWORD *)(a1 + 608) != v28 )
      {
        if ( !under_debugger )
          sub_383060(0xCB86u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      v29 = v27 + v28;
      if ( *(_QWORD *)(a1 + 632) != v29 )
      {
        if ( !under_debugger )
          sub_383060(0xCB87u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      v30 = *(int *)(a1 + 120);
      if ( *(_QWORD *)(a1 + 640) != v30 )
      {
        if ( !under_debugger )
          sub_383060(0xCB88u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      v31 = v29 + v30;
      if ( (*(_BYTE *)(a1 + 1) & 1) == 0 || (v37 = sub_64880((_QWORD *)(a1 + 296)), v25 = *(_QWORD *)(a1 + 1440), v37) )
      {
        if ( v25 + *(_QWORD *)(a1 + 144) != v31 )
        {
          if ( !under_debugger )
            sub_383060(0xCB8Cu, *(double *)v6.m128i_i64);
          goto LABEL_163;
        }
      }
      else if ( v31 < v25 + *(_QWORD *)(a1 + 144) )
      {
        if ( !under_debugger )
          sub_383060(0xCB8Du, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      if ( *(_QWORD *)(a1 + 664) != v31 )
      {
        if ( !under_debugger )
          sub_383060(0xCB89u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      v32 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) * *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL)
          - (__int64)*(int *)(a1 + 120);
      if ( *(_QWORD *)(a1 + 672) != v32 )
      {
        if ( !under_debugger )
          sub_383060(0xCB8Au, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      v33 = *(_QWORD *)(a1 + 128) + v25;
      if ( v33 != v31 + v32 )
      {
        if ( !under_debugger )
          sub_383060(0xCB90u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      if ( *(_QWORD *)(a1 + 696) != v33 )
      {
        if ( !under_debugger )
          sub_383060(0xCB8Bu, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
      v14 = *(_DWORD *)a1 & 4;
      goto LABEL_60;
    }
LABEL_159:
    if ( !under_debugger )
      sub_383060(0xC6C3u, *(double *)v6.m128i_i64);
    goto LABEL_163;
  }
  if ( v13 )
    goto LABEL_20;
  if ( v10 < *(_QWORD *)(a1 + 168) )
    goto LABEL_159;
  if ( !v9 )
    goto LABEL_35;
LABEL_62:
  sub_31B5F0(a1, (__int64)v41);
  v34 = *(int *)(a1 + 480);
  if ( (_DWORD)v34 != -1 && ((v34 & 0x80000000) != 0LL || v34 >= *(_QWORD *)(a1 + 440)) )
  {
    if ( !under_debugger )
      sub_383060(0xC6DFu, *(double *)v6.m128i_i64);
    goto LABEL_163;
  }
  if ( !*(_DWORD *)(a1 + 72) )
  {
    if ( !under_debugger )
      sub_383060(0xC6E0u, *(double *)v6.m128i_i64);
    goto LABEL_163;
  }
  if ( *(_BYTE *)(a1 + 320) && (unsigned int)verify_tinfo() )
  {
    if ( !under_debugger )
      sub_383060(0xC6E1u, *(double *)v6.m128i_i64);
    goto LABEL_163;
  }
  if ( !v9 )
  {
    if ( sub_1CE9E0(a1) )
    {
      flags = get_flags_ex();
      if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
      {
        if ( !under_debugger )
          sub_383060(0xC6E2u, *(double *)v6.m128i_i64);
        goto LABEL_163;
      }
    }
  }
  v41[0] = off_4DE3D8;
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  return v45 - __readfsqword(0x28u);
}

