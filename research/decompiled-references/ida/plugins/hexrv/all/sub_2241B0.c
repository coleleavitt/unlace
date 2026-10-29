__int64 __fastcall sub_2241B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v5; // [rsp+8h] [rbp-30h] BYREF
  signed __int64 v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a2 + 88);
  v6[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 25) & 1) != 0 || a1[18] <= a3 && (a1[21] <= a3 || sub_224090((__int64)a1, a2)) )
  {
    if ( (unsigned __int8)sub_1BEE60(a2, &v5, v6, v3) )
      return ((LODWORD(v6[0]) + *(_DWORD *)(a1[188] + 80LL) - 1) & -*(_DWORD *)(a1[188] + 80LL)) - (unsigned int)v5;
  }
  return v3;
}

