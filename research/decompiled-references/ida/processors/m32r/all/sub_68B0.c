bool __fastcall sub_68B0(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 1);
  if ( v1 == 3 )
    return *(_BYTE *)(a1 + 32) == 0;
  else
    return (unsigned __int8)(v1 - 4) <= 1u;
}

