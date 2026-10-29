__int64 __fastcall sub_79790(__int64 a1)
{
  unsigned __int16 v1; // ax
  unsigned int v2; // ebx

  v1 = *(_WORD *)(*(_QWORD *)(a1 + 144) + 544LL);
  if ( v1 == 0xFFFF )
    v1 = 3;
  v2 = v1;
  if ( (*(_DWORD *)debug & 0x400000) != 0 )
    sub_29350();
  return v2;
}

