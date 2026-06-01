__int64 __fastcall sub_28230(__int64 a1, __int64 a2)
{
  char v2; // dl

  v2 = *(_BYTE *)(a1 + 142);
  if ( !v2 || v2 == 5 )
    return 0;
  copy_tinfo_t(a2, a1 + 8);
  return 1;
}

