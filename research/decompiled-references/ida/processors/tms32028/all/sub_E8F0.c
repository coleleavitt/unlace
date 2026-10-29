__int64 __fastcall sub_E8F0(__int64 a1, __int64 a2)
{
  __int16 wide_byte; // ax
  __int64 *v3; // rdx

  wide_byte = get_wide_byte();
  v3 = &qword_1F1C8;
  *(_WORD *)(a1 + 250) = wide_byte;
  *(_WORD *)(a2 + 26) = 2;
  if ( *(char *)(a1 + 251) >= 0 )
    v3 = &qword_1F1C8 - 5;
  return sub_CD30((unsigned __int8 *)a1, a2, (__int64)(v3 + 1));
}

