__int64 __fastcall sub_438C0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // r13
  size_t v9; // r13
  __m128i v10; // xmm0
  unsigned __int64 v11; // rbx
  int v12; // eax
  const void *v13; // r15
  void *v14; // rax
  const void *v15; // r14
  void *v16; // rax
  unsigned __int64 v17; // rbp
  size_t v18; // rbp
  void *v19; // r13
  __m128i si128; // xmm0
  unsigned __int64 v21; // rbp
  const void *v22; // r13
  void *v23; // rax
  const void *v24; // r13
  void *v25; // rax
  __m128i v26[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_QWORD *)(a1 + 1496) == a3 )
  {
    *(_QWORD *)a2 = a3;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 1504);
    if ( a2 + 16 != a1 + 1512 )
    {
      v17 = *(_QWORD *)(a1 + 1520);
      if ( v17 > 1 )
      {
        v24 = *(const void **)(a1 + 1512);
        v25 = *(void **)(a2 + 16);
        if ( *(_QWORD *)(a2 + 32) < v17 )
        {
          v25 = (void *)qvector_reserve();
          *(_QWORD *)(a2 + 16) = v25;
        }
        *(_QWORD *)(a2 + 24) = v17;
        memmove(v25, v24, v17 - 1);
        *(_BYTE *)(*(_QWORD *)(a2 + 16) + v17 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 24) = 0;
      }
    }
    v18 = *(_QWORD *)(a1 + 1544);
    v19 = nullptr;
    si128 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
    if ( v18 )
    {
      v26[0] = si128;
      v19 = (void *)qalloc_or_throw();
      memcpy(v19, *(const void **)(a1 + 1536), v18);
      si128 = _mm_load_si128(v26);
    }
    if ( *(_QWORD *)(a2 + 40) )
    {
      *(_QWORD *)(a2 + 48) = 0;
      v26[0] = si128;
      qfree();
      si128 = _mm_load_si128(v26);
    }
    *(_QWORD *)(a2 + 40) = v19;
    *(__m128i *)(a2 + 48) = si128;
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 1560);
    *(_DWORD *)(a2 + 68) = *(_DWORD *)(a1 + 1564);
    if ( a2 + 72 != a1 + 1568 )
    {
      v21 = *(_QWORD *)(a1 + 1576);
      if ( v21 < 2 )
      {
        *(_QWORD *)(a2 + 80) = 0;
      }
      else
      {
        v22 = *(const void **)(a1 + 1568);
        v23 = *(void **)(a2 + 72);
        if ( *(_QWORD *)(a2 + 88) < v21 )
        {
          v23 = (void *)qvector_reserve();
          *(_QWORD *)(a2 + 72) = v23;
        }
        *(_QWORD *)(a2 + 80) = v21;
        memmove(v23, v22, v21 - 1);
        *(_BYTE *)(*(_QWORD *)(a2 + 72) + v21 - 1) = 0;
      }
    }
    v12 = *(_DWORD *)(a1 + 1592);
    goto LABEL_20;
  }
  v3 = *(_QWORD **)(a1 + 1416);
  if ( !v3 )
    return 0;
  v4 = (_QWORD *)(a1 + 1408);
  do
  {
    while ( 1 )
    {
      v5 = v3[2];
      v6 = v3[3];
      if ( v3[4] >= a3 )
        break;
      v3 = (_QWORD *)v3[3];
      if ( !v6 )
        goto LABEL_7;
    }
    v4 = v3;
    v3 = (_QWORD *)v3[2];
  }
  while ( v5 );
LABEL_7:
  result = 0;
  if ( v4 != (_QWORD *)(a1 + 1408) && a3 >= v4[4] )
  {
    *(_QWORD *)a2 = v4[5];
    *(_QWORD *)(a2 + 8) = v4[6];
    if ( (_QWORD *)(a2 + 16) != v4 + 7 )
    {
      v8 = v4[8];
      if ( v8 > 1 )
      {
        v13 = (const void *)v4[7];
        v14 = *(void **)(a2 + 16);
        if ( *(_QWORD *)(a2 + 32) < v8 )
        {
          v14 = (void *)qvector_reserve();
          *(_QWORD *)(a2 + 16) = v14;
        }
        *(_QWORD *)(a2 + 24) = v8;
        memmove(v14, v13, v8 - 1);
        *(_BYTE *)(*(_QWORD *)(a2 + 16) + v8 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 24) = 0;
      }
    }
    v9 = v4[11];
    v10 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
    if ( v9 )
    {
      v26[0] = v10;
      v3 = (_QWORD *)qalloc_or_throw();
      memcpy(v3, (const void *)v4[10], v9);
      v10 = _mm_load_si128(v26);
      if ( !*(_QWORD *)(a2 + 40) )
        goto LABEL_16;
    }
    else if ( !*(_QWORD *)(a2 + 40) )
    {
LABEL_16:
      *(_QWORD *)(a2 + 40) = v3;
      *(__m128i *)(a2 + 48) = v10;
      *(_DWORD *)(a2 + 64) = *((_DWORD *)v4 + 26);
      *(_DWORD *)(a2 + 68) = *((_DWORD *)v4 + 27);
      if ( (_QWORD *)(a2 + 72) != v4 + 14 )
      {
        v11 = v4[15];
        if ( v11 > 1 )
        {
          v15 = (const void *)v4[14];
          v16 = *(void **)(a2 + 72);
          if ( *(_QWORD *)(a2 + 88) < v11 )
          {
            v16 = (void *)qvector_reserve();
            *(_QWORD *)(a2 + 72) = v16;
          }
          *(_QWORD *)(a2 + 80) = v11;
          memmove(v16, v15, v11 - 1);
          *(_BYTE *)(*(_QWORD *)(a2 + 72) + v11 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 80) = 0;
        }
      }
      v12 = *((_DWORD *)v4 + 34);
LABEL_20:
      *(_DWORD *)(a2 + 96) = v12;
      return 1;
    }
    *(_QWORD *)(a2 + 48) = 0;
    v26[0] = v10;
    qfree();
    v10 = _mm_load_si128(v26);
    goto LABEL_16;
  }
  return result;
}

