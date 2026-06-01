__int64 __fastcall sub_3F2350(int a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v5; // rsi
  unsigned int v6; // eax
  char *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r10
  __int64 v16; // rbp
  int tinfo_size; // eax
  char *v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // r14
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i v30; // [rsp+0h] [rbp-F8h] BYREF
  __int64 *v31; // [rsp+10h] [rbp-E8h]
  int *v32; // [rsp+18h] [rbp-E0h]
  __int64 v33; // [rsp+20h] [rbp-D8h]
  __int64 v34; // [rsp+28h] [rbp-D0h]
  __m128i v35; // [rsp+30h] [rbp-C8h] BYREF
  char *s1; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+48h] [rbp-B0h]
  unsigned __int8 v38[16]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-88h]
  __int64 v40; // [rsp+78h] [rbp-80h] BYREF
  __int64 v41; // [rsp+80h] [rbp-78h]
  __m128i v42; // [rsp+88h] [rbp-70h] BYREF
  int v43; // [rsp+98h] [rbp-60h] BYREF
  int v44; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) != 6 )
    return 0;
  v2 = 0;
  if ( !*(_BYTE *)(a2 + 64) )
    return v2;
  v5 = *(_QWORD *)(a2 + 40);
  v37 = 0;
  s1 = nullptr;
  v6 = sub_1D24F0((__int64 *)&s1, v5, 0);
  v7 = s1;
  v2 = v6;
  if ( !(_BYTE)v6 )
    goto LABEL_12;
  v8 = v37;
  if ( (unsigned __int64)v37 <= 1 )
  {
LABEL_11:
    v2 = 0;
    goto LABEL_12;
  }
  if ( ((s1[(_QWORD)v37 - 2] - 52) & 0xFB) != 0 )
    goto LABEL_8;
  v12 = v37 - 1;
  if ( (__int64)v37 - 1 <= 1 )
  {
    if ( !s1 )
    {
LABEL_8:
      v9 = *(_QWORD *)(a2 + 72);
      goto LABEL_9;
    }
    *(_QWORD *)&v37 = 0;
    qfree();
    v9 = *(_QWORD *)(a2 + 72);
    s1 = nullptr;
    *((_QWORD *)&v37 + 1) = 0;
    if ( (_QWORD)v37 )
    {
      v7 = nullptr;
      goto LABEL_9;
    }
    return 0;
  }
  if ( *((_QWORD *)&v37 + 1) < v12 )
  {
    v31 = (__int64 *)(v37 - 1);
    s1 = (char *)qvector_reserve();
    v12 = v8 - 1;
    v7 = s1;
  }
  *(_QWORD *)&v37 = v12;
  v7[v8 - 2] = 0;
  v7 = s1;
  v9 = *(_QWORD *)(a2 + 72);
  if ( (_QWORD)v37 )
  {
LABEL_9:
    v10 = strcmp(v7, "aeabi_memclr");
    v11 = *(_QWORD *)(v9 + 32);
    if ( !v10 )
    {
      if ( v11 != 2 )
        goto LABEL_11;
      v14 = *(_QWORD *)(v9 + 24);
      if ( *(_QWORD *)(v9 + 40) <= 2u )
      {
        v29 = qvector_reserve();
        *(_QWORD *)(v9 + 24) = v29;
        v11 = *(_QWORD *)(v9 + 32);
        v14 = v29;
      }
      v15 = v14 + 80 * v11;
      *(__m128i *)(v15 + 16) = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
      *(_QWORD *)v15 = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 32) = 0;
      *(_QWORD *)(v15 + 56) = 0;
      *(_QWORD *)(v15 + 64) = 0;
      *(_DWORD *)(v15 + 72) = 0;
      *(_OWORD *)(v15 + 40) = 0;
      ++*(_QWORD *)(v9 + 32);
      v31 = (__int64 *)v15;
      *(_QWORD *)v38 = 7;
      copy_tinfo_t();
      clear_tinfo_t();
      v16 = *(_QWORD *)(a2 + 24);
      tinfo_size = get_tinfo_size();
      sub_120450((__int64)v31, a1, 0, tinfo_size, v16, 0);
      ++*(_DWORD *)(v9 + 8);
      v18 = s1;
      if ( *((_QWORD *)&v37 + 1) <= 0xCu )
      {
        s1 = (char *)qvector_reserve();
        v18 = s1;
      }
      *(_QWORD *)&v37 = 13;
      qmemcpy(v18, "aeabi_memset", 12);
      v7 = s1;
      s1[12] = 0;
    }
  }
  if ( *(_QWORD *)(v9 + 32) != 3 || !(_QWORD)v37 )
    goto LABEL_11;
  if ( !strcmp(v7, "aeabi_memset") )
  {
    v19 = *(_QWORD *)(v9 + 24);
    v30.m128i_i64[0] = v19 + 80;
    sub_123480((__int64)v38, (unsigned __int8 *)(v19 + 80));
    v20 = *(_QWORD *)(v19 + 96);
    v40 = 0;
    v39 = v20;
    v31 = &v40;
    copy_tinfo_t();
    v21 = *(_QWORD *)(v19 + 112);
    v22 = _mm_loadu_si128((const __m128i *)(v19 + 120));
    *(_QWORD *)(v19 + 112) = 0;
    v32 = &v43;
    v41 = v21;
    v42 = v22;
    *(_OWORD *)(v19 + 120) = 0;
    v33 = v19 + 136;
    v43 = 0;
    copy_argloc();
    v44 = *(_DWORD *)(v19 + 152);
    v34 = v19 + 160;
    sub_124BC0(v30.m128i_i64[0], (unsigned __int8 *)(v19 + 160));
    *(_QWORD *)(v19 + 96) = *(_QWORD *)(v19 + 176);
    v30.m128i_i64[0] = v19 + 184;
    copy_tinfo_t();
    v23 = *(_QWORD *)(v19 + 112);
    v24 = *(_QWORD *)(v19 + 192);
    *(_QWORD *)(v19 + 192) = 0;
    v25 = _mm_loadu_si128((const __m128i *)(v19 + 200));
    *(_OWORD *)(v19 + 200) = 0;
    if ( v23 )
    {
      *(_QWORD *)(v19 + 120) = 0;
      v35 = v25;
      qfree();
      v25 = _mm_load_si128(&v35);
    }
    *(_QWORD *)(v19 + 112) = v24;
    *(__m128i *)(v19 + 120) = v25;
    copy_argloc();
    v26 = v34;
    *(_DWORD *)(v19 + 152) = *(_DWORD *)(v19 + 232);
    sub_124BC0(v26, v38);
    *(_QWORD *)(v19 + 176) = v39;
    copy_tinfo_t();
    v27 = v41;
    v28 = _mm_loadu_si128(&v42);
    v41 = 0;
    v42 = 0;
    if ( *(_QWORD *)(v19 + 192) )
    {
      *(_QWORD *)(v19 + 200) = 0;
      v33 = v27;
      v30 = v28;
      qfree();
      v27 = v33;
      v28 = _mm_load_si128(&v30);
    }
    *(_QWORD *)(v19 + 192) = v27;
    *(__m128i *)(v19 + 200) = v28;
    copy_argloc();
    *(_DWORD *)(v19 + 232) = v44;
    cleanup_argloc();
    if ( v41 )
    {
      v42.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11C7E0((__int64)v38);
    v13 = a2 + 32;
    *(_DWORD *)(v9 + 284) = 2;
  }
  else if ( !strcmp(v7, "aeabi_memcpy") )
  {
    *(_DWORD *)(v9 + 284) = 5;
    v13 = a2 + 32;
  }
  else
  {
    v13 = a2 + 32;
    if ( strcmp(v7, "aeabi_memmove") )
      goto LABEL_11;
  }
  sub_11CEE0(v13);
  v7 = s1;
LABEL_12:
  if ( v7 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return v2;
}

