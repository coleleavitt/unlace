__int64 __fastcall sub_8E10(__int64 a1, int a2, __m128i *a3)
{
  _QWORD *v3; // rax
  unsigned int v4; // ecx
  __int64 v5; // rax

  v3 = *(_QWORD **)(a1 + 141);
  v4 = 0;
  if ( (unsigned __int64)a2 < v3[1] )
  {
    v5 = *(_QWORD *)(*v3 + 32LL * a2);
    if ( v5 )
    {
      if ( *(_BYTE *)(v5 + 22) == 3 && !*(_QWORD *)(v5 + 8) && *(_BYTE *)(v5 + 23) == 1 )
      {
        v4 = 1;
        *a3 = _mm_loadu_si128((const __m128i *)(v5 + 24));
        a3[1].m128i_i16[0] = *(_WORD *)(v5 + 40);
      }
    }
  }
  return v4;
}
