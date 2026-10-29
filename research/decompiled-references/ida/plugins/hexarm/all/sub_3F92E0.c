unsigned __int64 __fastcall sub_3F92E0(__int64 a1, int a2, int a3, int a4, int a5, unsigned int a6, double a7, char a8)
{
  __int64 v11; // rcx
  int v12; // r13d
  unsigned __int8 v13; // r12
  char v14; // dl
  unsigned __int8 v15; // si
  int v16; // r14d
  int v20; // [rsp+1Ch] [rbp-3Ch]

  v11 = *(_QWORD *)(a1 + 832);
  v12 = *(_DWORD *)(v11 + 620);
  if ( (a8 & 0x40) != 0 )
  {
    v13 = 8;
    v14 = 8;
  }
  else
  {
    v13 = *(_BYTE *)(a1 + 69);
    v14 = v13;
  }
  v15 = *(_BYTE *)(a1 + 109);
  if ( v15 != v14 )
  {
    v16 = *(_DWORD *)(v11 + 624);
    v20 = a4;
    sub_3F8F20(a1, v15, v13, a3, v12, (a8 & 0x20) != 0);
    sub_3F8F20(a1, v15, v13, v20, v16, (a8 & 0x20) != 0);
    a4 = v16;
    a3 = v12;
  }
  sub_3F6E70(a1, 0xEu, v13, a3, a4, v12, a7, 0, 1);
  if ( a6 )
    sub_3F6E70(a1, a6, v13, a5, v12, v12, a7, 0, 1);
  if ( (a8 & 0x40) != 0 )
    return sub_3F8910(a1, 0xBu, v12, a2, 16);
  else
    return sub_3F6E70(a1, 4u, v13, v12, 0x3BEA45E214ADDC55LL, a2, a7, 0, 1);
}

