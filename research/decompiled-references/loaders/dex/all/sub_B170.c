__int64 __fastcall sub_B170(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned int v10; // r13d
  __int64 v11; // rax
  unsigned __int64 v12; // rax

  v1 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v2 = *(_QWORD *)(a1 + 480);
  v3 = v1 - v2;
  v4 = qlseek(*(_QWORD *)(a1 + 472), v2, 0);
  v5 = *(_QWORD *)(a1 + 480);
  if ( v4 == -1
    || (v6 = *(_QWORD *)(a1 + 488) - v5,
        v7 = qlseek(*(_QWORD *)(a1 + 472), 0, 1),
        v5 = *(_QWORD *)(a1 + 480),
        v8 = v7 - v5,
        v8 >= v6) )
  {
    v10 = 0;
  }
  else
  {
    v9 = v6 - v8;
    v10 = 0;
    if ( v9 > 0xF )
    {
      *(_OWORD *)(a1 + 504) = 0;
      *(_QWORD *)(a1 + 568) = 0;
      *(_OWORD *)(a1 + 520) = 0;
      *(_OWORD *)(a1 + 536) = 0;
      *(_OWORD *)(a1 + 552) = 0;
      v11 = qlread(*(_QWORD *)(a1 + 472), a1 + 504, 16);
      v5 = *(_QWORD *)(a1 + 480);
      if ( v11 == 16 && *(_DWORD *)(a1 + 504) == 1179403647 )
      {
        v12 = 52;
        if ( *(_BYTE *)(a1 + 617) )
          v12 = 64;
        LOBYTE(v10) = v9 >= v12;
      }
    }
  }
  qlseek(*(_QWORD *)(a1 + 472), v3 + v5, 0);
  return v10;
}
