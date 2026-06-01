unsigned __int64 __fastcall sub_3B7C00(
        __int64 a1,
        unsigned __int8 a2,
        __m128i a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        double a10)
{
  __int64 *v10; // r14
  __int64 v11; // rbp
  unsigned __int64 v12; // r13
  __int64 v13; // rbx
  unsigned __int64 v14; // r15
  _QWORD **v15; // rdi
  _QWORD *v16; // rax
  unsigned __int64 v17; // r13
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r14
  __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  __m128i v24; // xmm1
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  const __m128i *v28; // rdx
  const __m128i *v29; // r13
  __int64 *v30; // rsi
  __int64 *v32; // r15
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // r12
  __int64 *v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // r8
  __int64 v40; // rbx
  __int64 v41; // r12
  __int64 *v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // rcx
  __m128i v45; // xmm0
  unsigned __int64 *v46; // rcx
  unsigned __int64 *k; // rax
  __int64 v48; // r15
  __int64 *v49; // r14
  unsigned __int64 v50; // rdx
  __int64 *v51; // r15
  __int64 v52; // rsi
  _QWORD *v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rsi
  unsigned __int64 *v57; // rdx
  unsigned __int64 v58; // rcx
  unsigned __int64 *j; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r12
  unsigned __int64 i; // rdi
  __int64 v63; // rax
  unsigned __int64 v64; // r13
  unsigned __int64 *v65; // rsi
  __m128i v66; // xmm0
  __int64 v67; // rcx
  __m128i v68; // xmm1
  __int64 v69; // rdx
  __int64 v70; // rax
  unsigned __int64 v71; // rbp
  unsigned __int64 v72; // rbx
  _QWORD *v73; // rdi
  _QWORD *v74; // rdi
  const __m128i *v75; // [rsp+8h] [rbp-F0h]
  __int64 v76; // [rsp+10h] [rbp-E8h]
  unsigned __int64 *v77; // [rsp+18h] [rbp-E0h]
  __int64 v78; // [rsp+28h] [rbp-D0h]
  __int64 v79; // [rsp+28h] [rbp-D0h]
  __m128i v82; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v83; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v84; // [rsp+58h] [rbp-A0h] BYREF
  __m128i v85; // [rsp+68h] [rbp-90h] BYREF
  __int64 v86; // [rsp+78h] [rbp-80h]
  __int64 *v87; // [rsp+80h] [rbp-78h] BYREF
  __m128i v88; // [rsp+88h] [rbp-70h] BYREF
  __m128i v89; // [rsp+98h] [rbp-60h] BYREF
  __int64 v90; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v91; // [rsp+B8h] [rbp-40h]

  v10 = *(__int64 **)(a1 + 192);
  v11 = *(_QWORD *)(a1 + 184);
  v91 = __readfsqword(0x28u);
  v12 = *(_QWORD *)(a1 + 200);
  if ( a2 )
  {
    sub_3B5340(*(_QWORD *)(v11 + 1392), v11, *(double *)a3.m128i_i64, a4, a5, a6, a7, a8, a9, a10);
    if ( !v12 )
    {
      v76 = 0;
LABEL_79:
      v20 = *(_QWORD *)(a1 + 224);
      if ( !v20 )
        goto LABEL_101;
      v19 = *(_QWORD *)(a1 + 216);
      v13 = 0;
      v17 = 0;
      goto LABEL_81;
    }
  }
  else if ( !v12 )
  {
    v13 = 0;
    v17 = *(_QWORD *)(a1 + 224);
    v20 = v17;
    if ( !v17 )
    {
      v76 = 0;
      v21 = *(_QWORD *)(a1 + 216);
LABEL_100:
      v77 = nullptr;
      v13 = 0;
      v48 = 48 * v17;
      v49 = (__int64 *)(v21 + 48 * v17);
      if ( (__int64 *)v21 != v49 )
        goto LABEL_57;
LABEL_101:
      *(_BYTE *)(a1 + 264) = a2;
      return v91 - __readfsqword(0x28u);
    }
    goto LABEL_104;
  }
  v76 = 0;
  v13 = 0;
  v14 = 0;
  do
  {
    v82.m128i_i64[0] = v13;
    v15 = *(_QWORD ***)(v11 + 1392);
    v82.m128i_i64[1] = v76;
    sub_3B2A00(v15, &v82, v10, *(double *)a3.m128i_i64);
    ++v14;
    v13 = v82.m128i_i64[0];
    v10 += 3;
    v76 = v82.m128i_i64[1];
  }
  while ( v14 < v12 );
  if ( !v82.m128i_i64[0] )
    goto LABEL_79;
  if ( v82.m128i_i64[1] )
  {
    v16 = *(_QWORD **)(v82.m128i_i64[0] + 8);
    v17 = 0;
LABEL_8:
    while ( v16 != (_QWORD *)v82.m128i_i64[0] )
    {
      while ( 1 )
      {
        v17 += v16[5];
        if ( (*v16 & 2) != 0 )
          break;
        v18 = (_QWORD *)v16[2];
        if ( (*(_BYTE *)v18 & 2) != 0 )
        {
          v54 = (_QWORD *)(*v16 & 0xFFFFFFFFFFFFFFFCLL);
          v55 = *v54;
          if ( (*v54 & 2) == 0 )
          {
            while ( (_QWORD *)v54[2] == v16 )
            {
              v16 = (_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCLL);
              v55 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v55 & 2) != 0 )
                goto LABEL_8;
              v56 = v54;
              v54 = v16;
              v16 = v56;
            }
          }
          v16 = v54;
          goto LABEL_8;
        }
        do
        {
          v16 = v18;
          v18 = (_QWORD *)v18[1];
        }
        while ( (*(_BYTE *)v18 & 2) == 0 );
        if ( v16 == (_QWORD *)v82.m128i_i64[0] )
          goto LABEL_13;
      }
    }
LABEL_13:
    v19 = *(_QWORD *)(a1 + 216);
    v20 = *(_QWORD *)(a1 + 224);
    v21 = v19;
    if ( v20 == v17 )
      goto LABEL_22;
    a3.m128i_i64[0] = 0;
    v86 = 0;
    v83 = 0;
    v85 = (__m128i)0xFFFFFFFFuLL;
    v84 = 0;
    if ( v17 >= v20 )
    {
      v22 = *(_QWORD *)(a1 + 232);
      v23 = a1 + 216;
      if ( (unsigned __int64)&v83 < v19 || (unsigned __int64)&v83 >= v19 + 48 * v22 )
      {
        if ( v22 < v17 )
        {
          v21 = qvector_reserve(v23, v19, v17, 48);
          *(_QWORD *)(a1 + 216) = v21;
          v20 = *(_QWORD *)(a1 + 224);
        }
        if ( v20 < v17 )
        {
          v24 = _mm_loadu_si128(&v84);
          a3 = _mm_loadu_si128(&v85);
          v25 = v86;
          v26 = 48 * v20;
          do
          {
            v27 = v21 + v26;
            ++v20;
            v26 += 48;
            *(_QWORD *)v27 = 0;
            *(_QWORD *)(v27 + 40) = v25;
            *(__m128i *)(v27 + 8) = v24;
            *(__m128i *)(v27 + 24) = a3;
            v21 = *(_QWORD *)(a1 + 216);
          }
          while ( v20 != v17 );
        }
        *(_QWORD *)(a1 + 224) = v17;
        goto LABEL_22;
      }
      v66 = _mm_loadu_si128(&v84);
      v87 = nullptr;
      v90 = 0;
      v88 = v66;
      a3 = _mm_loadu_si128(&v85);
      v89 = a3;
      if ( v22 < v17 )
      {
        *(_QWORD *)(a1 + 216) = qvector_reserve(v23, v19, v17, 48);
        v20 = *(_QWORD *)(a1 + 224);
      }
      if ( v20 < v17 )
      {
        v67 = v90;
        v68 = _mm_loadu_si128(&v88);
        a3 = _mm_loadu_si128(&v89);
        v69 = 48 * v20;
        do
        {
          ++v20;
          v70 = v69 + *(_QWORD *)(a1 + 216);
          v69 += 48;
          *(_QWORD *)v70 = 0;
          *(_QWORD *)(v70 + 40) = v67;
          *(__m128i *)(v70 + 8) = v68;
          *(__m128i *)(v70 + 24) = a3;
        }
        while ( v20 != v17 );
      }
      *(_QWORD *)(a1 + 224) = v17;
      sub_140140(&v87);
      v21 = *(_QWORD *)(a1 + 216);
      goto LABEL_85;
    }
    goto LABEL_81;
  }
  v64 = *(_QWORD *)(a1 + 224);
  v20 = v64;
  if ( v64 )
  {
LABEL_104:
    v17 = 0;
    v76 = 0;
    v19 = *(_QWORD *)(a1 + 216);
LABEL_81:
    v61 = v17;
    for ( i = v19; ; i = *(_QWORD *)(a1 + 216) )
    {
      v63 = 3 * v61++;
      sub_140140((__int64 **)(16 * v63 + i));
      if ( v61 >= v20 )
        break;
    }
    *(_QWORD *)(a1 + 224) = v17;
    v21 = *(_QWORD *)(a1 + 216);
    if ( v13 )
    {
LABEL_85:
      if ( !v76 )
      {
        v64 = *(_QWORD *)(a1 + 224);
        goto LABEL_87;
      }
LABEL_22:
      v77 = *(unsigned __int64 **)(v13 + 8);
      if ( v77 == (unsigned __int64 *)v13 )
      {
        v48 = 48LL * *(_QWORD *)(a1 + 224);
        v49 = (__int64 *)(v21 + v48);
        if ( v21 != v21 + v48 )
          goto LABEL_57;
      }
      else
      {
        do
        {
          v28 = (const __m128i *)v77[4];
          v75 = (const __m128i *)((char *)v28 + 40 * v77[5]);
          if ( v75 != v28 )
          {
            v29 = (const __m128i *)v77[4];
            do
            {
              v30 = *(__int64 **)v21;
              if ( *(_QWORD *)v21 )
              {
                if ( (*((_DWORD *)v30 + 26))-- == 1 )
                {
                  v32 = *(__int64 **)v21;
                  if ( *(_QWORD *)v21 )
                  {
                    sub_258970(*(__int64 **)v21);
                    v33 = v32[23];
                    if ( v33 )
                    {
                      if ( v32[24] )
                      {
                        v78 = v13;
                        v34 = 0;
                        v35 = v32[24];
                        do
                        {
                          v36 = (__int64 *)(v33 + 24 * v34);
                          v37 = *v36;
                          if ( *v36 )
                          {
                            v36[1] = 0;
                            qfree(v37);
                            v33 = v32[23];
                          }
                          ++v34;
                        }
                        while ( v35 != v34 );
                        v13 = v78;
                      }
                      v32[24] = 0;
                      qfree(v33);
                    }
                    v38 = v32[20];
                    if ( v38 )
                    {
                      v32[21] = 0;
                      qfree(v38);
                    }
                    v39 = v32[16];
                    if ( v39 )
                    {
                      if ( v32[17] )
                      {
                        v79 = v13;
                        v40 = 0;
                        v41 = v32[17];
                        do
                        {
                          v42 = (__int64 *)(v39 + 32 * v40);
                          v43 = *v42;
                          if ( *v42 )
                          {
                            v42[1] = 0;
                            qfree(v43);
                            v39 = v32[16];
                          }
                          ++v40;
                        }
                        while ( v41 != v40 );
                        v13 = v79;
                      }
                      v32[17] = 0;
                      qfree(v39);
                    }
                    sub_255050((__int64)(v32 + 2), *(double *)a3.m128i_i64);
                    j__qfree((__int64)v32);
                  }
                }
              }
              v44 = v77[7];
              *(_QWORD *)v21 = v44;
              if ( v44 )
                ++*(_DWORD *)(v44 + 104);
              v45 = _mm_loadu_si128(v29);
              v21 += 48;
              v29 = (const __m128i *)((char *)v29 + 40);
              *(__m128i *)(v21 - 40) = v45;
              a3 = _mm_loadu_si128((const __m128i *)((char *)v29 - 24));
              *(__m128i *)(v21 - 24) = a3;
              *(_BYTE *)(v21 - 8) = v29[-1].m128i_i8[8];
            }
            while ( v75 != v29 );
          }
          if ( (*v77 & 2) == 0 )
          {
            v46 = (unsigned __int64 *)v77[2];
            if ( (*(_BYTE *)v46 & 2) != 0 )
            {
              v57 = (unsigned __int64 *)(*v77 & 0xFFFFFFFFFFFFFFFCLL);
              v58 = *v57;
              if ( (*v57 & 2) == 0 )
              {
                for ( j = v77; (unsigned __int64 *)v57[2] == j; j = v65 )
                {
                  v60 = v58 & 0xFFFFFFFFFFFFFFFCLL;
                  v58 = *(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v58 & 2) != 0 )
                  {
                    v77 = (unsigned __int64 *)v60;
                    goto LABEL_55;
                  }
                  v65 = v57;
                  v57 = (unsigned __int64 *)v60;
                }
              }
              v77 = v57;
            }
            else
            {
              for ( k = (unsigned __int64 *)v46[1]; (*(_BYTE *)k & 2) == 0; k = (unsigned __int64 *)k[1] )
                v46 = k;
              v77 = v46;
            }
          }
LABEL_55:
          ;
        }
        while ( v77 != (unsigned __int64 *)v13 );
        v21 = *(_QWORD *)(a1 + 216);
        v48 = 48LL * *(_QWORD *)(a1 + 224);
        v49 = (__int64 *)(v21 + v48);
        if ( v21 != v21 + v48 )
          goto LABEL_57;
      }
      v52 = a2;
      *(_BYTE *)(a1 + 264) = a2;
      goto LABEL_107;
    }
    goto LABEL_100;
  }
  v21 = *(_QWORD *)(a1 + 216);
LABEL_87:
  v77 = (unsigned __int64 *)v13;
  v76 = 0;
  v48 = 48 * v64;
  v49 = (__int64 *)(v21 + 48 * v64);
  if ( (__int64 *)v21 == v49 )
  {
    *(_BYTE *)(a1 + 264) = a2;
    goto LABEL_63;
  }
LABEL_57:
  v50 = 0xAAAAAAAAAAAAAAABLL * (v48 >> 4);
  if ( !v50 )
  {
    sub_3B7610(v21, (__int64)v49, -2, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3A9150);
    goto LABEL_103;
  }
  _BitScanReverse64(&v50, v50);
  sub_3B7610(v21, (__int64)v49, 2LL * (int)v50, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3A9150);
  if ( v48 <= 768 )
  {
LABEL_103:
    sub_3B3450(v21, v49, (unsigned __int8 (__fastcall *)(__int64 *, __int64))sub_3A9150);
    goto LABEL_61;
  }
  v51 = (__int64 *)(v21 + 768);
  sub_3B3450(v21, (__int64 *)(v21 + 768), (unsigned __int8 (__fastcall *)(__int64 *, __int64))sub_3A9150);
  do
  {
    sub_3B31E0(v51, (unsigned __int8 (__fastcall *)(__int64 *, __int64))sub_3A9150);
    v51 += 6;
  }
  while ( v51 != v49 );
LABEL_61:
  v52 = a2;
  *(_BYTE *)(a1 + 264) = a2;
  if ( v77 )
  {
    if ( !v76 )
    {
LABEL_63:
      v82 = (__m128i)(unsigned __int64)v13;
      sub_3B0AF0((unsigned __int64 *)&v82);
LABEL_64:
      qfree((__int64)v77);
      return v91 - __readfsqword(0x28u);
    }
LABEL_107:
    v71 = *v77;
    v72 = *v77 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v72 & 2) != 0 )
      goto LABEL_64;
    v73 = *(_QWORD **)(v72 + 8);
    if ( (*(_BYTE *)v73 & 2) != 0 )
    {
      v74 = *(_QWORD **)(v72 + 16);
      if ( (*(_BYTE *)v74 & 2) != 0 )
      {
LABEL_117:
        sub_3ACAB0(v72 + 32, *(double *)a3.m128i_i64);
        *(_QWORD *)v72 |= 2uLL;
LABEL_112:
        if ( v71 > 3 )
          qfree(v72);
        goto LABEL_64;
      }
    }
    else
    {
      sub_3B08A0(v73, v52, *(double *)a3.m128i_i64);
      v74 = *(_QWORD **)(v72 + 16);
      if ( (*(_BYTE *)v74 & 2) != 0 )
        goto LABEL_111;
    }
    sub_3B08A0(v74, v52, *(double *)a3.m128i_i64);
LABEL_111:
    if ( (*(_BYTE *)v72 & 2) != 0 )
      goto LABEL_112;
    goto LABEL_117;
  }
  return v91 - __readfsqword(0x28u);
}

