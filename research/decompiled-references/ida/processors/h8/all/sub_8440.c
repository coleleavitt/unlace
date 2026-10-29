__int64 __fastcall sub_8440(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, unsigned __int8 a6)
{
  char v6; // cl
  __int16 v9; // r12
  char v10; // cl

  v6 = a4 & 3;
  switch ( v6 )
  {
    case 2:
      *(_BYTE *)(a3 + 33) |= 2u;
      v9 = 0;
      *(_BYTE *)(a3 + 32) = 1;
      break;
    case 3:
      *(_BYTE *)(a3 + 33) |= 4u;
      *(_BYTE *)(a3 + 32) = 1;
      break;
    case 1:
      *(_BYTE *)(a3 + 33) |= 1u;
      v9 = 24;
      *(_BYTE *)(a3 + 32) = 1;
      break;
    default:
      v9 = 32;
      break;
  }
  v10 = *(_BYTE *)(a2 + 28) - 1;
  if ( a5 )
    sub_83F0(a1, a2, a3, v10);
  else
    sub_8370(a1, a2, a3, v10);
  *(_WORD *)(a3 + 6) = v9 + a6;
  return 1;
}

