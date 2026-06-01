__int64 __fastcall sub_3F9C10(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  unsigned __int8 v4; // r13
  char v6; // al
  int v7; // r14d
  __int64 result; // rax

  v4 = 7;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) != 8 )
    v4 = 2;
  v6 = *(_BYTE *)(a2 + 1);
  if ( v6 == 4 )
  {
    sub_3F8AD0(a1, (unsigned __int8 *)a2, v4, *(_QWORD *)(a2 + 16), a3);
    if ( *(_BYTE *)(a2 + 33) == 14 )
      sub_3F0130(a1, a3);
    return a3;
  }
  v7 = *(unsigned __int8 *)(a2 + 32);
  if ( v7 == 147 && (v6 != 3 || *(_BYTE *)(a2 + 33) || *(_QWORD *)(a2 + 8) || (*(_BYTE *)(a1 + 52) & 0xB0) != 0) )
    sub_3F5420(a1, a4);
  result = sub_3F9740(a1, (unsigned __int8 *)a2, v7, a3, a4);
  if ( (*(_BYTE *)(a1 + 52) & 0x10) != 0 )
  {
    sub_3F6E70(a1, 5u, v4, (int)result, 0x3BEA45E214ADDC55LL, (int)a3, a4, 0, 0);
    return a3;
  }
  return result;
}

