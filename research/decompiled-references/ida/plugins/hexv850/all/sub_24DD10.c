__int64 __fastcall sub_24DD10(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  _DWORD *v10; // rsi
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  int v13; // ebp
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx

  if ( *(_DWORD *)(a2 + 12) == -1 )
  {
    if ( *(_DWORD *)(a2 + 8) != 81 )
      return 0;
  }
  else
  {
    v5 = a1[12];
    v6 = a1[11];
    v7 = v5 + 1;
    if ( a1[13] < (unsigned __int64)(v5 + 1) )
    {
      v15 = qvector_reserve();
      v5 = a1[12];
      a1[11] = v15;
      v6 = v15;
      v7 = v5 + 1;
    }
    v8 = a1[3];
    v9 = a1[2];
    a1[12] = v7;
    *(__m128i *)(v6 + 16 * v5) = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v9 + 8 * v8 - 8)), (__m128i)a2);
    if ( *(_DWORD *)(a2 + 8) != 81 )
      return 0;
  }
  v10 = (_DWORD *)a1[8];
  v11 = a1[9];
  v12 = &v10[v11];
  v13 = **(_DWORD **)(a2 + 24);
  if ( v10 == v12 )
    goto LABEL_12;
  v14 = (_DWORD *)a1[8];
  while ( v13 != *v14 )
  {
    if ( v12 == ++v14 )
      goto LABEL_12;
  }
  if ( v14 == v12 )
  {
LABEL_12:
    if ( a1[10] < (unsigned __int64)(v11 + 1) )
    {
      v16 = qvector_reserve();
      v17 = a1[9];
      a1[8] = v16;
      v12 = (_DWORD *)(v16 + 4 * v17);
    }
    *v12 = v13;
    ++a1[9];
  }
  return 0;
}

