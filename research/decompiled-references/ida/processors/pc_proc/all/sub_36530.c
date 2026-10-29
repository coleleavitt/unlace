bool __fastcall sub_36530(_QWORD *a1, __int64 a2)
{
  __int16 v2; // dx
  bool result; // al
  unsigned __int8 v4; // dl
  __int64 v5; // rdx

  v2 = *(_WORD *)(a2 + 24);
  result = v2 == 6 || v2 == 209;
  if ( result )
  {
    if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 4 && *(_BYTE *)(a2 + 81) == 5 )
    {
      v4 = *(_BYTE *)(a2 + 85);
      if ( v4 == 2 )
      {
        v5 = *(int *)(a2 + 88);
LABEL_13:
        *a1 = v5;
        if ( *(_WORD *)(a2 + 24) == 209 )
          *a1 = -v5;
        return result;
      }
      if ( v4 <= 2u )
      {
        if ( v4 )
          v5 = *(__int16 *)(a2 + 88);
        else
          v5 = *(char *)(a2 + 88);
        goto LABEL_13;
      }
      if ( v4 == 7 )
      {
        v5 = *(_QWORD *)(a2 + 88);
        goto LABEL_13;
      }
    }
    return 0;
  }
  if ( v2 == 92 && *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 4 )
    return (unsigned int)sub_36360(a1, a2, a2 + 80) == 4;
  return result;
}

