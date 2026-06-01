__int64 __fastcall sub_18C0(__int64 *a1, __int64 *a2, __int64 a3)
{
  int v5; // eax
  int v6; // ebp
  __m128i *v8; // rsi
  __m128i si128; // xmm0
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int16 v13; // [rsp+0h] [rbp-B8h] BYREF
  char v14; // [rsp+2h] [rbp-B6h]
  int v15; // [rsp+Ch] [rbp-ACh]
  unsigned __int64 v16; // [rsp+88h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v5 = sub_17B0(a3);
  if ( v5 == -1 )
    return 0;
  v6 = v5;
  qlseek(a3, v5, 0);
  if ( qlread(a3, &v13, 124) != 124 )
    return 0;
  if ( (v14 & 1) == 0 )
  {
    if ( (debug & 0x10) != 0 )
      sub_1630((__int64)"Phar Lap run386-extender non flat model files not implemented yet\n");
    return 0;
  }
  qlseek(a3, (unsigned int)(v15 + v6), 0);
  if ( qlread(a3, &v13, 22) != 22 || v13 != 22596 )
    return 0;
  v8 = (__m128i *)*a1;
  if ( (unsigned __int64)a1[2] <= 0x28 )
  {
    v11 = qvector_reserve(a1, v8, 41, 1);
    *a1 = v11;
    v8 = (__m128i *)v11;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_3230);
  a1[1] = 41;
  v8[2].m128i_i64[0] = 0x656C6966206C6564LL;
  *v8 = si128;
  v8[1] = _mm_load_si128((const __m128i *)&xmmword_3240);
  *(_BYTE *)(*a1 + 40) = 0;
  v10 = *a2;
  if ( (unsigned __int64)a2[2] <= 6 )
  {
    v12 = qvector_reserve(a2, v10, 7, 1);
    *a2 = v12;
    v10 = v12;
  }
  a2[1] = 7;
  *(_DWORD *)v10 = 942944312;
  *(_WORD *)(v10 + 4) = 28726;
  *(_BYTE *)(*a2 + 6) = 0;
  return 17;
}
