unsigned __int64 __fastcall sub_523E0(
        __int64 *a1,
        const char *a2,
        int a3,
        int a4,
        int a5,
        const void *a6,
        int a7,
        char a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  char *v11; // r12
  __int64 *v13; // rbx
  __int64 v14; // rax
  size_t v15; // rax
  __int64 v16; // r14
  size_t v17; // r13
  _QWORD *v18; // r15
  __int64 v19; // r14
  char *v20; // rax
  _QWORD *v21; // r12
  char *v22; // rbp
  _QWORD *v23; // rbx
  char *v24; // rsi
  const char *v25; // rdi
  int v26; // eax
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  char *v30; // rdx
  const char *v31; // rsi
  const char *v32; // rdi
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  void *v39; // r13
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // r13
  size_t v46; // rax
  size_t v47; // r14
  char *v49; // r15
  _QWORD *v50; // rsi
  __m128i v51; // xmm0
  _QWORD *v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // r13
  unsigned __int64 v55; // xmm0_8
  const char *v56; // rsi
  void *v57; // rdi
  __int64 v58; // rax
  void *v59; // rdi
  size_t v60; // r15
  _QWORD *v61; // r15
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  bool v65; // zf
  __int64 *v66; // [rsp+0h] [rbp-B0h]
  __int64 v67; // [rsp+0h] [rbp-B0h]
  int v68; // [rsp+8h] [rbp-A8h]
  char *s[2]; // [rsp+38h] [rbp-78h] BYREF
  __int64 *v73; // [rsp+48h] [rbp-68h]
  int v74; // [rsp+50h] [rbp-60h]
  int v75; // [rsp+54h] [rbp-5Ch]
  char *s2; // [rsp+58h] [rbp-58h]
  __m128i v77; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v78; // [rsp+70h] [rbp-40h]

  v11 = (char *)a2;
  v13 = a1;
  v74 = a9;
  v78 = __readfsqword(0x28u);
  v14 = a1[153];
  s2 = nullptr;
  v68 = v14;
  v77 = 0;
  if ( a2 )
  {
    v15 = strlen(a2);
    v16 = v15 + 1;
    v17 = v15;
    s2 = (char *)qvector_reserve();
    v77.m128i_i64[0] = v16;
    memmove(s2, a2, v17);
    s2[v17] = 0;
  }
  v18 = (_QWORD *)a1[157];
  v66 = a1 + 156;
  v19 = (__int64)(a1 + 156);
  if ( !v18 )
    goto LABEL_45;
  v20 = (char *)::s;
  s[0] = (char *)a2;
  v75 = a5;
  v21 = v18;
  v19 = (__int64)(a1 + 156);
  v73 = a1;
  if ( v77.m128i_i64[0] )
    v20 = s2;
  v22 = v20;
  while ( 1 )
  {
    v28 = v21[5];
    if ( !v77.m128i_i64[0] )
      break;
    if ( v28 )
      goto LABEL_16;
    v23 = v21;
    v24 = s2;
    v25 = ::s;
LABEL_9:
    v26 = strcmp(v25, v24);
    v27 = (_QWORD *)v21[2];
    v21 = (_QWORD *)v21[3];
    if ( v26 >= 0 )
    {
      v19 = (__int64)v23;
      v21 = v27;
    }
    if ( !v21 )
    {
      v13 = v73;
      v11 = s[0];
      v30 = s2;
      a5 = v75;
      goto LABEL_18;
    }
  }
  if ( v28 )
  {
LABEL_16:
    v25 = (const char *)v21[4];
    v23 = v21;
    v24 = v22;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v29 = v21[2];
    if ( !v29 )
      break;
    v19 = (__int64)v21;
    v21 = (_QWORD *)v21[2];
    if ( *(_QWORD *)(v29 + 40) )
      goto LABEL_16;
  }
  v30 = s2;
  v61 = v21;
  v13 = v73;
  v11 = s[0];
  a5 = v75;
  v19 = (__int64)v61;
LABEL_18:
  if ( v66 == (__int64 *)v19 )
    goto LABEL_45;
  if ( *(_QWORD *)(v19 + 40) )
  {
    v31 = *(const char **)(v19 + 32);
    v32 = ::s;
    if ( v77.m128i_i64[0] )
      goto LABEL_21;
LABEL_22:
    v73 = (__int64 *)v30;
    v33 = strcmp(v32, v31);
    v30 = (char *)v73;
    if ( v33 >= 0 )
      goto LABEL_23;
LABEL_45:
    v73 = (__int64 *)v19;
    v49 = s2;
    v50 = (_QWORD *)v19;
    v19 = operator new(0x40u);
    v51 = _mm_loadu_si128(&v77);
    *(_DWORD *)(v19 + 56) = 0;
    *(_QWORD *)(v19 + 32) = v49;
    *(__m128i *)(v19 + 40) = v51;
    s2 = nullptr;
    *(__m128i *)s = v51;
    v77 = 0;
    v52 = sub_52220(v13 + 155, v50, v19 + 32);
    v54 = v52;
    if ( v53 )
    {
      if ( !v52 )
      {
        v55 = _mm_load_si128((const __m128i *)s).m128i_u64[0];
        if ( v66 != (__int64 *)v53 )
        {
          v56 = ::s;
          if ( *(_QWORD *)(v53 + 40) )
            v56 = *(const char **)(v53 + 32);
          v73 = (__int64 *)v53;
          if ( !v55 )
            v49 = (char *)::s;
          strcmp(v49, v56);
        }
      }
      std::_Rb_tree_insert_and_rebalance();
      ++v13[160];
      v30 = s2;
      goto LABEL_23;
    }
    if ( v19 )
    {
      if ( v49 )
      {
        *(_QWORD *)(v19 + 40) = 0;
        qfree();
      }
      v57 = (void *)v19;
      v19 = (__int64)v54;
      operator delete(v57, 0x40u);
      v30 = s2;
      goto LABEL_23;
    }
    *((_DWORD *)v52 + 14) = v68;
  }
  else
  {
    v31 = ::s;
    if ( v77.m128i_i64[0] )
    {
LABEL_21:
      v32 = v30;
      goto LABEL_22;
    }
LABEL_23:
    *(_DWORD *)(v19 + 56) = v68;
    if ( v30 )
    {
      v77.m128i_i64[0] = 0;
      qfree();
    }
  }
  v34 = v13[163];
  if ( !v34 )
    goto LABEL_71;
  v35 = (__int64)(v13 + 162);
  do
  {
    while ( 1 )
    {
      v36 = *(_QWORD *)(v34 + 16);
      v37 = *(_QWORD *)(v34 + 24);
      if ( a5 <= *(_DWORD *)(v34 + 32) )
        break;
      v34 = *(_QWORD *)(v34 + 24);
      if ( !v37 )
        goto LABEL_30;
    }
    v35 = v34;
    v34 = *(_QWORD *)(v34 + 16);
  }
  while ( v36 );
LABEL_30:
  if ( (__int64 *)v35 == v13 + 162 )
  {
LABEL_71:
    v67 = (__int64)(v13 + 161);
    v64 = operator new(0x28u);
    v65 = v13[166] == 0;
    *(_DWORD *)(v64 + 32) = a5;
    v39 = (void *)v64;
    *(_DWORD *)(v64 + 36) = 0;
    if ( v65 )
      goto LABEL_73;
    v41 = v13[165];
    v35 = 0;
    if ( a5 <= *(_DWORD *)(v41 + 32) )
      goto LABEL_73;
LABEL_37:
    if ( !v41 )
      goto LABEL_61;
LABEL_38:
    v35 = (__int64)v39;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(v67 + 40);
    goto LABEL_39;
  }
  if ( a5 >= *(_DWORD *)(v35 + 32) )
    goto LABEL_39;
  v67 = (__int64)(v13 + 161);
  v38 = operator new(0x28u);
  *(_DWORD *)(v38 + 32) = a5;
  v39 = (void *)v38;
  *(_DWORD *)(v38 + 36) = 0;
  v40 = *(_DWORD *)(v35 + 32);
  if ( a5 < v40 )
  {
    v41 = v35;
    if ( v35 == v13[164] )
      goto LABEL_37;
    v42 = std::_Rb_tree_decrement();
    v41 = v42;
    if ( a5 > *(_DWORD *)(v42 + 32) )
    {
      if ( *(_QWORD *)(v42 + 24) )
        v41 = v35;
      else
        v35 = 0;
      goto LABEL_37;
    }
LABEL_73:
    v35 = sub_3D640(v67, a5);
    goto LABEL_37;
  }
  if ( a5 > v40 )
  {
    if ( v35 != v13[165] )
    {
      LODWORD(v73) = *(_DWORD *)(v35 + 32);
      v62 = std::_Rb_tree_increment();
      v41 = v62;
      if ( a5 >= *(_DWORD *)(v62 + 32) )
        goto LABEL_73;
      if ( *(_QWORD *)(v35 + 24) )
      {
        v35 = v62;
        goto LABEL_37;
      }
    }
    if ( v35 )
      goto LABEL_38;
  }
LABEL_61:
  if ( v39 )
    operator delete(v39, 0x28u);
LABEL_39:
  *(_DWORD *)(v35 + 36) = v68;
  v43 = v13[153];
  v44 = v13[152];
  if ( v13[154] < (unsigned __int64)(v43 + 1) )
  {
    v58 = qvector_reserve();
    v43 = v13[153];
    v13[152] = v58;
    v44 = v58;
  }
  v45 = v44 + 48 * v43;
  *(_QWORD *)(v45 + 16) = 0;
  *(_OWORD *)(v45 + 24) = 0;
  ++v13[153];
  if ( v11 && (v46 = strlen(v11), (v47 = v46) != 0) )
  {
    v59 = *(void **)(v45 + 16);
    v60 = v46 + 1;
    if ( *(_QWORD *)(v45 + 32) < v46 + 1 )
    {
      v63 = qvector_reserve();
      *(_QWORD *)(v45 + 16) = v63;
      v59 = (void *)v63;
    }
    *(_QWORD *)(v45 + 24) = v60;
    memmove(v59, v11, v47);
    *(_BYTE *)(*(_QWORD *)(v45 + 16) + v47) = 0;
  }
  else
  {
    *(_QWORD *)(v45 + 24) = 0;
  }
  *(_DWORD *)(v45 + 8) = a5;
  *(_BYTE *)(v45 + 40) = 0;
  *(_DWORD *)(v45 + 4) = a4;
  *(_DWORD *)v45 = a3;
  return sub_42200(v13 + 84, a6, a7, a8, v74, a10, a11);
}

