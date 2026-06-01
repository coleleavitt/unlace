__int64 __fastcall sub_CAB0(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned __int8 next_byte; // al
  __int64 v5; // rbx
  unsigned int next_dword; // eax
  __int64 v7; // rbx
  unsigned __int16 next_word; // ax

  if ( a2 == 1 )
  {
    v7 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
    *(_BYTE *)(v7 + 41) = 5;
    next_word = insn_get_next_word();
    *(_BYTE *)(v7 + 45) = 1;
    *(_QWORD *)(v7 + 48) = next_word;
  }
  else if ( a2 == 2 )
  {
    v5 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
    *(_BYTE *)(v5 + 41) = 5;
    next_dword = insn_get_next_dword();
    *(_BYTE *)(v5 + 45) = 2;
    *(_QWORD *)(v5 + 48) = next_dword;
  }
  else
  {
    result = 0;
    if ( a2 )
      return result;
    v3 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
    *(_BYTE *)(v3 + 41) = 5;
    next_byte = insn_get_next_byte();
    *(_BYTE *)(v3 + 45) = 0;
    *(_QWORD *)(v3 + 48) = next_byte;
  }
  return 1;
}

