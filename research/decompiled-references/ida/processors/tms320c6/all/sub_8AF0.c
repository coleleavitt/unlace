__int64 __fastcall sub_8AF0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  int v4; // r8d
  unsigned int v6; // eax
  unsigned int v7; // [rsp+0h] [rbp-20h]
  unsigned int v8; // [rsp+10h] [rbp-10h]
  int v9; // [rsp+14h] [rbp-Ch]

  v3 = (a3 >> 5) & 0x7F;
  v4 = (a3 >> 12) & 1;
  if ( (_DWORD)v3 != 2 )
  {
    if ( (unsigned int)v3 > 0x74 )
    {
      if ( (_DWORD)v3 != 118 )
        return sub_89B0(a1, a2, a3, (__int64)qword_FAA0 + 6 * v3, (a3 & 0x1000) != 0);
    }
    else if ( (unsigned int)v3 <= 0x6F )
    {
      if ( (_DWORD)v3 == 26 )
        return sub_89B0(a1, a2, a3, (__int64)qword_F9E0 + 6 * ((a3 >> 13) & 0x1F), (a3 & 0x1000) != 0);
      return sub_89B0(a1, a2, a3, (__int64)qword_FAA0 + 6 * v3, (a3 & 0x1000) != 0);
    }
    *(_BYTE *)(a2 + 32) += 2;
    return sub_89B0(a1, a2, a3, (__int64)qword_FAA0 + 6 * v3, (a3 & 0x1000) != 0);
  }
  if ( (a3 & 0x20000) == 0 )
    return sub_89B0(a1, a2, a3, (__int64)&qword_FAA0[1] + 4, v4);
  v9 = (a3 >> 12) & 1;
  v8 = a3;
  v6 = sub_89B0(a1, a2, a3, (__int64)qword_F9C0, (a3 & 0x1000) != 0);
  a3 = v8;
  LOBYTE(v4) = v9;
  if ( !v6 )
    return sub_89B0(a1, a2, a3, (__int64)&qword_FAA0[1] + 4, v4);
  *(_QWORD *)(a2 + 48) = -*(_QWORD *)(a2 + 48);
  v7 = v6;
  sub_7210(a2);
  return v7;
}

