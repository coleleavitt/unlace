__int64 __fastcall sub_B7C70(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  __int64 v3; // rsi
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // ebp
  int v10; // ebp
  __int64 v11; // rsi
  int v12; // edx
  __int64 v13; // r13
  void *v14; // r12
  unsigned __int64 v15; // rdx
  __m128i si128; // xmm0
  int v17; // ebp
  __int64 v18; // rsi
  size_t v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24[3]; // [rsp+0h] [rbp-38h] BYREF

  result = *(_QWORD *)(a1 + 56);
  if ( !result )
  {
    *(_DWORD *)(a1 + 76) = 1;
    return result;
  }
  v2 = *(_DWORD *)result;
  if ( *(_DWORD *)result == 53 )
  {
    if ( *(_BYTE *)(result + 48) != 12 )
    {
      if ( !under_debugger )
        sub_37EEE0(50039);
      goto LABEL_34;
    }
    v13 = *(_QWORD *)(result + 56);
    v14 = nullptr;
    v15 = *(_QWORD *)(v13 + 32);
    si128 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
    if ( v15 )
    {
      v19 = 4 * v15;
      v24[0] = si128;
      v14 = (void *)qalloc_or_throw();
      result = (__int64)memcpy(v14, *(const void **)(v13 + 24), v19);
      si128 = _mm_load_si128(v24);
    }
    if ( *(_QWORD *)(a1 + 368) )
    {
      *(_QWORD *)(a1 + 376) = 0;
      v24[0] = si128;
      result = qfree();
      si128 = _mm_load_si128(v24);
    }
    *(_QWORD *)(a1 + 368) = v14;
    *(_DWORD *)(a1 + 76) = 5;
    *(__m128i *)(a1 + 376) = si128;
  }
  else
  {
    if ( v2 <= 0x35 )
    {
      if ( v2 - 42 <= 0xA )
      {
        if ( *(_BYTE *)(result + 64) == 7 )
        {
          v3 = *(_QWORD *)(a1 + 368);
          v4 = *(_DWORD *)(a1 + 72) + 1;
          v5 = *(_QWORD *)(a1 + 376);
          if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v5 + 1) )
          {
            v21 = qvector_reserve();
            *(_QWORD *)(a1 + 368) = v21;
            v3 = v21;
            v5 = *(_QWORD *)(a1 + 376);
          }
          *(_DWORD *)(v3 + 4 * v5) = v4;
          v6 = *(_QWORD *)(a1 + 376);
          v7 = *(_QWORD *)(a1 + 56);
          v8 = *(_QWORD *)(a1 + 368);
          result = v6 + 1;
          *(_QWORD *)(a1 + 376) = v6 + 1;
          v9 = *(_DWORD *)(v7 + 72);
          if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v6 + 2) )
          {
            v20 = qvector_reserve();
            *(_QWORD *)(a1 + 368) = v20;
            v8 = v20;
            result = *(_QWORD *)(a1 + 376);
          }
          *(_DWORD *)(v8 + 4 * result) = v9;
          *(_DWORD *)(a1 + 76) = 4;
          ++*(_QWORD *)(a1 + 376);
          return result;
        }
        if ( !under_debugger )
          sub_37EEE0(50038);
LABEL_34:
        BUG();
      }
      goto LABEL_16;
    }
    if ( v2 != 55 )
    {
LABEL_16:
      v12 = *(_DWORD *)(a1 + 72);
      result = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1);
      if ( v12 == (_DWORD)result )
      {
        *(_DWORD *)(a1 + 24) &= ~1u;
        *(_DWORD *)(a1 + 76) = 1;
      }
      else
      {
        result = *(_QWORD *)(a1 + 376);
        v17 = v12 + 1;
        *(_DWORD *)(a1 + 76) = 3;
        v18 = *(_QWORD *)(a1 + 368);
        if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(result + 1) )
        {
          v23 = qvector_reserve();
          *(_QWORD *)(a1 + 368) = v23;
          v18 = v23;
          result = *(_QWORD *)(a1 + 376);
        }
        *(_DWORD *)(v18 + 4 * result) = v17;
        ++*(_QWORD *)(a1 + 376);
      }
      return result;
    }
    if ( *(_BYTE *)(result + 32) != 7 )
    {
      if ( !under_debugger )
        sub_37EEE0(50037);
      goto LABEL_34;
    }
    v10 = *(_DWORD *)(result + 40);
    result = *(_QWORD *)(a1 + 376);
    v11 = *(_QWORD *)(a1 + 368);
    if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(result + 1) )
    {
      v22 = qvector_reserve();
      *(_QWORD *)(a1 + 368) = v22;
      v11 = v22;
      result = *(_QWORD *)(a1 + 376);
    }
    *(_DWORD *)(v11 + 4 * result) = v10;
    *(_DWORD *)(a1 + 76) = 3;
    ++*(_QWORD *)(a1 + 376);
  }
  return result;
}

