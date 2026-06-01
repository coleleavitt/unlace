__int64 __fastcall sub_19D90(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = *(unsigned __int8 *)(a1 + 83);
  if ( (_BYTE)v2 && (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 1 )
  {
    sub_18640(a1, (__int64)"Prepare fake PROCESS_ATTACHED event\n");
    *(_DWORD *)(a1 + 84) = 11;
    return v2;
  }
  v2 = sub_19C30(a1, a2);
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 2 )
    return v2;
  *(_BYTE *)(a1 + 81) = 1;
  sub_19810(a1);
  return v2;
}

