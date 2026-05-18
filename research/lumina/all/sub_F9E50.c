__int64 __fastcall sub_F9E50(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  int v4; // eax
  int v5; // eax

  while ( a2 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    if ( (v4 & 0x41000) == 0 )
      break;
    if ( (v4 & 0x40000) != 0 )
      a2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL);
    else
      a2 = *(_QWORD *)(a2 + 16);
  }
  while ( a1 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    if ( (v5 & 0x41000) == 0 )
      break;
    if ( (v5 & 0x40000) != 0 )
      a1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    else
      a1 = *(_QWORD *)(a1 + 16);
  }
  return sub_F80F0(0, (char *)a1, a2, a3, a4);
}
