unsigned __int64 __fastcall sub_32B650(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  unsigned __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned __int64 v19; // r14
  size_t v20; // rax
  size_t v21; // rbp
  size_t v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 v25; // rbx
  const char *v26; // rsi
  const char *v27; // rdi
  void *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rsi
  void *v31; // [rsp+8h] [rbp-550h]
  __int64 v32; // [rsp+10h] [rbp-548h]
  __int64 v33; // [rsp+18h] [rbp-540h]
  void *src; // [rsp+30h] [rbp-528h]
  char s[1032]; // [rsp+60h] [rbp-4F8h] BYREF
  unsigned __int64 v36; // [rsp+468h] [rbp-F0h]
  __int64 v37; // [rsp+488h] [rbp-D0h]
  __int64 v38; // [rsp+490h] [rbp-C8h]
  __int64 v39; // [rsp+498h] [rbp-C0h]
  __m128 v40; // [rsp+4A0h] [rbp-B8h]
  __m128 v41; // [rsp+4B0h] [rbp-A8h]
  __m128 v42; // [rsp+4C0h] [rbp-98h]
  __m128 v43; // [rsp+4D0h] [rbp-88h]
  __m128 v44; // [rsp+4E0h] [rbp-78h]
  __m128 v45; // [rsp+4F0h] [rbp-68h]
  __m128 v46; // [rsp+500h] [rbp-58h]
  __m128 v47; // [rsp+510h] [rbp-48h]

  v37 = a4;
  v38 = a5;
  v39 = a6;
  v40 = a7;
  v41 = a8;
  v42 = a9;
  v43 = a10;
  v44 = a11;
  v45 = a12;
  v46 = a13;
  v47 = a14;
  v36 = __readfsqword(0x28u);
  if ( a3 > 0x39 )
  {
    if ( !under_debugger )
      sub_37CFE0(50668);
    BUG();
  }
  v16 = (unsigned __int64)a3 >> 3;
  v17 = a3 & 7;
  *((_BYTE *)a1 + v16 + 752) |= 1 << v17;
  LODWORD(v16) = *(unsigned __int8 *)(a1[187] + v16 + 608);
  if ( !_bittest((const int *)&v16, v17) )
    return v36 - __readfsqword(0x28u);
  qvsnprintf();
  src = nullptr;
  if ( a2 == -1 )
    v19 = a1[5];
  else
    v19 = sub_32B3E0(a1, a2);
  v20 = strlen(s);
  v21 = v20;
  v22 = v20;
  if ( v20 )
  {
    v21 = v20 + 1;
    src = (void *)qvector_reserve();
    memmove(src, s, v22);
    *((_BYTE *)src + v22) = 0;
    v30 = a1[91];
    v33 = a1[92];
    v24 = v30 + 40 * v33;
    v32 = v30;
    if ( v30 == v24 )
      goto LABEL_27;
  }
  else
  {
    v23 = a1[91];
    v33 = a1[92];
    v24 = v23 + 40 * v33;
    v32 = v23;
    if ( v23 == v24 )
      goto LABEL_22;
  }
  v25 = v32;
  v31 = src;
  while ( 1 )
  {
    if ( *(_QWORD *)v25 != v19 || *(_DWORD *)(v25 + 8) != a3 )
      goto LABEL_11;
    if ( *(_QWORD *)(v25 + 24) )
    {
      v26 = *(const char **)(v25 + 16);
      v27 = s1;
      if ( !v21 )
        goto LABEL_10;
    }
    else
    {
      if ( !v21 )
      {
        if ( v24 == v25 )
          goto LABEL_22;
        goto LABEL_20;
      }
      v26 = s1;
    }
    v27 = (const char *)src;
LABEL_10:
    if ( !strcmp(v27, v26) )
      break;
LABEL_11:
    v25 += 40;
    if ( v24 == v25 )
      goto LABEL_27;
  }
  if ( v24 != v25 )
    goto LABEL_20;
LABEL_27:
  if ( v21 )
  {
    v28 = (void *)qalloc_or_throw();
    memcpy(v28, src, v21);
    v33 = a1[92];
    v32 = a1[91];
    goto LABEL_23;
  }
LABEL_22:
  v28 = nullptr;
LABEL_23:
  if ( a1[93] < (unsigned __int64)(v33 + 1) )
  {
    v32 = qvector_reserve();
    a1[91] = v32;
    v33 = a1[92];
  }
  v29 = v32 + 40 * v33;
  *(_QWORD *)v29 = v19;
  *(_DWORD *)(v29 + 8) = a3;
  *(_QWORD *)(v29 + 16) = v28;
  *(__m128i *)(v29 + 24) = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
  ++a1[92];
  v31 = src;
LABEL_20:
  if ( v31 )
    qfree();
  return v36 - __readfsqword(0x28u);
}

