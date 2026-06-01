bool __fastcall sub_4AC90(__int64 a1, __int64 *a2, __m128i *a3)
{
  __int16 v5; // si
  bool result; // al
  __int64 v7; // rax
  char v8; // si
  char v9; // si
  __int16 v10; // ax
  __int16 v11; // si

  v5 = *(_WORD *)(a1 + 40);
  if ( v5 == 6 || v5 == 209 )
  {
    result = 0;
    if ( *(_BYTE *)(a1 + 97) == 5 )
    {
      v7 = -*(_QWORD *)(a1 + 104);
      if ( v5 == 6 )
        v7 = *(_QWORD *)(a1 + 104);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 24LL) != 8 )
        v7 = (int)v7;
      goto LABEL_5;
    }
  }
  else
  {
    result = v5 == 34 || v5 == 44;
    if ( result )
    {
      v7 = 2LL * (v5 == 44) - 1;
LABEL_5:
      *a2 = v7;
      *a3 = _mm_loadu_si128((const __m128i *)(a1 + 56));
      a3[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
      a3[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
      return 1;
    }
    if ( v5 == 92 )
    {
      v8 = *(_BYTE *)(a1 + 97);
      if ( v8 == 4 )
      {
        v10 = *(_WORD *)(a1 + 102);
LABEL_22:
        *a2 = *(_QWORD *)(a1 + 112);
        a3->m128i_i8[1] = 1;
        a3->m128i_i16[3] = v10;
        a3->m128i_i8[5] = 5 * ((*(_DWORD *)(a1 + 44) & 0x1018) == 4112) + 2;
        return 1;
      }
      if ( v8 == 2 && *(_BYTE *)(a1 + 128) && !(*(_BYTE *)(a1 + 129) >> 6) )
      {
        v9 = *(char *)(a1 + 129) >> 3;
        v10 = v9;
        if ( (*(_BYTE *)(a1 + 44) & 0x10) != 0 )
        {
          v11 = v9 | 8;
          if ( (*(_BYTE *)(a1 + 49) & 2) != 0 )
            v10 = v11;
        }
        goto LABEL_22;
      }
    }
  }
  return result;
}

