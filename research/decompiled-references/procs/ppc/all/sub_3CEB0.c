bool __fastcall sub_3CEB0(__int64 a1, _QWORD *a2)
{
  int v2; // edx
  __int64 v3; // rax

  if ( ((*(_WORD *)(a1 + 40) - 231) & 0xFFFB) == 0 )
    goto LABEL_6;
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000FFFFLL) == 0x200000000014LL )
  {
    if ( *(_BYTE *)(a1 + 57) != 11 )
    {
      v2 = 0;
      *a2 = a1 + 56;
      v3 = *(_QWORD *)(a1 + 864);
      if ( *(_BYTE *)(v3 + 41) )
        return *(unsigned __int16 *)(v3 + 46) == v2;
      goto LABEL_7;
    }
LABEL_6:
    v2 = *(unsigned __int16 *)(a1 + 62);
    *a2 = a1 + 96;
    v3 = *(_QWORD *)(a1 + 864);
    if ( *(_BYTE *)(v3 + 41) )
      return *(unsigned __int16 *)(v3 + 46) == v2;
LABEL_7:
    *(_BYTE *)(a1 + 792) = 1;
  }
  return 0;
}
