__int64 __fastcall sub_42670(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = *(_BYTE **)(a1 + 16);
  if ( !v1 || (int)v1 - *(_DWORD *)(a1 + 24) >= (unsigned int)(*(_DWORD *)(a1 + 32) - 1) || !*v1 )
    return 0;
  sub_41E40(a1);
  return 1;
}

