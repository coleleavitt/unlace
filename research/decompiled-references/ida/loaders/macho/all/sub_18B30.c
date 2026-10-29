__int64 __fastcall sub_18B30(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 *v3; // r12
  __int64 v4; // rdx
  size_t v5; // r13
  void *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  _DWORD *v10; // rax
  int v11; // r12d
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v16; // rax
  __int64 v17; // rax

  v2 = *(unsigned __int8 *)(a2 + 36);
  if ( (_BYTE)v2 && *(_QWORD *)(a1 + 32) >= v2 )
  {
    v3 = *(__int64 **)(a1 + 24);
    v4 = v3[1];
    if ( **(_DWORD **)(a1 + 40) != v4 )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v5 = *(_QWORD *)(a2 + 8);
    v7 = nullptr;
    if ( v5 )
    {
      v7 = (void *)qalloc_or_throw();
      memcpy(v7, *(const void **)a2, v5);
      v4 = v3[1];
    }
    v8 = *v3;
    if ( v3[2] < (unsigned __int64)(v4 + 1) )
    {
      v17 = qvector_reserve();
      *v3 = v17;
      v4 = v3[1];
      v8 = v17;
    }
    v9 = v8 + 24 * v4;
    *(_QWORD *)v9 = v7;
    *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    ++v3[1];
    v10 = *(_DWORD **)(a1 + 40);
    v11 = (*v10)++;
    v12 = (__int64 *)(**(_QWORD **)(a1 + 16) + 24LL * *(unsigned __int8 *)(a2 + 36));
    v13 = v12[1];
    v14 = *v12;
    if ( v12[2] < (unsigned __int64)(v13 + 1) )
    {
      v16 = qvector_reserve();
      *v12 = v16;
      v14 = v16;
      v13 = v12[1];
    }
    *(_DWORD *)(v14 + 4 * v13) = v11;
    ++v12[1];
  }
  return 0;
}

