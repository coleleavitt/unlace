__int64 __fastcall sub_E960(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax

  *(_WORD *)(a1 + 250) = get_wide_byte();
  *(_WORD *)(a2 + 26) = 2;
  v2 = &qword_1F200;
  while ( (*(_BYTE *)(a1 + 251) & *(_BYTE *)v2) != *((_BYTE *)v2 + 1) )
  {
    v2 += 5;
    if ( v2 == &qword_1F3F0[3] )
      return 0;
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64 *))v2[1])(a1, a2, v2 + 1);
}

