__int64 __fastcall sub_B8A80(__int64 a1, signed __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // eax
  __int64 v12; // r9
  signed __int64 v13; // r8
  int v14; // eax
  int v15; // edx

  v6 = *(_DWORD *)(a1 + 16);
  v12 = -1;
  v13 = 0x7FFFFFFFFFFFFFFFLL;
  if ( (v6 & 0xF) != 5 )
  {
    if ( (v6 & 0x3000000) == 0x1000000 )
    {
      v12 = 255;
      v13 = 127;
    }
    else if ( (v6 & 0x3000000) == 0x2000000 )
    {
      v12 = 0xFFFF;
      v13 = 0x7FFF;
    }
    else
    {
      v12 = 0xFFFFFFFFLL;
      v13 = 0x7FFFFFFF;
    }
  }
  v14 = v6 & 0xF000000;
  v15 = v14 & a6;
  if ( (v14 & a5) != 0 )
  {
    if ( !v15 )
      v12 = 0;
    return sub_B87E0(a2, a3, a4, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), v12);
  }
  else if ( v15 )
  {
    return sub_B87E0(a2, a3, a4, 0, v12, v12);
  }
  else
  {
    return sub_B87E0(a2, a3, a4, ~v13, v13, 0);
  }
}
