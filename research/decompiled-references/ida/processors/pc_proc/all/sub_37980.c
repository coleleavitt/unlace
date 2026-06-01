__int64 __fastcall sub_37980(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r15
  int v5; // r12d
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rsi

  v3 = a2 + 40;
  v5 = 4;
  while ( 1 )
  {
    if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 86) > 2u )
      return 0xFFFFFFFFLL;
    if ( (unsigned __int8)sub_36040(*(_QWORD *)(a2 + 16)) )
      return 0;
    v8 = sub_80350(a1, a2, v3);
    v9 = *(_QWORD *)(a2 + 16);
    if ( v9 == v8 )
      return 0;
    result = sub_35DD0(v8, v9, 1);
    if ( (_DWORD)result != -1 )
      return result;
    if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 87) <= 1u && *(_BYTE *)(a2 + 41) == 2 && !*(_BYTE *)(a2 + 72) )
      break;
    if ( !a3 )
      return 0xFFFFFFFFLL;
    if ( !--v5 || !(unsigned int)decode_insn() )
      return 0;
  }
  return 100;
}

