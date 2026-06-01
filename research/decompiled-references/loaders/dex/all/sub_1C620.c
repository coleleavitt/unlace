__int64 __fastcall sub_1C620(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 12);
  v4 = __readfsqword(0x28u);
  if ( v1 )
  {
    if ( !(unsigned __int8)unpack_xleb128(&v3, 32, 0, a1) )
      return 0;
    *(_QWORD *)(a1 + 12) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 12) - 1), _mm_cvtsi32_si128(v3)).m128i_u64[0];
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 8) )
      return 0;
    *(_BYTE *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = -1;
  }
  if ( (unsigned __int8)unpack_xleb128(a1 + 20, 32, 0, a1) )
    return a1 + 16;
  return 0;
}
