unsigned __int64 __fastcall sub_FD10(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rax
  __m128i *i; // r12
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rbp
  __m128i v9; // xmm0
  unsigned __int64 v10; // rdx
  __m128i *v11; // rbx
  unsigned __int64 v12; // rcx
  __m128i *v13; // rbp
  __int8 v14; // r9
  __int64 v15; // rsi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rax
  __m128i v18; // xmm1
  __int64 v19; // rbp
  __m128i v20; // xmm3
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  __m128i *v23; // rbp
  unsigned __int64 v24; // rax
  __m128i v25; // xmm5
  __int64 v26; // r15
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  __int8 v29; // r13
  __int64 v30; // rdx
  __m128i v31; // xmm1
  __int64 v32; // rdi
  __m128i v33; // xmm6
  __int64 v34; // rbp
  __m128i v35; // xmm3
  __int64 v36; // rdi
  __m128i v37; // xmm2
  __int8 v38; // al
  __int64 v39; // rax
  __m128i v40; // xmm2
  __int64 v41; // rbx
  const __m128i *v42; // rbp
  __int8 v43; // dl
  __int64 v44; // rax
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __int64 v47; // rbx
  __m128i v48; // xmm1
  __m128i v49; // xmm2
  __int8 v50; // al
  __int64 v51; // r15
  __m128i v52; // xmm3
  __int64 v54; // r15
  __m128i v55; // xmm3
  __int64 v56; // rdi
  __int64 v57; // r15
  __m128i v58; // xmm3
  __int64 v59; // rdi
  __m128i v60; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v61; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v62; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v63; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+48h] [rbp-90h]
  __m128i v65; // [rsp+50h] [rbp-88h] BYREF
  __m128i v66; // [rsp+60h] [rbp-78h] BYREF
  __int8 v67; // [rsp+70h] [rbp-68h]
  __int64 v68; // [rsp+78h] [rbp-60h]
  __m128i v69; // [rsp+80h] [rbp-58h]
  unsigned __int64 v70; // [rsp+98h] [rbp-40h]

  v64 = a3;
  v70 = __readfsqword(0x28u);
  v3 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 768 )
    return v70 - __readfsqword(0x28u);
  for ( i = a2; ; i = v11 )
  {
    v6 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 4);
    v7 = v6 >> 1;
    if ( !v64 )
      break;
    v8 = 3 * v7;
    v9 = _mm_loadu_si128(a1);
    v10 = a1[3].m128i_u64[0];
    v11 = a1 + 3;
    --v64;
    v12 = i[-3].m128i_u64[0];
    v13 = &a1[v8];
    v14 = a1[1].m128i_i8[0];
    v15 = a1[1].m128i_i64[1];
    v16 = v9.m128i_i64[0];
    v17 = v13->m128i_i64[0];
    v18 = _mm_loadu_si128(a1 + 2);
    if ( v10 >= v13->m128i_i64[0] )
    {
      if ( v10 < v12 )
        goto LABEL_31;
      a1[1].m128i_i64[1] = 0;
      a1[2] = 0;
      if ( v17 >= v12 )
      {
        *a1 = _mm_loadu_si128(v13);
        a1[1].m128i_i8[0] = v13[1].m128i_i8[0];
        v54 = v13[1].m128i_i64[1];
        v55 = _mm_loadu_si128(v13 + 2);
        v13[1].m128i_i64[1] = 0;
        v13[2] = 0;
        if ( a1[1].m128i_i64[1] )
        {
          a1[2].m128i_i64[0] = 0;
          v63.m128i_i64[0] = v15;
          v60.m128i_i8[0] = v14;
          v65 = v18;
          v62 = v55;
          v61 = v9;
          qfree();
          v18 = _mm_load_si128(&v65);
          v15 = v63.m128i_i64[0];
          v55 = _mm_load_si128(&v62);
          v9 = _mm_load_si128(&v61);
          v14 = v60.m128i_i8[0];
        }
        a1[1].m128i_i64[1] = v54;
        a1[2] = v55;
        v56 = v13[1].m128i_i64[1];
        v13[1].m128i_i8[0] = v14;
        *v13 = v9;
        if ( v56 )
        {
LABEL_47:
          v13[2].m128i_i64[0] = 0;
          v60.m128i_i64[0] = v15;
          v61 = v18;
          qfree();
          v18 = _mm_load_si128(&v61);
          v15 = v60.m128i_i64[0];
        }
LABEL_48:
        v13[1].m128i_i64[1] = v15;
        v13[2] = v18;
        v16 = a1[3].m128i_u64[0];
        v21 = i[-3].m128i_u64[0];
        goto LABEL_12;
      }
      *a1 = _mm_loadu_si128(i - 3);
      a1[1].m128i_i8[0] = i[-2].m128i_i8[0];
      v34 = i[-2].m128i_i64[1];
      i[-2].m128i_i64[1] = 0;
      v35 = _mm_loadu_si128(i - 1);
      i[-1] = 0;
      if ( a1[1].m128i_i64[1] )
      {
        a1[2].m128i_i64[0] = 0;
        v63.m128i_i64[0] = v15;
        v61.m128i_i8[0] = v14;
        v65 = v18;
        v62 = v9;
        v60 = v35;
        qfree();
        v18 = _mm_load_si128(&v65);
        v15 = v63.m128i_i64[0];
        v9 = _mm_load_si128(&v62);
        v14 = v61.m128i_i8[0];
        v35 = _mm_load_si128(&v60);
      }
      a1[1].m128i_i64[1] = v34;
      v21 = v16;
      a1[2] = v35;
      v36 = i[-2].m128i_i64[1];
      i[-2].m128i_i8[0] = v14;
      i[-3] = v9;
      if ( v36 )
        goto LABEL_10;
    }
    else
    {
      if ( v17 < v12 )
      {
        a1[1].m128i_i64[1] = 0;
        a1[2] = 0;
        *a1 = _mm_loadu_si128(v13);
        a1[1].m128i_i8[0] = v13[1].m128i_i8[0];
        v57 = v13[1].m128i_i64[1];
        v58 = _mm_loadu_si128(v13 + 2);
        v13[1].m128i_i64[1] = 0;
        v13[2] = 0;
        if ( a1[1].m128i_i64[1] )
        {
          a1[2].m128i_i64[0] = 0;
          v62.m128i_i64[0] = v15;
          v60.m128i_i8[0] = v14;
          v65 = v58;
          v63 = v18;
          v61 = v9;
          qfree();
          v58 = _mm_load_si128(&v65);
          v15 = v62.m128i_i64[0];
          v18 = _mm_load_si128(&v63);
          v9 = _mm_load_si128(&v61);
          v14 = v60.m128i_i8[0];
        }
        a1[1].m128i_i64[1] = v57;
        a1[2] = v58;
        v59 = v13[1].m128i_i64[1];
        v13[1].m128i_i8[0] = v14;
        *v13 = v9;
        if ( v59 )
          goto LABEL_47;
        goto LABEL_48;
      }
      if ( v10 >= v12 )
      {
LABEL_31:
        v37 = _mm_loadu_si128(a1 + 3);
        v38 = a1[4].m128i_i8[0];
        a1[3] = v9;
        a1[4].m128i_i8[0] = v14;
        a1[1].m128i_i8[0] = v38;
        v39 = a1[4].m128i_i64[1];
        *a1 = v37;
        v40 = _mm_loadu_si128(a1 + 5);
        a1[1].m128i_i64[1] = v39;
        a1[4].m128i_i64[1] = v15;
        a1[2] = v40;
        a1[5] = v18;
        v21 = i[-3].m128i_u64[0];
        goto LABEL_12;
      }
      a1[1].m128i_i64[1] = 0;
      a1[2] = 0;
      *a1 = _mm_loadu_si128(i - 3);
      a1[1].m128i_i8[0] = i[-2].m128i_i8[0];
      v19 = i[-2].m128i_i64[1];
      i[-2].m128i_i64[1] = 0;
      v20 = _mm_loadu_si128(i - 1);
      i[-1] = 0;
      if ( a1[1].m128i_i64[1] )
      {
        a1[2].m128i_i64[0] = 0;
        v62.m128i_i64[0] = v15;
        v60.m128i_i8[0] = v14;
        v65 = v20;
        v63 = v18;
        v61 = v9;
        qfree();
        v20 = _mm_load_si128(&v65);
        v15 = v62.m128i_i64[0];
        v18 = _mm_load_si128(&v63);
        v9 = _mm_load_si128(&v61);
        v14 = v60.m128i_i8[0];
      }
      a1[1].m128i_i64[1] = v19;
      v21 = v16;
      a1[2] = v20;
      v22 = i[-2].m128i_i64[1];
      i[-2].m128i_i8[0] = v14;
      i[-3] = v9;
      if ( v22 )
      {
LABEL_10:
        i[-1].m128i_i64[0] = 0;
        v60.m128i_i64[0] = v15;
        v61 = v18;
        qfree();
        v21 = i[-3].m128i_u64[0];
        v18 = _mm_load_si128(&v61);
        v15 = v60.m128i_i64[0];
      }
    }
    i[-2].m128i_i64[1] = v15;
    i[-1] = v18;
    v16 = a1[3].m128i_u64[0];
LABEL_12:
    v23 = i;
    while ( 1 )
    {
      v24 = a1->m128i_i64[0];
      if ( v16 < a1->m128i_i64[0] )
      {
        do
          v11 += 3;
        while ( v11->m128i_i64[0] < v24 );
      }
      v23 -= 3;
      if ( v24 < v21 )
      {
        do
          v23 -= 3;
        while ( v24 < v23->m128i_i64[0] );
      }
      if ( v11 >= v23 )
        break;
      v25 = _mm_loadu_si128(v11 + 2);
      v26 = v11[1].m128i_i64[1];
      v11[1].m128i_i64[1] = 0;
      v11[2] = 0;
      v27 = _mm_loadu_si128(v23);
      v28 = _mm_loadu_si128(v11);
      v29 = v11[1].m128i_i8[0];
      v60 = v25;
      *v11 = v27;
      v11[1].m128i_i8[0] = v23[1].m128i_i8[0];
      v30 = v23[1].m128i_i64[1];
      v31 = _mm_loadu_si128(v23 + 2);
      v23[1].m128i_i64[1] = 0;
      v23[2] = 0;
      if ( v11[1].m128i_i64[1] )
      {
        v11[2].m128i_i64[0] = 0;
        v63.m128i_i64[0] = v30;
        v62 = v28;
        v61 = v31;
        qfree();
        v30 = v63.m128i_i64[0];
        v28 = _mm_load_si128(&v62);
        v31 = _mm_load_si128(&v61);
      }
      v11[1].m128i_i64[1] = v30;
      v11[2] = v31;
      v32 = v23[1].m128i_i64[1];
      v23[1].m128i_i8[0] = v29;
      *v23 = v28;
      if ( v32 )
      {
        v23[2].m128i_i64[0] = 0;
        qfree();
      }
      v33 = _mm_load_si128(&v60);
      v21 = v23[-3].m128i_u64[0];
      v23[1].m128i_i64[1] = v26;
      v11 += 3;
      v23[2] = v33;
      v16 = v11->m128i_i64[0];
    }
    sub_FD10(v11, i, v64);
    v3 = (char *)v11 - (char *)a1;
    if ( (char *)v11 - (char *)a1 <= 768 )
      return v70 - __readfsqword(0x28u);
  }
  v41 = v7 - 1;
  v42 = &a1[3 * v7 - 3];
  while ( 1 )
  {
    v43 = v42[1].m128i_i8[0];
    v44 = v42[1].m128i_i64[1];
    v45 = _mm_loadu_si128(v42 + 2);
    v46 = _mm_loadu_si128(v42);
    v42[1].m128i_i64[1] = 0;
    v67 = v43;
    v42[2] = 0;
    v68 = v44;
    v66 = v46;
    v69 = v45;
    sub_F180((__int64)a1, v41, v6, &v66);
    if ( v68 )
      qfree();
    v42 -= 3;
    if ( !v41 )
      break;
    --v41;
  }
  while ( (char *)i - (char *)a1 > 48 )
  {
    v47 = i[-2].m128i_i64[1];
    v48 = _mm_loadu_si128(i - 1);
    i[-2].m128i_i64[1] = 0;
    i[-1] = 0;
    v49 = _mm_loadu_si128(i - 3);
    i -= 3;
    v50 = i[1].m128i_i8[0];
    *i = _mm_loadu_si128(a1);
    i[1].m128i_i8[0] = a1[1].m128i_i8[0];
    v51 = a1[1].m128i_i64[1];
    v52 = _mm_loadu_si128(a1 + 2);
    a1[1].m128i_i64[1] = 0;
    a1[2] = 0;
    if ( i[1].m128i_i64[1] )
    {
      i[2].m128i_i64[0] = 0;
      v60.m128i_i8[0] = v50;
      v63 = v48;
      v62 = v52;
      v61 = v49;
      qfree();
      v48 = _mm_load_si128(&v63);
      v52 = _mm_load_si128(&v62);
      v49 = _mm_load_si128(&v61);
      v50 = v60.m128i_i8[0];
    }
    v68 = v47;
    i[1].m128i_i64[1] = v51;
    i[2] = v52;
    v67 = v50;
    v66 = v49;
    v69 = v48;
    sub_F180((__int64)a1, 0, 0xAAAAAAAAAAAAAAABLL * (i - a1), &v66);
    if ( v68 )
      qfree();
  }
  return v70 - __readfsqword(0x28u);
}

