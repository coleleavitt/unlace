_QWORD *__fastcall sub_59440(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  const char *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r15
  size_t v7; // r13
  void *v8; // rax
  __int16 v9; // ax
  __int64 v10; // r14
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // r12
  const char *v18; // rsi
  const char *v19; // rdi

  v3 = operator new(0x78u);
  v4 = *(const char **)a2;
  *(_QWORD *)(v3 + 32) = 0;
  v5 = v3;
  v6 = v3 + 32;
  *(_OWORD *)(v3 + 40) = 0;
  if ( v4 )
  {
    v6 = v3 + 32;
    v7 = strlen(v4);
    v8 = (void *)qvector_reserve();
    *(_QWORD *)(v5 + 32) = v8;
    *(_QWORD *)(v5 + 40) = v7 + 1;
    memmove(v8, v4, v7);
    *(_BYTE *)(*(_QWORD *)(v5 + 32) + v7) = 0;
  }
  v9 = *(_WORD *)(a2 + 8);
  v10 = *(_QWORD *)(a2 + 48);
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 56));
  *(_QWORD *)(a2 + 48) = 0;
  *(_WORD *)(v5 + 56) = v9;
  v12 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v5 + 96) = v10;
  *(_QWORD *)(v5 + 64) = v12;
  LODWORD(v12) = *(_DWORD *)(a2 + 24);
  *(__m128i *)(v5 + 104) = v11;
  *(_DWORD *)(v5 + 72) = v12;
  v13 = *(_QWORD *)(a2 + 32);
  *(_OWORD *)(a2 + 56) = 0;
  *(_QWORD *)(v5 + 80) = v13;
  *(_DWORD *)(v5 + 88) = *(_DWORD *)(a2 + 40);
  v14 = sub_592F0(a1, v6);
  if ( v15 )
  {
    if ( !v14 && v15 != a1 + 8 )
    {
      v18 = s1;
      if ( *(_QWORD *)(v15 + 40) )
        v18 = *(const char **)(v15 + 32);
      v19 = s1;
      if ( *(_QWORD *)(v5 + 40) )
        v19 = *(const char **)(v5 + 32);
      strcmp(v19, v18);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 40);
    return (_QWORD *)v5;
  }
  else
  {
    v16 = v14;
    if ( v5 )
    {
      if ( v10 )
      {
        *(_QWORD *)(v5 + 104) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v5 + 32) )
      {
        *(_QWORD *)(v5 + 40) = 0;
        qfree();
      }
      operator delete((void *)v5, 0x78u);
    }
  }
  return v16;
}

