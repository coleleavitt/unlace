__int64 __fastcall sub_45310(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v9; // rsi

  *(_BYTE *)a1 = 0;
  v9 = *(_QWORD *)(a1 + 5504);
  *(_QWORD *)(a1 + 16) = 0;
  if ( !(unsigned int)sub_26EC0(*(_QWORD *)(a1 + 4832), v9, a2, a3, 1) )
  {
    if ( a3 == 824 )
    {
      *(_DWORD *)a4 = 1;
      *(_QWORD *)(a4 + 4) = *(unsigned int *)(a2 + 176);
      *(_QWORD *)(a4 + 28) = *(unsigned int *)(a2 + 164);
      *(_QWORD *)(a4 + 12) = *(unsigned int *)(a2 + 172);
      *(_QWORD *)(a4 + 20) = *(unsigned int *)(a2 + 168);
      *(_QWORD *)(a4 + 52) = *(unsigned int *)(a2 + 160);
      *(_QWORD *)(a4 + 60) = *(unsigned int *)(a2 + 156);
      *(_QWORD *)(a4 + 44) = *(unsigned int *)(a2 + 180);
      *(_QWORD *)(a4 + 36) = *(unsigned int *)(a2 + 196);
      *(_QWORD *)(a4 + 132) = *(unsigned int *)(a2 + 184);
      return 1;
    }
    if ( a3 == 1260 )
    {
      *(_DWORD *)a4 = 1;
      *(_QWORD *)(a4 + 4) = *(_QWORD *)(a2 + 120);
      *(_QWORD *)(a4 + 28) = *(_QWORD *)(a2 + 144);
      *(_QWORD *)(a4 + 12) = *(_QWORD *)(a2 + 128);
      *(_QWORD *)(a4 + 20) = *(_QWORD *)(a2 + 136);
      *(_QWORD *)(a4 + 52) = *(_QWORD *)(a2 + 168);
      *(_QWORD *)(a4 + 60) = *(_QWORD *)(a2 + 176);
      *(_QWORD *)(a4 + 44) = *(_QWORD *)(a2 + 160);
      *(_QWORD *)(a4 + 36) = *(_QWORD *)(a2 + 152);
      *(_QWORD *)(a4 + 132) = *(_QWORD *)(a2 + 248);
      *(_QWORD *)(a4 + 68) = *(_QWORD *)(a2 + 184);
      *(_QWORD *)(a4 + 76) = *(_QWORD *)(a2 + 192);
      *(_QWORD *)(a4 + 84) = *(_QWORD *)(a2 + 200);
      *(_QWORD *)(a4 + 92) = *(_QWORD *)(a2 + 208);
      *(_QWORD *)(a4 + 100) = *(_QWORD *)(a2 + 216);
      *(_QWORD *)(a4 + 108) = *(_QWORD *)(a2 + 224);
      *(_QWORD *)(a4 + 116) = *(_QWORD *)(a2 + 232);
      *(_QWORD *)(a4 + 124) = *(_QWORD *)(a2 + 240);
      return 1;
    }
  }
  sub_45250(a1);
  return 0;
}

