_BOOL8 __fastcall sub_D77B0(__int64 a1)
{
  _DWORD *v2; // rsi
  __int64 v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // r12
  __int64 v9; // r14
  int v10; // r13d
  __m128i v11; // xmm0
  char v12; // al
  bool v13; // al
  __int64 v14; // rbx
  __int64 v15; // r14
  int v16; // esi
  int v17; // r14d
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rax
  bool v24; // al
  __int64 v25; // rax
  __int64 v26; // r14
  _DWORD *v27; // rax
  _DWORD *v28; // r12
  _DWORD *v29; // rax
  unsigned __int64 v30; // rax
  unsigned int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // [rsp-10h] [rbp-D0h]
  __int64 v39; // [rsp+0h] [rbp-C0h]
  unsigned int v40; // [rsp+8h] [rbp-B8h]
  unsigned __int64 v41; // [rsp+8h] [rbp-B8h]
  unsigned __int64 v42; // [rsp+8h] [rbp-B8h]
  __int64 v43; // [rsp+10h] [rbp-B0h]
  __int64 v44; // [rsp+10h] [rbp-B0h]
  __int64 v45; // [rsp+18h] [rbp-A8h]
  bool v46; // [rsp+18h] [rbp-A8h]
  bool v47; // [rsp+18h] [rbp-A8h]
  bool v48; // [rsp+18h] [rbp-A8h]
  __int64 v49; // [rsp+18h] [rbp-A8h]
  __int64 v50; // [rsp+18h] [rbp-A8h]
  unsigned __int64 v51; // [rsp+18h] [rbp-A8h]
  _DWORD *v52; // [rsp+28h] [rbp-98h] BYREF
  _DWORD *v53; // [rsp+30h] [rbp-90h] BYREF
  _DWORD *v54; // [rsp+38h] [rbp-88h] BYREF
  __int64 v55; // [rsp+40h] [rbp-80h]
  unsigned __int64 v56; // [rsp+48h] [rbp-78h] BYREF
  _BYTE v57[12]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v58; // [rsp+60h] [rbp-60h] BYREF
  __int64 v59; // [rsp+68h] [rbp-58h]
  __int64 v60; // [rsp+70h] [rbp-50h]
  __int128 v61; // [rsp+78h] [rbp-48h]
  unsigned __int64 v62; // [rsp+88h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 124) )
    return 0;
  v2 = *(_DWORD **)(a1 + 40);
  if ( *v2 != 57 )
    return 0;
  v4 = *(_QWORD *)(a1 + 32);
  v52 = v2;
  v5 = (_DWORD *)sub_D7030(v4, (__int64)(v2 + 12), (__int64 *)&v52);
  if ( !v5 || *v5 != 2 )
    return 0;
  v6 = *(_QWORD *)(a1 + 32);
  v53 = v5 + 12;
  v43 = (__int64)v52;
  v54 = v52;
  v7 = (_DWORD *)sub_D7030(v6, (__int64)(v5 + 12), (__int64 *)&v54);
  v8 = v7;
  if ( v7 )
  {
    if ( *v7 != 12 )
    {
      v9 = *(_QWORD *)(a1 + 32);
      v10 = v43;
      *(_QWORD *)v57 = 1;
      v11 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 132));
      v45 = *(_QWORD *)(*(_QWORD *)(v9 + 480) + 112LL);
      v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 64) + 1504LL) + 80LL);
      *(_QWORD *)&v57[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), v11).m128i_u64[0];
      goto LABEL_10;
    }
    if ( sub_1183E0(v7, &v53) )
    {
      v10 = (int)v54;
      v25 = sub_D7030(*(_QWORD *)(a1 + 32), (__int64)v53, (__int64 *)&v54);
      v9 = *(_QWORD *)(a1 + 32);
      v11 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 132));
      *(_QWORD *)v57 = 1;
      v8 = (_DWORD *)v25;
      v45 = *(_QWORD *)(*(_QWORD *)(v9 + 480) + 112LL);
      v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 64) + 1504LL) + 80LL);
      *(_QWORD *)&v57[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), v11).m128i_u64[0];
      if ( !v25 )
        goto LABEL_11;
LABEL_10:
      if ( *v8 != 2 )
      {
LABEL_11:
        v12 = sub_12A5C0(v45, v9, v10, (_DWORD)v53, v10, (unsigned int)v57, 0);
        goto LABEL_12;
      }
      v14 = *(_QWORD *)(a1 + 40);
      v58 = 0;
      v39 = (__int64)v54;
      v59 = 0;
      sub_5FB00(&v58, _mm_cvtsi128_si32(v11), v40);
      v60 = 0;
      v61 = 0;
      v15 = sub_A55E0(v9, &v58, v39, v14, 0);
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree();
      }
      qfree();
      if ( v15 )
        goto LABEL_14;
      v16 = *(_DWORD *)(a1 + 132);
      v58 = 0;
      v59 = 0;
      sub_5FB00(&v58, v16, v40);
      v17 = (_DWORD)v8 + 48;
      v18 = *(_QWORD *)(a1 + 32);
      v61 = 0;
      v60 = 0;
      sub_11F9E0(v18, &v58, v8 + 12, 0, 4294901760LL);
      v19 = *(_QWORD *)(a1 + 32);
      if ( !(unsigned __int8)sub_12A5C0(v45, v19, *(_QWORD *)(a1 + 40), (unsigned int)v57, v39, (int)v8 + 48, 0) )
      {
        v21 = *(_QWORD *)(a1 + 32);
        while ( *(_DWORD *)(v21 + 352) == 1 )
        {
          v22 = *(_QWORD *)(v21 + 64);
          v23 = **(unsigned int **)(v21 + 344);
          if ( (unsigned int)v23 >= *(_DWORD *)(v22 + 64) )
            ((void (__fastcall __noreturn *)(__int64, __int64, __int64, __int64))sub_D6750)(v38, v19, v22, v20);
          v21 = *(_QWORD *)(*(_QWORD *)(v22 + 528) + 8 * v23);
          if ( *(_QWORD *)(v21 + 48) )
          {
            if ( !v21
              || sub_A55E0(v21, &v58, *(_QWORD *)(v21 + 56), 0, 1u)
              || !(unsigned __int8)sub_12A5C0(
                                     v45,
                                     v21,
                                     *(_QWORD *)(v21 + 56),
                                     (unsigned int)v57,
                                     *(_QWORD *)(v21 + 56),
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
      v27 = (_DWORD *)sub_120800(*(_QWORD *)(a1 + 32), &v58, *(_QWORD *)(a1 + 40), v39, 0, 1);
      v28 = v27;
      if ( v27 && *v27 != 2 )
      {
        sub_D7460(a1, (__int64)v27);
LABEL_24:
        v24 = 0;
LABEL_25:
        if ( v60 )
        {
          v47 = v24;
          *(_QWORD *)&v61 = 0;
          qfree();
          v24 = v47;
        }
        v48 = v24;
        qfree();
        v13 = v48;
        goto LABEL_15;
      }
      v29 = (_DWORD *)sub_120800(*(_QWORD *)(a1 + 32), &v58, v27, v39, 0, 1);
      if ( v29 )
      {
        if ( *v29 == 4 )
        {
          if ( (unsigned __int8)sub_329F60(v29 + 16, &v56) )
          {
            v51 = v56;
            v42 = sub_D2EA0(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
            v37 = sub_D2F70(*(_QWORD *)(a1 + 32));
            if ( v37 > 0 && v51 >= v42 && v42 + v37 - 1 >= v51 )
              goto LABEL_24;
          }
        }
      }
      v30 = *(_QWORD *)(v43 + 24);
      if ( v30 > *(_QWORD *)(v39 + 24) )
        v30 = *(_QWORD *)(v39 + 24);
      if ( v28 && v30 > *((_QWORD *)v28 + 3) )
        v30 = *((_QWORD *)v28 + 3);
      v31 = *(_DWORD *)(a1 + 128);
      v41 = v30 + 1;
      v32 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL);
      v44 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL);
      v33 = *(_QWORD *)(v32 + 112);
      v34 = *(_QWORD *)(v32 + 8);
      v55 = v44;
      v50 = v33;
      if ( *(char *)(v34 + 10) < 0 && (LOBYTE(v56) = 1, sub_CBAB0() == 1) )
      {
        if ( v55 != -1 )
        {
          v35 = sub_329580(&v56, v50, v31, v55, v55 + 1, 1);
          if ( v35 )
            goto LABEL_47;
        }
      }
      else
      {
        v55 = -1;
      }
      v35 = sub_329580(&v56, v50, v31, v41, v44, 1);
LABEL_47:
      v36 = -1;
      if ( (v35 & 2) != 0 )
        v36 = v56;
      *(_QWORD *)(a1 + 112) = v36;
      v24 = v35 != 2;
      goto LABEL_25;
    }
    return 0;
  }
  v26 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)v57 = 1;
  v49 = *(_QWORD *)(*(_QWORD *)(v26 + 480) + 112LL);
  *(_QWORD *)&v57[4] = _mm_unpacklo_epi32(
                         _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 64) + 1504LL) + 80LL)),
                         _mm_cvtsi32_si128(*(_DWORD *)(a1 + 132))).m128i_u64[0];
  v12 = sub_12A5C0(v49, v26, v43, (_DWORD)v53, v43, (unsigned int)v57, 0);
LABEL_12:
  if ( v12 )
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
LABEL_14:
  v13 = 0;
LABEL_15:
  v46 = v13;
  sub_1188E0(v57);
  return v46;
}

