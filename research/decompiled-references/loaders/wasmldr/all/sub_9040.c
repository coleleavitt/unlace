__int64 __fastcall sub_9040(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // edx
  char *v8; // rsi
  int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // eax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  char *v17; // rbx
  __m128i v18; // xmm1
  __m128i si128; // xmm1
  char *v20; // rsi
  __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  char *v27; // rdi
  char *v28; // rbx
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  char *v31; // rsi
  unsigned int v32; // ebp
  int v33; // ebx
  __int64 v34; // rsi
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbx
  unsigned int v42; // edx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rbp
  __int64 v46; // rax
  __int64 i; // rcx
  __int64 v48; // rcx
  unsigned int v49; // ebx
  _DWORD *v50; // rax
  __int64 v51; // rbp
  __int64 v52; // rax
  __int64 v54; // r12
  void *v55; // rdi
  const void *v56; // rsi
  void *src[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+10h] [rbp-A8h]
  unsigned int v59; // [rsp+18h] [rbp-A0h]
  int v60; // [rsp+1Ch] [rbp-9Ch]
  int v61; // [rsp+28h] [rbp-90h] BYREF
  unsigned int v62; // [rsp+2Ch] [rbp-8Ch] BYREF
  int v63; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v64; // [rsp+34h] [rbp-84h] BYREF
  unsigned int *v65; // [rsp+38h] [rbp-80h] BYREF
  char *v66; // [rsp+40h] [rbp-78h] BYREF
  __m128i v67; // [rsp+48h] [rbp-70h]
  char *v68; // [rsp+60h] [rbp-58h] BYREF
  __m128i v69; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v70; // [rsp+78h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v70 = __readfsqword(0x28u);
  v3 = v1 + *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32) + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, &v61)) == 0 )
    sub_3890((__int64)"code section: couldn't read function count");
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 24) = v5 + v6;
  create_data(v6, 0, v5, -1);
  v67 = 0;
  v66 = nullptr;
  v66 = (char *)qvector_reserve(&v66, 0, 16, 1);
  v7 = v61;
  v67.m128i_i64[0] = 16;
  strcpy(v66, "function count ");
  sub_4EE0((__int64 *)&v66, (__int64)"(%u)", v7);
  v8 = (char *)&unk_10F58;
  if ( v67.m128i_i64[0] )
    v8 = v66;
  set_cmt(*(_QWORD *)(a1 + 40), v8, 0);
  v9 = *(_DWORD *)(a1 + 88);
  if ( v9 != v61 )
    sub_3890((__int64)"function counts mismatch (code section %u, function section %u)", v9, v9);
  sub_4DA0((__int64 *)(a1 + 192), (unsigned int)(*(_DWORD *)(a1 + 76) + v9));
  if ( *(_DWORD *)(a1 + 88) )
  {
    v59 = 0;
    v10 = *(_QWORD *)(a1 + 24);
    do
    {
      v11 = *(_QWORD *)(a1 + 8);
      v63 = 0;
      v12 = *(_DWORD *)(a1 + 76) + v59;
      v13 = v11 + v10;
      v14 = *(_QWORD *)(a1 + 32) + v11;
      v62 = v12;
      if ( v13 >= v14 )
        goto LABEL_10;
      v15 = sub_E440(v13, v14, &v63);
      if ( !v15 )
      {
        v12 = v62;
LABEL_10:
        sub_3890((__int64)"code section: couldn't read body size of function %u", v12);
      }
      v16 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 40) = v16;
      *(_QWORD *)(a1 + 24) = v15 + v16;
      create_data(v16, 0, v15, -1);
      v69 = 0;
      v68 = nullptr;
      v68 = (char *)qvector_reserve(&v68, 0, 11, 1);
      v69.m128i_i64[0] = 11;
      strcpy(v68, "body size ");
      v17 = v68;
      v18 = _mm_loadu_si128(&v69);
      v68 = nullptr;
      v69 = 0;
      if ( v66 )
      {
        *(__m128i *)src = v18;
        v67.m128i_i64[0] = 0;
        qfree(v66);
        si128 = _mm_load_si128((const __m128i *)src);
        v66 = v17;
        v67 = si128;
        if ( v68 )
        {
          v69.m128i_i64[0] = 0;
          qfree(v68);
        }
      }
      else
      {
        v66 = v17;
        v67 = v18;
      }
      sub_4EE0((__int64 *)&v66, (__int64)"(0x%u)", v63);
      v20 = (char *)&unk_10F58;
      if ( v67.m128i_i64[0] )
        v20 = v66;
      set_cmt(*(_QWORD *)(a1 + 40), v20, 0);
      v21 = *(_QWORD *)(a1 + 8);
      v22 = v21 + *(_QWORD *)(a1 + 24);
      v23 = *(_QWORD *)(a1 + 32) + v21;
      v58 = *(_QWORD *)(a1 + 24);
      if ( v22 >= v23 || (v60 = v63, (v24 = sub_E440(v22, v23, &v64)) == 0) )
        sub_3890((__int64)"code section: couldn't read local declaration count of function %u", v62);
      v25 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 40) = v25;
      *(_QWORD *)(a1 + 24) = v24 + v25;
      create_data(v25, 0, v24, -1);
      v69 = 0;
      v68 = nullptr;
      v26 = qvector_reserve(&v68, 0, 25, 1);
      v68 = (char *)v26;
      v69.m128i_i64[0] = 25;
      *(__m128i *)v26 = _mm_load_si128((const __m128i *)&xmmword_F360);
      v27 = v66;
      *(_QWORD *)(v26 + 16) = 0x20746E756F63206ELL;
      v28 = v68;
      v68[24] = 0;
      v29 = _mm_loadu_si128(&v69);
      v68 = nullptr;
      v69 = 0;
      if ( v27 )
      {
        *(__m128i *)src = v29;
        v67.m128i_i64[0] = 0;
        qfree(v27);
        v30 = _mm_load_si128((const __m128i *)src);
        v66 = v28;
        v67 = v30;
        if ( v68 )
        {
          v69.m128i_i64[0] = 0;
          qfree(v68);
        }
      }
      else
      {
        v66 = v28;
        v67 = v29;
      }
      sub_4EE0((__int64 *)&v66, (__int64)"(%u)", v64);
      v31 = (char *)&unk_10F58;
      if ( v67.m128i_i64[0] )
        v31 = v66;
      set_cmt(*(_QWORD *)(a1 + 40), v31, 0);
      if ( v64 )
      {
        v32 = 0;
        v33 = 0;
        do
        {
          v34 = *(_QWORD *)(a1 + 8);
          v35 = v34 + *(_QWORD *)(a1 + 24);
          v36 = *(_QWORD *)(a1 + 32) + v34;
          if ( v35 >= v36 || (v37 = sub_E440(v35, v36, &v65)) == 0 )
            sub_3890((__int64)"code section: couldn't read local type count %u of function %u", v32, v62);
          v38 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)(a1 + 40) = v38;
          *(_QWORD *)(a1 + 24) = v37 + v38;
          create_data(v38, 0, v37, -1);
          set_cmt(*(_QWORD *)(a1 + 40), "local type count", 0);
          if ( !(_DWORD)v65 )
            sub_3890((__int64)"code section: local count %u must be > 0 (function %u)", v32, v62);
          if ( __CFADD__(v33, (_DWORD)v65) )
            sub_3890((__int64)"code section: total local count after %u must be < UINT32_MAX (function %u)", v32, v62);
          v33 += (int)v65;
          v39 = sub_3F50((_QWORD *)a1, &v68);
          if ( !v39 )
            sub_3890((__int64)"code section: couldn't read local type %u in function %u", v32, v62);
          if ( (unsigned int)v68 < 0xFFFFFFFC )
            sub_3890((__int64)"code section: local type %u in function %u is invalid", v32, v62);
          create_data(*(_QWORD *)(a1 + 40), 0, v39, -1);
          ++v32;
        }
        while ( v32 < v64 );
      }
      v40 = *(_QWORD *)(a1 + 136);
      v41 = a1 + 128;
      v42 = v62;
      v43 = a1 + 128;
      if ( v40 )
      {
        do
        {
          if ( *(_DWORD *)(v40 + 32) >= v62 )
          {
            v43 = v40;
            v40 = *(_QWORD *)(v40 + 16);
          }
          else
          {
            v40 = *(_QWORD *)(v40 + 24);
          }
        }
        while ( v40 );
        if ( v41 != v43 && v62 >= *(_DWORD *)(v43 + 32) )
        {
          v46 = *(_QWORD *)(a1 + 264);
          for ( i = v46 + 24LL * *(_QWORD *)(a1 + 272); v46 != i; v46 += 24 )
          {
            if ( !*(_BYTE *)(v46 + 4) && *(_DWORD *)(v46 + 8) == v42 )
              *(_QWORD *)(v46 + 16) = *(_QWORD *)(a1 + 24);
          }
          goto LABEL_58;
        }
      }
      v69 = 0;
      v68 = nullptr;
      v68 = (char *)qvector_reserve(&v68, 0, 3, 1);
      v69.m128i_i64[0] = 3;
      strcpy(v68, "$f");
      sub_4EE0((__int64 *)&v68, (__int64)"%u", v62);
      v44 = *(_QWORD *)(a1 + 136);
      if ( v44 )
      {
        v45 = a1 + 128;
        do
        {
          if ( *(_DWORD *)(v44 + 32) >= v62 )
          {
            v45 = v44;
            v44 = *(_QWORD *)(v44 + 16);
          }
          else
          {
            v44 = *(_QWORD *)(v44 + 24);
          }
        }
        while ( v44 );
        if ( v45 != v41 && v62 >= *(_DWORD *)(v45 + 32) )
          goto LABEL_65;
      }
      else
      {
        v45 = a1 + 128;
      }
      v65 = &v62;
      v45 = sub_8EC0((_QWORD *)(a1 + 120), v45, (__int64)&unk_10F59, &v65);
LABEL_65:
      if ( (char **)(v45 + 40) != &v68 )
      {
        v54 = v69.m128i_i64[0];
        if ( v69.m128i_i64[0] > 1uLL )
        {
          src[0] = v68;
          if ( *(_QWORD *)(v45 + 56) < v69.m128i_i64[0] )
            *(_QWORD *)(v45 + 40) = qvector_reserve(v45 + 40, *(_QWORD *)(v45 + 40), v69.m128i_i64[0], 1);
          v55 = *(void **)(v45 + 40);
          v56 = src[0];
          *(_QWORD *)(v45 + 48) = v54;
          memmove(v55, v56, v54 - 1);
          *(_BYTE *)(*(_QWORD *)(v45 + 40) + v54 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v45 + 48) = 0;
        }
      }
      if ( v68 )
      {
        v69.m128i_i64[0] = 0;
        qfree(v68);
      }
      v42 = v62;
LABEL_58:
      v48 = *(_QWORD *)(a1 + 24);
      v49 = v58 + v60;
      v50 = (_DWORD *)(*(_QWORD *)(a1 + 192) + 16LL * v42);
      v50[2] = v42;
      *v50 = v48;
      v50[1] = v49;
      v51 = *(_QWORD *)(a1 + 24);
      auto_mark_range(v51, v51 + 1, 20);
      auto_mark_range(v51, v51 + 1, 30);
      v52 = *(_QWORD *)(a1 + 24);
      v10 = v49;
      ++v59;
      *(_QWORD *)(a1 + 24) = v49;
      *(_QWORD *)(a1 + 40) = v52;
    }
    while ( v59 < *(_DWORD *)(a1 + 88) );
  }
  if ( v66 )
  {
    v67.m128i_i64[0] = 0;
    qfree(v66);
  }
  return 1;
}
