__int64 __fastcall sub_96220(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v7; // r13d
  __int64 v8; // rbp

  if ( *(_BYTE *)a1 == 2 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    result = *(_QWORD *)(v5 + 16);
    *(__m128i *)(v5 + 16) = _mm_unpacklo_epi64(
                              (__m128i)(result & (unsigned __int64)a4),
                              (__m128i)(result & (unsigned __int64)a4));
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) != result )
    {
      result = 0;
      *(_WORD *)(a1 + 2) = 0;
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 4);
    v8 = j__qalloc_or_throw();
    *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v8 + 72) = 0;
    sub_330C90(v8, a3);
    *(_DWORD *)v8 = 20;
    sub_11C450(a1, v8 + 32);
    result = sub_120450(v8 + 48, a2, a4, v7, -1, 0);
    *(_DWORD *)(v8 + 68) = v7;
    *(_BYTE *)a1 = 4;
    *(_QWORD *)(a1 + 8) = v8;
    *(_DWORD *)(a1 + 4) = v7;
  }
  return result;
}

