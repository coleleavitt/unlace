unsigned __int64 __fastcall sub_17680(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, unsigned __int8, __int64); // rax
  unsigned int v14; // eax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r13
  unsigned int v17; // ebp
  const __m128i *v18; // rax
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rcx
  const __m128i *v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rbp
  const char *v27; // r14
  char *v28; // rax
  size_t v30; // rax
  size_t v31; // r9
  void *v32; // rdi
  size_t v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  const __m128i *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // rbx
  const __m128i *v41; // rdi
  __int64 v42; // rdx
  __int32 v43; // ecx
  __int64 v44; // rcx
  __m128i v45; // xmm0
  bool v46; // cf
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // r14
  const __m128i *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int32 v53; // esi
  __int64 v54; // rsi
  __m128i v55; // xmm0
  unsigned int *v56; // [rsp+8h] [rbp-B0h]
  size_t v57; // [rsp+10h] [rbp-A8h]
  size_t v58; // [rsp+10h] [rbp-A8h]
  size_t v59; // [rsp+18h] [rbp-A0h]
  char *s; // [rsp+20h] [rbp-98h]
  unsigned __int64 v61; // [rsp+28h] [rbp-90h]
  __int64 v62; // [rsp+30h] [rbp-88h] BYREF
  __int64 v63; // [rsp+38h] [rbp-80h]
  unsigned __int64 v64; // [rsp+40h] [rbp-78h]
  int v65; // [rsp+50h] [rbp-68h] BYREF
  __int64 v66; // [rsp+58h] [rbp-60h]
  __int128 v67; // [rsp+60h] [rbp-58h]
  unsigned __int64 v68; // [rsp+78h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  sub_27550(&v62, 19);
  v6 = v63;
  v7 = v62;
  if ( v64 < v63 + 1 )
  {
    v62 = qvector_reserve();
    v7 = v62;
    v6 = v63;
  }
  *(_BYTE *)(v7 + v6) = a3;
  v8 = v62;
  v9 = v63 + 1;
  v10 = v63 + 2;
  ++v63;
  if ( v64 < v10 )
  {
    v62 = qvector_reserve();
    v8 = v62;
    v9 = v63;
  }
  *(_BYTE *)(v8 + v9) = a4 != nullptr;
  v11 = *(_QWORD *)(a1 + 864);
  v12 = a1 + 864;
  ++v63;
  v13 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(v11 + 16);
  if ( v13 == sub_A900 )
  {
    v56 = (unsigned int *)sub_23F10(v12, 19, &v62, 0);
    if ( v56 )
      goto LABEL_7;
LABEL_37:
    if ( !v62 )
      return v68 - __readfsqword(0x28u);
    goto LABEL_29;
  }
  v56 = (unsigned int *)v13(v12, 19u, (__int64)&v62);
  if ( !v56 )
    goto LABEL_37;
LABEL_7:
  if ( !a4 )
    goto LABEL_28;
  s = (char *)v56 + 5;
  v61 = (unsigned __int64)v56 + *v56 + 5;
  v14 = unpack_dd();
  v15 = a4[1];
  v16 = v14;
  v17 = v14;
  if ( v14 == v15 )
  {
LABEL_21:
    if ( !v17 )
      goto LABEL_28;
    goto LABEL_22;
  }
  v65 = 0;
  v66 = 0;
  v67 = 0;
  if ( v14 < v15 )
  {
    v22 = v14;
    do
    {
      v23 = *a4 + 32 * v22;
      if ( *(_QWORD *)(v23 + 8) )
      {
        *(_QWORD *)(v23 + 16) = 0;
        qfree();
      }
      ++v22;
    }
    while ( v22 < v15 );
    a4[1] = v16;
    goto LABEL_21;
  }
  v18 = (const __m128i *)*a4;
  v19 = a4[2];
  if ( (unsigned __int64)&v65 < *a4 || &v65 >= v18[2 * v19].m128i_i32 )
  {
    if ( v19 >= v16 )
      goto LABEL_56;
    v37 = qvector_reserve();
    v38 = a4[1];
    v39 = a4[2];
    v40 = v37;
    a4[2] = v19;
    v41 = (const __m128i *)*a4;
    v42 = v38 - 1;
    if ( v42 >= 0 )
    {
      do
      {
        v43 = v41->m128i_i32[0];
        v37 += 32;
        v41 += 2;
        *(_DWORD *)(v37 - 32) = v43;
        v44 = v41[-2].m128i_i64[1];
        v45 = _mm_loadu_si128(v41 - 1);
        v41[-2].m128i_i64[1] = 0;
        *(_QWORD *)(v37 - 24) = v44;
        *(__m128i *)(v37 - 16) = v45;
        v41[-1].m128i_i64[1] = 0;
        v46 = v42-- == 0;
      }
      while ( !v46 );
    }
    qfree();
    a4[2] = v39;
    v15 = a4[1];
    v18 = (const __m128i *)v40;
    *a4 = v40;
    if ( v15 < v16 )
    {
LABEL_56:
      while ( 1 )
      {
        v20 = v15++;
        v21 = &v18[2 * v20];
        v21->m128i_i64[0] = 0;
        v21->m128i_i64[1] = 0;
        v21[1] = 0;
        if ( v16 == v15 )
          break;
        v18 = (const __m128i *)*a4;
      }
    }
  }
  else
  {
    if ( v19 >= v16 )
      goto LABEL_57;
    v47 = qvector_reserve();
    v48 = a4[1];
    v49 = a4[2];
    a4[2] = v19;
    v50 = (const __m128i *)*a4;
    v51 = v48 - 1;
    if ( v51 >= 0 )
    {
      v52 = v47;
      do
      {
        v53 = v50->m128i_i32[0];
        v52 += 32;
        v50 += 2;
        *(_DWORD *)(v52 - 32) = v53;
        v54 = v50[-2].m128i_i64[1];
        v55 = _mm_loadu_si128(v50 - 1);
        v50[-2].m128i_i64[1] = 0;
        *(_QWORD *)(v52 - 24) = v54;
        *(__m128i *)(v52 - 16) = v55;
        v50[-1].m128i_i64[1] = 0;
        v46 = v51-- == 0;
      }
      while ( !v46 );
    }
    qfree();
    a4[2] = v49;
    v15 = a4[1];
    v18 = (const __m128i *)v47;
    *a4 = v47;
    if ( v15 < v16 )
    {
LABEL_57:
      while ( 1 )
      {
        v35 = v15++;
        v36 = &v18[2 * v35];
        v36->m128i_i64[0] = 0;
        v36->m128i_i64[1] = 0;
        v36[1] = 0;
        if ( v16 == v15 )
          break;
        v18 = (const __m128i *)*a4;
      }
    }
  }
  a4[1] = v16;
LABEL_22:
  v24 = 32 * v16;
  v25 = 0;
  do
  {
    v26 = v25 + *a4;
    *(_DWORD *)v26 = unpack_dd();
    v27 = s;
    v28 = s;
    do
    {
      if ( (unsigned __int64)v28 >= v61 )
        goto LABEL_26;
      ++v28;
    }
    while ( *(v28 - 1) );
    s = v28;
    if ( !v27 || (v30 = strlen(v27), (v31 = v30) == 0) )
    {
LABEL_26:
      *(_QWORD *)(v26 + 16) = 0;
      goto LABEL_27;
    }
    v32 = *(void **)(v26 + 8);
    v33 = v30 + 1;
    if ( *(_QWORD *)(v26 + 24) < v30 + 1 )
    {
      v59 = v30;
      v58 = v30 + 1;
      v34 = qvector_reserve();
      *(_QWORD *)(v26 + 8) = v34;
      v31 = v59;
      v32 = (void *)v34;
      v33 = v58;
    }
    *(_QWORD *)(v26 + 16) = v33;
    v57 = v31;
    memmove(v32, v27, v31);
    *(_BYTE *)(*(_QWORD *)(v26 + 8) + v57) = 0;
LABEL_27:
    v25 += 32;
  }
  while ( v24 != v25 );
LABEL_28:
  qfree();
  if ( v62 )
  {
LABEL_29:
    v63 = 0;
    qfree();
  }
  return v68 - __readfsqword(0x28u);
}

