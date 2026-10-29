__int64 __fastcall sub_DC800(__int64 a1, int a2)
{
  int v2; // r12d
  int v3; // r13d
  unsigned int v5; // eax
  int v6; // edx

  v2 = 0;
  if ( !(unsigned __int8)sub_60E40((_QWORD *)(a1 + 160)) )
    v2 = sub_611C0((_QWORD *)(a1 + 160)) + 1;
  v3 = 0;
  if ( !(unsigned __int8)sub_60E40((_QWORD *)(a1 + 144)) )
    v3 = sub_611C0((_QWORD *)(a1 + 144)) + 1;
  if ( (getinf() & 0xF) != 6 )
    return 1;
  v5 = getinf_flag();
  if ( (_BYTE)v5 )
    return 1;
  LOBYTE(v5) = v2 + a2 != 0;
  LOBYTE(v6) = v3 == 1;
  return v6 & v5;
}

