__int64 *__fastcall sub_3E7D0(__int64 a1, __int64 a2, double a3, __m128i a4, __m128i a5, __m128i a6)
{
  __m128i v6; // xmm0
  __int64 v8; // rax
  __int64 v9; // rdx
  double v10; // rsi
  __int64 v11; // rax
  _QWORD *m128i_i64; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rbp
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdi
  int v19; // esi
  int v20; // ebx
  __int64 *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rbp
  __int64 v24; // r15
  __int32 v25; // r13d
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  const __m128i *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r8
  __m128i v34; // xmm1
  __m128i v35; // xmm2
  __int64 v36; // r9
  __int64 v37; // r9
  bool v38; // cf
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  const __m128i *v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // r8
  __m128i v45; // xmm1
  __m128i v46; // xmm2
  __int64 v47; // r9
  __int64 v48; // r9
  __m128i *v49; // rbx
  __m128i v50; // xmm0
  __int64 *v51; // rax
  __m128i v52; // xmm0
  __int64 *v53; // rax
  int v54; // [rsp+Ch] [rbp-13Ch]
  __m128i v55; // [rsp+10h] [rbp-138h] BYREF
  __m128i v56; // [rsp+20h] [rbp-128h] BYREF
  __int64 *v57; // [rsp+30h] [rbp-118h]
  __int64 v58; // [rsp+38h] [rbp-110h]
  __m128i v59; // [rsp+40h] [rbp-108h] BYREF
  __m128i v60; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v61; // [rsp+60h] [rbp-E8h]
  const __m128i *v62; // [rsp+68h] [rbp-E0h] BYREF
  __m128i v63; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v64[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int32 v65; // [rsp+90h] [rbp-B8h]
  __m128i v66; // [rsp+98h] [rbp-B0h]
  __int64 v67; // [rsp+A8h] [rbp-A0h]
  __m128i v68; // [rsp+B0h] [rbp-98h]
  __int64 v69; // [rsp+C0h] [rbp-88h] BYREF
  __m128i v70; // [rsp+C8h] [rbp-80h] BYREF
  __m128i v71; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v72; // [rsp+E8h] [rbp-60h]
  __m128i v73; // [rsp+F0h] [rbp-58h] BYREF
  char v74; // [rsp+100h] [rbp-48h]
  unsigned __int64 v75; // [rsp+108h] [rbp-40h]

  v6.m128i_i64[0] = 0;
  v57 = (__int64 *)a1;
  v75 = __readfsqword(0x28u);
  v63 = 0;
  v62 = nullptr;
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(double *)a2;
  v61 = v8;
  sub_744C0(&v69, *(_QWORD *)&v10, v9);
  if ( v71.m128i_i8[0] )
  {
    v11 = v69;
    m128i_i64 = v62->m128i_i64;
    *(_BYTE *)(a1 + 32) = 1;
    v13 = _mm_loadu_si128(&v70);
    *(_QWORD *)a1 = v11;
    *(__m128i *)(a1 + 8) = v13;
  }
  else
  {
    v19 = v69;
    *(_QWORD *)(a2 + 8) += v70.m128i_i64[0];
    v54 = v19;
    if ( !v19 )
    {
LABEL_27:
      v49 = (__m128i *)v57;
      v50 = _mm_load_si128(&v63);
      *v57 = v61;
      v51 = (__int64 *)v62;
      v49[2].m128i_i8[0] = 0;
      v49->m128i_i64[1] = (__int64)v51;
      v49[1] = v50;
      return v57;
    }
    v20 = 0;
    while ( 1 )
    {
      sub_3E620((__int64)&v69, (const double *)a2, *(double *)v6.m128i_i64, *(double *)a4.m128i_i64, a5, a6);
      m128i_i64 = v62->m128i_i64;
      v22 = v69;
      v23 = v72;
      a4 = _mm_load_si128(&v73);
      if ( v74 )
        break;
      v24 = v70.m128i_i64[0];
      v25 = v70.m128i_i32[2];
      v64[0] = v69;
      a5 = _mm_loadu_si128(&v71);
      v26 = v63.m128i_i64[0];
      v67 = v72;
      v64[1] = v70.m128i_i64[0];
      v65 = v70.m128i_i32[2];
      v27 = v63.m128i_i64[0] + 1;
      v66 = a5;
      v68 = a4;
      if ( v64 < (_QWORD *)v62 || v64 >= v62[4 * v63.m128i_i64[1]].m128i_i64 )
      {
        if ( v63.m128i_i64[1] < v27 )
        {
          v58 = v63.m128i_i64[1];
          v56.m128i_i64[0] = v69;
          v59 = a5;
          v55 = a4;
          v28 = qvector_reserve(&v62, 0, v63.m128i_i64[0] + 1, 64);
          v29 = v28;
          v30 = v63.m128i_i64[1];
          v31 = v62;
          v32 = v63.m128i_i64[0] - 1;
          v63.m128i_i64[1] = v58;
          v33 = v56.m128i_i64[0];
          v34 = _mm_load_si128(&v55);
          v35 = _mm_load_si128(&v59);
          if ( v63.m128i_i64[0] - 1 >= 0 )
          {
            do
            {
              v36 = v31->m128i_i64[0];
              v28 += 64;
              v31 += 4;
              *(_QWORD *)(v28 - 64) = v36;
              *(_QWORD *)(v28 - 56) = v31[-4].m128i_i64[1];
              *(_DWORD *)(v28 - 48) = v31[-3].m128i_i32[0];
              *(_QWORD *)(v28 - 40) = v31[-3].m128i_i64[1];
              *(_QWORD *)(v28 - 32) = v31[-2].m128i_i64[0];
              v37 = v31[-2].m128i_i64[1];
              v6 = _mm_loadu_si128(v31 - 1);
              v31[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v28 - 24) = v37;
              *(__m128i *)(v28 - 16) = v6;
              v31[-1].m128i_i64[1] = 0;
              v38 = v32-- == 0;
            }
            while ( !v38 );
            v31 = v62;
          }
          v59.m128i_i64[0] = v33;
          v58 = v29;
          v56.m128i_i64[0] = v30;
          v60 = v35;
          v55 = v34;
          qfree(v31);
          m128i_i64 = (_QWORD *)v58;
          v26 = v63.m128i_i64[0];
          a5 = _mm_load_si128(&v60);
          v22 = v59.m128i_i64[0];
          v62 = (const __m128i *)v58;
          v63.m128i_i64[1] = v56.m128i_i64[0];
          a4 = _mm_load_si128(&v55);
        }
      }
      else
      {
        v67 = 0;
        v6.m128i_i64[0] = 0;
        v68 = 0;
        if ( v63.m128i_i64[1] < v27 )
        {
          v58 = v63.m128i_i64[1];
          v56.m128i_i64[0] = v69;
          v59 = a5;
          v55 = a4;
          v39 = qvector_reserve(&v62, 0, v63.m128i_i64[0] + 1, 64);
          v40 = v39;
          v41 = v63.m128i_i64[1];
          v42 = v62;
          v43 = v63.m128i_i64[0] - 1;
          v63.m128i_i64[1] = v58;
          v44 = v56.m128i_i64[0];
          v45 = _mm_load_si128(&v55);
          v46 = _mm_load_si128(&v59);
          if ( v63.m128i_i64[0] - 1 >= 0 )
          {
            do
            {
              v47 = v42->m128i_i64[0];
              v39 += 64;
              v42 += 4;
              *(_QWORD *)(v39 - 64) = v47;
              *(_QWORD *)(v39 - 56) = v42[-4].m128i_i64[1];
              *(_DWORD *)(v39 - 48) = v42[-3].m128i_i32[0];
              *(_QWORD *)(v39 - 40) = v42[-3].m128i_i64[1];
              *(_QWORD *)(v39 - 32) = v42[-2].m128i_i64[0];
              v48 = v42[-2].m128i_i64[1];
              v6 = _mm_loadu_si128(v42 - 1);
              v42[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v39 - 24) = v48;
              *(__m128i *)(v39 - 16) = v6;
              v42[-1].m128i_i64[1] = 0;
              v38 = v43-- == 0;
            }
            while ( !v38 );
            v42 = v62;
          }
          v59.m128i_i64[0] = v44;
          v58 = v40;
          v55.m128i_i64[0] = v41;
          v60 = v46;
          v56 = v45;
          qfree(v42);
          m128i_i64 = (_QWORD *)v58;
          v26 = v63.m128i_i64[0];
          a5 = _mm_load_si128(&v60);
          v22 = v59.m128i_i64[0];
          v62 = (const __m128i *)v58;
          v63.m128i_i64[1] = v55.m128i_i64[0];
          a4 = _mm_load_si128(&v56);
        }
      }
      ++v20;
      v21 = &m128i_i64[8 * v26];
      *v21 = v22;
      v21[1] = v24;
      *((_DWORD *)v21 + 4) = v25;
      v21[5] = v23;
      *(__m128i *)(v21 + 3) = a5;
      *((__m128i *)v21 + 3) = a4;
      ++v63.m128i_i64[0];
      if ( v20 == v54 )
        goto LABEL_27;
    }
    v52 = _mm_loadu_si128(&v70);
    v53 = v57;
    *v57 = v69;
    *((_BYTE *)v53 + 32) = 1;
    *(__m128i *)(v53 + 1) = v52;
  }
  if ( m128i_i64 )
  {
    v14 = v63.m128i_i64[0];
    if ( v63.m128i_i64[0] )
    {
      v15 = 0;
      do
      {
        v16 = &m128i_i64[8 * v15];
        v17 = v16[5];
        if ( v17 )
        {
          v16[6] = 0;
          qfree(v17);
          m128i_i64 = v62->m128i_i64;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    v63.m128i_i64[0] = 0;
    qfree(m128i_i64);
  }
  return v57;
}
