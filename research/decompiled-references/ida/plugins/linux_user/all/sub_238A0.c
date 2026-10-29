__int64 __fastcall sub_238A0(__int64 a1, __int64 *a2, __int32 a3, double a4, __m128i a5, __m128 a6, __m128 a7)
{
  FILE *v8; // rdi
  __m128i v10; // xmm0
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  char v14; // r15
  __int64 v15; // r14
  char *v16; // r12
  __int64 v17; // r15
  const char *v18; // rsi
  unsigned __int64 v19; // rsi
  __int64 v20; // rdi
  int v21; // ecx
  __int64 v22; // rax
  int v23; // ecx
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rax
  char *v26; // rax
  __int32 v27; // eax
  bool v28; // cc
  char *v29; // rax
  size_t v30; // r15
  void *v31; // r12
  __int64 v32; // rax
  __int64 v33; // rsi
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r12
  unsigned __int64 v38; // r14
  size_t v39; // r10
  const char *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  char v44; // r14
  const char *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  size_t v49; // r9
  __int64 v50; // rax
  int v51; // edx
  __int64 v52; // rax
  __int8 i; // cl
  __int64 v54; // rdx
  __int64 v55; // rbp
  __int64 v56; // rbx
  _QWORD *v57; // rax
  const void *v59; // r11
  void *v60; // rdi
  __int64 v61; // rax
  __m128i n; // [rsp+8h] [rbp-D0h] BYREF
  const void *v63; // [rsp+18h] [rbp-C0h]
  __int64 v64; // [rsp+20h] [rbp-B8h]
  __int128 v65; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v66; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v67; // [rsp+48h] [rbp-90h]
  char s[16]; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int8 v69; // [rsp+70h] [rbp-68h]
  char *s1; // [rsp+78h] [rbp-60h]
  __m128i v71; // [rsp+80h] [rbp-58h]
  unsigned __int64 v72; // [rsp+98h] [rbp-40h]

  n.m128i_i32[3] = a3;
  v72 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 1349) )
    return 4294967291LL;
  v8 = *(FILE **)(a1 + 1400);
  if ( !v8 )
    return 4294967291LL;
  if ( (_BYTE)a3 )
  {
    sub_1ED60(a1, 0, 1);
    v8 = *(FILE **)(a1 + 1400);
  }
  rewind(v8);
  v10.m128i_i64[0] = 0;
  s1 = nullptr;
  v64 = 0;
  n.m128i_i32[2] = 1;
  v71 = 0;
  v65 = 0;
  while ( 1 )
  {
    v14 = sub_17510(a1, (__int64)&v66);
    if ( !v14 )
      break;
    if ( v66 < v67 )
    {
      if ( *(_QWORD *)(a1 + 1424) > 1u )
        goto LABEL_17;
      n.m128i_i64[0] = v71.m128i_i64[0];
      if ( v71.m128i_i64[0] <= 1uLL )
        goto LABEL_17;
      v15 = v64;
      v16 = s1;
      v17 = v64 + 24 * v65;
      if ( v64 != v17 )
      {
        while ( 1 )
        {
          v18 = ::s;
          if ( *(_QWORD *)(v15 + 8) )
            v18 = *(const char **)v15;
          if ( !strcmp(v16, v18) )
            break;
          v15 += 24;
          if ( v17 == v15 )
            goto LABEL_31;
        }
        if ( v15 != v17 )
        {
LABEL_17:
          v19 = a2[1];
          v20 = *a2;
          if ( !v19 )
            goto LABEL_38;
          goto LABEL_18;
        }
      }
LABEL_31:
      v29 = strstr(v16, "ld-");
      if ( !v29 || v29 - v16 == -1 || v29 != v16 && *(v29 - 1) != 47 )
        goto LABEL_17;
      v30 = n.m128i_i64[0];
      v31 = (void *)qalloc_or_throw();
      memcpy(v31, s1, v30);
      v32 = v65;
      v33 = v64;
      if ( *((_QWORD *)&v65 + 1) < (unsigned __int64)(v65 + 1) )
      {
        v64 = qvector_reserve();
        v33 = v64;
        v32 = v65;
      }
      v34 = _mm_loadl_epi64(&n);
      v35 = v33 + 24 * v32;
      v10 = _mm_unpacklo_epi64(v34, v34);
      *(_QWORD *)v35 = v31;
      *(__m128i *)(v35 + 8) = v10;
      v19 = a2[1];
      v20 = *a2;
      *(_QWORD *)&v65 = v65 + 1;
      if ( !v19 )
      {
LABEL_38:
        if ( a2[2] )
          goto LABEL_23;
        goto LABEL_39;
      }
LABEL_18:
      v21 = 0;
      v22 = 0;
      do
      {
        if ( *(_QWORD *)(v20 + 80 * v22) == v66 )
          break;
        v22 = ++v21;
      }
      while ( v21 < v19 );
      if ( v19 == v22 )
      {
        if ( a2[2] >= v19 + 1 )
          goto LABEL_23;
LABEL_39:
        v36 = qvector_reserve();
        *a2 = v36;
        v19 = a2[1];
        v20 = v36;
LABEL_23:
        v23 = n.m128i_i32[2];
        v24 = v20 + 80 * v19;
        *(_OWORD *)v24 = 0;
        v25 = v66;
        *(_OWORD *)(v24 + 24) = 0;
        *(_QWORD *)(v24 + 16) = 0;
        *(_OWORD *)(v24 + 48) = 0;
        *(_QWORD *)(v24 + 40) = 0;
        *(_WORD *)(v24 + 72) = 0;
        *(_QWORD *)(v24 + 64) = 0;
        ++a2[1];
        v10 = _mm_loadu_si128((const __m128i *)(v24 + 24));
        *(_QWORD *)v24 = v25;
        *(_QWORD *)(v24 + 8) = v67;
        v26 = *(char **)(v24 + 16);
        *(_QWORD *)(v24 + 16) = s1;
        *(__m128i *)(v24 + 24) = v71;
        s1 = v26;
        v27 = v69;
        v71 = v10;
        v28 = v23 < v69;
        *(_BYTE *)(v24 + 72) = v69;
        if ( !v28 )
          v27 = v23;
        n.m128i_i32[2] = v27;
        if ( strchr(s, 114) )
          *(_BYTE *)(v24 + 73) |= 4u;
        if ( strchr(s, 119) )
          *(_BYTE *)(v24 + 73) |= 2u;
        if ( strchr(s, 120) )
          *(_BYTE *)(v24 + 73) |= 1u;
      }
    }
  }
  if ( !(_QWORD)v65 )
    goto LABEL_55;
  v37 = 0;
  while ( 2 )
  {
    v50 = v64 + 24 * v37;
    if ( a1 + 1416 == v50 )
    {
LABEL_51:
      if ( *(_QWORD *)(a1 + 1424) )
        v40 = *(const char **)(a1 + 1416);
      else
        v40 = ::s;
    }
    else
    {
      v38 = *(_QWORD *)(v50 + 8);
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( v38 != 1 )
        {
          v59 = *(const void **)v50;
          v60 = *(void **)(a1 + 1416);
          if ( *(_QWORD *)(a1 + 1432) < v38 )
          {
            v63 = *(const void **)v50;
            n.m128i_i64[0] = v38 - 1;
            v61 = qvector_reserve();
            *(_QWORD *)(a1 + 1416) = v61;
            v59 = v63;
            v60 = (void *)v61;
            v39 = n.m128i_i64[0];
          }
          *(_QWORD *)(a1 + 1424) = v38;
          memmove(v60, v59, v39);
          *(_BYTE *)(*(_QWORD *)(a1 + 1416) + v38 - 1) = 0;
          goto LABEL_51;
        }
      }
      *(_QWORD *)(a1 + 1424) = 0;
      v40 = ::s;
    }
    sub_32190(a1, (unsigned int)"trying potential interpreter %s\n", (_DWORD)v40, v11, v12, v13);
    v44 = sub_201F0(a1, a2, 1, v41, v42, v43);
    if ( v44 )
    {
      v45 = ::s;
      if ( *(_QWORD *)(a1 + 1424) )
        v45 = *(const char **)(a1 + 1416);
      sub_143D0(a1, (__int64)"Found a valid interpeter in %s, will report shared library events!\n", v45);
      sub_22F60(a1, (unsigned __int64)a2, v46, *(double *)v10.m128i_i64, a5, a6, a7, v47, v48, v49);
      v14 = v44;
    }
    if ( ++v37 < (unsigned __int64)v65 )
      continue;
    break;
  }
  if ( !v14 )
    *(_QWORD *)(a1 + 1424) = 0;
LABEL_55:
  v51 = 0;
  v52 = 0;
  for ( i = n.m128i_i8[8]; v51 < (unsigned __int64)a2[1]; v52 = v51 )
  {
    ++v51;
    *(_BYTE *)(*a2 + 80 * v52 + 72) = i;
  }
  if ( n.m128i_i8[12] )
    sub_1F6B0(a1, 0, 1);
  v54 = v64;
  if ( v64 )
  {
    v55 = v65;
    if ( (_QWORD)v65 )
    {
      v56 = 0;
      do
      {
        v57 = (_QWORD *)(v54 + 24 * v56);
        if ( *v57 )
        {
          v57[1] = 0;
          qfree();
          v54 = v64;
        }
        ++v56;
      }
      while ( v55 != v56 );
    }
    *(_QWORD *)&v65 = 0;
    qfree();
  }
  if ( s1 )
  {
    v71.m128i_i64[0] = 0;
    qfree();
  }
  return 1;
}

