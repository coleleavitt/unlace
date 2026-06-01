__int64 __fastcall sub_3DA480(double a1, double a2, double a3, __m128 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  _DWORD *v16; // rsi
  int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // r12
  _QWORD *v26; // rax
  __int64 v27; // rdi
  int *v28; // rbx
  __int64 v29; // rdx
  __int64 i; // rbx
  _QWORD *v31; // rax
  _QWORD *v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned __int64 v36; // rbp
  __int64 v37; // r14
  _DWORD *v38; // rsi
  int v39; // r13d
  __int64 v40; // rax
  int v41; // r13d
  int *v42; // r12
  __int64 v43; // r12
  __int64 v44; // r13
  __int128 v45; // xmm0
  __int64 v46; // r12
  __int64 v47; // rax
  void *v48; // rax
  size_t v49; // r10
  __int64 v50; // r13
  __int64 v51; // r8
  __int64 v52; // r11
  unsigned __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // r13
  unsigned __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rax
  size_t na; // [rsp+8h] [rbp-1F0h]
  size_t nb; // [rsp+8h] [rbp-1F0h]
  size_t n; // [rsp+8h] [rbp-1F0h]
  size_t nc; // [rsp+8h] [rbp-1F0h]
  size_t nd; // [rsp+8h] [rbp-1F0h]
  size_t v66; // [rsp+28h] [rbp-1D0h]
  __int64 v67; // [rsp+30h] [rbp-1C8h]
  __int64 v68; // [rsp+38h] [rbp-1C0h]
  __int64 v69; // [rsp+40h] [rbp-1B8h]
  __int64 v70; // [rsp+40h] [rbp-1B8h]
  __int64 v71; // [rsp+48h] [rbp-1B0h]
  _DWORD *src; // [rsp+60h] [rbp-198h]
  __int128 v73; // [rsp+68h] [rbp-190h]
  _QWORD v74[5]; // [rsp+80h] [rbp-178h] BYREF
  __int128 v75; // [rsp+A8h] [rbp-150h]
  __int128 v76; // [rsp+B8h] [rbp-140h]
  __int64 (__fastcall **v77)(); // [rsp+D0h] [rbp-128h] BYREF
  __int64 v78; // [rsp+D8h] [rbp-120h]
  __int128 v79; // [rsp+E0h] [rbp-118h]
  __int64 v80; // [rsp+F0h] [rbp-108h]
  const char *v81; // [rsp+F8h] [rbp-100h]
  int v82; // [rsp+100h] [rbp-F8h]
  __m128i v83; // [rsp+108h] [rbp-F0h]
  int v84; // [rsp+118h] [rbp-E0h]
  _BYTE v85[96]; // [rsp+120h] [rbp-D8h] BYREF
  int v86; // [rsp+180h] [rbp-78h] BYREF
  __int64 v87; // [rsp+188h] [rbp-70h]
  __int128 v88; // [rsp+190h] [rbp-68h]
  void *v89; // [rsp+1A0h] [rbp-58h]
  __int128 v90; // [rsp+1A8h] [rbp-50h]
  unsigned __int64 v91; // [rsp+1B8h] [rbp-40h]

  v91 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a6 + 64);
  if ( !v7 )
    return 0;
  if ( (unsigned int)(*(_DWORD *)(v7 + 60) - 1) > 1 )
    return 0;
  v8 = sub_3CCAA0(v7, *(_DWORD *)(a7 + 20), a1);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = *(_QWORD *)(v8 + 376);
  if ( !(_DWORD)v10 )
    return 0;
  v69 = 0;
  v11 = *(_DWORD *)(v9 + 76);
  src = nullptr;
  v71 = 0;
  v73 = 0;
  if ( v11 == 4 )
  {
    v70 = qvector_reserve();
    *(_QWORD *)v70 = 0;
    *(_OWORD *)(v70 + 8) = 0;
    sub_66DF0((__int64 *)v70);
    v41 = **(_DWORD **)(v9 + 368);
    LODWORD(v74[0]) = v41;
    *(_DWORD *)qvector_reserve() = v41;
    v69 = qvector_reserve();
    *(_QWORD *)(v69 + 24) = 0;
    *(_OWORD *)(v69 + 32) = 0;
    v71 = 2;
    sub_66DF0((__int64 *)(v69 + 24));
    LODWORD(v74[0]) = *(_DWORD *)(*(_QWORD *)(v9 + 368) + 4LL);
    src = (_DWORD *)qvector_reserve();
    src[1] = v74[0];
    v19 = 2;
    *(_QWORD *)&v73 = 2;
    goto LABEL_54;
  }
  if ( v11 == 5 )
  {
    v33 = *(_QWORD **)(*(_QWORD *)(v9 + 56) + 56LL);
    if ( !v33[4] )
      goto LABEL_35;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    while ( 1 )
    {
      if ( v35 != -1 )
      {
        v69 = qvector_reserve();
        v35 = v71;
        v34 = v69;
      }
      v37 = v34 + 24 * v35;
      *(_QWORD *)v37 = 0;
      *(_OWORD *)(v37 + 8) = 0;
      ++v71;
      if ( *(_QWORD *)(*v33 + 24 * v36 + 8) <= 1u )
      {
        sub_66DF0((__int64 *)v37);
        goto LABEL_47;
      }
      nb = *v33 + 24 * v36;
      sub_66DF0((__int64 *)v37);
      v49 = nb;
      v50 = 0;
      if ( *(_QWORD *)(nb + 8) )
        break;
LABEL_72:
      v56 = *(_QWORD *)(v37 + 8);
      v57 = 2;
      if ( v56 )
        v57 = v56-- + 1;
      v58 = *(_QWORD *)v37;
      if ( *(_QWORD *)(v37 + 16) < v57 )
      {
        nd = v57;
        v59 = qvector_reserve();
        *(_QWORD *)v37 = v59;
        v57 = nd;
        v58 = v59;
      }
      *(_QWORD *)(v37 + 8) = v57;
      *(_BYTE *)(v58 + v56) = 41;
      *(_BYTE *)(*(_QWORD *)v37 + v56 + 1) = 0;
LABEL_47:
      v38 = src;
      v39 = *(_DWORD *)(v33[3] + 4 * v36);
      v40 = v73;
      if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)(v73 + 1) )
      {
        src = (_DWORD *)qvector_reserve();
        v38 = src;
        v40 = v73;
      }
      v38[v40] = v39;
      v35 = v71;
      ++v36;
      *(_QWORD *)&v73 = v73 + 1;
      v19 = v71;
      if ( v36 >= v33[4] )
      {
LABEL_54:
        if ( !v19 )
        {
LABEL_33:
          if ( src )
            qfree();
          goto LABEL_35;
        }
        v80 = 0;
        v77 = (__int64 (__fastcall **)())&unk_4BEC88;
        v42 = (int *)v85;
        v28 = &v86;
        v78 = 0x3FF000004LL;
        v81 = "Select target block";
        v79 = -1;
        v82 = 1;
        v84 = -1;
        v83 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4BD0D8), (__m128i)(unsigned __int64)&off_4BCFA8);
        do
        {
          *(_QWORD *)v42 = 0;
          v42 += 6;
          *((_OWORD *)v42 - 1) = 0;
        }
        while ( v42 != &v86 );
        v86 = 0;
        if ( ((HIDWORD(v78) >> 19) & 0x3F) != 0 )
        {
          if ( BYTE3(v78) != 0xFF )
          {
            if ( !under_debugger )
              interr();
            goto LABEL_82;
          }
          BYTE3(v78) = ((HIDWORD(v78) >> 19) & 0x3F) - 1;
          HIDWORD(v78) &= 0xFE07FFFF;
        }
        v87 = 0;
        v77 = off_4BCDC0;
        v88 = 0;
        v87 = qalloc_or_throw();
        v43 = v87;
        v44 = 0;
        v45 = 0;
        *((_QWORD *)&v88 + 1) = v19;
        while ( 1 )
        {
          v46 = 24 * v44 + v43;
          v47 = v69 + 24 * v44;
          *(_OWORD *)(v46 + 8) = v45;
          *(_QWORD *)v46 = 0;
          if ( *(_QWORD *)(v47 + 8) )
          {
            na = *(_QWORD *)(v47 + 8);
            v48 = (void *)qalloc_or_throw();
            *(_QWORD *)v46 = v48;
            *(_QWORD *)(v46 + 16) = na;
            memcpy(v48, *(const void **)(v69 + 24 * v44), na);
            v45 = 0;
            *(_QWORD *)(v46 + 8) = na;
          }
          if ( v19 == ++v44 )
            break;
          v43 = v87;
        }
        *(_QWORD *)&v88 = v19;
        v89 = nullptr;
        v90 = 0;
        if ( (_QWORD)v73 )
        {
          v89 = (void *)qalloc_or_throw();
          *((_QWORD *)&v90 + 1) = v73;
          memcpy(v89, src, 4 * v73);
          *(_QWORD *)&v90 = v73;
          if ( (_QWORD)v88 == (_QWORD)v73 )
          {
            v74[0] = 0;
            v21 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                    16,
                    0,
                    &v77,
                    v74,
                    &callui,
                    v20);
            if ( v21 >= 0 && v21 < (unsigned __int64)v73 )
            {
              v22 = src[v21];
              v74[0] = off_4BCA30;
              *(_QWORD *)((char *)&v74[3] + 4) = 0x4900000000LL;
              *(_QWORD *)((char *)&v74[1] + 4) = 3;
              *(_QWORD *)((char *)&v74[2] + 4) = 0;
              v75 = -1;
              v76 = -1;
              if ( (unsigned __int8)sub_3CF290(a6, v74, v7, v22, 0, NAN) )
                sub_3D9E00(a6, v74, 4u, *(_DWORD *)(a6 + 56), NAN, COERCE_DOUBLE(&off_4BCFA8), a3, a4);
            }
            v77 = off_4BCDC0;
            if ( v89 )
            {
              *(_QWORD *)&v90 = 0;
              qfree();
            }
            v23 = v87;
            if ( v87 )
            {
              v24 = v88;
              if ( (_QWORD)v88 )
              {
                v25 = 0;
                do
                {
                  v26 = (_QWORD *)(v23 + 24 * v25);
                  if ( *v26 )
                  {
                    v26[1] = 0;
                    qfree();
                    v23 = v87;
                  }
                  ++v25;
                }
                while ( v24 != v25 );
              }
              *(_QWORD *)&v88 = 0;
              qfree();
            }
            v77 = (__int64 (__fastcall **)())&unk_4BEC88;
            do
            {
              v27 = *((_QWORD *)v28 - 3);
              v28 -= 6;
              if ( v27 )
              {
                *((_QWORD *)v28 + 1) = 0;
                qfree();
              }
            }
            while ( v28 != (int *)v85 );
            goto LABEL_33;
          }
        }
        if ( !under_debugger )
          sub_37CFE0(0, 0.0);
LABEL_82:
        BUG();
      }
      v34 = v69;
    }
    while ( 1 )
    {
      n = v49;
      sub_F5F10((__int64 *)v37);
      v49 = n;
      if ( (unsigned __int64)++v50 >= *(_QWORD *)(n + 8) )
        goto LABEL_72;
      v51 = *(_QWORD *)(v37 + 8);
      if ( v51 )
      {
        v52 = v51 + 1;
        v53 = v51 + 2;
        v54 = *(_QWORD *)v37;
        --v51;
        if ( *(_QWORD *)(v37 + 16) >= v53 )
          goto LABEL_69;
      }
      else
      {
        v54 = *(_QWORD *)v37;
        v53 = 3;
        v52 = 2;
        if ( *(_QWORD *)(v37 + 16) >= 3u )
          goto LABEL_69;
      }
      v68 = v52;
      v67 = v51;
      v66 = n;
      nc = v53;
      v55 = qvector_reserve();
      v52 = v68;
      v51 = v67;
      *(_QWORD *)v37 = v55;
      v54 = v55;
      v49 = v66;
      v53 = nc;
LABEL_69:
      *(_QWORD *)(v37 + 8) = v53;
      *(_BYTE *)(v54 + v52) = 0;
      *(_WORD *)(*(_QWORD *)v37 + v51) = 8236;
    }
  }
  if ( (int)v10 > 0 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 != -1 )
      {
        v69 = qvector_reserve();
        v14 = v71;
        v13 = v69;
      }
      v15 = v13 + 24 * v14;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      ++v71;
      sub_66DF0((__int64 *)v15);
      v16 = src;
      v17 = *(_DWORD *)(*(_QWORD *)(v9 + 368) + 4 * v12);
      v18 = v73;
      LODWORD(v74[0]) = v17;
      if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)(v73 + 1) )
      {
        src = (_DWORD *)qvector_reserve();
        v16 = src;
        v18 = v73;
      }
      v16[v18] = v17;
      v14 = v71;
      ++v12;
      *(_QWORD *)&v73 = v73 + 1;
      v19 = v71;
      if ( *(_DWORD *)(v9 + 376) <= (int)v12 )
        break;
      v13 = v69;
    }
    goto LABEL_54;
  }
LABEL_35:
  v29 = v69;
  if ( v69 )
  {
    if ( v71 )
    {
      for ( i = 0; i != v71; ++i )
      {
        v31 = (_QWORD *)(v29 + 24 * i);
        if ( *v31 )
        {
          v31[1] = 0;
          qfree();
          v29 = v69;
        }
      }
    }
    qfree();
  }
  return 0;
}

