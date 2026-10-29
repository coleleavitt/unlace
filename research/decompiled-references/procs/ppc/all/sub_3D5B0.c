_BOOL8 __fastcall sub_3D5B0(__int64 a1)
{
  __int64 v1; // rcx
  __m128i *v3; // rcx
  __int8 *v4; // rsi
  char v5; // cl
  __int64 v6; // rdx
  bool v7; // [rsp+Fh] [rbp-19h]
  const __m128i *v8[3]; // [rsp+10h] [rbp-18h] BYREF

  v8[1] = (const __m128i *)__readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v1 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !*(_BYTE *)(v1 + 41) )
    return 0;
  v7 = sub_3CEB0(a1, v8);
  if ( !v7 )
    return 0;
  v4 = &v8[0][2].m128i_i8[8];
  v3[5] = _mm_loadu_si128(v8[0]);
  v3[6] = _mm_loadu_si128((const __m128i *)(v4 - 24));
  v3[7].m128i_i32[0] = *((_DWORD *)v4 - 2);
  v5 = *(v4 - 35);
  v6 = *(_QWORD *)(a1 + 376);
  *(_DWORD *)(v6 + 64) = *((unsigned __int16 *)v4 - 17);
  *(_BYTE *)(v6 + 68) = v5;
  sub_3D210((_QWORD *)a1, (__int64)v4);
  return v7;
}
