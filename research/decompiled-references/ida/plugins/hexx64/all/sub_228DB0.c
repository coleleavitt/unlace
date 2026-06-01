__int64 __fastcall sub_228DB0(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  unsigned int v4; // ebp
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  signed __int64 v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a2 + 88);
  v7[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 25) & 1) != 0 || a1[18] <= a3 && (a1[21] <= a3 || sub_228C90((__int64)a1, a2, a4)) )
  {
    if ( (unsigned __int8)sub_1C34E0(a2, &v6, v7, v4, a4) )
      return ((LODWORD(v7[0]) + *(_DWORD *)(a1[188] + 80LL) - 1) & -*(_DWORD *)(a1[188] + 80LL)) - (unsigned int)v6;
  }
  return v4;
}

