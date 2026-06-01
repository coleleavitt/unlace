_BOOL8 __fastcall sub_DBC70(__int64 a1)
{
  _DWORD *v2; // rsi
  __int128 v4; // rdi
  _DWORD *v5; // rax
  __int128 v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // r12
  const __m128i *v9; // r14
  __int64 v10; // r13
  __m128i v11; // xmm0
  char v12; // al
  bool v13; // al
  __int64 v14; // rbx
  __int64 v15; // r14
  int v16; // esi
  __int64 v17; // r14
  __int128 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rax
  bool v22; // al
  __int128 v23; // rdi
  __int64 v24; // rax
  const __m128i *v25; // r14
  _DWORD *v26; // rax
  _DWORD *v27; // r12
  _DWORD *v28; // rax
  unsigned __int64 v29; // rax
  unsigned int v30; // r12d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // [rsp+0h] [rbp-C0h]
  unsigned int v38; // [rsp+8h] [rbp-B8h]
  unsigned __int64 v39; // [rsp+8h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+8h] [rbp-B8h]
  __int64 v41; // [rsp+10h] [rbp-B0h]
  unsigned __int64 v42; // [rsp+10h] [rbp-B0h]
  __int64 v43; // [rsp+18h] [rbp-A8h]
  bool v44; // [rsp+18h] [rbp-A8h]
  bool v45; // [rsp+18h] [rbp-A8h]
  bool v46; // [rsp+18h] [rbp-A8h]
  __int64 v47; // [rsp+18h] [rbp-A8h]
  __int64 v48; // [rsp+18h] [rbp-A8h]
  unsigned __int64 v49; // [rsp+18h] [rbp-A8h]
  _DWORD *v50; // [rsp+28h] [rbp-98h] BYREF
  _DWORD *v51; // [rsp+30h] [rbp-90h] BYREF
  _DWORD *v52; // [rsp+38h] [rbp-88h] BYREF
  unsigned __int64 v53; // [rsp+40h] [rbp-80h]
  unsigned __int64 v54; // [rsp+48h] [rbp-78h] BYREF
  _BYTE v55[12]; // [rsp+50h] [rbp-70h] BYREF
  unsigned __int64 *v56; // [rsp+60h] [rbp-60h] BYREF
  __int64 v57; // [rsp+68h] [rbp-58h]
  __int64 v58; // [rsp+70h] [rbp-50h]
  __int128 v59; // [rsp+78h] [rbp-48h]
  unsigned __int64 v60; // [rsp+88h] [rbp-38h]

  v60 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 124) )
    return 0;
  v2 = *(_DWORD **)(a1 + 40);
  if ( *v2 != 57 )
    return 0;
  *(_QWORD *)&v4 = *(_QWORD *)(a1 + 32);
  v50 = v2;
  *((_QWORD *)&v4 + 1) = v2 + 12;
  v5 = (_DWORD *)sub_DB4F0(v4, (__int64 *)&v50);
  if ( !v5 || *v5 != 2 )
    return 0;
  *((_QWORD *)&v6 + 1) = v5 + 12;
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 32);
  v51 = v5 + 12;
  v41 = (__int64)v50;
  v52 = v50;
  v7 = (_DWORD *)sub_DB4F0(v6, (__int64 *)&v52);
  v8 = v7;
  if ( v7 )
  {
    if ( *v7 != 12 )
    {
      v9 = *(const __m128i **)(a1 + 32);
      v10 = v41;
      *(_QWORD *)v55 = 1;
      v11 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 132));
      v43 = *(_QWORD *)(v9[30].m128i_i64[0] + 112);
      v38 = *(_DWORD *)(*(_QWORD *)(v9[4].m128i_i64[0] + 1504) + 80LL);
      *(_QWORD *)&v55[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), v11).m128i_u64[0];
      goto LABEL_10;
    }
    if ( sub_11C8A0((__int64)v7, &v51) )
    {
      *(_QWORD *)&v23 = *(_QWORD *)(a1 + 32);
      *((_QWORD *)&v23 + 1) = v51;
      v10 = (__int64)v52;
      v24 = sub_DB4F0(v23, (__int64 *)&v52);
      v9 = *(const __m128i **)(a1 + 32);
      v11 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 132));
      *(_QWORD *)v55 = 1;
      v8 = (_DWORD *)v24;
      v43 = *(_QWORD *)(v9[30].m128i_i64[0] + 112);
      v38 = *(_DWORD *)(*(_QWORD *)(v9[4].m128i_i64[0] + 1504) + 80LL);
      *(_QWORD *)&v55[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v38), v11).m128i_u64[0];
      if ( !v24 )
        goto LABEL_11;
LABEL_10:
      if ( *v8 != 2 )
      {
LABEL_11:
        v12 = sub_12EA80(v43, v9, v10, (__int64)v51, v10, (__int64)v55, 0);
        goto LABEL_12;
      }
      v14 = *(_QWORD *)(a1 + 40);
      v56 = nullptr;
      v37 = (__int64)v52;
      v57 = 0;
      sub_63E80((__int64 *)&v56, _mm_cvtsi128_si32(v11), v38, *(double *)v11.m128i_i64);
      v58 = 0;
      v59 = 0;
      v15 = sub_A9AA0((__int64)v9, &v56, v37, v14, 0);
      if ( v58 )
      {
        *(_QWORD *)&v59 = 0;
        qfree(v58);
      }
      qfree((__int64)v56);
      if ( v15 )
        goto LABEL_14;
      v16 = *(_DWORD *)(a1 + 132);
      v56 = nullptr;
      v57 = 0;
      sub_63E80((__int64 *)&v56, v16, v38, 0.0);
      v17 = (__int64)(v8 + 12);
      *(_QWORD *)&v18 = *(_QWORD *)(a1 + 32);
      *((_QWORD *)&v18 + 1) = &v56;
      v59 = 0;
      v58 = 0;
      sub_123EA0(v18, (__int64)(v8 + 12), 0, 0xFFFF0000);
      if ( !(unsigned __int8)sub_12EA80(
                               v43,
                               *(const __m128i **)(a1 + 32),
                               *(_QWORD *)(a1 + 40),
                               (__int64)v55,
                               v37,
                               (__int64)(v8 + 12),
                               0) )
      {
        v19 = *(_QWORD *)(a1 + 32);
        while ( *(_DWORD *)(v19 + 352) == 1 )
        {
          v20 = *(_QWORD *)(v19 + 64);
          v21 = **(unsigned int **)(v19 + 344);
          if ( (unsigned int)v21 >= *(_DWORD *)(v20 + 64) )
            sub_DAC10(0.0);
          v19 = *(_QWORD *)(*(_QWORD *)(v20 + 528) + 8 * v21);
          if ( *(_QWORD *)(v19 + 48) )
          {
            if ( !v19
              || sub_A9AA0(v19, &v56, *(_QWORD *)(v19 + 56), 0, 1u)
              || !(unsigned __int8)sub_12EA80(
                                     v43,
                                     (const __m128i *)v19,
                                     *(_QWORD *)(v19 + 56),
                                     (__int64)v55,
                                     *(_QWORD *)(v19 + 56),
                                     v17,
                                     0) )
            {
              goto LABEL_24;
            }
            goto LABEL_35;
          }
        }
        goto LABEL_24;
      }
LABEL_35:
      *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
      v26 = (_DWORD *)sub_124CC0(*(_QWORD *)(a1 + 32), &v56, *(_QWORD *)(a1 + 40), v37, 0, 1u);
      v27 = v26;
      if ( v26 && *v26 != 2 )
      {
        sub_DB920(a1, (__int64)v26);
LABEL_24:
        v22 = 0;
LABEL_25:
        if ( v58 )
        {
          v45 = v22;
          *(_QWORD *)&v59 = 0;
          qfree(v58);
          v22 = v45;
        }
        v46 = v22;
        qfree((__int64)v56);
        v13 = v46;
        goto LABEL_15;
      }
      v28 = (_DWORD *)sub_124CC0(*(_QWORD *)(a1 + 32), &v56, (__int64)v26, v37, 0, 1u);
      if ( v28 )
      {
        if ( *v28 == 4 )
        {
          if ( (unsigned __int8)sub_32F330((__int64)(v28 + 16), &v54) )
          {
            v49 = v54;
            v40 = sub_D7360(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
            v36 = sub_D7430(*(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL));
            if ( v36 > 0 && v49 >= v40 && v40 + v36 - 1 >= v49 )
              goto LABEL_24;
          }
        }
      }
      v29 = *(_QWORD *)(v41 + 24);
      if ( v29 > *(_QWORD *)(v37 + 24) )
        v29 = *(_QWORD *)(v37 + 24);
      if ( v27 && v29 > *((_QWORD *)v27 + 3) )
        v29 = *((_QWORD *)v27 + 3);
      v30 = *(_DWORD *)(a1 + 128);
      v39 = v29 + 1;
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL);
      v42 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL);
      v32 = *(_QWORD *)(v31 + 112);
      v33 = *(_QWORD *)(v31 + 8);
      v53 = v42;
      v48 = v32;
      if ( *(char *)(v33 + 10) < 0 && (LOBYTE(v54) = 1, sub_CFF70() == 1) )
      {
        if ( v53 != -1 )
        {
          v34 = sub_32E840(&v54, v48, v30, v53, v53 + 1, 1);
          if ( v34 )
            goto LABEL_47;
        }
      }
      else
      {
        v53 = -1;
      }
      v34 = sub_32E840(&v54, v48, v30, v39, v42, 1);
LABEL_47:
      v35 = -1;
      if ( (v34 & 2) != 0 )
        v35 = v54;
      *(_QWORD *)(a1 + 112) = v35;
      v22 = v34 != 2;
      goto LABEL_25;
    }
    return 0;
  }
  v25 = *(const __m128i **)(a1 + 32);
  *(_QWORD *)v55 = 1;
  v47 = *(_QWORD *)(v25[30].m128i_i64[0] + 112);
  *(_QWORD *)&v55[4] = _mm_unpacklo_epi32(
                         _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v25[4].m128i_i64[0] + 1504) + 80LL)),
                         _mm_cvtsi32_si128(*(_DWORD *)(a1 + 132))).m128i_u64[0];
  v12 = sub_12EA80(v47, v25, v41, (__int64)v51, v41, (__int64)v55, 0);
LABEL_12:
  if ( v12 )
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
LABEL_14:
  v13 = 0;
LABEL_15:
  v44 = v13;
  sub_11CDA0((__int64)v55);
  return v44;
}

