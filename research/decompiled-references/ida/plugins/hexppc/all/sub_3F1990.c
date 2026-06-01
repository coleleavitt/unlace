unsigned __int64 __fastcall sub_3F1990(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // eax

  v3 = -1;
  if ( (*(_QWORD *)(a1 + 112) & 0x1F) != 0 )
    v3 = (1LL << (*(_BYTE *)(a1 + 112) & 0x1F)) - 1;
  v4 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
    v4 = 7;
  return sub_3E9CF0(a1, v3, v4, a2);
}

