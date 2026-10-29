void __fastcall sub_EFE10(__int64 a1, double a2, __int64 a3, const __m128i **a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rsi
  const __m128i *v8; // r12
  __m128i *v9; // rbp
  unsigned __int8 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r13
  int v13; // eax

  v7 = *(_QWORD *)(a1 + 16);
  v8 = *a4;
  if ( *(__int16 *)(v7 + 20) >= 0 )
    v9 = (__m128i *)sub_EF2D0((_QWORD *)(a1 + 8), v7, 56, a5, a6, a7);
  else
    v9 = *(__m128i **)(v7 + 8);
  if ( v9 )
  {
    v10 = byte_1BAD40;
    v11 = v9[1].m128i_u16[2];
    if ( byte_1BAD40[v8[1].m128i_i16[2] & 0x3F] != 5 )
    {
      if ( (_WORD)v11 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
        v13 = sub_EE420(
                (__int64)v9,
                (__int64)v8,
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 136LL) + 24LL * *(int *)(a1 + 32) - 8),
                a2);
        if ( (!v12 || v13 >= 0) && (v12 || v13 <= 0) )
        {
          *(_DWORD *)(a1 + 36) = -1;
          *(_BYTE *)(a1 + 41) = 1;
          return;
        }
      }
      else
      {
        v9[1].m128i_i64[1] = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      }
      sub_E0AC0(v9, v8, v11, (__int64)v10, a6, a7);
      return;
    }
    if ( (_WORD)v11 )
    {
      *(_DWORD *)(a1 + 36) = -1;
      *(_BYTE *)(a1 + 41) = 1;
    }
  }
}
