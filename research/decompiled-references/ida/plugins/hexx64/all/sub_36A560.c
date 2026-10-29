unsigned __int64 __fastcall sub_36A560(__int64 a1)
{
  unsigned __int64 v2; // [rsp+8h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  get_tinfo_property();
  if ( (get_tinfo_property() & 0x3F) == 0xD && !(unsigned int)verify_tinfo() )
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFB7FFD | 0x8002;
  clear_tinfo_t();
  return v2 - __readfsqword(0x28u);
}

