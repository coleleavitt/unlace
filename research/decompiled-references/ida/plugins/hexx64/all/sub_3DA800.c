__int64 __fastcall sub_3DA800(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // r14
  _DWORD **v12; // rcx
  _DWORD *v13; // r12
  __int64 v14; // r9
  __int64 **v16; // rdx
  __int64 *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  _QWORD **v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  _QWORD **v25; // rdx
  _QWORD *v26; // rbx
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const char *v31; // rax
  const char *v32; // r13
  __int64 v33; // r15
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  __int64 v37; // r13
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __m128i v40; // xmm0
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rbp
  __int64 v45; // rbx
  __int64 *v46; // rax
  __int64 v47; // rdi
  unsigned __int64 v48; // rax
  __m128i v49; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+10h] [rbp-D8h]
  __int64 v51; // [rsp+18h] [rbp-D0h] BYREF
  unsigned __int64 v52; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v53; // [rsp+28h] [rbp-C0h]
  __int64 v54; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v55; // [rsp+48h] [rbp-A0h] BYREF
  __int64 (__fastcall **v56)(); // [rsp+60h] [rbp-88h] BYREF
  __int64 v57; // [rsp+68h] [rbp-80h]
  __int64 v58; // [rsp+70h] [rbp-78h]
  __int64 v59; // [rsp+78h] [rbp-70h]
  int v60; // [rsp+80h] [rbp-68h]
  __m128i v61; // [rsp+88h] [rbp-60h]
  __m128i v62; // [rsp+98h] [rbp-50h]
  unsigned __int64 v63; // [rsp+A8h] [rbp-40h]

  v3 = *(_DWORD *)a2;
  v63 = __readfsqword(0x28u);
  if ( v3 > 0x2F )
  {
    v16 = *(__int64 ***)(a2 + 8);
    v17 = (__int64 *)(v16 + 1);
    *(_QWORD *)(a2 + 8) = v16 + 1;
    v7 = *v16;
LABEL_10:
    v18 = v17 + 1;
    *(_QWORD *)(a2 + 8) = v17 + 1;
    v9 = *v17;
LABEL_11:
    v12 = (_DWORD **)(v18 + 1);
    *(_QWORD *)(a2 + 8) = v18 + 1;
    v11 = *v18;
LABEL_12:
    *(_QWORD *)(a2 + 8) = v12 + 1;
    goto LABEL_6;
  }
  v5 = *(_QWORD *)(a2 + 16);
  v6 = v3 + 8;
  *(_DWORD *)a2 = v6;
  v7 = *(__int64 **)(v5 + v3);
  if ( (unsigned int)v6 > 0x2F )
  {
    v17 = *(__int64 **)(a2 + 8);
    goto LABEL_10;
  }
  v8 = v3 + 16;
  *(_DWORD *)a2 = v8;
  v9 = *(_QWORD *)(v5 + v6);
  if ( (unsigned int)v8 > 0x2F )
  {
    v18 = *(_QWORD **)(a2 + 8);
    goto LABEL_11;
  }
  v10 = v3 + 24;
  *(_DWORD *)a2 = v10;
  v11 = *(_QWORD *)(v5 + v8);
  if ( (unsigned int)v10 > 0x2F )
  {
    v12 = *(_DWORD ***)(a2 + 8);
    goto LABEL_12;
  }
  v12 = (_DWORD **)(v10 + v5);
  *(_DWORD *)a2 = v3 + 32;
LABEL_6:
  if ( v11 )
  {
    v13 = *v12;
    if ( dword_4EEA08 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 112LL))(v11) )
    {
      v19 = *(_QWORD *)(v11 + 8);
      v56 = off_4E90B0;
      v20 = *(_DWORD *)(v11 + 32);
      v57 = v19;
      v21 = *(_QWORD *)(v11 + 16);
      v60 = v20;
      v22 = *(_QWORD ***)(a1 + 2088);
      v58 = v21;
      v23 = *(_QWORD *)(v11 + 24);
      v62 = _mm_loadu_si128((const __m128i *)(v11 + 56));
      v59 = v23;
      v24 = *(_QWORD *)(a1 + 2096);
      v61 = _mm_loadu_si128((const __m128i *)(v11 + 40));
      v25 = &v22[v24];
      if ( v22 != v25 )
      {
        while ( 1 )
        {
          v26 = *v22;
          if ( *v22 )
          {
            if ( *v26 == v9 )
              break;
          }
          if ( v25 == ++v22 )
            return 0;
        }
        v27 = v26[8];
        if ( v27 )
        {
          if ( (unsigned int)(*(_DWORD *)(v27 + 60) - 1) <= 1 )
          {
            v51 = 0;
            ((void (__fastcall *)(__int64, __int64, __int64, __int64 *, char *, __int64, __int64, __int64, __int64))callui)(
              56,
              v9,
              1,
              &v51,
              (char *)&v51 + 4,
              v14,
              v49.m128i_i64[0],
              v49.m128i_i64[1],
              v50);
            callui(70, v9, 1, v28, v29, v30, v49.m128i_i64[0], v49.m128i_i64[1], v50, v51);
            v32 = v31;
            if ( v31 )
            {
              v33 = (int)v51;
              if ( v33 <= tag_strlen() )
              {
                v52 = 0;
                v49.m128i_i64[0] = (__int64)&v54;
                v53 = 0;
                sub_81980((__int64)&v54, v32);
                v34 = v53;
                v35 = v52;
                v36 = v53 + 1;
                if ( (unsigned __int64)&v54 < v52 || v49.m128i_i64[0] >= v52 + 24LL * *((_QWORD *)&v53 + 1) )
                {
                  if ( *((_QWORD *)&v53 + 1) < v36 )
                  {
                    v52 = qvector_reserve((__int64)&v52, v52, v53 + 1, 24);
                    v35 = v52;
                    v34 = v53;
                  }
                  v40 = _mm_loadu_si128(&v55);
                  v48 = v35 + 24 * v34;
                  *(_QWORD *)v48 = v54;
                  *(__m128i *)(v48 + 8) = v40;
                  *(_QWORD *)&v53 = v53 + 1;
                }
                else
                {
                  v37 = v54;
                  v38 = _mm_loadl_epi64(&v55);
                  v54 = 0;
                  v39 = _mm_loadl_epi64((const __m128i *)&v55.m128i_u64[1]);
                  v55 = 0;
                  if ( *((_QWORD *)&v53 + 1) < v36 )
                  {
                    v49.m128i_i64[1] = v39.m128i_i64[0];
                    v49.m128i_i64[0] = v38.m128i_i64[0];
                    v52 = qvector_reserve((__int64)&v52, v52, v53 + 1, 24);
                    v35 = v52;
                    v39 = _mm_loadl_epi64((const __m128i *)&v49.m128i_u64[1]);
                    v34 = v53;
                    v38 = _mm_loadl_epi64(&v49);
                  }
                  v40 = _mm_unpacklo_epi64(v38, v39);
                  v41 = v35 + 24 * v34;
                  *(_QWORD *)v41 = v37;
                  v42 = v54;
                  *(__m128i *)(v41 + 8) = v40;
                  *(_QWORD *)&v53 = v53 + 1;
                  if ( v42 )
                  {
                    v55.m128i_i64[0] = 0;
                    qfree(v42);
                  }
                }
                LODWORD(v57) = 0;
                if ( (unsigned __int8)sub_3D4B90((__int64)v26, (__int64)&v56, v27, v51, &v52, *(double *)v40.m128i_i64) )
                  sub_3DA6A0((__int64)v26, v7, v13, (__int64 *)v27, (__int64)&v56, *(double *)v40.m128i_i64);
                v43 = v52;
                if ( v52 )
                {
                  v44 = v53;
                  if ( (_QWORD)v53 )
                  {
                    v45 = 0;
                    do
                    {
                      v46 = (__int64 *)(v43 + 24 * v45);
                      v47 = *v46;
                      if ( *v46 )
                      {
                        v46[1] = 0;
                        qfree(v47);
                        v43 = v52;
                      }
                      ++v45;
                    }
                    while ( v44 != v45 );
                  }
                  *(_QWORD *)&v53 = 0;
                  qfree(v43);
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

