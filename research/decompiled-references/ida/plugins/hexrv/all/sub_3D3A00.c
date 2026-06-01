__int64 __fastcall sub_3D3A00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  __m128i v6; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // eax
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  bool v17; // cc
  void *v18; // rsi
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rbp
  _QWORD *v22; // r15
  unsigned __int64 v23; // r14
  int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  bool v30; // al
  int v31; // esi
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 i; // r12
  _QWORD *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v42; // r13
  __int64 v43; // r12
  bool v44; // cl
  __int64 v45; // rsi
  __int64 v46; // rcx
  int v47; // esi
  __int64 v48; // rdi
  __int64 v49; // rax
  int v50; // edx
  int v51; // ebx
  __int64 v52; // rbx
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // edx
  __int64 v57; // rcx
  __m128i v58; // xmm0
  __m128i v59; // xmm1
  __int64 v60; // rdx
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // [rsp+8h] [rbp-180h]
  __int128 v64; // [rsp+10h] [rbp-178h]
  __int64 v65; // [rsp+20h] [rbp-168h]
  int v66; // [rsp+2Ch] [rbp-15Ch]
  int v67; // [rsp+30h] [rbp-158h]
  __int64 v68; // [rsp+38h] [rbp-150h]
  __int64 v71; // [rsp+50h] [rbp-138h] BYREF
  __int128 v72; // [rsp+58h] [rbp-130h]
  _BYTE v73[16]; // [rsp+70h] [rbp-118h] BYREF
  unsigned __int64 v74; // [rsp+80h] [rbp-108h] BYREF
  __int64 v75; // [rsp+88h] [rbp-100h]
  int v76; // [rsp+A4h] [rbp-E4h]
  __int64 (__fastcall **v77)(); // [rsp+B0h] [rbp-D8h] BYREF
  int v78; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v79; // [rsp+BCh] [rbp-CCh]
  __int64 v80; // [rsp+C4h] [rbp-C4h]
  __int64 v81; // [rsp+CCh] [rbp-BCh]
  __m128i v82; // [rsp+D8h] [rbp-B0h]
  __int128 v83; // [rsp+E8h] [rbp-A0h]
  __int64 (__fastcall **v84)(); // [rsp+100h] [rbp-88h] BYREF
  _BYTE v85[12]; // [rsp+10Ch] [rbp-7Ch]
  _QWORD v86[2]; // [rsp+118h] [rbp-70h]
  __int128 v87; // [rsp+128h] [rbp-60h]
  __int128 v88; // [rsp+138h] [rbp-50h]
  unsigned __int64 v89; // [rsp+148h] [rbp-40h]

  v3 = a2;
  v4 = *(_QWORD *)(a2 + 40);
  v89 = __readfsqword(0x28u);
  if ( !v4 )
  {
    *(_DWORD *)a2 = -1;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3);
    v17 = *(_QWORD *)(a2 + 32) <= 0xDu;
    v18 = *(void **)(a2 + 16);
    *(_QWORD *)(v3 + 8) = v16;
    if ( v17 )
    {
      v54 = qvector_reserve();
      *(_QWORD *)(v3 + 16) = v54;
      v18 = (void *)v54;
    }
    *(_QWORD *)(v3 + 24) = 14;
    qmemcpy(v18, "Invalid model", 13);
    *(_BYTE *)(*(_QWORD *)(v3 + 16) + 13LL) = 0;
    return 0;
  }
  v80 = 0;
  v77 = off_4BBAD0;
  v82 = (__m128i)-1LL;
  v79 = 3;
  v81 = 0x4900000000LL;
  v6.m128i_i64[0] = -1;
  if ( dword_4C0948 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a3 + 112LL))(a3) )
  {
    v10 = *(_DWORD *)(a3 + 16);
    if ( v10 == *(_DWORD *)(v4 + 72) )
    {
      v55 = qalloc_or_throw();
      v56 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)v55 = off_4BBAD0;
      *(_DWORD *)(v55 + 8) = v56;
      v57 = *(_QWORD *)(a3 + 12);
      v58 = _mm_loadu_si128((const __m128i *)(a3 + 56));
      *(_QWORD *)(v55 + 20) = *(_QWORD *)(a3 + 20);
      v59 = _mm_loadu_si128((const __m128i *)(a3 + 40));
      v60 = *(_QWORD *)(a3 + 28);
      *(_QWORD *)(v55 + 12) = v57;
      *(__m128i *)(v55 + 40) = v59;
      *(_QWORD *)(v55 + 28) = v60;
      *(__m128i *)(v55 + 56) = v58;
      v61 = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(a2 + 56) = v55;
      if ( v61 )
        qfree();
      if ( *(_QWORD *)(a3 + 48) != *(_QWORD *)(a3 + 56) )
      {
        sub_3CDF10((__int64)&v84, a3, (_QWORD *)v4);
        sub_1AAC20(
          *(unsigned __int64 *)&v85[4],
          *(_QWORD *)&v85[4] + v86[0],
          (unsigned __int8 (__fastcall *)(__int64, __int64, _BYTE *, __int64))sub_3CBE60,
          (__int64)&v84);
        v62 = *(_QWORD *)&v85[4];
        *(_DWORD *)(a2 + 68) = HIDWORD(v87);
        if ( v62 )
        {
          v86[0] = 0;
          qfree();
        }
      }
      return 1;
    }
    *(_QWORD *)&v64 = *(_QWORD *)(a3 + 56);
    if ( (_QWORD)v64 == -1 )
    {
      v83 = -1;
      if ( !(unsigned __int8)sub_3D00F0(a1, &v77, (_DWORD *)a3, NAN) )
        return 0;
      v64 = v83;
    }
    else
    {
      v11 = _mm_cvtsi32_si128(v10);
      v12 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 12));
      v13 = *(_DWORD *)(a3 + 8);
      v80 = *(_QWORD *)(a3 + 20);
      v14 = *(_QWORD *)(a3 + 28);
      v79 = _mm_unpacklo_epi32(v12, v11).m128i_u64[0];
      v6 = _mm_loadu_si128((const __m128i *)(a3 + 40));
      v81 = v14;
      v15 = *(_QWORD *)(a3 + 64);
      v78 = v13;
      *((_QWORD *)&v64 + 1) = v15;
      v82 = v6;
    }
  }
  else
  {
    *((_QWORD *)&v64 + 1) = -1;
    *(_QWORD *)&v64 = (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)a3 + 128LL))(a3, NAN);
  }
  if ( *(_QWORD *)(v4 + 8) == (_QWORD)v64 )
  {
    v8 = qalloc_or_throw();
    *(_QWORD *)v8 = off_4BBAD0;
    *(_QWORD *)(v8 + 20) = 0;
    *(_QWORD *)(v8 + 12) = 3;
    *(_QWORD *)(v8 + 28) = 0x4900000000LL;
    *(_OWORD *)(v8 + 40) = -1;
    *(_OWORD *)(v8 + 56) = -1;
    v9 = *(_QWORD *)(a2 + 56);
    *(_QWORD *)(a2 + 56) = v8;
    if ( v9 )
    {
      qfree();
      v8 = *(_QWORD *)(a2 + 56);
    }
    if ( (unsigned int)(*(_DWORD *)(v4 + 60) - 1) <= 1 && *(int *)(*(_QWORD *)(v4 + 64) + 64LL) > 0 )
    {
      *(_DWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 20) = 0;
      sub_3CFAB0(a1, v8, v4, NAN);
      return 1;
    }
    return 0;
  }
  if ( !*(_QWORD *)(v4 + 24) || !rangeset_t_find_range() )
  {
    *(_DWORD *)a2 = -2;
    *(_QWORD *)(a2 + 8) = v64;
    sub_674F0((__int64 *)(a2 + 16));
    return 0;
  }
  v19 = *(_QWORD *)(v4 + 64);
  v20 = *(_DWORD *)(v19 + 64);
  if ( v20 > 0 )
  {
    v67 = -1;
    v21 = 0x7FFFFFFFFFFFFFFFLL;
    v66 = -1;
    v22 = (_QWORD *)v4;
    v68 = v20;
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      if ( v20 <= (int)v23 )
        goto LABEL_40;
      if ( (unsigned int)v23 >= v20 )
        sub_3C9D80(*(double *)v6.m128i_i64);
      v25 = *(_QWORD *)(*(_QWORD *)(v19 + 528) + 8 * v23);
      if ( !v25 )
        goto LABEL_40;
      v26 = *(_QWORD *)(v25 + 32);
      if ( v26 == -1 )
        goto LABEL_40;
      if ( v26 == (_QWORD)v64 )
        break;
      v27 = v64 - v26;
      if ( v24 < 0 )
      {
        v24 = 0;
LABEL_64:
        v66 = v23;
        v21 = v27;
        v67 = 0;
        goto LABEL_40;
      }
      if ( !v24 )
      {
        v28 = -v21;
        if ( v21 > 0 )
          v28 = v21;
        v29 = v26 - v64;
        if ( v27 > 0 )
          v29 = v27;
        if ( v28 > v29 )
          goto LABEL_64;
        if ( v28 >= v29 )
        {
          v30 = v21 > v27;
          v31 = 0;
LABEL_39:
          if ( v30 )
          {
            v24 = v31;
            goto LABEL_64;
          }
        }
      }
LABEL_40:
      v32 = v22[15];
      if ( v23 < v32 )
      {
        v33 = *(_QWORD *)(v22[14] + 24 * v23 + 8);
        if ( (int)v33 > 0 )
        {
          v63 = (unsigned int)(v33 - 1);
          for ( i = 0; ; ++i )
          {
            if ( v23 < v32 )
            {
              v35 = (_QWORD *)(24 * v23 + v22[14]);
              if ( i < v35[1] )
              {
                v36 = *(_QWORD *)(*v35 + 8 * i);
                if ( v36 )
                {
                  v83 = v64;
                  v37 = sub_3CAAF0(v36, (__int64)&v77, (__int64)v22, 0, 0);
                  if ( v24 < v38 )
                    goto LABEL_57;
                  if ( v24 > v38 )
                    goto LABEL_58;
                  if ( v24 )
                  {
                    if ( v21 < v37 )
                      goto LABEL_57;
                  }
                  else
                  {
                    v39 = -v21;
                    if ( v21 > 0 )
                      v39 = v21;
                    v40 = -v37;
                    if ( v37 > 0 )
                      v40 = v37;
                    if ( v39 > v40 || v39 >= v40 && v21 > v37 )
                    {
LABEL_57:
                      v21 = v37;
                      v67 = i;
                      v24 = v38;
                      v66 = v23;
                    }
                  }
                }
              }
            }
LABEL_58:
            if ( v63 == i )
              break;
            v32 = v22[15];
          }
        }
      }
      if ( ++v23 == v68 )
      {
        v3 = a2;
        v4 = (__int64)v22;
        goto LABEL_69;
      }
      v19 = v22[8];
      v20 = *(_DWORD *)(v19 + 64);
    }
    if ( v24 <= 1 )
    {
      v66 = v23;
      v24 = 2;
      v67 = 0;
      v21 = 8;
      goto LABEL_40;
    }
    if ( v24 != 2 )
      goto LABEL_40;
    v31 = 2;
    v27 = 8;
    v30 = v21 <= 7;
    goto LABEL_39;
  }
  v67 = -1;
  v24 = 0;
  v21 = 0x7FFFFFFFFFFFFFFFLL;
  v66 = -1;
LABEL_69:
  v41 = *(_QWORD *)(v4 + 136);
  if ( v41 + 24LL * *(_QWORD *)(v4 + 144) == v41 )
    goto LABEL_85;
  v65 = v3;
  v42 = v41 + 24LL * *(_QWORD *)(v4 + 144);
  v43 = *(_QWORD *)(v4 + 136);
  do
  {
    while ( 1 )
    {
      v47 = *(_DWORD *)(v43 + 16);
      v48 = *(_QWORD *)v43;
      v83 = v64;
      v49 = sub_3CBC20(v48, v47, (__int64)&v77, v4, 0, *(double *)v6.m128i_i64);
      if ( v24 < v50 )
        goto LABEL_83;
      if ( v24 <= v50 )
        break;
LABEL_81:
      v43 += 24;
      if ( v42 == v43 )
        goto LABEL_84;
    }
    v44 = v21 < v49;
    if ( v24 )
      goto LABEL_80;
    v45 = -v21;
    if ( v21 > 0 )
      v45 = v21;
    v46 = -v49;
    if ( v49 > 0 )
      v46 = v49;
    if ( v45 <= v46 )
    {
      if ( v45 < v46 )
        goto LABEL_81;
      v44 = v21 > v49;
LABEL_80:
      if ( v44 )
        goto LABEL_83;
      goto LABEL_81;
    }
LABEL_83:
    v51 = *(_DWORD *)(v43 + 8);
    v43 += 24;
    v21 = v49;
    v66 = v51;
    v67 = *(_DWORD *)(v43 - 12);
    v24 = v50;
  }
  while ( v42 != v43 );
LABEL_84:
  v3 = v65;
LABEL_85:
  v52 = qalloc_or_throw();
  *(_QWORD *)v52 = off_4BBAD0;
  *(_QWORD *)(v52 + 20) = 0;
  *(_QWORD *)(v52 + 12) = 3;
  *(_QWORD *)(v52 + 28) = 0x4900000000LL;
  *(_OWORD *)(v52 + 40) = -1;
  *(_OWORD *)(v52 + 56) = -1;
  v53 = *(_QWORD *)(v3 + 56);
  *(_QWORD *)(v3 + 56) = v52;
  if ( v53 )
    qfree();
  if ( v66 < 0 || !(unsigned __int8)sub_3D0090(a1, (_DWORD *)v52, v4, v66, v67, NAN) )
    return 0;
  v84 = off_4BBAD0;
  v87 = -1;
  *(_QWORD *)v85 = 3;
  *(_QWORD *)((char *)v86 + 4) = 0x4900000000LL;
  *(_DWORD *)&v85[8] = v66;
  LODWORD(v86[0]) = v67;
  v88 = v64;
  sub_3CDF10((__int64)v73, (__int64)&v84, (_QWORD *)v4);
  sub_1AAC20(
    v74,
    v74 + v75,
    (unsigned __int8 (__fastcall *)(__int64, __int64, _BYTE *, __int64))sub_3CBE60,
    (__int64)v73);
  v71 = 0;
  v72 = 0;
  sub_3D22E0(&v71, (__int64)&v74);
  if ( !(unsigned __int8)sub_3CF910(a1, v52, v4, v76, &v71, 0.0) )
  {
    sub_1AAED0(&v71);
    if ( v74 )
    {
      v75 = 0;
      qfree();
    }
    return 0;
  }
  *(_DWORD *)(v3 + 68) = v76;
  sub_1AAED0(&v71);
  if ( v74 )
  {
    v75 = 0;
    qfree();
  }
  return 1;
}

