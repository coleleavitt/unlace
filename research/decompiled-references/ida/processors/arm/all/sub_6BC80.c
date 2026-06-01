__int64 __fastcall sub_6BC80(__int64 a1)
{
  __int16 v1; // ax
  __m128i *v3; // rax

  v1 = *(_WORD *)(a1 + 40);
  if ( v1 != 470 && (v1 != 41 || (unsigned __int8)sub_2B170(*(_QWORD *)(a1 + 888), a1 + 16)) || *(_BYTE *)(a1 + 57) != 1 )
    return 0;
  v3 = *(__m128i **)(a1 + 864);
  *v3 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v3[1] = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v3[2].m128i_i32[0] = *(_DWORD *)(a1 + 88);
  return 1;
}
