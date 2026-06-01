__int64 __fastcall sub_71A80(__m128i *a1)
{
  __int64 v1; // rax

  if ( (unsigned __int8)sub_71380(a1, 4, 0) )
    return 0;
  v1 = a1[54].m128i_i64[0];
  if ( !*(_BYTE *)(v1 + 41) )
    return 0;
  if ( a1[2].m128i_i16[4] != 278 && (a1[3].m128i_i8[0] & 0xF) == ((*(_QWORD *)(v1 + 48) >> 2) & 0xF) )
    *(_QWORD *)(v1 + 48) |= 0x3CuLL;
  if ( a1[2].m128i_i64[0] == a1[27].m128i_i64[0] )
    return sub_71870(a1);
  else
    return 0;
}
