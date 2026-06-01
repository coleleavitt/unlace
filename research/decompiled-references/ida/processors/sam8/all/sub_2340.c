__int64 __fastcall sub_2340(__int64 a1, __int16 a2)
{
  char *v2; // rax
  char *v3; // rcx
  char v4; // dl
  __int64 result; // rax

  v2 = (char *)(a1 + 41);
  v3 = (char *)(a1 + 161);
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 == 1 )
      break;
    if ( v4 == 4 )
    {
      if ( (unsigned __int16)(*(_WORD *)(v2 + 5) - 2) > 1u )
        goto LABEL_8;
      if ( (v2[25] & 1) != 0 )
        return 0;
      v2 += 40;
      if ( v2 == v3 )
      {
LABEL_9:
        *(_WORD *)(a1 + 24) = a2;
        result = *(unsigned __int16 *)(a1 + 26);
        *(_BYTE *)(a1 + 28) = -1;
        return result;
      }
    }
    else
    {
      if ( v4 == 3 && !*(_WORD *)(v2 + 5) && v2[31] && *(_WORD *)(v2 + 23) > 0xFu )
        return 0;
LABEL_8:
      v2 += 40;
      if ( v2 == v3 )
        goto LABEL_9;
    }
  }
  if ( (!v2[32] || (v2[5] & 1) == 0) && (!v2[31] || *(_WORD *)(v2 + 5) <= 0xFu) )
    goto LABEL_8;
  return 0;
}

