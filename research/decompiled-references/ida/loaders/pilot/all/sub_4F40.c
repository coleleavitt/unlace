__int64 __fastcall sub_4F40(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  bool v5; // cc
  __int64 v6; // rsi
  __m128i v7; // xmm0
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __m128i si128; // xmm0
  __int64 v13; // rsi
  size_t v14; // rax
  size_t v15; // r12
  size_t v16; // rbx
  void *v17; // rbp
  const char *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  void *v25; // [rsp+0h] [rbp-58h] BYREF
  __int128 v26; // [rsp+8h] [rbp-50h]
  char s[24]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  result = sub_2F60(a3);
  if ( (_DWORD)result )
  {
    if ( dword_81DC == 1 )
    {
      if ( (_DWORD)result == 2 )
      {
        v11 = *a1;
        if ( (unsigned __int64)a1[2] <= 0x1C )
        {
          v24 = qvector_reserve(a1, v11, 29, 1);
          *a1 = v24;
          v11 = v24;
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_63E0);
        a1[1] = 29;
        *(__m128i *)v11 = si128;
        *(__m128i *)(v11 + 12) = _mm_load_si128((const __m128i *)&xmmword_63F0);
        *(_BYTE *)(*a1 + 28) = 0;
        v13 = *a2;
        if ( (unsigned __int64)a2[2] <= 3 )
        {
          v23 = qvector_reserve(a2, v13, 4, 1);
          *a2 = v23;
          v13 = v23;
        }
        a2[1] = 4;
        *(_WORD *)v13 = 21057;
        *(_BYTE *)(v13 + 2) = 77;
        *(_BYTE *)(*a2 + 3) = 0;
        if ( !getinf_buf(1, s, 16) )
          s[0] = 0;
        v25 = nullptr;
        v26 = 0;
        v14 = strlen(s);
        v15 = v14 + 1;
        v16 = v14;
        v25 = (void *)qvector_reserve(&v25, 0, v14 + 1, 1);
        *(_QWORD *)&v26 = v15;
        memmove(v25, s, v16);
        *((_BYTE *)v25 + v16) = 0;
        v17 = v25;
        v18 = (const char *)v25;
        if ( !(_QWORD)v26 )
          v18 = s1;
        v21 = strncasecmp(v18, "ARM", 3u);
        if ( v17 )
        {
          *(_QWORD *)&v26 = 0;
          qfree(v17, "ARM", v19, v20, v22);
        }
        return v21 == 0 ? 32789 : 21;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      v5 = (unsigned __int64)a1[2] <= 0x1C;
      v6 = *a1;
      ++dword_81DC;
      if ( v5 )
      {
        v9 = qvector_reserve(a1, v6, 29, 1);
        *a1 = v9;
        v6 = v9;
      }
      v7 = _mm_load_si128((const __m128i *)&xmmword_63E0);
      a1[1] = 29;
      *(__m128i *)v6 = v7;
      *(__m128i *)(v6 + 12) = _mm_load_si128((const __m128i *)&xmmword_6400);
      *(_BYTE *)(*a1 + 28) = 0;
      v8 = *a2;
      if ( (unsigned __int64)a2[2] <= 3 )
      {
        v10 = qvector_reserve(a2, v8, 4, 1);
        *a2 = v10;
        v8 = v10;
      }
      a2[1] = 4;
      *(_WORD *)v8 = 14390;
      *(_BYTE *)(v8 + 2) = 75;
      *(_BYTE *)(*a2 + 3) = 0;
      return (unsigned __int8)sub_4DE0() == 0 ? 16405 : 49173;
    }
  }
  return result;
}

