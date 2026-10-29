__int64 __fastcall sub_1303F0(_QWORD *a1)
{
  __int64 v1; // rdx
  int v2; // eax

  if ( (unsigned int)sub_1577B0(a1[4], *(_QWORD *)(a1[1] + 1504LL), 0, 0, 0, 0, 0) )
  {
    v1 = a1[2];
    v2 = *(_DWORD *)(v1 + 24);
    BYTE1(v2) &= ~2u;
    LOBYTE(v2) = v2 | 0x80;
    *(_DWORD *)(v1 + 24) = v2;
  }
  return 0;
}

