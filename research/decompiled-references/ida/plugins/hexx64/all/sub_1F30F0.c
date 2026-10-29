unsigned __int64 __fastcall sub_1F30F0(__int64 *a1, __int64 *a2, __m128 si128)
{
  __int64 *v3; // r13
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  bool v8; // al
  const void **v9; // rbp
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 *v16; // rax
  __int64 v17; // rbx
  const void **v18; // r12
  __int64 v19; // rdi
  const void *v20; // rbx
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm2
  bool v24; // zf
  const void *v25; // rbx
  const void *v26; // r15
  __int64 *v27; // r14
  __int64 v28; // rdi
  __m128i v29; // xmm4
  const void *v30; // rax
  __int64 v31; // rbx
  __m128i v32; // xmm0
  __int64 v33; // rdi
  __int64 *v34; // rax
  __int64 v35; // rbp
  __m128i v36; // xmm7
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 i; // r12
  __int64 *v40; // r15
  __int64 v41; // rdi
  __int64 *v42; // rbx
  __m128i v43; // xmm7
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rbp
  __int64 *v48; // r12
  __int64 v49; // rdi
  char v51; // al
  __int64 *v52; // rdx
  __int64 v53; // rax
  __m128i v54; // xmm7
  __m128i v55; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v56; // [rsp+10h] [rbp-E8h] BYREF
  __int64 *v57; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v58; // [rsp+30h] [rbp-C8h]
  __int64 *v59; // [rsp+38h] [rbp-C0h]
  __int64 *v60; // [rsp+40h] [rbp-B8h]
  __int64 *v61; // [rsp+48h] [rbp-B0h]
  __int64 v62; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-98h]
  __m128i v64; // [rsp+68h] [rbp-90h] BYREF
  __int64 v65; // [rsp+78h] [rbp-80h]
  __m128i v66; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v67[24]; // [rsp+90h] [rbp-68h] BYREF
  char v68; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v69; // [rsp+B8h] [rbp-40h]

  v57 = a1;
  v60 = a2;
  v69 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 12 )
  {
    v3 = a1 + 24;
    v61 = &v62;
    do
    {
      v4 = *(v3 - 4);
      v59 = v3;
      v5 = v57[8];
      if ( v4 != v5 )
      {
        v6 = v57[9];
        if ( !*(v3 - 3) )
        {
          v8 = v6 == 0;
LABEL_9:
          if ( v8 )
            goto LABEL_10;
          goto LABEL_44;
        }
        if ( !v6 )
          goto LABEL_10;
        v7 = *(_QWORD *)(v5 + 24);
        if ( *(_QWORD *)(v4 + 24) != v7 )
        {
          v8 = *(_QWORD *)(v4 + 24) < v7;
          goto LABEL_9;
        }
      }
      v51 = *((_BYTE *)v3 - 12);
      if ( v51 == *((_BYTE *)v57 + 84) )
      {
        if ( *((_DWORD *)v3 - 4) < *((_DWORD *)v57 + 20) )
          goto LABEL_10;
      }
      else if ( !v51 )
      {
LABEL_10:
        v9 = (const void **)(v3 - 12);
        sub_64000(v61, (__int64)(v3 - 12), *(double *)si128.m128_u64);
        v10 = *(v3 - 10);
        v11 = _mm_loadu_si128((const __m128i *)(v3 - 9));
        *(v3 - 10) = 0;
        v63 = v10;
        v12 = *(v3 - 7);
        v64 = v11;
        v13 = _mm_loadu_si128((const __m128i *)v3 - 3);
        v65 = v12;
        v14 = *(v3 - 2);
        v66 = v13;
        v15 = _mm_loadu_si128((const __m128i *)v3 - 2);
        *(_QWORD *)&v67[16] = v14;
        LOBYTE(v14) = *((_BYTE *)v3 - 8);
        *(v3 - 7) = 0;
        v68 = v14;
        v16 = v57;
        *(_OWORD *)(v3 - 9) = 0;
        v17 = (char *)(v3 - 12) - (char *)v16;
        *((_OWORD *)v3 - 3) = 0;
        *(__m128i *)v67 = v15;
        v58 = 0xAAAAAAAAAAAAAAABLL * (v17 >> 5);
        if ( v17 > 0 )
        {
          do
          {
            v18 = v9;
            v9 -= 12;
            sub_648D0((__int64 *)v18, v9, *(double *)v15.m128i_i64);
            v19 = (__int64)v18[2];
            v20 = *(v18 - 10);
            *(v18 - 10) = nullptr;
            v21 = _mm_loadu_si128((const __m128i *)(v18 - 9));
            *(_OWORD *)(v18 - 9) = 0;
            if ( v19 )
            {
              v18[3] = nullptr;
              v55 = v21;
              qfree(v19);
              v21 = _mm_load_si128(&v55);
            }
            v22 = (__int64)*(v18 - 7);
            v18[2] = v20;
            v23 = _mm_loadu_si128((const __m128i *)v18 - 3);
            v24 = v18[5] == nullptr;
            *(v18 - 7) = nullptr;
            v55.m128i_i64[0] = v22;
            *(__m128i *)(v18 + 3) = v21;
            v56 = v23;
            *((_OWORD *)v18 - 3) = 0;
            if ( !v24 )
            {
              v25 = v18[6];
              v26 = nullptr;
              if ( v25 )
              {
                do
                {
                  v27 = (__int64 *)((char *)v18[5] + 40 * (_QWORD)v26);
                  v28 = v27[2];
                  if ( v28 )
                  {
                    v27[3] = 0;
                    qfree(v28);
                  }
                  v26 = (char *)v26 + 1;
                  qfree(*v27);
                }
                while ( v25 != v26 );
              }
              v18[6] = nullptr;
              qfree((__int64)v18[5]);
            }
            v15 = _mm_loadu_si128((const __m128i *)v18 - 2);
            v24 = v58-- == 1;
            v29 = _mm_load_si128(&v56);
            v18[5] = (const void *)v55.m128i_i64[0];
            v30 = *(const void **)((char *)v18 - 19);
            *((__m128i *)v18 + 4) = v15;
            *(const void **)((char *)v18 + 77) = v30;
            LOBYTE(v30) = *((_BYTE *)v18 - 8);
            *((__m128i *)v18 + 3) = v29;
            *((_BYTE *)v18 + 88) = (_BYTE)v30;
          }
          while ( !v24 );
        }
        sub_648D0(v57, (const void **)v61, *(double *)v15.m128i_i64);
        v31 = v63;
        v63 = 0;
        v32 = _mm_loadu_si128(&v64);
        v64 = 0;
        v33 = v57[2];
        if ( v33 )
        {
          v57[3] = 0;
          v55 = v32;
          qfree(v33);
          v32 = _mm_load_si128(&v55);
        }
        v34 = v57;
        v35 = v65;
        v65 = 0;
        v36 = _mm_load_si128(&v66);
        v66 = 0;
        v37 = v57[5];
        v57[2] = v31;
        *(__m128i *)(v34 + 3) = v32;
        v55 = v36;
        if ( v37 )
        {
          v38 = v34[6];
          if ( v38 )
          {
            for ( i = 0; i != v38; ++i )
            {
              v40 = (__int64 *)(v37 + 40 * i);
              v41 = v40[2];
              if ( v41 )
              {
                v40[3] = 0;
                qfree(v41);
              }
              qfree(*v40);
              v37 = v57[5];
            }
          }
          v42 = v57;
          v57[6] = 0;
          qfree(v37);
          v43 = _mm_load_si128(&v55);
          v44 = v65;
          v42[5] = v35;
          v45 = *(_QWORD *)&v67[13];
          si128 = (__m128)_mm_load_si128((const __m128i *)v67);
          *((__m128i *)v42 + 3) = v43;
          *((__m128 *)v42 + 4) = si128;
          *(__int64 *)((char *)v42 + 77) = v45;
          *((_BYTE *)v42 + 88) = v68;
          if ( v44 )
          {
            v46 = v66.m128i_i64[0];
            if ( v66.m128i_i64[0] )
            {
              v47 = 0;
              do
              {
                v48 = (__int64 *)(v44 + 40 * v47);
                v49 = v48[2];
                if ( v49 )
                {
                  v48[3] = 0;
                  qfree(v49);
                }
                ++v47;
                qfree(*v48);
                v44 = v65;
              }
              while ( v46 != v47 );
            }
            v66.m128i_i64[0] = 0;
            qfree(v44);
          }
        }
        else
        {
          v52 = v57;
          v53 = *(_QWORD *)&v67[13];
          si128 = (__m128)_mm_load_si128((const __m128i *)v67);
          v54 = _mm_load_si128(&v55);
          v57[5] = v35;
          *((__m128 *)v52 + 4) = si128;
          *(__int64 *)((char *)v52 + 77) = v53;
          LOBYTE(v53) = v68;
          *((__m128i *)v52 + 3) = v54;
          *((_BYTE *)v52 + 88) = v53;
        }
        if ( v63 )
        {
          v64.m128i_i64[0] = 0;
          qfree(v63);
        }
        qfree(v62);
        goto LABEL_38;
      }
LABEL_44:
      sub_1F2CC0((__int64)(v3 - 12), *(double *)si128.m128_u64);
LABEL_38:
      v3 += 12;
    }
    while ( v60 != v59 );
  }
  return v69 - __readfsqword(0x28u);
}

