__int64 __fastcall sub_56980(__int64 a1, const void *a2)
{
  __int64 v2; // r15
  __m128i si128; // xmm0
  bool v6; // cc
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __m128i *v9; // rsi
  __m128i v10; // xmm0
  const char **v11; // rbp
  __int64 v12; // rbx
  size_t v13; // rax
  size_t v14; // rbx
  unsigned int v15; // ebx
  const char **v17; // rbp
  __int64 i; // rbx
  int v19; // eax
  char *v20; // rbp
  size_t v21; // rax
  size_t v22; // rbx
  size_t v23; // rax
  size_t v24; // rbx
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  void *v30; // rdi
  size_t v31; // rbp
  bool v32; // zf
  const char *v33; // rbp
  const char *v34; // r13
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  void *v39; // rdi
  size_t v40; // rbp
  void *v41; // rdi
  size_t v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  char *v48; // rax
  size_t v49; // [rsp+8h] [rbp-40h]

  v2 = a1 + 48;
  si128 = _mm_load_si128((const __m128i *)&xmmword_896B0);
  *(_BYTE *)(a1 + 97) = 0;
  v6 = *(_QWORD *)(a1 + 64) <= 5u;
  v7 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 16) = 0;
  *(__m128i *)(a1 + 20) = si128;
  v8 = _mm_load_si128((const __m128i *)&xmmword_896C0);
  *(_QWORD *)(a1 + 36) = 0;
  *(__m128i *)a1 = v8;
  if ( v6 )
  {
    v27 = qvector_reserve();
    *(_QWORD *)(a1 + 48) = v27;
    v7 = v27;
  }
  *(_QWORD *)(a1 + 56) = 6;
  *(_DWORD *)v7 = 1984778817;
  *(_BYTE *)(v7 + 4) = 54;
  *(_BYTE *)(*(_QWORD *)(a1 + 48) + 5LL) = 0;
  v9 = *(__m128i **)(a1 + 72);
  if ( *(_QWORD *)(a1 + 88) <= 0x12u )
  {
    v26 = qvector_reserve();
    *(_QWORD *)(a1 + 72) = v26;
    v9 = (__m128i *)v26;
  }
  v10 = _mm_load_si128((const __m128i *)&xmmword_896E0);
  v11 = (const char **)off_A1D08;
  v12 = 0;
  *(_QWORD *)(a1 + 80) = 19;
  v9[1].m128i_i16[0] = 25970;
  *v9 = v10;
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 18LL) = 0;
  do
  {
    if ( (int)sub_56640(v11, (const char *)a2) >= 0 )
    {
      if ( v12 == 23 )
        LODWORD(v12) = 9999;
      *(_DWORD *)a1 = v12;
      if ( a2 && (v13 = strlen((const char *)a2), (v14 = v13) != 0) )
      {
        v30 = *(void **)(a1 + 48);
        v31 = v13 + 1;
        if ( *(_QWORD *)(a1 + 64) < v13 + 1 )
        {
          v47 = qvector_reserve();
          *(_QWORD *)(a1 + 48) = v47;
          v30 = (void *)v47;
        }
        *(_QWORD *)(a1 + 56) = v31;
        memmove(v30, a2, v14);
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + v14) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 56) = 0;
      }
      sub_1CD20((__int64 *)(a1 + 72));
      goto LABEL_14;
    }
    ++v12;
    v11 += 18;
  }
  while ( v12 != 24 );
  v17 = (const char **)off_A1D38;
  for ( i = 0; i != 24; ++i )
  {
    if ( (int)sub_56640(v17, (const char *)a2) >= 0 )
    {
      v19 = 9999;
      if ( i != 23 )
        v19 = i;
      *(_DWORD *)a1 = v19;
      v20 = off_A1D00[18 * i];
      if ( v20 && (v21 = strlen(off_A1D00[18 * i]), (v22 = v21) != 0) )
      {
        v41 = *(void **)(a1 + 48);
        v42 = v21 + 1;
        if ( *(_QWORD *)(a1 + 64) < v21 + 1 )
        {
          v49 = v21 + 1;
          v45 = qvector_reserve();
          v42 = v49;
          *(_QWORD *)(a1 + 48) = v45;
          v41 = (void *)v45;
        }
        *(_QWORD *)(a1 + 56) = v42;
        memmove(v41, v20, v22);
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + v22) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 56) = 0;
      }
      goto LABEL_31;
    }
    v17 += 18;
  }
  v29 = 0;
  while ( (int)sub_56640((const char **)&off_A1C00[10 * v29], (const char *)a2) < 0 )
  {
    if ( ++v29 == 3 )
      return 0;
  }
  v6 = *(_QWORD *)(a1 + 64) <= 6u;
  v43 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 32) = v29;
  *(_DWORD *)a1 = 4;
  *(_DWORD *)(a1 + 28) = 1;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v6 )
  {
    v46 = qvector_reserve();
    *(_QWORD *)(a1 + 48) = v46;
    v43 = v46;
  }
  *(_QWORD *)(a1 + 56) = 7;
  *(_DWORD *)v43 = 1633899352;
  *(_WORD *)(v43 + 4) = 25964;
  *(_BYTE *)(*(_QWORD *)(a1 + 48) + 6LL) = 0;
LABEL_31:
  if ( !a2 || (v23 = strlen((const char *)a2), (v24 = v23) == 0) )
  {
    *(_QWORD *)(a1 + 80) = 0;
    v15 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > 0x16u )
      goto LABEL_34;
LABEL_15:
    if ( v15 <= 9 )
    {
      if ( v15 > 5 )
      {
        if ( v15 == 8 )
          *(_DWORD *)(a1 + 24) = 2;
      }
      else
      {
        if ( v15 <= 2 )
        {
          if ( v15 != 2 )
            *(_DWORD *)(a1 + 24) = 0;
          *(_DWORD *)(a1 + 8) = 0;
        }
        *(_BYTE *)(a1 + 96) = 0;
      }
      return 1;
    }
    v28 = 1LL << v15;
    if ( ((1LL << v15) & 0x5CC400) == 0 )
    {
      if ( (v28 & 0x222000) != 0 )
      {
        *(_QWORD *)(a1 + 20) = 0x200000000LL;
        *(_QWORD *)(a1 + 4) = 0x60000004DLL;
        if ( v15 != 13 )
          *(_DWORD *)(a1 + 16) = 2;
      }
      else if ( (v28 & 0x11800) != 0 )
      {
        *(_QWORD *)(a1 + 4) = 77;
        *(_QWORD *)(a1 + 20) = 0x100000000LL;
      }
      return 1;
    }
    *(_DWORD *)(a1 + 24) = 2;
    *(_DWORD *)(a1 + 12) = 3;
    v32 = *(_QWORD *)(a1 + 56) == 0;
    *(_DWORD *)(a1 + 8) = 4 * (v15 != 10) + 3;
    *(_QWORD *)(a1 + 36) = 0x100000001LL;
    if ( v32 )
    {
      v33 = &s1;
      goto LABEL_53;
    }
    v33 = *(const char **)(a1 + 48);
    v38 = strstr(v33, "-R");
    if ( v38 && v38 - v33 != -1 )
    {
LABEL_63:
      *(_DWORD *)(a1 + 4) = 82;
      if ( v15 == 10 )
        *(_DWORD *)(a1 + 12) = 1;
      return 1;
    }
LABEL_53:
    if ( *(_QWORD *)(a1 + 80) )
    {
      v34 = *(const char **)(a1 + 72);
      v48 = strstr(v34, "-R");
      if ( v48 && v48 - v34 != -1 )
        goto LABEL_63;
      v35 = strstr(v33, "-r");
      if ( v35 )
      {
LABEL_55:
        if ( v35 - v33 != -1 )
          goto LABEL_63;
      }
      v36 = strstr(v34, "-r");
      if ( v36 && v36 - v34 != -1 )
        goto LABEL_63;
    }
    else
    {
      v34 = &s1;
      v35 = strstr(v33, "-r");
      if ( v35 )
        goto LABEL_55;
    }
    v37 = strstr(v33, "-M");
    if ( (!v37 || v37 - v33 == -1)
      && sub_55C70(a1 + 72, "-M", 0) == -1
      && sub_55C70(v2, "-m", 0) == -1
      && sub_55C70(a1 + 72, "-m", 0) == -1
      && strcmp(v34, "SC300") )
    {
      if ( sub_55C70(v2, "-A", 0) == -1
        && sub_55C70(a1 + 72, "-A", 0) == -1
        && sub_55C70(v2, "-a", 0) == -1
        && sub_55C70(a1 + 72, "-a", 0) == -1 )
      {
        *(_DWORD *)(a1 + 4) = 83;
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 65;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 20) = 0;
      *(_QWORD *)(a1 + 36) = 0;
      *(_QWORD *)(a1 + 4) = 0x60000004DLL;
      *(_DWORD *)(a1 + 12) = 0;
    }
    return 1;
  }
  v39 = *(void **)(a1 + 72);
  v40 = v23 + 1;
  if ( *(_QWORD *)(a1 + 88) < v23 + 1 )
  {
    v44 = qvector_reserve();
    *(_QWORD *)(a1 + 72) = v44;
    v39 = (void *)v44;
  }
  *(_QWORD *)(a1 + 80) = v40;
  memmove(v39, a2, v24);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + v24) = 0;
LABEL_14:
  v15 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 0x16u )
    goto LABEL_15;
LABEL_34:
  if ( v15 == 9999 )
  {
    v25 = _mm_load_si128((const __m128i *)&xmmword_896D0);
    *(_DWORD *)(a1 + 40) = 1;
    *(_QWORD *)(a1 + 8) = 0x300000007LL;
    *(__m128i *)(a1 + 24) = v25;
  }
  return 1;
}

