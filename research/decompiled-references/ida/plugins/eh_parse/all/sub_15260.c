__int64 __fastcall sub_15260(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  __int64 result; // rax
  __int64 v6; // rdx
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_WORD *)(a2 + 24);
  v7[1] = __readfsqword(0x28u);
  if ( v3 == 159 )
  {
    result = sub_150B0(a1, a2);
    if ( result == -1 )
      return a3;
  }
  else
  {
    if ( v3 != 122 )
    {
      if ( v3 == 92 && (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x100 && !*(_BYTE *)(a2 + 112) )
        return sub_14940(a1, a2, (_QWORD *)(a2 + 80));
LABEL_5:
      if ( !sub_13BC0(a2, 0, 0) )
        return a3;
      return -1;
    }
    if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) != 0x100 || *(_BYTE *)(a2 + 81) != 5 )
      goto LABEL_5;
    v7[0] = -1;
    sub_7FF0(0xBC4u, v7, a2, a2 + 80);
    result = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    v6 = *(_QWORD *)(a2 + 88) + 16LL * v7[0];
    if ( v6 != result )
    {
      result &= v6;
      if ( v6 == -1 )
        return -1;
    }
  }
  return result;
}

