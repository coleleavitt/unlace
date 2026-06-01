__int64 __fastcall sub_21D5E0(__int64 a1, __int64 *a2)
{
  unsigned int v2; // eax
  int v3; // edx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  void *v9; // r12
  __m128i si128; // xmm0
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // r12
  __int64 v20; // r15
  unsigned __int64 v21; // r14
  _QWORD *v22; // rbp
  signed __int64 v23; // rbp
  __m128i v24; // xmm0
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rax
  signed __int64 v27; // rsi
  __m128i v28; // xmm0
  signed __int64 v29; // xmm0_8
  _QWORD *v31; // rdi
  __m128i v32; // xmm0
  unsigned __int64 v33; // xmm0_8
  unsigned __int64 *v34; // rax
  signed __int64 v35; // rax
  size_t n[2]; // [rsp+0h] [rbp-168h] BYREF
  unsigned __int64 v37; // [rsp+18h] [rbp-150h]
  __int64 v38; // [rsp+20h] [rbp-148h]
  __int64 v39; // [rsp+28h] [rbp-140h]
  __int64 *v40; // [rsp+30h] [rbp-138h]
  unsigned __int8 v41; // [rsp+3Ah] [rbp-12Eh]
  bool v42; // [rsp+3Bh] [rbp-12Dh]
  int v43; // [rsp+3Ch] [rbp-12Ch]
  __int64 v44[2]; // [rsp+40h] [rbp-128h] BYREF
  unsigned __int64 *v45; // [rsp+50h] [rbp-118h] BYREF
  __int128 v46; // [rsp+58h] [rbp-110h]
  __int64 v47[2]; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD *v48; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v49; // [rsp+88h] [rbp-E0h]
  __int64 v50[2]; // [rsp+A0h] [rbp-C8h] BYREF
  void *v51; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v52; // [rsp+B8h] [rbp-B0h]
  __int64 v53[2]; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v54; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v55; // [rsp+E8h] [rbp-80h]
  __int64 v56; // [rsp+100h] [rbp-68h] BYREF
  __int128 v57; // [rsp+108h] [rbp-60h] BYREF
  __int128 v58; // [rsp+118h] [rbp-50h]
  unsigned __int64 v59; // [rsp+128h] [rbp-40h]

  v38 = a1;
  v40 = a2;
  v59 = __readfsqword(0x28u);
  v41 = *(_BYTE *)(a1 + 320);
  if ( v41 )
    return 0;
  v43 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  v2 = *(_DWORD *)(a1 + 72);
  if ( v2 <= 0x10 )
    v2 = getinf();
  v42 = v2 == 176 || v2 == 256;
  v39 = sub_1D15B0(v38);
  v3 = *(_QWORD *)(v39 + 352);
  if ( (!v3 || !v42) && !*(_BYTE *)(*(_QWORD *)(v38 + 1496) + 148LL) )
    return 0;
  v44[0] = 0;
  v44[1] = 0;
  v4 = *(_QWORD *)(v38 + 664);
  v5 = *(_QWORD *)(v38 + 672);
  v46 = 0;
  v45 = nullptr;
  if ( v4 + v5 - 1 >= v4 )
  {
    v45 = (unsigned __int64 *)qvector_reserve();
    *(__m128i *)&v45[2 * v46] = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v5);
    *(_QWORD *)&v46 = v46 + 1;
    v3 = *(_DWORD *)(v39 + 352);
  }
  v47[0] = 0;
  v47[1] = 0;
  v48 = nullptr;
  v37 = 0;
  v49 = 0;
  if ( v3 )
  {
    do
    {
      v6 = *(unsigned int *)(*(_QWORD *)(v39 + 344) + 4LL * (int)v37);
      if ( (unsigned int)v6 >= *(_DWORD *)(v38 + 64) )
      {
        if ( !under_debugger )
          sub_37EEE0(52719);
        goto LABEL_76;
      }
      v7 = *(_QWORD *)(*(_QWORD *)(v38 + 528) + 8 * v6);
      v52 = 0;
      v50[0] = 0;
      v50[1] = 0;
      v51 = nullptr;
      sub_60E90(v50, (__int64 *)(v7 + 200));
      v8 = *(_QWORD *)(v7 + 224);
      v9 = nullptr;
      if ( v8 )
      {
        n[0] = 16 * v8;
        v9 = (void *)qalloc_or_throw();
        memcpy(v9, *(const void **)(v7 + 216), n[0]);
      }
      si128 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
      if ( v51 )
      {
        *(__m128i *)n = si128;
        v52.m128i_i64[0] = 0;
        qfree();
        si128 = _mm_load_si128((const __m128i *)n);
      }
      v11 = *(_DWORD *)(v7 + 352) == 1;
      v51 = v9;
      v53[0] = 0;
      v53[1] = 0;
      v54 = 0;
      v52 = si128;
      v55 = 0;
      if ( v11 )
      {
        while ( 1 )
        {
          sub_60840(v53, (__int64 *)(v7 + 120));
          sub_312B30(&v54, v7 + 136);
          v12 = *(_QWORD *)(v7 + 64);
          v13 = **(unsigned int **)(v7 + 344);
          if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 64) )
            break;
          v7 = *(_QWORD *)(*(_QWORD *)(v12 + 528) + 8 * v13);
          if ( *(_QWORD *)(v7 + 48) )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v7 + 480) + 148LL) == 2 )
            {
              v14 = *(_BYTE **)(v7 + 56);
              if ( (v14[65] & 0x40) != 0 || sub_11C940(v14, 0) )
              {
LABEL_28:
                if ( v54 )
                {
                  *(_QWORD *)&v55 = 0;
                  qfree();
                }
                goto LABEL_30;
              }
            }
            sub_605C0(&v56, v7 + 200);
            *((_QWORD *)&v57 + 1) = 0;
            v58 = 0;
            v19 = *(_QWORD *)(v7 + 224);
            if ( v19 )
            {
              n[0] = 16 * v19;
              *((_QWORD *)&v57 + 1) = qalloc_or_throw();
              *((_QWORD *)&v58 + 1) = v19;
              memcpy(*((void **)&v57 + 1), *(const void **)(v7 + 216), n[0]);
              *(_QWORD *)&v58 = v19;
            }
            sub_60C00(&v56, v53, v15, v16, v17, v18);
            sub_313AE0((char *)&v57 + 8, &v54);
            sub_60840(v50, &v56);
            sub_312B30(&v51, (char *)&v57 + 8);
            if ( *((_QWORD *)&v57 + 1) )
            {
              *(_QWORD *)&v58 = 0;
              qfree();
            }
            qfree();
          }
          if ( *(_DWORD *)(v7 + 352) != 1 )
            goto LABEL_28;
        }
        if ( !under_debugger )
          sub_37EEE0(52719);
LABEL_76:
        BUG();
      }
LABEL_30:
      qfree();
      sub_60840(v47, v50);
      sub_312B30(&v48, &v51);
      sub_60CC0(v44, v50);
      sub_313F40(&v45, &v51);
      if ( v51 )
      {
        v52.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      ++v37;
    }
    while ( v37 < *(int *)(v39 + 352) );
    if ( (_QWORD)v49 )
    {
      if ( v42 )
      {
LABEL_37:
        v20 = v38;
        v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 1496) + 24LL) + 16LL)
            & (*(_QWORD *)(v20 + 1440) + (int)sub_EF340(v38));
        if ( !*(_DWORD *)(v20 + 64) )
          sub_2180E0();
        v22 = **(_QWORD ***)(v38 + 528);
        if ( v22[33] )
        {
          if ( (unsigned __int8)sub_60E40(v22 + 30) )
          {
            v32 = _mm_loadu_si128((const __m128i *)(v22[32] + 16LL * v22[33] - 16));
            v33 = _mm_add_epi64(v32, _mm_srli_si128(v32, 8)).m128i_u64[0];
            if ( v21 < v33 )
              v21 = v33;
          }
        }
        if ( (_QWORD)v46 )
        {
          v23 = *v45;
          if ( *v45 < v21 )
          {
            v35 = sub_1F17E0(
                    v38,
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 1496) + 24LL) + 16LL) & (v23 - *(_QWORD *)(v38 + 1440)));
            v21 = v23;
            if ( v35 >= v23 )
              v21 = v35;
          }
        }
        v56 = 0;
        v24 = _mm_loadu_si128((const __m128i *)(v38 + 664));
        v25 = _mm_add_epi64(v24, _mm_srli_si128(v24, 8)).m128i_u64[0];
        v57 = 0;
        if ( v25 - 1 >= v21 )
        {
          v56 = qvector_reserve();
          v34 = (unsigned __int64 *)(16 * v57 + v56);
          *v34 = v21;
          v34[1] = v25 - v21;
          *(_QWORD *)&v57 = v57 + 1;
        }
        sub_313F40(&v48, &v56);
        if ( v56 )
        {
          *(_QWORD *)&v57 = 0;
          qfree();
        }
        if ( !(_QWORD)v49 )
          goto LABEL_49;
        v26 = *v48 & -v43;
        v27 = v26 + v43;
        if ( v26 >= v21 )
          v27 = *v48 & -v43;
        v28 = _mm_loadu_si128((const __m128i *)&v48[2 * v49 - 2]);
        v29 = _mm_add_epi64(v28, _mm_srli_si128(v28, 8)).m128i_u64[0];
        if ( v27 >= v29 )
        {
LABEL_49:
          if ( v48 )
          {
            *(_QWORD *)&v49 = 0;
            qfree();
          }
          qfree();
          if ( v45 )
          {
            *(_QWORD *)&v46 = 0;
            qfree();
          }
          qfree();
          return 0;
        }
        sub_11F0E0(v40, v27, v29 - v27);
        v41 = 1;
        v31 = v48;
        goto LABEL_58;
      }
      if ( (_QWORD)v46 )
      {
        *(_DWORD *)(v38 + 72) = 16;
        goto LABEL_37;
      }
    }
    v31 = v48;
LABEL_58:
    if ( v31 )
    {
      *(_QWORD *)&v49 = 0;
      qfree();
    }
  }
  qfree();
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  qfree();
  return v41;
}

