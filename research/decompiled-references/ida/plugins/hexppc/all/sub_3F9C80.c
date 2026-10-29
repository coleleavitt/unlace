__int64 __fastcall sub_3F9C80(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebp
  char *v4; // rax
  unsigned __int64 *v5; // rax
  __int16 v6; // ax
  int v7; // eax
  int v8; // r15d
  int i; // r14d
  int v10; // eax
  __int64 v11; // [rsp+0h] [rbp-338h] BYREF
  int v12; // [rsp+8h] [rbp-330h]
  __m128i v13[2]; // [rsp+10h] [rbp-328h] BYREF
  __int64 v14; // [rsp+30h] [rbp-308h]
  __int64 v15; // [rsp+38h] [rbp-300h]
  __int64 v16; // [rsp+40h] [rbp-2F8h]
  char v17; // [rsp+48h] [rbp-2F0h] BYREF
  __int16 v18; // [rsp+4Eh] [rbp-2EAh]
  __int16 v19; // [rsp+76h] [rbp-2C2h]
  unsigned __int16 v20; // [rsp+9Eh] [rbp-29Ah]
  char v21; // [rsp+188h] [rbp-1B0h] BYREF
  __int128 v22; // [rsp+190h] [rbp-1A8h]
  __int64 v23; // [rsp+1A0h] [rbp-198h]
  __int64 v24; // [rsp+1A8h] [rbp-190h]
  __int64 v25; // [rsp+1B0h] [rbp-188h]
  char v26; // [rsp+1B8h] [rbp-180h] BYREF
  __int64 v27; // [rsp+1C0h] [rbp-178h]
  __int16 v28; // [rsp+1E6h] [rbp-152h]
  unsigned __int64 v29; // [rsp+2F8h] [rbp-40h] BYREF

  v29 = __readfsqword(0x28u);
  v1 = sub_1D2F40(a1);
  if ( !(_BYTE)v1 )
    return 0;
  v14 = -1;
  v2 = v1;
  v13[1] = (__m128i)-1LL;
  v4 = &v17;
  v15 = 0;
  v16 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( &v21 != v4 );
  if ( !(unsigned int)decode_insn() )
    return 0;
  if ( (v15 & 0x220000FFFFLL) != 0x2000000158LL )
    return 0;
  v23 = -1;
  v5 = (unsigned __int64 *)&v26;
  v24 = 0;
  v25 = 0;
  v22 = -1;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( v5 != &v29 );
  if ( (unsigned int)decode_insn()
    && (v24 & 0x20000FFFFLL) == 0x84
    && (v6 = *(_WORD *)(a1 + 70), v6 == v18)
    && v6 == v19
    && v6 == v28
    && (v27 & (v27 - 1)) == 0
    && (v7 = log2ceil(), v8 = v20, 4 * v7 == v20) )
  {
    for ( i = 0; i != 4; ++i )
    {
      v10 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL);
      v11 = 0x100000001LL;
      v13[0].m128i_i64[0] = 0x100000001LL;
      v13[0].m128i_i32[2] = i + v10;
      v12 = i + v8 + v10;
      sub_1D2850(a1, 4, (unsigned __int8 *)&v11, nullptr, (unsigned __int8 *)v13);
      sub_119360((__int64)v13);
      sub_119360((__int64)&v11);
    }
    v13[0].m128i_i16[4] = 344;
    v13[0].m128i_i64[0] = v14;
    sub_3F9BB0((__int64 *)(a1 + 840), v13);
    v13[0].m128i_i16[4] = 132;
    v13[0].m128i_i64[0] = v23;
    sub_3F9BB0((__int64 *)(a1 + 840), v13);
  }
  else
  {
    return 0;
  }
  return v2;
}

