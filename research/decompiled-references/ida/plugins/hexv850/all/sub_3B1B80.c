unsigned __int64 __fastcall sub_3B1B80(
        unsigned __int64 a1,
        unsigned __int8 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 *v9; // r14
  __int64 v10; // rbp
  unsigned __int64 v11; // r13
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  _QWORD **v14; // rdi
  _QWORD *v15; // rax
  unsigned __int64 v16; // r13
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r14
  __int64 v20; // rbp
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  const __m128i *v27; // rdx
  const __m128i *v28; // r13
  __int64 *v29; // rsi
  __int64 *v31; // r15
  __int64 v32; // r8
  __int64 v33; // rbx
  __int64 v34; // r12
  _QWORD *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // r12
  _QWORD *v39; // rax
  unsigned __int64 v40; // rcx
  __m128i v41; // xmm0
  unsigned __int64 *v42; // rcx
  unsigned __int64 *k; // rax
  __int64 v44; // r15
  __int64 *v45; // r14
  unsigned __int64 v46; // rdx
  __int64 *v47; // r15
  __int64 v48; // rsi
  _QWORD *v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rsi
  unsigned __int64 *v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned __int64 *j; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r12
  unsigned __int64 i; // rdi
  __int64 v59; // rax
  unsigned __int64 v60; // r13
  unsigned __int64 *v61; // rsi
  __m128i v62; // xmm0
  __int64 v63; // rcx
  __m128i v64; // xmm1
  __m128i v65; // xmm0
  __int64 v66; // rdx
  __int64 v67; // rax
  unsigned __int64 v68; // rbp
  unsigned __int64 v69; // rbx
  _QWORD *v70; // rdi
  _QWORD *v71; // rdi
  const __m128i *v72; // [rsp+8h] [rbp-F0h]
  __int64 v73; // [rsp+10h] [rbp-E8h]
  unsigned __int64 *v74; // [rsp+18h] [rbp-E0h]
  __int64 v75; // [rsp+28h] [rbp-D0h]
  __int64 v76; // [rsp+28h] [rbp-D0h]
  __m128i v79; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v80; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v81; // [rsp+58h] [rbp-A0h] BYREF
  __m128i v82; // [rsp+68h] [rbp-90h] BYREF
  __int64 v83; // [rsp+78h] [rbp-80h]
  __int64 v84; // [rsp+80h] [rbp-78h] BYREF
  __m128i v85; // [rsp+88h] [rbp-70h] BYREF
  __m128i v86; // [rsp+98h] [rbp-60h] BYREF
  __int64 v87; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-40h]

  v9 = *(__int64 **)(a1 + 192);
  v10 = *(_QWORD *)(a1 + 184);
  v88 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 200);
  if ( a2 )
  {
    sub_3AF2C0(*(_QWORD *)(v10 + 1392), v10, a3, a4, a5, a6, a7, a8, a9);
    if ( !v11 )
    {
      v73 = 0;
LABEL_79:
      v19 = *(_QWORD *)(a1 + 224);
      if ( !v19 )
        goto LABEL_101;
      v18 = *(_QWORD *)(a1 + 216);
      v12 = 0;
      v16 = 0;
      goto LABEL_81;
    }
  }
  else if ( !v11 )
  {
    v12 = 0;
    v16 = *(_QWORD *)(a1 + 224);
    v19 = v16;
    if ( !v16 )
    {
      v73 = 0;
      v20 = *(_QWORD *)(a1 + 216);
LABEL_100:
      v74 = nullptr;
      v12 = 0;
      v44 = 48 * v16;
      v45 = (__int64 *)(v20 + 48 * v16);
      if ( (__int64 *)v20 != v45 )
        goto LABEL_57;
LABEL_101:
      *(_BYTE *)(a1 + 264) = a2;
      return v88 - __readfsqword(0x28u);
    }
    goto LABEL_104;
  }
  v73 = 0;
  v12 = 0;
  v13 = 0;
  do
  {
    v79.m128i_i64[0] = v12;
    v14 = *(_QWORD ***)(v10 + 1392);
    v79.m128i_i64[1] = v73;
    sub_3AC980(v14, &v79, v9);
    ++v13;
    v12 = v79.m128i_i64[0];
    v9 += 3;
    v73 = v79.m128i_i64[1];
  }
  while ( v13 < v11 );
  if ( !v79.m128i_i64[0] )
    goto LABEL_79;
  if ( v79.m128i_i64[1] )
  {
    v15 = *(_QWORD **)(v79.m128i_i64[0] + 8);
    v16 = 0;
LABEL_8:
    while ( v15 != (_QWORD *)v79.m128i_i64[0] )
    {
      while ( 1 )
      {
        v16 += v15[5];
        if ( (*v15 & 2) != 0 )
          break;
        v17 = (_QWORD *)v15[2];
        if ( (*(_BYTE *)v17 & 2) != 0 )
        {
          v50 = (_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFFCLL);
          v51 = *v50;
          if ( (*v50 & 2) == 0 )
          {
            while ( (_QWORD *)v50[2] == v15 )
            {
              v15 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
              v51 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v51 & 2) != 0 )
                goto LABEL_8;
              v52 = v50;
              v50 = v15;
              v15 = v52;
            }
          }
          v15 = v50;
          goto LABEL_8;
        }
        do
        {
          v15 = v17;
          v17 = (_QWORD *)v17[1];
        }
        while ( (*(_BYTE *)v17 & 2) == 0 );
        if ( v15 == (_QWORD *)v79.m128i_i64[0] )
          goto LABEL_13;
      }
    }
LABEL_13:
    v18 = *(_QWORD *)(a1 + 216);
    v19 = *(_QWORD *)(a1 + 224);
    v20 = v18;
    if ( v19 == v16 )
      goto LABEL_22;
    v83 = 0;
    v80 = 0;
    v82 = (__m128i)0xFFFFFFFFuLL;
    v81 = 0;
    if ( v16 >= v19 )
    {
      v21 = *(_QWORD *)(a1 + 232);
      if ( (unsigned __int64)&v80 < v18 || (unsigned __int64)&v80 >= v18 + 48 * v21 )
      {
        if ( v21 < v16 )
        {
          v20 = qvector_reserve();
          *(_QWORD *)(a1 + 216) = v20;
          v19 = *(_QWORD *)(a1 + 224);
        }
        if ( v19 < v16 )
        {
          v22 = _mm_loadu_si128(&v81);
          v23 = _mm_loadu_si128(&v82);
          v24 = v83;
          v25 = 48 * v19;
          do
          {
            v26 = v20 + v25;
            ++v19;
            v25 += 48;
            *(_QWORD *)v26 = 0;
            *(_QWORD *)(v26 + 40) = v24;
            *(__m128i *)(v26 + 8) = v22;
            *(__m128i *)(v26 + 24) = v23;
            v20 = *(_QWORD *)(a1 + 216);
          }
          while ( v19 != v16 );
        }
        *(_QWORD *)(a1 + 224) = v16;
        goto LABEL_22;
      }
      v62 = _mm_loadu_si128(&v81);
      v84 = 0;
      v87 = 0;
      v85 = v62;
      v86 = _mm_loadu_si128(&v82);
      if ( v21 < v16 )
      {
        v18 = a1;
        *(_QWORD *)(a1 + 216) = qvector_reserve();
        v19 = *(_QWORD *)(a1 + 224);
      }
      if ( v19 < v16 )
      {
        v63 = v87;
        v64 = _mm_loadu_si128(&v85);
        v65 = _mm_loadu_si128(&v86);
        v18 = a1;
        v66 = 48 * v19;
        do
        {
          ++v19;
          v67 = v66 + *(_QWORD *)(a1 + 216);
          v66 += 48;
          *(_QWORD *)v67 = 0;
          *(_QWORD *)(v67 + 40) = v63;
          *(__m128i *)(v67 + 8) = v64;
          *(__m128i *)(v67 + 24) = v65;
        }
        while ( v19 != v16 );
      }
      *(_QWORD *)(a1 + 224) = v16;
      sub_13B580(&v84, v18);
      v20 = *(_QWORD *)(a1 + 216);
      goto LABEL_85;
    }
    goto LABEL_81;
  }
  v60 = *(_QWORD *)(a1 + 224);
  v19 = v60;
  if ( v60 )
  {
LABEL_104:
    v16 = 0;
    v73 = 0;
    v18 = *(_QWORD *)(a1 + 216);
LABEL_81:
    v57 = v16;
    for ( i = v18; ; i = *(_QWORD *)(a1 + 216) )
    {
      v59 = 3 * v57++;
      sub_13B580((_QWORD *)(16 * v59 + i), v18);
      if ( v57 >= v19 )
        break;
    }
    *(_QWORD *)(a1 + 224) = v16;
    v20 = *(_QWORD *)(a1 + 216);
    if ( v12 )
    {
LABEL_85:
      if ( !v73 )
      {
        v60 = *(_QWORD *)(a1 + 224);
        goto LABEL_87;
      }
LABEL_22:
      v74 = *(unsigned __int64 **)(v12 + 8);
      if ( v74 == (unsigned __int64 *)v12 )
      {
        v44 = 48LL * *(_QWORD *)(a1 + 224);
        v45 = (__int64 *)(v20 + v44);
        if ( v20 != v20 + v44 )
          goto LABEL_57;
      }
      else
      {
        do
        {
          v27 = (const __m128i *)v74[4];
          v72 = (const __m128i *)((char *)v27 + 40 * v74[5]);
          if ( v72 != v27 )
          {
            v28 = (const __m128i *)v74[4];
            do
            {
              v29 = *(__int64 **)v20;
              if ( *(_QWORD *)v20 )
              {
                if ( (*((_DWORD *)v29 + 26))-- == 1 )
                {
                  v31 = *(__int64 **)v20;
                  if ( *(_QWORD *)v20 )
                  {
                    sub_2535B0(*(__int64 **)v20);
                    v32 = v31[23];
                    if ( v32 )
                    {
                      if ( v31[24] )
                      {
                        v75 = v12;
                        v33 = 0;
                        v34 = v31[24];
                        do
                        {
                          v35 = (_QWORD *)(v32 + 24 * v33);
                          if ( *v35 )
                          {
                            v35[1] = 0;
                            qfree();
                            v32 = v31[23];
                          }
                          ++v33;
                        }
                        while ( v34 != v33 );
                        v12 = v75;
                      }
                      v31[24] = 0;
                      qfree();
                    }
                    if ( v31[20] )
                    {
                      v31[21] = 0;
                      qfree();
                    }
                    v36 = v31[16];
                    if ( v36 )
                    {
                      if ( v31[17] )
                      {
                        v76 = v12;
                        v37 = 0;
                        v38 = v31[17];
                        do
                        {
                          v39 = (_QWORD *)(v36 + 32 * v37);
                          if ( *v39 )
                          {
                            v39[1] = 0;
                            qfree();
                            v36 = v31[16];
                          }
                          ++v37;
                        }
                        while ( v38 != v37 );
                        v12 = v76;
                      }
                      v31[17] = 0;
                      qfree();
                    }
                    sub_24FC90((__int64)(v31 + 2));
                    j__qfree();
                  }
                }
              }
              v40 = v74[7];
              *(_QWORD *)v20 = v40;
              if ( v40 )
                ++*(_DWORD *)(v40 + 104);
              v41 = _mm_loadu_si128(v28);
              v20 += 48;
              v28 = (const __m128i *)((char *)v28 + 40);
              *(__m128i *)(v20 - 40) = v41;
              *(__m128i *)(v20 - 24) = _mm_loadu_si128((const __m128i *)((char *)v28 - 24));
              *(_BYTE *)(v20 - 8) = v28[-1].m128i_i8[8];
            }
            while ( v72 != v28 );
          }
          if ( (*v74 & 2) == 0 )
          {
            v42 = (unsigned __int64 *)v74[2];
            if ( (*(_BYTE *)v42 & 2) != 0 )
            {
              v53 = (unsigned __int64 *)(*v74 & 0xFFFFFFFFFFFFFFFCLL);
              v54 = *v53;
              if ( (*v53 & 2) == 0 )
              {
                for ( j = v74; (unsigned __int64 *)v53[2] == j; j = v61 )
                {
                  v56 = v54 & 0xFFFFFFFFFFFFFFFCLL;
                  v54 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v54 & 2) != 0 )
                  {
                    v74 = (unsigned __int64 *)v56;
                    goto LABEL_55;
                  }
                  v61 = v53;
                  v53 = (unsigned __int64 *)v56;
                }
              }
              v74 = v53;
            }
            else
            {
              for ( k = (unsigned __int64 *)v42[1]; (*(_BYTE *)k & 2) == 0; k = (unsigned __int64 *)k[1] )
                v42 = k;
              v74 = v42;
            }
          }
LABEL_55:
          ;
        }
        while ( v74 != (unsigned __int64 *)v12 );
        v20 = *(_QWORD *)(a1 + 216);
        v44 = 48LL * *(_QWORD *)(a1 + 224);
        v45 = (__int64 *)(v20 + v44);
        if ( v20 != v20 + v44 )
          goto LABEL_57;
      }
      v48 = a2;
      *(_BYTE *)(a1 + 264) = a2;
      goto LABEL_107;
    }
    goto LABEL_100;
  }
  v20 = *(_QWORD *)(a1 + 216);
LABEL_87:
  v74 = (unsigned __int64 *)v12;
  v73 = 0;
  v44 = 48 * v60;
  v45 = (__int64 *)(v20 + 48 * v60);
  if ( (__int64 *)v20 == v45 )
  {
    *(_BYTE *)(a1 + 264) = a2;
    goto LABEL_63;
  }
LABEL_57:
  v46 = 0xAAAAAAAAAAAAAAABLL * (v44 >> 4);
  if ( !v46 )
  {
    sub_3B1590(v20, (__int64)v45, -2, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3A30D0);
    goto LABEL_103;
  }
  _BitScanReverse64(&v46, v46);
  sub_3B1590(v20, (__int64)v45, 2LL * (int)v46, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3A30D0);
  if ( v44 <= 768 )
  {
LABEL_103:
    sub_3AD3D0(v20, v45, (unsigned __int8 (__fastcall *)(__int64 *, __int64))sub_3A30D0);
    goto LABEL_61;
  }
  v47 = (__int64 *)(v20 + 768);
  sub_3AD3D0(v20, (__int64 *)(v20 + 768), (unsigned __int8 (__fastcall *)(__int64 *, __int64))sub_3A30D0);
  do
  {
    sub_3AD160(v47, (unsigned __int8 (__fastcall *)(__int64 *, __int64))sub_3A30D0);
    v47 += 6;
  }
  while ( v47 != v45 );
LABEL_61:
  v48 = a2;
  *(_BYTE *)(a1 + 264) = a2;
  if ( v74 )
  {
    if ( !v73 )
    {
LABEL_63:
      v79 = (__m128i)(unsigned __int64)v12;
      sub_3AAA70((unsigned __int64 *)&v79);
LABEL_64:
      qfree();
      return v88 - __readfsqword(0x28u);
    }
LABEL_107:
    v68 = *v74;
    v69 = *v74 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v69 & 2) != 0 )
      goto LABEL_64;
    v70 = *(_QWORD **)(v69 + 8);
    if ( (*(_BYTE *)v70 & 2) != 0 )
    {
      v71 = *(_QWORD **)(v69 + 16);
      if ( (*(_BYTE *)v71 & 2) != 0 )
      {
LABEL_117:
        sub_3A6A30(v69 + 32);
        *(_QWORD *)v69 |= 2uLL;
LABEL_112:
        if ( v68 > 3 )
          qfree();
        goto LABEL_64;
      }
    }
    else
    {
      sub_3AA820(v70, v48);
      v71 = *(_QWORD **)(v69 + 16);
      if ( (*(_BYTE *)v71 & 2) != 0 )
        goto LABEL_111;
    }
    sub_3AA820(v71, v48);
LABEL_111:
    if ( (*(_BYTE *)v69 & 2) != 0 )
      goto LABEL_112;
    goto LABEL_117;
  }
  return v88 - __readfsqword(0x28u);
}

