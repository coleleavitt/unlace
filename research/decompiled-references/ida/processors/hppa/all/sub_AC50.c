_BOOL8 __fastcall sub_AC50(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 41) == 7 && !(unsigned __int8)is_mapped() )
    return 0;
  if ( *(_WORD *)(a1 + 24) == 12 )
    return (unsigned int)get_dword() != 0;
  return 1;
}

