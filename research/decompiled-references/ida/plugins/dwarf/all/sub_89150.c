__int64 __fastcall sub_89150(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // ebp
  int v6; // eax
  signed __int32 v7; // edx

  v5 = *(_DWORD *)(a2 + 8);
  v6 = qlread(a1, a3, v5);
  v7 = debug & 0x400000;
  if ( v5 == v6 )
  {
    if ( v7 )
      sub_88B80((__int64)"Section loaded (%d bytes).\n", v5);
    return 0;
  }
  else
  {
    if ( v7 )
      sub_88B80((__int64)"Couldn't read %d bytes of data (read %d).\n", v5, v6);
    *a4 = 10;
    return 1;
  }
}

