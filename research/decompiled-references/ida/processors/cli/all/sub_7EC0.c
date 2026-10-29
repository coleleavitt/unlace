unsigned __int64 __fastcall sub_7EC0(__int64 a1, double a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int16 v7; // bp
  int v8; // ebp
  int v9; // r13d
  int v10; // r12d
  const char *v11; // r8
  const char *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  size_t v18; // rax
  size_t v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // r13
  __m128i v25; // xmm1
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // r12
  void *v36; // r13
  size_t v37; // r15
  __int64 v38; // r14
  __int64 v39; // r8
  _BYTE *v40; // rsi
  void *v41; // rdi
  __int64 v42; // rdx
  __m128i v43; // [rsp+0h] [rbp-4A8h] BYREF
  int v44; // [rsp+18h] [rbp-490h] BYREF
  unsigned int v45; // [rsp+1Ch] [rbp-48Ch]
  void *dest; // [rsp+20h] [rbp-488h] BYREF
  __m128i v47; // [rsp+28h] [rbp-480h]
  void *src; // [rsp+40h] [rbp-468h] BYREF
  __m128i v49; // [rsp+48h] [rbp-460h] BYREF
  char s[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v51; // [rsp+468h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 616);
  v5 = *(_QWORD *)(a1 + 16);
  v51 = __readfsqword(0x28u);
  if ( netnode_supval(*(_QWORD *)(v4 + 144), v5, &v44, 8, 116) == 8 )
  {
    v7 = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 144) &= 0xFFFFE76F;
    v8 = v7 & 0x1890;
    if ( v44 == -1 )
    {
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 136LL))(a1, ".try {", 2);
      goto LABEL_11;
    }
    v47 = 0;
    v9 = v44 & 2;
    v10 = v44 & 4;
    dest = nullptr;
    if ( (v44 & 0xF) != 0 )
    {
      if ( (v44 & 1) == 0 )
      {
        v11 = (const char *)&unk_15584;
        v12 = "finally";
        if ( (v44 & 2) == 0 )
        {
          v12 = "fault";
          if ( (v44 & 4) == 0 )
          {
            if ( (v44 & 8) != 0 )
              v12 = "duplicated";
            else
              v12 = "catch";
          }
        }
        goto LABEL_7;
      }
      s[0] = 0;
      btoa64(s, 1024, v45, 0);
      v18 = strlen(s);
      v19 = v18;
      if ( !v18 )
      {
        v47.m128i_i64[0] = 0;
LABEL_14:
        v11 = (const char *)&unk_15584;
        v12 = "finally";
        if ( !v9 )
        {
          v12 = "filter";
          if ( v10 )
            v12 = "fault";
        }
        goto LABEL_7;
      }
      v41 = dest;
      v42 = v18 + 1;
      if ( v47.m128i_i64[1] < v18 + 1 )
      {
        v43.m128i_i64[0] = v18 + 1;
        dest = (void *)qvector_reserve(&dest, dest, v42, 1);
        v42 = v43.m128i_i64[0];
        v41 = dest;
      }
      v47.m128i_i64[0] = v42;
      memmove(v41, s, v19);
      *((_BYTE *)dest + v19) = 0;
      if ( !v47.m128i_i64[0] )
        goto LABEL_14;
      v11 = (const char *)dest;
      v12 = "finally";
      if ( !v9 )
      {
        v12 = "fault";
        if ( !v10 )
          v12 = "filter";
      }
    }
    else
    {
      sub_7AB0((__int64 *)&src, a1, v45, 0.0, a3, a4);
      v24 = src;
      src = nullptr;
      v25 = _mm_loadu_si128(&v49);
      v49 = 0;
      if ( dest )
      {
        v43 = v25;
        v47.m128i_i64[0] = 0;
        qfree(dest, a1, v20, v21, v22, v23);
        v25 = _mm_load_si128(&v43);
        dest = v24;
        v47 = v25;
        if ( src )
        {
          v49.m128i_i64[0] = 0;
          qfree(src, a1, v26, v27, v28, v29);
        }
      }
      else
      {
        dest = v24;
        v47 = v25;
      }
      v30 = a1;
      sub_7A10((__int64 *)&src, a1, v45, 0.0, *(double *)v25.m128i_i64, a4);
      v35 = v49.m128i_i64[0];
      v36 = src;
      if ( v49.m128i_i64[0] )
      {
        v37 = v49.m128i_i64[0] - 1;
        if ( v49.m128i_i64[0] != 1 )
        {
          v38 = v47.m128i_i64[0];
          v39 = v49.m128i_i64[0] - 1;
          if ( v47.m128i_i64[0] )
          {
            v38 = v47.m128i_i64[0] - 1;
            v39 = v37 + v47.m128i_i64[0] - 1;
            v35 = v49.m128i_i64[0] + v47.m128i_i64[0] - 1;
          }
          v40 = dest;
          if ( v47.m128i_i64[1] < v35 )
          {
            v43.m128i_i64[0] = v39;
            dest = (void *)qvector_reserve(&dest, dest, v35, 1);
            v39 = v43.m128i_i64[0];
            v40 = dest;
          }
          v47.m128i_i64[0] = v35;
          v40[v39] = 0;
          v30 = (__int64)v36;
          memcpy((char *)dest + v38, v36, v37);
        }
      }
      if ( v36 )
        qfree(v36, v30, v31, v32, v33, v34);
      v11 = (const char *)&unk_15584;
      v12 = "catch";
      if ( v47.m128i_i64[0] )
        v11 = (const char *)dest;
    }
LABEL_7:
    sub_4D60(a1, 2, (__int64)"%s %s {", v12, v11);
    if ( dest )
    {
      v47.m128i_i64[0] = 0;
      qfree(dest, 2, v13, v14, v15, v16);
      *(_DWORD *)(a1 + 144) |= v8;
      return v51 - __readfsqword(0x28u);
    }
LABEL_11:
    *(_DWORD *)(a1 + 144) |= v8;
  }
  return v51 - __readfsqword(0x28u);
}

