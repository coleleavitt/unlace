char __fastcall sub_192350(__int64 a1, _QWORD *a2, int a3, unsigned int a4)
{
  __int64 v4; // rax
  int v6; // ebp
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // xmm0_8
  int v11; // eax
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]

  v4 = a3;
  if ( (unsigned __int64)a3 < a2[1] )
  {
    v6 = a3;
    do
    {
      v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(*(_DWORD *)(*a2 + 4 * v4))).m128i_u64[0];
      v8 = (_QWORD *)j__qalloc_or_throw();
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
      v8[4] = 0xFFFFFFFF00000000LL;
      v8[5] = 0;
      v8[6] = 0xFFFFFFFF00000000LL;
      v8[7] = 0;
      v8[8] = 0xFFFFFFFF00000000LL;
      v8[9] = 0;
      sub_32B5A0(v8, v9);
      v10 = v13;
      *((_BYTE *)v8 + 64) = 1;
      *(_DWORD *)v8 = 61;
      ++v6;
      *(_QWORD *)((char *)v8 + 68) = v10;
      sub_9ECA0(a1, v8, 0);
      v4 = v6;
    }
    while ( (unsigned __int64)v6 < a2[1] );
  }
  v11 = *(_DWORD *)(a1 + 24);
  BYTE1(v11) &= ~2u;
  LOBYTE(v11) = v11 | 0x80;
  *(_DWORD *)(a1 + 24) = v11;
  return v11;
}

