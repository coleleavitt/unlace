__int64 __fastcall sub_1CD70(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(a1 + 40) == 38 || *(_BYTE *)(a1 + 57) == 1 || *(_BYTE *)(a1 + 97) == 1 )
    return set_moved_jpt(a1, a1 + 96, a1 + 56, a2, 10, 10);
  else
    return 0;
}

