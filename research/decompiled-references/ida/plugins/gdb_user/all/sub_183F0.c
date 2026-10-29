__int64 __fastcall sub_183F0(__int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned int v4; // r13d
  unsigned __int64 v5; // rax

  qlseek();
  if ( qlseek() == -1
    || (v1 = *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480), v2 = qlseek() - *(_QWORD *)(a1 + 480), v2 >= v1) )
  {
    v4 = 0;
  }
  else
  {
    v3 = v1 - v2;
    v4 = 0;
    if ( v3 > 0xF )
    {
      *(_OWORD *)(a1 + 504) = 0;
      *(_QWORD *)(a1 + 568) = 0;
      *(_OWORD *)(a1 + 520) = 0;
      *(_OWORD *)(a1 + 536) = 0;
      *(_OWORD *)(a1 + 552) = 0;
      if ( qlread() == 16 && *(_DWORD *)(a1 + 504) == 1179403647 )
      {
        v5 = 52;
        if ( *(_BYTE *)(a1 + 617) )
          v5 = 64;
        LOBYTE(v4) = v3 >= v5;
      }
    }
  }
  qlseek();
  return v4;
}

