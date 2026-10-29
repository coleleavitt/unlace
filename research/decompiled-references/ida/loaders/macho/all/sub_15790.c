__int64 __fastcall sub_15790(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r12
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  __int64 *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 *v11; // rbx
  __int64 v12; // rbp
  __int64 *v13; // r14
  __m128i v14; // xmm4
  __m128i v15; // xmm5
  __int64 v16; // r12
  __int64 v17; // r15
  __int8 v18; // al
  __int64 v19; // r13
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __m128i v25; // xmm7
  __int64 v26; // rdi
  __m128i v27; // xmm1
  __int8 v28; // al
  __int64 *v29; // r14
  __int64 *v30; // rbx
  __int64 v31; // rbp
  __int64 *v32; // r14
  __int64 v33; // r12
  __int64 v34; // r15
  __m128i v35; // xmm4
  __m128i v36; // xmm5
  __int8 v37; // al
  __int64 v38; // r13
  __int64 v39; // rcx
  __m128i v40; // xmm0
  __int64 v41; // rdi
  __int64 v42; // rcx
  __m128i v43; // xmm0
  __m128i v44; // xmm7
  __int64 v45; // rdi
  __m128i v46; // xmm1
  __int8 v47; // al
  __int128 v49; // xmm0
  __m128i v50; // xmm4
  __int64 v51; // rbx
  __m128i v52; // xmm5
  __int64 v53; // r15
  __int64 v54; // r13
  char v55; // bp
  __int64 v56; // rdx
  __m128i v57; // xmm1
  __int64 v58; // rdi
  __int64 v59; // rdx
  __m128i v60; // xmm1
  __m128i v61; // xmm6
  __int64 v62; // rdi
  __m128i v63; // xmm7
  __m128i v64; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v65; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v66; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v67; // [rsp+30h] [rbp-98h] BYREF
  __int64 v68; // [rsp+48h] [rbp-80h]
  __m128i v69; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v70; // [rsp+60h] [rbp-68h]
  __int64 v71; // [rsp+68h] [rbp-60h]
  __int64 *v72; // [rsp+70h] [rbp-58h]
  __int64 *v73; // [rsp+78h] [rbp-50h]
  __int64 v74; // [rsp+80h] [rbp-48h]
  __int64 v75; // [rsp+88h] [rbp-40h]

  if ( a1 == (__int64 *)a2 )
    return a3;
  v3 = a1;
  v4 = a2;
  if ( a2 == a3 )
    return (__int64)a1;
  v5 = (a2 - (__int64)a1) >> 6;
  v6 = (a3 - (__int64)a1) >> 6;
  if ( v5 == v6 - v5 )
  {
    v66.m128i_i64[0] = v4;
    v49 = 0;
    do
    {
      v50 = _mm_loadu_si128((const __m128i *)(v3 + 1));
      v51 = *v3;
      *(_OWORD *)(v3 + 1) = v49;
      *v3 = 0;
      v52 = _mm_loadu_si128((const __m128i *)v3 + 2);
      v53 = v3[3];
      v54 = v3[6];
      *((_OWORD *)v3 + 2) = v49;
      v3[3] = 0;
      v55 = *((_BYTE *)v3 + 56);
      v56 = *(_QWORD *)v4;
      v57 = _mm_loadu_si128((const __m128i *)(v4 + 8));
      *(_OWORD *)(v4 + 8) = v49;
      *(_QWORD *)v4 = 0;
      v58 = *v3;
      v64 = v50;
      v65 = v52;
      if ( v58 )
      {
        v3[1] = 0;
        v68 = v56;
        v67 = v57;
        qfree();
        v56 = v68;
        v57 = _mm_load_si128(&v67);
        v49 = 0;
      }
      *v3 = v56;
      *(__m128i *)(v3 + 1) = v57;
      v59 = *(_QWORD *)(v4 + 24);
      v60 = _mm_loadu_si128((const __m128i *)(v4 + 32));
      *(_QWORD *)(v4 + 24) = 0;
      *(_OWORD *)(v4 + 32) = v49;
      if ( v3[3] )
      {
        v3[4] = 0;
        v68 = v59;
        v67 = v60;
        qfree();
        v59 = v68;
        v60 = _mm_load_si128(&v67);
        v49 = 0;
      }
      v3[3] = v59;
      *((__m128i *)v3 + 2) = v60;
      *((_DWORD *)v3 + 12) = *(_DWORD *)(v4 + 48);
      *((_DWORD *)v3 + 13) = *(_DWORD *)(v4 + 52);
      *((_BYTE *)v3 + 56) = *(_BYTE *)(v4 + 56);
      if ( *(_QWORD *)v4 )
      {
        *(_QWORD *)(v4 + 8) = 0;
        qfree();
        v49 = 0;
      }
      v61 = _mm_load_si128(&v64);
      v62 = *(_QWORD *)(v4 + 24);
      *(_QWORD *)v4 = v51;
      *(__m128i *)(v4 + 8) = v61;
      if ( v62 )
      {
        *(_QWORD *)(v4 + 32) = 0;
        qfree();
        v49 = 0;
      }
      v63 = _mm_load_si128(&v65);
      *(_QWORD *)(v4 + 24) = v53;
      v3 += 8;
      v4 += 64;
      *(_QWORD *)(v4 - 16) = v54;
      *(__m128i *)(v4 - 32) = v63;
      *(_BYTE *)(v4 - 8) = v55;
    }
    while ( (__int64 *)v66.m128i_i64[0] != v3 );
    return v66.m128i_i64[0];
  }
  else
  {
    v7 = (a3 - (__int64)a1) >> 6;
    v73 = a1;
    v8 = a1;
    v9 = v5;
    v74 = v4;
    v10 = v6 - v5;
    v75 = a3;
    if ( v5 >= v6 - v5 )
      goto LABEL_20;
    while ( 1 )
    {
      if ( v10 > 0 )
      {
        v70 = v7;
        v11 = &v8[8 * v9];
        v12 = 0;
        v13 = v8;
        v67.m128i_i64[0] = v10;
        v71 = v9;
        v72 = v8;
        do
        {
          v14 = _mm_loadu_si128((const __m128i *)(v13 + 1));
          v15 = _mm_loadu_si128((const __m128i *)v13 + 2);
          *(_OWORD *)(v13 + 1) = 0;
          v16 = *v13;
          v17 = v13[3];
          *((_OWORD *)v13 + 2) = 0;
          v18 = *((_BYTE *)v13 + 56);
          v19 = v13[6];
          *v13 = 0;
          v13[3] = 0;
          v20 = *v11;
          v21 = _mm_loadu_si128((const __m128i *)(v11 + 1));
          *v11 = 0;
          *(_OWORD *)(v11 + 1) = 0;
          v22 = *v13;
          v65.m128i_i8[0] = v18;
          v66 = v14;
          v64 = v15;
          if ( v22 )
          {
            v13[1] = 0;
            v68 = v20;
            v69 = v21;
            qfree();
            v21 = _mm_load_si128(&v69);
            v20 = v68;
          }
          *v13 = v20;
          *(__m128i *)(v13 + 1) = v21;
          v23 = v11[3];
          v24 = _mm_loadu_si128((const __m128i *)v11 + 2);
          v11[3] = 0;
          *((_OWORD *)v11 + 2) = 0;
          if ( v13[3] )
          {
            v13[4] = 0;
            v68 = v23;
            v69 = v24;
            qfree();
            v24 = _mm_load_si128(&v69);
            v23 = v68;
          }
          v13[3] = v23;
          *((__m128i *)v13 + 2) = v24;
          *((_DWORD *)v13 + 12) = *((_DWORD *)v11 + 12);
          *((_DWORD *)v13 + 13) = *((_DWORD *)v11 + 13);
          *((_BYTE *)v13 + 56) = *((_BYTE *)v11 + 56);
          if ( *v11 )
          {
            v11[1] = 0;
            qfree();
          }
          v25 = _mm_load_si128(&v66);
          v26 = v11[3];
          *v11 = v16;
          *(__m128i *)(v11 + 1) = v25;
          if ( v26 )
          {
            v11[4] = 0;
            qfree();
          }
          v11[3] = v17;
          v13 += 8;
          v11 += 8;
          ++v12;
          v27 = _mm_load_si128(&v64);
          v28 = v65.m128i_i8[0];
          *(v11 - 2) = v19;
          *((__m128i *)v11 - 2) = v27;
          *((_BYTE *)v11 - 8) = v28;
        }
        while ( v67.m128i_i64[0] != v12 );
        v7 = v70;
        v9 = v71;
        v8 = &v72[8 * v67.m128i_i64[0]];
      }
      if ( !(v7 % v9) )
        break;
      v10 = v9;
      v9 -= v7 % v9;
      while ( 1 )
      {
        v7 = v10;
        v10 -= v9;
        if ( v9 < v10 )
          break;
LABEL_20:
        v29 = &v8[8 * v7];
        v8 = &v29[-8 * v10];
        if ( v9 > 0 )
        {
          v70 = v7;
          v30 = v29;
          v31 = 0;
          v32 = &v29[-8 * v10];
          v71 = v10;
          v67.m128i_i64[0] = v9;
          v72 = v8;
          do
          {
            v30 -= 8;
            v33 = *(v32 - 8);
            v34 = *(v32 - 5);
            *(v32 - 8) = 0;
            v35 = _mm_loadu_si128((const __m128i *)(v32 - 7));
            v32 -= 8;
            *(_OWORD *)(v32 + 1) = 0;
            v36 = _mm_loadu_si128((const __m128i *)v32 + 2);
            v37 = *((_BYTE *)v32 + 56);
            *((_OWORD *)v32 + 2) = 0;
            v38 = v32[6];
            v32[3] = 0;
            v39 = *v30;
            v40 = _mm_loadu_si128((const __m128i *)(v30 + 1));
            *v30 = 0;
            *(_OWORD *)(v30 + 1) = 0;
            v41 = *v32;
            v64.m128i_i8[0] = v37;
            v65 = v35;
            v66 = v36;
            if ( v41 )
            {
              v32[1] = 0;
              v68 = v39;
              v69 = v40;
              qfree();
              v40 = _mm_load_si128(&v69);
              v39 = v68;
            }
            *v32 = v39;
            *(__m128i *)(v32 + 1) = v40;
            v42 = v30[3];
            v43 = _mm_loadu_si128((const __m128i *)v30 + 2);
            v30[3] = 0;
            *((_OWORD *)v30 + 2) = 0;
            if ( v32[3] )
            {
              v32[4] = 0;
              v68 = v42;
              v69 = v43;
              qfree();
              v43 = _mm_load_si128(&v69);
              v42 = v68;
            }
            v32[3] = v42;
            *((__m128i *)v32 + 2) = v43;
            *((_DWORD *)v32 + 12) = *((_DWORD *)v30 + 12);
            *((_DWORD *)v32 + 13) = *((_DWORD *)v30 + 13);
            *((_BYTE *)v32 + 56) = *((_BYTE *)v30 + 56);
            if ( *v30 )
            {
              v30[1] = 0;
              qfree();
            }
            v44 = _mm_load_si128(&v65);
            v45 = v30[3];
            *v30 = v33;
            *(__m128i *)(v30 + 1) = v44;
            if ( v45 )
            {
              v30[4] = 0;
              qfree();
            }
            v46 = _mm_load_si128(&v66);
            v47 = v64.m128i_i8[0];
            v30[3] = v34;
            ++v31;
            v30[6] = v38;
            *((_BYTE *)v30 + 56) = v47;
            *((__m128i *)v30 + 2) = v46;
          }
          while ( v67.m128i_i64[0] != v31 );
          v7 = v70;
          v10 = v71;
          v8 = &v72[-8 * v67.m128i_i64[0]];
        }
        v9 = v7 % v10;
        if ( !(v7 % v10) )
          return (__int64)v73 + v75 - v74;
      }
    }
    return (__int64)v73 + v75 - v74;
  }
}

