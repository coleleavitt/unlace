__int64 __fastcall sub_B080(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int16 next_word; // ax

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v1 + 41) = 5;
  next_word = insn_get_next_word();
  *(_BYTE *)(v1 + 45) = 1;
  *(_QWORD *)(v1 + 48) = next_word;
  return 1;
}

