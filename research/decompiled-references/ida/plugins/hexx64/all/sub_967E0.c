unsigned __int64 __fastcall sub_967E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned __int64 result; // rax
  int v7; // r13d
  __int64 v8; // rbp

  v4 = a4;
  if ( *(_BYTE *)a1 == 2 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    result = *(_QWORD *)(v5 + 16);
    *(__m128i *)(v5 + 16) = _mm_unpacklo_epi64((__m128i)(result & (int)a4), (__m128i)(result & (int)a4));
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) != result )
    {
      result = 0;
      *(_WORD *)(a1 + 2) = 0;
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 4);
    v8 = j__qalloc_or_throw(80, a2, a3, a4);
    *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v8 + 72) = 0;
    sub_330970(v8, a3);
    *(_DWORD *)v8 = 20;
    sub_11CA10((char *)a1, (char *)(v8 + 32));
    result = sub_120A10(v8 + 48, a2, v4, v7, -1, 0);
    *(_DWORD *)(v8 + 68) = v7;
    *(_BYTE *)a1 = 4;
    *(_QWORD *)(a1 + 8) = v8;
    *(_DWORD *)(a1 + 4) = v7;
  }
  return result;
}

