unsigned __int64 __fastcall sub_23DC60(__int64 a1, char a2)
{
  unsigned __int8 v2; // si
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  if ( (a2 & 0xF) == 8 )
    goto LABEL_4;
  v2 = a2 & 0x3F;
  if ( v2 > 0x23u )
  {
    if ( v2 != 50 )
      return v4 - __readfsqword(0x28u);
    goto LABEL_4;
  }
  if ( v2 > 0x21u || v2 == 3 || (unsigned __int8)(v2 - 18) <= 1u )
  {
LABEL_4:
    copy_tinfo_t();
    clear_tinfo_t();
  }
  return v4 - __readfsqword(0x28u);
}

