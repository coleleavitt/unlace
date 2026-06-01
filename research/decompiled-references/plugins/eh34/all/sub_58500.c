_QWORD *__fastcall sub_58500(__int64 a1, __int64 a2)
{
  int v3; // eax
  void (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  void (__fastcall *v5)(__int64, __int64, __int64); // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  void *v8; // r13
  _QWORD *result; // rax
  __m128i v10; // xmm0
  size_t v11; // r12
  _QWORD *v12; // rbp
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // r12
  _QWORD *v16; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  *(_QWORD *)(a1 + 20) = *(_QWORD *)(a2 + 20);
  *(_BYTE *)(a1 + 28) = *(_BYTE *)(a2 + 28);
  v3 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 32) = v3;
  *(_QWORD *)(a1 + 48) = 0;
  hexdsp = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2);
  hexdsp(203, a1 + 40, a2 + 40);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  v5 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(203, a1 + 40);
  v6 = a1 + 56;
  v5(203, a1 + 56, a2 + 56);
  v7 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) = 0;
  v8 = (void *)(a1 + 120);
  result = *(_QWORD **)(a2 + 96);
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 104));
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = v7;
  *(_QWORD *)(a1 + 96) = result;
  *(_QWORD *)(a1 + 120) = 0;
  *(__m128i *)(a1 + 104) = v10;
  if ( v7 != 1 )
  {
    if ( v7 >> 60 )
    {
      if ( v7 >> 61 )
        sub_B371();
      std::__throw_bad_alloc();
    }
    v11 = 8 * v7;
    v6 = 0;
    v8 = (void *)operator new(8 * v7);
    result = memset(v8, 0, v11);
  }
  v12 = *(_QWORD **)(a2 + 88);
  *(_QWORD *)(a1 + 72) = v8;
  if ( v12 )
  {
    result = sub_573E0(v12 + 1, v6);
    *(_QWORD *)(a1 + 88) = result;
    v13 = result;
    if ( result )
    {
      v6 = a1 + 88;
      v14 = result[1] % *(_QWORD *)(a1 + 80);
      result = *(_QWORD **)(a1 + 72);
      result[v14] = a1 + 88;
    }
    while ( 1 )
    {
      v12 = (_QWORD *)*v12;
      if ( !v12 )
        break;
      while ( 1 )
      {
        v15 = v13;
        v16 = sub_573E0(v12 + 1, v6);
        *v15 = v16;
        v13 = v16;
        result = (_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * (v16[1] % *(_QWORD *)(a1 + 80)));
        if ( *result )
          break;
        *result = v15;
        v12 = (_QWORD *)*v12;
        if ( !v12 )
          return result;
      }
    }
  }
  return result;
}
