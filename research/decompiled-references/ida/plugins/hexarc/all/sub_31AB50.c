unsigned __int64 __fastcall sub_31AB50(__int64 a1, char a2, double a3, __m128 a4)
{
  int v5; // r12d
  int v6; // r15d
  __int64 v7; // rbx
  int v8; // r12d
  __m128i v9; // xmm0
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // r10
  int v14; // r11d
  __int64 v15; // rsi
  __m128i v16; // xmm0
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r9
  __m128i v22; // xmm0
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  int flags; // eax
  char v38; // al
  __m128i v39; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+28h] [rbp-A0h]
  _QWORD v42[5]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v43; // [rsp+68h] [rbp-60h]
  __int128 v44; // [rsp+70h] [rbp-58h]
  __int64 v45; // [rsp+80h] [rbp-48h]
  unsigned __int64 v46; // [rsp+88h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  if ( !a2 && !under_debugger && *(char *)(*(_QWORD *)(a1 + 1496) + 1337LL) >= 0 || *(int *)(a1 + 4) < 0 )
    return v46 - __readfsqword(0x28u);
  v5 = *(_DWORD *)a1;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 520);
  v41 = 0;
  v40 = 0;
  v8 = v5 & 0xC;
  memset(&v42[1], 0, 32);
  v42[0] = off_4AAC18;
  v43 = 0;
  v45 = 0;
  v44 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        sub_317A40(v7, (__int64)v42);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v6) != v7 )
          sub_314140((__int64)v42, 0xC6BEu);
        if ( !v8 && (*(_BYTE *)(v7 + 24) & 2) == 0 && (*(_BYTE *)(a1 + 1) & 2) == 0 )
          break;
        v7 = *(_QWORD *)(v7 + 8);
        ++v6;
        if ( !v7 )
          goto LABEL_13;
      }
      v9 = _mm_unpacklo_epi64(
             (__m128i)*(unsigned __int64 *)(v7 + 32),
             (__m128i)(unsigned __int64)(*(_QWORD *)(v7 + 40) - *(_QWORD *)(v7 + 32)));
      v39 = v9;
      if ( (unsigned __int8)sub_310AF0(&v40, &v39, 0) )
        break;
      sub_30F830(&v40, &v39, *(double *)v9.m128i_i64, a4);
      v7 = *(_QWORD *)(v7 + 8);
      ++v6;
      if ( !v7 )
        goto LABEL_13;
    }
    if ( !under_debugger )
      sub_37B760(50879);
LABEL_163:
    BUG();
  }
LABEL_13:
  if ( *(_DWORD *)(a1 + 64) != v6 )
  {
    if ( !under_debugger )
      sub_37B760(50880);
    goto LABEL_163;
  }
  if ( *(_DWORD *)(a1 + 4) > 0x1FFFFu )
  {
    if ( !under_debugger )
      sub_37B760(50881);
    goto LABEL_163;
  }
  v10 = *(_QWORD *)(a1 + 128);
  if ( v10 < 0 || (v11 = *(_QWORD *)(a1 + 136), v11 < 0) || (v12 = *(_QWORD *)(a1 + 152), v12 < 0) )
  {
    if ( !under_debugger )
      sub_37B760(50882);
    goto LABEL_163;
  }
  v13 = *(_QWORD *)(a1 + 1480);
  v14 = *(_DWORD *)a1 & 4;
  if ( !v14 )
  {
    if ( !v13 )
    {
      if ( !under_debugger )
        sub_37B760(52701);
      goto LABEL_163;
    }
LABEL_20:
    v15 = *(_QWORD *)(a1 + 1472);
    v16 = _mm_loadu_si128((const __m128i *)(v15 + 8));
    v17 = (unsigned __int64 *)(v15 + 8);
    if ( _mm_add_epi64(v16, _mm_srli_si128(v16, 8)).m128i_u64[0] != v11 )
    {
      if ( !under_debugger )
        sub_37B760(52702);
      goto LABEL_163;
    }
    if ( v12 != *(_QWORD *)(v15 + 24) )
    {
      if ( !under_debugger )
        sub_37B760(52703);
      goto LABEL_163;
    }
    if ( *(_QWORD *)(v15 + 40 * v13 - 32) )
    {
      if ( !under_debugger )
        sub_37B760(52704);
      goto LABEL_163;
    }
    v18 = 0;
    while ( 1 )
    {
      ++v18;
      v17 += 5;
      if ( v18 >= v13 )
        break;
      v19 = v17[1];
      v20 = v19 + *v17;
      if ( *(v17 - 5) != v20 )
      {
        if ( !under_debugger )
          sub_37B760(52705);
        goto LABEL_163;
      }
      v21 = v17[2];
      if ( (!v19 || v21 < *v17 || v20 - 1 < v21) && v21 != v20 )
      {
        if ( !under_debugger )
          sub_37B760(52706);
        goto LABEL_163;
      }
    }
    if ( v10 >= *(_QWORD *)(a1 + 168) )
    {
      if ( v8 )
      {
LABEL_60:
        if ( !v14 )
          sub_319D10(a1, (__int64)v42, 1);
        goto LABEL_62;
      }
LABEL_35:
      if ( v10 < v11 )
      {
        if ( !under_debugger )
          sub_37B760(50884);
        goto LABEL_163;
      }
      if ( v11 < v12 )
      {
        if ( !under_debugger )
          sub_37B760(50885);
        goto LABEL_163;
      }
      v22 = _mm_loadu_si128((const __m128i *)(a1 + 88));
      if ( v11 < _mm_add_epi64(v22, _mm_srli_si128(v22, 8)).m128i_i64[0] )
      {
        if ( !under_debugger )
          sub_37B760(50886);
        goto LABEL_163;
      }
      v23 = sub_1C8060(a1);
      if ( v23 )
      {
        if ( v23[4] != *(_QWORD *)(a1 + 88) )
        {
          if ( !under_debugger )
            sub_37B760(50887);
          goto LABEL_163;
        }
        if ( *((unsigned __int16 *)v23 + 20) != *(_QWORD *)(a1 + 96) )
        {
          if ( !under_debugger )
            sub_37B760(50888);
          goto LABEL_163;
        }
        if ( v23[7] != *(_QWORD *)(a1 + 104) )
        {
          if ( !under_debugger )
            sub_37B760(51704);
          goto LABEL_163;
        }
        if ( *(_DWORD *)(a1 + 116) != (unsigned int)get_frame_retsize() )
        {
          if ( !under_debugger )
            sub_37B760(50889);
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
              sub_37B760(52666);
            goto LABEL_163;
          }
        }
        else if ( v24 )
        {
          if ( !under_debugger )
            sub_37B760(52667);
          goto LABEL_163;
        }
      }
      else if ( !v24 )
      {
        if ( !under_debugger )
          sub_37B760(52620);
        goto LABEL_163;
      }
      v25 = _mm_loadu_si128((const __m128i *)(a1 + 536));
      v26 = *(_QWORD *)(a1 + 1440);
      if ( v26 != _mm_add_epi64(v25, _mm_srli_si128(v25, 8)).m128i_u64[0] )
      {
        if ( !under_debugger )
          sub_37B760(52098);
        goto LABEL_163;
      }
      if ( *(_QWORD *)(a1 + 568) != v26 )
      {
        if ( !under_debugger )
          sub_37B760(52099);
        goto LABEL_163;
      }
      v27 = *(_QWORD *)(a1 + 136);
      if ( *(_QWORD *)(a1 + 576) != v27 )
      {
        if ( !under_debugger )
          sub_37B760(52100);
        goto LABEL_163;
      }
      v28 = v26 + v27;
      if ( *(_QWORD *)(a1 + 600) != v28 )
      {
        if ( !under_debugger )
          sub_37B760(52101);
        goto LABEL_163;
      }
      v29 = *(int *)(a1 + 116);
      if ( *(_QWORD *)(a1 + 608) != v29 )
      {
        if ( !under_debugger )
          sub_37B760(52102);
        goto LABEL_163;
      }
      v30 = v28 + v29;
      if ( *(_QWORD *)(a1 + 632) != v30 )
      {
        if ( !under_debugger )
          sub_37B760(52103);
        goto LABEL_163;
      }
      v31 = *(int *)(a1 + 120);
      if ( *(_QWORD *)(a1 + 640) != v31 )
      {
        if ( !under_debugger )
          sub_37B760(52104);
        goto LABEL_163;
      }
      v32 = v30 + v31;
      if ( (*(_BYTE *)(a1 + 1) & 1) == 0 || (v38 = sub_5E300((_QWORD *)(a1 + 296)), v26 = *(_QWORD *)(a1 + 1440), v38) )
      {
        if ( v26 + *(_QWORD *)(a1 + 144) != v32 )
        {
          if ( !under_debugger )
            sub_37B760(52108);
          goto LABEL_163;
        }
      }
      else if ( v32 < v26 + *(_QWORD *)(a1 + 144) )
      {
        if ( !under_debugger )
          sub_37B760(52109);
        goto LABEL_163;
      }
      if ( *(_QWORD *)(a1 + 664) != v32 )
      {
        if ( !under_debugger )
          sub_37B760(52105);
        goto LABEL_163;
      }
      v33 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) * *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL)
          - (__int64)*(int *)(a1 + 120);
      if ( *(_QWORD *)(a1 + 672) != v33 )
      {
        if ( !under_debugger )
          sub_37B760(52106);
        goto LABEL_163;
      }
      v34 = *(_QWORD *)(a1 + 128) + v26;
      if ( v34 != v32 + v33 )
      {
        if ( !under_debugger )
          sub_37B760(52112);
        goto LABEL_163;
      }
      if ( *(_QWORD *)(a1 + 696) != v34 )
      {
        if ( !under_debugger )
          sub_37B760(52107);
        goto LABEL_163;
      }
      v14 = *(_DWORD *)a1 & 4;
      goto LABEL_60;
    }
LABEL_159:
    if ( !under_debugger )
      sub_37B760(50883);
    goto LABEL_163;
  }
  if ( v13 )
    goto LABEL_20;
  if ( v10 < *(_QWORD *)(a1 + 168) )
    goto LABEL_159;
  if ( !v8 )
    goto LABEL_35;
LABEL_62:
  sub_314270(a1, (__int64)v42);
  v35 = *(int *)(a1 + 480);
  if ( (_DWORD)v35 != -1 && ((v35 & 0x80000000) != 0LL || v35 >= *(_QWORD *)(a1 + 440)) )
  {
    if ( !under_debugger )
      sub_37B760(50911);
    goto LABEL_163;
  }
  if ( !*(_DWORD *)(a1 + 72) )
  {
    if ( !under_debugger )
      sub_37B760(50912);
    goto LABEL_163;
  }
  if ( *(_BYTE *)(a1 + 320) && (unsigned int)verify_tinfo() )
  {
    if ( !under_debugger )
      sub_37B760(50913);
    goto LABEL_163;
  }
  if ( !v8 )
  {
    if ( sub_1C8060(a1) )
    {
      flags = get_flags_ex();
      if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
      {
        if ( !under_debugger )
          sub_37B760(50914);
        goto LABEL_163;
      }
    }
  }
  v42[0] = off_4AAC18;
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  return v46 - __readfsqword(0x28u);
}

