__int64 __fastcall sub_BB6B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 result; // rax
  unsigned int v7; // edx
  __int64 v8; // rsi
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  int v15; // ebp
  int v16; // ebp
  __int64 v17; // rsi
  int v18; // edx
  __int64 v19; // r13
  void *v20; // r12
  __int64 v21; // rdx
  __m128i si128; // xmm0
  __int64 v23; // rdi
  int v24; // ebp
  __int64 v25; // rsi
  size_t v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31[3]; // [rsp+0h] [rbp-38h] BYREF

  result = *(_QWORD *)(a1 + 56);
  if ( !result )
  {
    *(_DWORD *)(a1 + 76) = 1;
    return result;
  }
  v7 = *(_DWORD *)result;
  if ( *(_DWORD *)result == 53 )
  {
    if ( *(_BYTE *)(result + 48) != 12 )
    {
      if ( !under_debugger )
        sub_383060(0xC377u, a5);
      goto LABEL_34;
    }
    v19 = *(_QWORD *)(result + 56);
    v20 = nullptr;
    v21 = *(_QWORD *)(v19 + 32);
    si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
    if ( v21 )
    {
      v26 = 4 * v21;
      v31[0] = si128;
      v20 = (void *)qalloc_or_throw(4 * v21, a2, v21, a4);
      result = (__int64)memcpy(v20, *(const void **)(v19 + 24), v26);
      si128 = _mm_load_si128(v31);
    }
    v23 = *(_QWORD *)(a1 + 368);
    if ( v23 )
    {
      *(_QWORD *)(a1 + 376) = 0;
      v31[0] = si128;
      result = qfree(v23);
      si128 = _mm_load_si128(v31);
    }
    *(_QWORD *)(a1 + 368) = v20;
    *(_DWORD *)(a1 + 76) = 5;
    *(__m128i *)(a1 + 376) = si128;
  }
  else
  {
    if ( v7 <= 0x35 )
    {
      if ( v7 - 42 <= 0xA )
      {
        if ( *(_BYTE *)(result + 64) == 7 )
        {
          v8 = *(_QWORD *)(a1 + 368);
          v9 = *(_DWORD *)(a1 + 72) + 1;
          v10 = *(_QWORD *)(a1 + 376);
          if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v10 + 1) )
          {
            v28 = qvector_reserve(a1 + 368, v8, v10 + 1, 4);
            *(_QWORD *)(a1 + 368) = v28;
            v8 = v28;
            v10 = *(_QWORD *)(a1 + 376);
          }
          *(_DWORD *)(v8 + 4 * v10) = v9;
          v11 = *(_QWORD *)(a1 + 376);
          v12 = *(_QWORD *)(a1 + 56);
          v13 = *(_QWORD *)(a1 + 368);
          result = v11 + 1;
          v14 = v11 + 2;
          *(_QWORD *)(a1 + 376) = result;
          v15 = *(_DWORD *)(v12 + 72);
          if ( *(_QWORD *)(a1 + 384) < v14 )
          {
            v27 = qvector_reserve(a1 + 368, v13, v14, 4);
            *(_QWORD *)(a1 + 368) = v27;
            v13 = v27;
            result = *(_QWORD *)(a1 + 376);
          }
          *(_DWORD *)(v13 + 4 * result) = v15;
          *(_DWORD *)(a1 + 76) = 4;
          ++*(_QWORD *)(a1 + 376);
          return result;
        }
        if ( !under_debugger )
          sub_383060(0xC376u, a5);
LABEL_34:
        BUG();
      }
      goto LABEL_16;
    }
    if ( v7 != 55 )
    {
LABEL_16:
      v18 = *(_DWORD *)(a1 + 72);
      result = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1);
      if ( v18 == (_DWORD)result )
      {
        *(_DWORD *)(a1 + 24) &= ~1u;
        *(_DWORD *)(a1 + 76) = 1;
      }
      else
      {
        result = *(_QWORD *)(a1 + 376);
        v24 = v18 + 1;
        *(_DWORD *)(a1 + 76) = 3;
        v25 = *(_QWORD *)(a1 + 368);
        if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(result + 1) )
        {
          v30 = qvector_reserve(a1 + 368, v25, result + 1, 4);
          *(_QWORD *)(a1 + 368) = v30;
          v25 = v30;
          result = *(_QWORD *)(a1 + 376);
        }
        *(_DWORD *)(v25 + 4 * result) = v24;
        ++*(_QWORD *)(a1 + 376);
      }
      return result;
    }
    if ( *(_BYTE *)(result + 32) != 7 )
    {
      if ( !under_debugger )
        sub_383060(0xC375u, a5);
      goto LABEL_34;
    }
    v16 = *(_DWORD *)(result + 40);
    result = *(_QWORD *)(a1 + 376);
    v17 = *(_QWORD *)(a1 + 368);
    if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(result + 1) )
    {
      v29 = qvector_reserve(a1 + 368, v17, result + 1, 4);
      *(_QWORD *)(a1 + 368) = v29;
      v17 = v29;
      result = *(_QWORD *)(a1 + 376);
    }
    *(_DWORD *)(v17 + 4 * result) = v16;
    *(_DWORD *)(a1 + 76) = 3;
    ++*(_QWORD *)(a1 + 376);
  }
  return result;
}

