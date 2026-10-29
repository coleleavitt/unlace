unsigned __int64 __fastcall sub_29BDC0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // r14
  __int64 *v8; // rbp
  __int64 v9; // rbx
  char v10; // r12
  int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  int v15; // edx
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rbp
  int v19; // edx
  __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  const __m128i *v28; // r12
  __int64 v29; // rbp
  __m128i *v30; // r13
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r15
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r14
  bool v39; // cf
  char v40; // al
  __int64 v41; // rbp
  unsigned __int64 v42; // r12
  __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r15
  __int64 v47; // r12
  __int64 v48; // r15
  __int64 v49; // rbp
  __int64 v50; // rdi
  char v52; // [rsp+8h] [rbp-E0h]
  __int64 v53; // [rsp+18h] [rbp-D0h]
  char v54; // [rsp+20h] [rbp-C8h]
  __int64 v55; // [rsp+20h] [rbp-C8h]
  __int64 *v56; // [rsp+30h] [rbp-B8h]
  __int64 v57; // [rsp+38h] [rbp-B0h]
  __int64 v58; // [rsp+38h] [rbp-B0h]
  __int64 v59; // [rsp+40h] [rbp-A8h]
  __int64 v60; // [rsp+50h] [rbp-98h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-90h]
  unsigned int v62; // [rsp+60h] [rbp-88h] BYREF
  char v63; // [rsp+64h] [rbp-84h]
  __int64 v64; // [rsp+70h] [rbp-78h]
  __int64 v65; // [rsp+78h] [rbp-70h]
  unsigned int v66[4]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v67; // [rsp+90h] [rbp-58h]
  __int64 v68; // [rsp+98h] [rbp-50h]
  unsigned __int64 v69; // [rsp+A8h] [rbp-40h]

  v7 = a6;
  v8 = a2;
  v9 = a4;
  v69 = __readfsqword(0x28u);
  sub_29A4C0(a4, *(_QWORD *)(a1 + 1504));
  v60 = 0;
  v10 = sub_296000(v9, a1, &v60);
  if ( v10 && (_BYTE)v60 && ((v60 & 0xE) != 0 || (v60 & 0x30) == 0) )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    v52 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v52 & 0x3F) != 0x30 )
    {
      if ( (_DWORD)v7 == -1 || get_tinfo_size() == v7 )
      {
        if ( *(_DWORD *)v9 != 2 )
          goto LABEL_5;
      }
      else
      {
        v40 = sub_2978C0(&v60);
        if ( *(_DWORD *)v9 != 2 )
        {
          if ( v40 )
            goto LABEL_5;
          goto LABEL_3;
        }
        v10 = v40;
      }
LABEL_34:
      if ( !**(_DWORD **)(v9 + 8) )
        *(_DWORD *)(v9 + 4) |= 0x20u;
      goto LABEL_5;
    }
  }
  v10 = 0;
  if ( *(_DWORD *)v9 == 2 )
    goto LABEL_34;
LABEL_3:
  if ( !*(_DWORD *)(v9 + 4) )
    goto LABEL_21;
  v10 = 0;
LABEL_5:
  v62 = 0;
  sub_29A3B0((__int64)&v62, (unsigned int *)v9);
  v64 = 0;
  copy_tinfo_t();
  LODWORD(v65) = a5;
  v11 = sub_3288C0(&v60, &v60);
  v12 = a2[1];
  if ( (v63 & 4) != 0 )
    ++v11;
  v13 = 1;
  HIDWORD(v65) = v11;
  if ( v12 )
  {
    v14 = *a2;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      v17 = v14 + 48 * v16;
      if ( a3 == *(_QWORD *)v17 )
        break;
      v16 = ++v15;
      if ( v15 >= v12 )
      {
        v13 = v12 + 1;
        goto LABEL_23;
      }
    }
  }
  else
  {
LABEL_23:
    v23 = v8[2];
    if ( v23 < v13 )
    {
      v24 = qvector_reserve();
      v25 = v8[1];
      v26 = v8[2];
      v8[2] = v23;
      v53 = v26;
      v27 = v25 - 1;
      if ( v27 >= 0 )
      {
        v57 = a3;
        v59 = v9;
        v54 = v10;
        v28 = (const __m128i *)*v8;
        v56 = v8;
        v29 = v27;
        v30 = (__m128i *)v24;
        do
        {
          v30->m128i_i64[0] = v28->m128i_i64[0];
          v31 = v28->m128i_i64[1];
          v28->m128i_i64[1] = 0;
          v32 = _mm_loadu_si128(v28 + 1);
          v30->m128i_i64[1] = v31;
          v30[1] = v32;
          v33 = v28[2].m128i_i64[0];
          v28[1] = 0;
          v30[2].m128i_i64[0] = v33;
          v30[2].m128i_i32[2] = v28[2].m128i_i32[2];
          v34 = v28->m128i_i64[1];
          if ( v34 )
          {
            v35 = v28[1].m128i_i64[0];
            if ( v35 )
            {
              v36 = 0;
              do
              {
                v37 = v36++;
                v38 = v34 + 32 * v37;
                clear_tinfo_t();
                sub_299870(v38);
                v34 = v28->m128i_i64[1];
              }
              while ( v35 != v36 );
            }
            v28[1].m128i_i64[0] = 0;
            qfree();
          }
          v28 += 3;
          v30 += 3;
          v39 = v29-- == 0;
        }
        while ( !v39 );
        v8 = v56;
        v10 = v54;
        a3 = v57;
        v9 = v59;
      }
      qfree();
      v12 = v8[1];
      *v8 = v24;
      v8[2] = v53;
    }
    else
    {
      v24 = *v8;
    }
    v17 = v24 + 48 * v12;
    *(_OWORD *)v17 = 0;
    *(_QWORD *)(v17 + 32) = 0;
    *(_DWORD *)(v17 + 40) = 0;
    *(_OWORD *)(v17 + 16) = 0;
    ++v8[1];
    *(_QWORD *)v17 = a3;
  }
  if ( v10 )
  {
    v18 = *(_QWORD *)(v17 + 8);
    if ( !(32LL * *(_QWORD *)(v17 + 16)) )
      goto LABEL_50;
    while ( 1 )
    {
      v19 = sub_299330(v9, v18);
      v20 = *(_QWORD *)(v17 + 8) + 32LL * *(_QWORD *)(v17 + 16);
      if ( !v19 )
        break;
      v18 += 32;
      if ( v18 == v20 )
        goto LABEL_50;
    }
    if ( v18 == v20 )
    {
LABEL_50:
      v66[0] = 0;
      sub_29A3B0((__int64)v66, &v62);
      v67 = 0;
      copy_tinfo_t();
      v68 = v65;
      v41 = *(_QWORD *)(v17 + 16);
      v42 = *(_QWORD *)(v17 + 24);
      if ( v42 < v41 + 1 )
      {
        v44 = qvector_reserve();
        v45 = *(_QWORD *)(v17 + 24);
        v46 = *(_QWORD *)(v17 + 16);
        *(_QWORD *)(v17 + 24) = v42;
        v55 = v44;
        v47 = *(_QWORD *)(v17 + 8);
        v58 = v45;
        v48 = v46 - 1;
        if ( v48 >= 0 )
        {
          v49 = v44;
          do
          {
            *(_DWORD *)v49 = 0;
            sub_29A3B0(v49, (unsigned int *)v47);
            *(_QWORD *)(v49 + 16) = 0;
            copy_tinfo_t();
            v49 += 32;
            *(_QWORD *)(v49 - 8) = *(_QWORD *)(v47 + 24);
            clear_tinfo_t();
            v50 = v47;
            v47 += 32;
            sub_299870(v50);
            v39 = v48-- == 0;
          }
          while ( !v39 );
        }
        qfree();
        v41 = *(_QWORD *)(v17 + 16);
        *(_QWORD *)(v17 + 8) = v55;
        *(_QWORD *)(v17 + 24) = v58;
      }
      else
      {
        v55 = *(_QWORD *)(v17 + 8);
      }
      *(_DWORD *)(32 * v41 + v55) = 0;
      v43 = 32 * v41 + v55;
      sub_29A3B0(v43, v66);
      *(_QWORD *)(v43 + 16) = 0;
      copy_tinfo_t();
      *(_QWORD *)(v43 + 24) = v68;
      ++*(_QWORD *)(v17 + 16);
      clear_tinfo_t();
      sub_299870((__int64)v66);
    }
    else
    {
      ++*(_DWORD *)(v18 + 24);
    }
  }
  v21 = *(_DWORD *)(v9 + 4);
  if ( (v21 & 2) != 0 )
  {
    *(_DWORD *)(v17 + 32) += a5;
    v21 = *(_DWORD *)(v9 + 4);
  }
  else if ( (v21 & 1) != 0 )
  {
    *(_DWORD *)(v17 + 36) += a5;
    v21 = *(_DWORD *)(v9 + 4);
  }
  *(_DWORD *)(v17 + 40) |= v21;
  clear_tinfo_t();
  sub_299870((__int64)&v62);
LABEL_21:
  clear_tinfo_t();
  return v69 - __readfsqword(0x28u);
}

