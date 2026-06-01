__int64 __fastcall sub_2D800(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r15
  unsigned __int64 v6; // rbp
  int v9; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-40h]

  v3 = a1[19];
  v4 = *(unsigned __int16 *)(a2 + 26);
  v10 = __readfsqword(0x28u);
  v5 = a1[18];
  v6 = *(_QWORD *)(a2 + 16) + v4;
  if ( v6 < *(_QWORD *)(v3 + 8) )
  {
    do
    {
      if ( !(unsigned int)decode_insn() )
        break;
      if ( a3 != -1 )
      {
        v9 = a3;
        if ( (unsigned int)sub_73130(v5, a2, &v9, 1) != -1 )
          break;
      }
      if ( *(_BYTE *)(a2 + 32) == 33
        && *(_WORD *)(a2 + 24) == 122
        && (*(_BYTE *)(a2 + 41) == 2 && !*(_QWORD *)(a2 + 56) || *(_BYTE *)(a2 + 81) == 2 && !*(_QWORD *)(a2 + 96))
        || !(unsigned __int8)sub_27390(a1, a2) && !(unsigned __int8)sub_2D330((__int64)a1, a2, nullptr) )
      {
        return 1;
      }
      v6 += *(unsigned __int16 *)(a2 + 26);
    }
    while ( v6 < *(_QWORD *)(a1[19] + 8LL) );
  }
  return 0;
}

