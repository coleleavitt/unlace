__int64 __fastcall sub_195740(__int64 *a1, int a2)
{
  const char *v4; // rbp
  int v5; // r9d
  __int64 v6; // r14
  __int64 v7; // rbx
  char *v8; // rax
  const char *v9; // rdx
  void **p_ptr; // r8
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v17; // rax
  void *v18; // rdi
  char *v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbx
  char *v22; // rax
  void *v23; // rdi
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i n; // [rsp+8h] [rbp-10A8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-1098h]
  void *v31; // [rsp+20h] [rbp-1090h]
  void *v32; // [rsp+28h] [rbp-1088h] BYREF
  __int128 v33; // [rsp+30h] [rbp-1080h]
  void *ptr; // [rsp+48h] [rbp-1068h] BYREF
  __m128i v35; // [rsp+50h] [rbp-1060h] BYREF
  char v36; // [rsp+68h] [rbp-1048h] BYREF
  unsigned __int64 v37; // [rsp+1070h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v33 = 0;
  v32 = nullptr;
  v31 = &v32;
  LODWORD(v4) = sub_1954B0((__int64 *)&v32);
  if ( (_BYTE)v4 )
  {
    v6 = v33;
    v7 = 0;
    if ( !(_QWORD)v33 )
    {
LABEL_16:
      LOBYTE(v4) = a1[1] != 0;
      goto LABEL_17;
    }
    while ( 1 )
    {
      v8 = (char *)v32 + 24 * v7;
      v9 = s1;
      if ( *((_QWORD *)v8 + 1) )
        v9 = *(const char **)v8;
      v4 = (const char *)sub_197540((unsigned int)&v36, 4096, (_DWORD)v9, a2, 0, v5);
      if ( !(unsigned __int8)sub_197CA0(v4) )
        goto LABEL_4;
      p_ptr = &ptr;
      ptr = nullptr;
      v35 = 0;
      if ( v4 )
      {
        n.m128i_i64[0] = strlen(v4);
        v30 = n.m128i_i64[0] + 1;
        n.m128i_i64[1] = (__int64)&ptr;
        ptr = (void *)sub_1987B0(&ptr, 0, n.m128i_i64[0] + 1, 1);
        v35.m128i_i64[0] = v30;
        memmove(ptr, v4, n.m128i_u64[0]);
        p_ptr = (void **)n.m128i_i64[1];
        *((_BYTE *)ptr + n.m128i_i64[0]) = 0;
      }
      v11 = a1[1];
      v12 = *a1;
      v13 = a1[2];
      v14 = v11 + 1;
      if ( (unsigned __int64)p_ptr < *a1 || (unsigned __int64)p_ptr >= v12 + 24 * v13 )
        break;
      v4 = (const char *)ptr;
      v15 = _mm_loadl_epi64(&v35);
      ptr = nullptr;
      v16 = _mm_loadl_epi64((const __m128i *)&v35.m128i_u64[1]);
      v35 = 0;
      if ( v13 < v14 )
      {
        n.m128i_i64[1] = v16.m128i_i64[0];
        n.m128i_i64[0] = v15.m128i_i64[0];
        v28 = sub_1987B0(a1, v12, v11 + 1, 24);
        *a1 = v28;
        v12 = v28;
        v16 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
        v11 = a1[1];
        v15 = _mm_loadl_epi64(&n);
      }
      v17 = v12 + 24 * v11;
      *(_QWORD *)v17 = v4;
      v18 = ptr;
      *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v15, v16);
      ++a1[1];
      if ( v18 )
      {
        v35.m128i_i64[0] = 0;
        ++v7;
        j__free(v18);
        if ( v6 == v7 )
          goto LABEL_16;
      }
      else
      {
LABEL_4:
        if ( v6 == ++v7 )
          goto LABEL_16;
      }
    }
    if ( v13 < v14 )
    {
      v27 = sub_1987B0(a1, v12, v11 + 1, 24);
      *a1 = v27;
      v12 = v27;
      v11 = a1[1];
    }
    v25 = _mm_loadu_si128(&v35);
    v26 = v12 + 24 * v11;
    *(_QWORD *)v26 = ptr;
    *(__m128i *)(v26 + 8) = v25;
    ++a1[1];
    goto LABEL_4;
  }
LABEL_17:
  v19 = (char *)v32;
  if ( v32 )
  {
    v20 = v33;
    if ( (_QWORD)v33 )
    {
      v21 = 0;
      do
      {
        v22 = &v19[24 * v21];
        v23 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          j__free(v23);
          v19 = (char *)v32;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v33 = 0;
    j__free(v19);
  }
  return (unsigned int)v4;
}
