__int64 __fastcall sub_6570(__int64 a1, unsigned int a2, __m128i *a3, int *a4)
{
  unsigned __int64 v4; // r9
  unsigned int v7; // r8d
  int v8; // esi
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v7 = 0;
  if ( a2 >= v4 || *a4 >= (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 24LL * a2 + 23) )
    return v7;
  v8 = *a4 + 1;
  v9 = a2 + v8;
  if ( a2 < (unsigned int)v9 && v9 < v4 )
  {
    *a4 = v8;
    v10 = *(_QWORD *)(a1 + 56);
    v11 = 3 * v9;
    v7 = 1;
    *a3 = _mm_loadu_si128((const __m128i *)(v10 + 8 * v11));
    a3[1].m128i_i16[0] = *(_WORD *)(v10 + 8 * v11 + 16);
    return v7;
  }
  return 0;
}

