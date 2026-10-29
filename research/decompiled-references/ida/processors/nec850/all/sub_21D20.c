__int64 __fastcall sub_21D20(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  char v9; // r14
  int v10; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v6 = sub_21900(a1, a2, &v10, a4);
  v7 = v6;
  if ( v6 != 5 )
  {
    if ( v6 == 6
      && (~(_BYTE)v10 & 0xB) == 0
      && (unsigned __int8)sub_1F8C0(a1, a3, *(_QWORD *)(a4 + 16) + *(unsigned __int16 *)(a4 + 26), 0) )
    {
      return v7;
    }
    goto LABEL_3;
  }
  v9 = v10;
  if ( (~(_BYTE)v10 & 3) != 0 || !(unsigned __int8)sub_1F8C0(a1, a3, *(_QWORD *)(a4 + 16), 1) )
  {
LABEL_3:
    if ( a3 )
      *a3 = 0;
    return v7;
  }
  if ( a3 && (v9 & 8) == 0 )
    *a3 *= 4LL;
  return v7;
}

