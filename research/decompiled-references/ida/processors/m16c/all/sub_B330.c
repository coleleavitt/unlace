__int64 __fastcall sub_B330(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int next_dword; // eax

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v1 + 41) = 5;
  next_dword = insn_get_next_dword();
  *(_BYTE *)(v1 + 45) = 2;
  *(_QWORD *)(v1 + 48) = next_dword;
  return 1;
}

