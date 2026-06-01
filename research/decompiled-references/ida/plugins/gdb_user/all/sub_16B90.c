__int64 __fastcall sub_16B90(__int64 a1, __int64 *a2, __int64 a3, const char *a4)
{
  char v6; // r15
  __m128i *v7; // rsi
  __m128i si128; // xmm0
  __int64 v10; // rsi
  __m128i v11; // xmm0
  const char *v12; // rbx
  size_t v13; // rax
  size_t v14; // rbp
  const char *v15; // rbx
  size_t v16; // rax
  size_t v17; // r14
  size_t v18; // rbp
  void **v19; // rbp
  size_t v20; // rax
  size_t v21; // r12
  __int64 v22; // rax
  char v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rbx
  size_t v27; // rax
  size_t v28; // rbp
  __int64 v29; // rbp
  void *v30; // rdi
  size_t v31; // r15
  size_t v32; // r12
  void *v33; // rdi
  void *v34; // r13
  void *v35; // rax
  __int64 v36; // rax
  void *v37; // rdi
  size_t v38; // r13
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // [rsp+0h] [rbp-888h]
  unsigned __int64 v42; // [rsp+8h] [rbp-880h]
  void *src; // [rsp+10h] [rbp-878h] BYREF
  __int128 v44; // [rsp+18h] [rbp-870h]
  char s[1040]; // [rsp+30h] [rbp-858h] BYREF
  _BYTE v46[7]; // [rsp+440h] [rbp-448h]
  unsigned __int64 v47; // [rsp+848h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( strncmp(a4, "range", 5u) )
  {
    if ( (unsigned int)qsscanf() == 1 )
    {
      v12 = &a4[(int)v42 - 1];
      if ( v12 && (v13 = strlen(v12), (v14 = v13) != 0) )
      {
        v32 = v13 + 1;
        v33 = dest;
        if ( *((_QWORD *)&xmmword_6AC48 + 1) < v13 + 1 )
        {
          dest = (void *)qvector_reserve();
          v33 = dest;
        }
        *(_QWORD *)&xmmword_6AC48 = v32;
        memmove(v33, v12, v14);
        *((_BYTE *)dest + v14) = 0;
      }
      else
      {
        *(_QWORD *)&xmmword_6AC48 = 0;
      }
      return 1;
    }
    if ( (unsigned int)qsscanf() == 1 )
    {
      qword_6AC58 = v41;
      return 1;
    }
    if ( (unsigned int)qsscanf() != 2 )
      return 1;
    v44 = 0;
    v15 = &a4[(int)v42 - 1];
    v16 = strlen(s);
    v17 = v16 + 1;
    v18 = v16;
    src = (void *)qvector_reserve();
    *(_QWORD *)&v44 = v17;
    memmove(src, s, v18);
    *((_BYTE *)src + v18) = 0;
    v19 = (void **)sub_16970(&qword_6AC78, (__int64)&src);
    if ( v15 && (v20 = strlen(v15), (v21 = v20) != 0) )
    {
      v37 = *v19;
      v38 = v20 + 1;
      if ( (unsigned __int64)v19[2] < v20 + 1 )
      {
        v40 = qvector_reserve();
        *v19 = (void *)v40;
        v37 = (void *)v40;
      }
      v19[1] = (void *)v38;
      memmove(v37, v15, v21);
      *((_BYTE *)*v19 + v21) = 0;
    }
    else
    {
      v19[1] = nullptr;
    }
    if ( !src )
      return 1;
LABEL_31:
    *(_QWORD *)&v44 = 0;
    qfree();
    return 1;
  }
  if ( (unsigned int)qsscanf() == 4 && v41 < v42 )
  {
    if ( *(_DWORD *)v46 == 1162104643 && *(_DWORD *)&v46[3] == 3551557 )
    {
      v46[4] = 0;
      v6 = 0;
    }
    else
    {
      v6 = 1 - (((v42 | v41) >> 32 == 0) - 1);
    }
    src = nullptr;
    v44 = 0;
    if ( *(_DWORD *)v46 == 1096040772 && !v46[4] )
    {
      src = (void *)qvector_reserve();
      v23 = 6;
      *(_QWORD *)&v44 = 5;
      strcpy((char *)src, "DATA");
      goto LABEL_36;
    }
    if ( *(_DWORD *)v46 == 1162104643 && !v46[4] )
    {
      src = (void *)qvector_reserve();
      v23 = 7;
      *(_QWORD *)&v44 = 5;
      strcpy((char *)src, "CODE");
      goto LABEL_36;
    }
    if ( *(_DWORD *)v46 == 1094995794 && *(_DWORD *)&v46[3] == 4281409 )
    {
      src = (void *)qvector_reserve();
      v23 = 4;
      *(_QWORD *)&v44 = 5;
      strcpy((char *)src, "DATA");
      goto LABEL_36;
    }
    if ( *(_DWORD *)v46 == 1329811282 && *(_DWORD *)&v46[3] == 4539471 )
    {
      src = (void *)qvector_reserve();
      v23 = 5;
      *(_QWORD *)&v44 = 5;
      strcpy((char *)src, "CODE");
LABEL_36:
      v24 = xmmword_6AC68;
      v25 = qword_6AC60;
      if ( *((_QWORD *)&xmmword_6AC68 + 1) < (unsigned __int64)(xmmword_6AC68 + 1) )
      {
        qword_6AC60 = qvector_reserve();
        v24 = xmmword_6AC68;
        v25 = qword_6AC60;
      }
      v26 = v25 + 80 * v24;
      *(_OWORD *)v26 = 0;
      *(_QWORD *)(v26 + 16) = 0;
      *(_QWORD *)(v26 + 40) = 0;
      *(_OWORD *)(v26 + 24) = 0;
      *(_QWORD *)(v26 + 64) = 0;
      *(_QWORD *)&xmmword_6AC68 = xmmword_6AC68 + 1;
      *(_BYTE *)(v26 + 73) = 0;
      *(_QWORD *)v26 = v41;
      *(_OWORD *)(v26 + 48) = 0;
      *(_BYTE *)(v26 + 72) = v6;
      *(_QWORD *)(v26 + 8) = v42;
      v27 = strlen(s);
      v28 = v27;
      if ( v27 )
      {
        v30 = *(void **)(v26 + 16);
        v31 = v27 + 1;
        if ( *(_QWORD *)(v26 + 32) < v27 + 1 )
        {
          v36 = qvector_reserve();
          *(_QWORD *)(v26 + 16) = v36;
          v30 = (void *)v36;
        }
        *(_QWORD *)(v26 + 24) = v31;
        memmove(v30, s, v28);
        *(_BYTE *)(*(_QWORD *)(v26 + 16) + v28) = 0;
      }
      else
      {
        *(_QWORD *)(v26 + 24) = 0;
      }
      *(_BYTE *)(v26 + 73) = v23;
      if ( (void **)(v26 + 40) != &src )
      {
        v29 = v44;
        if ( (unsigned __int64)v44 > 1 )
        {
          v34 = src;
          v35 = *(void **)(v26 + 40);
          if ( *(_QWORD *)(v26 + 56) < (unsigned __int64)v44 )
          {
            v35 = (void *)qvector_reserve();
            *(_QWORD *)(v26 + 40) = v35;
          }
          *(_QWORD *)(v26 + 48) = v29;
          memmove(v35, v34, v29 - 1);
          *(_BYTE *)(*(_QWORD *)(v26 + 40) + v29 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v26 + 48) = 0;
        }
      }
      if ( !src )
        return 1;
      goto LABEL_31;
    }
    if ( *(_WORD *)v46 == 20297 && !v46[2] )
    {
      src = (void *)qvector_reserve();
      v23 = 0;
      *(_QWORD *)&v44 = 3;
      strcpy((char *)src, "IO");
      goto LABEL_36;
    }
    v7 = (__m128i *)*a2;
    if ( (unsigned __int64)a2[2] <= 0x14 )
    {
      v39 = qvector_reserve();
      *a2 = v39;
      v7 = (__m128i *)v39;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_59450);
    a2[1] = 21;
    v7[1].m128i_i32[0] = 1852795252;
    *v7 = si128;
    *(_BYTE *)(*a2 + 20) = 0;
    if ( src )
    {
      *(_QWORD *)&v44 = 0;
      qfree();
    }
    return 0;
  }
  else
  {
    v10 = *a2;
    if ( (unsigned __int64)a2[2] <= 0x1A )
    {
      v22 = qvector_reserve();
      *a2 = v22;
      v10 = v22;
    }
    v11 = _mm_load_si128((const __m128i *)&xmmword_59430);
    a2[1] = 27;
    *(__m128i *)v10 = v11;
    *(__m128i *)(v10 + 10) = _mm_load_si128((const __m128i *)&xmmword_59440);
    *(_BYTE *)(*a2 + 26) = 0;
    return 0;
  }
}

