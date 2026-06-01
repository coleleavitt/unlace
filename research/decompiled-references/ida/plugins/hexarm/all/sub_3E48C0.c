unsigned __int64 __fastcall sub_3E48C0(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r13
  const char *v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  char *v11; // rax
  const char *v12; // r14
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  const char *v16; // rax
  __m128i v17; // xmm0
  _QWORD *v18; // rax
  unsigned int v19; // edx
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // r15
  const char *v23; // r8
  _QWORD *v24; // rax
  const char *v25; // r8
  unsigned __int64 v26; // rcx
  char *v27; // rax
  unsigned int v28; // edx
  __int64 v29; // r8
  unsigned int v30; // eax
  __int64 v31; // rsi
  size_t v32; // r15
  __m128i v33; // xmm2
  __int64 v34; // rdx
  void *v35; // r12
  __int64 v36; // r13
  __int64 j; // rbp
  __int64 v38; // rax
  __m128i v39; // xmm6
  char *v40; // rdx
  size_t v41; // rbp
  __int64 v42; // rbx
  char *v43; // rax
  void *v45; // rax
  void *v46; // rsi
  struct _Unwind_Exception *v47; // rbp
  __m128i v48; // xmm0
  bool v49; // zf
  __int64 v50; // r14
  __int64 v51; // rdx
  __int64 i; // r15
  __int64 v53; // rax
  _QWORD *v54; // r13
  __int64 v55; // rdi
  __m128i v56; // [rsp+0h] [rbp-88h] BYREF
  const char *v57; // [rsp+18h] [rbp-70h]
  __int64 v58; // [rsp+28h] [rbp-60h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_4E1C48;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a2 == 1 )
  {
    v5 = 25;
    v6 = 24;
    v7 = "Stock comments: function";
  }
  else if ( a2 == 2 )
  {
    v5 = 31;
    v6 = 30;
    v7 = "Stock comments: local variable";
  }
  else
  {
    v5 = 22;
    v6 = 21;
    v7 = "Stock comments: block";
  }
  v56.m128i_i64[0] = v5;
  v8 = (_QWORD *)qvector_reserve();
  v9 = v56.m128i_i64[0];
  *(_QWORD *)(a1 + 8) = v8;
  v10 = (unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 16) = v9;
  *v8 = *(_QWORD *)v7;
  *(_QWORD *)((char *)v8 + v6 - 8) = *(_QWORD *)&v7[v6 - 8];
  v11 = (char *)v8 - v10;
  LODWORD(v9) = v6 + (_DWORD)v11;
  v12 = (const char *)(v7 - v11);
  v13 = 0;
  v14 = v9 & 0xFFFFFFF8;
  do
  {
    v15 = v13;
    v13 += 8;
    *(_QWORD *)(v10 + v15) = *(_QWORD *)&v12[v15];
  }
  while ( v13 < v14 );
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6) = 0;
  v16 = s1;
  if ( *(_QWORD *)(a1 + 16) )
    v16 = *(const char **)(a1 + 8);
  *(_QWORD *)(a1 + 72) = v16;
  *(_OWORD *)(a1 + 48) = -1;
  v17 = _mm_loadl_epi64((const __m128i *)&off_4E3FD8);
  *(_QWORD *)(a1 + 32) = &unk_4E7D28;
  v18 = (_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 44) = (a3 + 3840) | 2;
  *(_DWORD *)(a1 + 40) = -16777212;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_DWORD *)(a1 + 104) = -1;
  *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v17, (__m128i)(unsigned __int64)&off_4E3FA8);
  do
  {
    *v18 = 0;
    v18 += 3;
    *((_OWORD *)v18 - 1) = 0;
  }
  while ( v18 != (_QWORD *)(a1 + 208) );
  *(_DWORD *)(a1 + 208) = 0;
  v19 = *(_DWORD *)(a1 + 44);
  if ( ((v19 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 43) != 0xFF )
    {
      if ( !under_debugger )
      {
        v47 = (struct _Unwind_Exception *)interr();
        if ( src )
        {
          n[0] = 0;
          qfree();
        }
        v48 = _mm_loadl_epi64((const __m128i *)off_4E3FC8);
        *(_QWORD *)a1 = &unk_4E8920;
        *(_QWORD *)(a1 + 32) = &unk_4E8958;
        v49 = *(_QWORD *)(a1 + 248) == 0;
        *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v48, (__m128i)(unsigned __int64)&off_4E8A30);
        *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                                   _mm_loadl_epi64((const __m128i *)&off_4E3FD0),
                                   (__m128i)(unsigned __int64)&off_4E8A60);
        if ( !v49 )
        {
          v50 = *(_QWORD *)(a1 + 256);
          v51 = *(_QWORD *)(a1 + 248);
          for ( i = 0; v50 != i; ++i )
          {
            v53 = v51 + 32 * i;
            if ( *(_QWORD *)(v53 + 8) )
            {
              *(_QWORD *)(v53 + 16) = 0;
              qfree();
              v51 = *(_QWORD *)(a1 + 248);
            }
          }
          *(_QWORD *)(a1 + 256) = 0;
          qfree();
        }
        *(_QWORD *)(a1 + 32) = &unk_4E7D28;
        v54 = (_QWORD *)(a1 + 184);
        while ( 1 )
        {
          if ( *v54 )
          {
            v54[1] = 0;
            qfree();
          }
          v54 -= 3;
          if ( (_QWORD *)(a1 + 88) == v54 )
          {
            v55 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = &off_4E1C48;
            if ( v55 )
            {
              *(_QWORD *)(a1 + 16) = 0;
              qfree();
            }
            _Unwind_Resume(v47);
          }
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 43) = ((v19 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 44) = v19 & 0xFE07FFFF;
  }
  v20 = _mm_loadl_epi64((const __m128i *)off_4E3FB8);
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)a1 = off_4E3E30;
  *(_QWORD *)(a1 + 32) = off_4E3E90;
  *(_OWORD *)(a1 + 256) = 0;
  *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v20, (__m128i)(unsigned __int64)&off_4E3F68);
  *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4E3FC0),
                             (__m128i)(unsigned __int64)&off_4E3F98);
  if ( a2 == 1 )
  {
    *(_OWORD *)n = 0;
    v21 = 31;
    v22 = 30;
    v23 = "$ msre stock comments function";
    src = nullptr;
  }
  else
  {
    *(_OWORD *)n = 0;
    if ( a2 == 2 )
    {
      v21 = 27;
      v22 = 26;
      v23 = "$ msre stock comments lvar";
    }
    else
    {
      v21 = 28;
      v22 = 27;
      v23 = "$ msre stock comments block";
    }
    src = nullptr;
  }
  v56.m128i_i64[0] = v21;
  v57 = v23;
  v24 = (_QWORD *)qvector_reserve();
  v25 = v57;
  src = v24;
  v26 = (unsigned __int64)(v24 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  n[0] = v56.m128i_i64[0];
  *v24 = *(_QWORD *)v57;
  *(_QWORD *)((char *)v24 + v22 - 8) = *(_QWORD *)&v25[v22 - 8];
  v27 = (char *)v24 - v26;
  v28 = 0;
  v29 = v25 - v27;
  v30 = (v22 + (_DWORD)v27) & 0xFFFFFFF8;
  do
  {
    v31 = v28;
    v28 += 8;
    *(_QWORD *)(v26 + v31) = *(_QWORD *)(v29 + v31);
  }
  while ( v28 < v30 );
  *((_BYTE *)src + v22) = 0;
  v32 = n[0];
  *(_QWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  if ( v32 )
  {
    v45 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 272) = v45;
    v46 = src;
    *(_QWORD *)(a1 + 288) = v32;
    memcpy(v45, v46, v32);
    *(_QWORD *)(a1 + 280) = v32;
  }
  *(_QWORD *)(a1 + 296) = -1;
  netnode_check();
  netnode_check();
  if ( v58 != -1 )
    *(_QWORD *)(a1 + 296) = v58;
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  sub_3E3F40((__int64)&src);
  v33 = _mm_loadu_si128((const __m128i *)n);
  v34 = *(_QWORD *)(a1 + 248);
  v35 = src;
  *(_OWORD *)n = 0;
  src = nullptr;
  v56 = v33;
  if ( v34 )
  {
    v36 = *(_QWORD *)(a1 + 256);
    if ( v36 )
    {
      for ( j = 0; j != v36; ++j )
      {
        v38 = v34 + 32 * j;
        if ( *(_QWORD *)(v38 + 8) )
        {
          *(_QWORD *)(v38 + 16) = 0;
          qfree();
          v34 = *(_QWORD *)(a1 + 248);
        }
      }
    }
    *(_QWORD *)(a1 + 256) = 0;
    qfree();
    v39 = _mm_load_si128(&v56);
    v40 = (char *)src;
    *(_QWORD *)(a1 + 248) = v35;
    *(__m128i *)(a1 + 256) = v39;
    if ( v40 )
    {
      v41 = n[0];
      if ( n[0] )
      {
        v42 = 0;
        do
        {
          v43 = &v40[32 * v42];
          if ( *((_QWORD *)v43 + 1) )
          {
            *((_QWORD *)v43 + 2) = 0;
            qfree();
            v40 = (char *)src;
          }
          ++v42;
        }
        while ( v41 != v42 );
      }
      n[0] = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(a1 + 248) = v35;
    *(__m128i *)(a1 + 256) = v33;
  }
  return v61 - __readfsqword(0x28u);
}

