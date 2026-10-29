unsigned __int64 __fastcall sub_2A1180(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6, double a7)
{
  __int64 v8; // r14
  __int64 *v9; // rbp
  __int64 v10; // rbx
  char v11; // r12
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  int v16; // edx
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rbp
  int v20; // edx
  __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rcx
  const __m128i *v30; // r12
  __int64 v31; // rbp
  __m128i *v32; // r13
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r15
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r14
  bool v41; // cf
  char v42; // al
  __int64 v43; // rbp
  unsigned __int64 v44; // r12
  __int64 v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r15
  __int64 v49; // r12
  __int64 v50; // r15
  __int64 v51; // rbp
  __int64 v52; // rdi
  char v54; // [rsp+8h] [rbp-E0h]
  __int64 v55; // [rsp+18h] [rbp-D0h]
  char v56; // [rsp+20h] [rbp-C8h]
  __int64 v57; // [rsp+20h] [rbp-C8h]
  __int64 *v58; // [rsp+30h] [rbp-B8h]
  __int64 v59; // [rsp+38h] [rbp-B0h]
  __int64 v60; // [rsp+38h] [rbp-B0h]
  __int64 v61; // [rsp+40h] [rbp-A8h]
  __int64 v62; // [rsp+50h] [rbp-98h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-90h]
  unsigned int v64; // [rsp+60h] [rbp-88h] BYREF
  char v65; // [rsp+64h] [rbp-84h]
  __int64 v66; // [rsp+70h] [rbp-78h]
  __int64 v67; // [rsp+78h] [rbp-70h]
  unsigned int v68[4]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v69; // [rsp+90h] [rbp-58h]
  __int64 v70; // [rsp+98h] [rbp-50h]
  unsigned __int64 v71; // [rsp+A8h] [rbp-40h]

  v8 = a6;
  v9 = a2;
  v10 = a4;
  v71 = __readfsqword(0x28u);
  sub_29F880(a4, *(_QWORD *)(a1 + 1504), a7);
  v62 = 0;
  v11 = sub_29B3C0(v10, a1, &v62, a7);
  if ( v11 && (_BYTE)v62 && ((v62 & 0xE) != 0 || (v62 & 0x30) == 0) )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    v54 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v54 & 0x3F) != 0x30 )
    {
      if ( (_DWORD)v8 == -1 || get_tinfo_size() == v8 )
      {
        if ( *(_DWORD *)v10 != 2 )
          goto LABEL_5;
      }
      else
      {
        v42 = sub_29CC80(&v62);
        if ( *(_DWORD *)v10 != 2 )
        {
          if ( v42 )
            goto LABEL_5;
          goto LABEL_3;
        }
        v11 = v42;
      }
LABEL_34:
      if ( !**(_DWORD **)(v10 + 8) )
        *(_DWORD *)(v10 + 4) |= 0x20u;
      goto LABEL_5;
    }
  }
  v11 = 0;
  if ( *(_DWORD *)v10 == 2 )
    goto LABEL_34;
LABEL_3:
  if ( !*(_DWORD *)(v10 + 4) )
    goto LABEL_21;
  v11 = 0;
LABEL_5:
  v64 = 0;
  sub_29F770((__int64)&v64, (unsigned int *)v10, a7);
  v66 = 0;
  copy_tinfo_t();
  LODWORD(v67) = a5;
  v12 = sub_32E340(&v62);
  v13 = a2[1];
  if ( (v65 & 4) != 0 )
    ++v12;
  v14 = 1;
  HIDWORD(v67) = v12;
  if ( v13 )
  {
    v15 = *a2;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      v18 = v15 + 48 * v17;
      if ( a3 == *(_QWORD *)v18 )
        break;
      v17 = ++v16;
      if ( v16 >= v13 )
      {
        v14 = v13 + 1;
        goto LABEL_23;
      }
    }
  }
  else
  {
LABEL_23:
    v24 = v9[2];
    if ( v24 < v14 )
    {
      v25 = qvector_reserve((__int64)v9, 0, v14, 48);
      v26 = v9[1];
      v27 = v9[2];
      v9[2] = v24;
      v28 = *v9;
      v55 = v27;
      v29 = v26 - 1;
      if ( v29 >= 0 )
      {
        v59 = a3;
        v61 = v10;
        v56 = v11;
        v30 = (const __m128i *)*v9;
        v58 = v9;
        v31 = v29;
        v32 = (__m128i *)v25;
        do
        {
          v32->m128i_i64[0] = v30->m128i_i64[0];
          v33 = v30->m128i_i64[1];
          v30->m128i_i64[1] = 0;
          v34 = _mm_loadu_si128(v30 + 1);
          v32->m128i_i64[1] = v33;
          v32[1] = v34;
          v35 = v30[2].m128i_i64[0];
          v30[1] = 0;
          v32[2].m128i_i64[0] = v35;
          v32[2].m128i_i32[2] = v30[2].m128i_i32[2];
          v36 = v30->m128i_i64[1];
          if ( v36 )
          {
            v37 = v30[1].m128i_i64[0];
            if ( v37 )
            {
              v38 = 0;
              do
              {
                v39 = v38++;
                v40 = v36 + 32 * v39;
                clear_tinfo_t();
                sub_29EC30(v40, *(double *)v34.m128i_i64);
                v36 = v30->m128i_i64[1];
              }
              while ( v37 != v38 );
            }
            v30[1].m128i_i64[0] = 0;
            qfree(v36);
          }
          v30 += 3;
          v32 += 3;
          v41 = v31-- == 0;
        }
        while ( !v41 );
        v9 = v58;
        v11 = v56;
        a3 = v59;
        v10 = v61;
        v28 = *v58;
      }
      qfree(v28);
      v13 = v9[1];
      *v9 = v25;
      v9[2] = v55;
    }
    else
    {
      v25 = *v9;
    }
    a7 = 0.0;
    v18 = v25 + 48 * v13;
    *(_OWORD *)v18 = 0;
    *(_QWORD *)(v18 + 32) = 0;
    *(_DWORD *)(v18 + 40) = 0;
    *(_OWORD *)(v18 + 16) = 0;
    ++v9[1];
    *(_QWORD *)v18 = a3;
  }
  if ( v11 )
  {
    v19 = *(_QWORD *)(v18 + 8);
    if ( !(32LL * *(_QWORD *)(v18 + 16)) )
      goto LABEL_50;
    while ( 1 )
    {
      v20 = sub_29E6F0(v10, v19, a7);
      v21 = *(_QWORD *)(v18 + 8) + 32LL * *(_QWORD *)(v18 + 16);
      if ( !v20 )
        break;
      v19 += 32;
      if ( v19 == v21 )
        goto LABEL_50;
    }
    if ( v19 == v21 )
    {
LABEL_50:
      v68[0] = 0;
      sub_29F770((__int64)v68, &v64, a7);
      v69 = 0;
      copy_tinfo_t();
      v70 = v67;
      v43 = *(_QWORD *)(v18 + 16);
      v44 = *(_QWORD *)(v18 + 24);
      if ( v44 < v43 + 1 )
      {
        v46 = qvector_reserve(v18 + 8, 0, v43 + 1, 32);
        v47 = *(_QWORD *)(v18 + 24);
        v48 = *(_QWORD *)(v18 + 16);
        *(_QWORD *)(v18 + 24) = v44;
        v57 = v46;
        v49 = *(_QWORD *)(v18 + 8);
        v60 = v47;
        v50 = v48 - 1;
        if ( v50 >= 0 )
        {
          v51 = v46;
          do
          {
            *(_DWORD *)v51 = 0;
            sub_29F770(v51, (unsigned int *)v49, a7);
            *(_QWORD *)(v51 + 16) = 0;
            copy_tinfo_t();
            v51 += 32;
            *(_QWORD *)(v51 - 8) = *(_QWORD *)(v49 + 24);
            clear_tinfo_t();
            v52 = v49;
            v49 += 32;
            sub_29EC30(v52, a7);
            v41 = v50-- == 0;
          }
          while ( !v41 );
          v49 = *(_QWORD *)(v18 + 8);
        }
        qfree(v49);
        v43 = *(_QWORD *)(v18 + 16);
        *(_QWORD *)(v18 + 8) = v57;
        *(_QWORD *)(v18 + 24) = v60;
      }
      else
      {
        v57 = *(_QWORD *)(v18 + 8);
      }
      *(_DWORD *)(32 * v43 + v57) = 0;
      v45 = 32 * v43 + v57;
      sub_29F770(v45, v68, a7);
      *(_QWORD *)(v45 + 16) = 0;
      copy_tinfo_t();
      *(_QWORD *)(v45 + 24) = v70;
      ++*(_QWORD *)(v18 + 16);
      clear_tinfo_t();
      sub_29EC30((__int64)v68, a7);
    }
    else
    {
      ++*(_DWORD *)(v19 + 24);
    }
  }
  v22 = *(_DWORD *)(v10 + 4);
  if ( (v22 & 2) != 0 )
  {
    *(_DWORD *)(v18 + 32) += a5;
    v22 = *(_DWORD *)(v10 + 4);
  }
  else if ( (v22 & 1) != 0 )
  {
    *(_DWORD *)(v18 + 36) += a5;
    v22 = *(_DWORD *)(v10 + 4);
  }
  *(_DWORD *)(v18 + 40) |= v22;
  clear_tinfo_t();
  sub_29EC30((__int64)&v64, a7);
LABEL_21:
  clear_tinfo_t();
  return v71 - __readfsqword(0x28u);
}

