__int64 __fastcall sub_B910(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360);
  *(_BYTE *)(v1 + 41) = 8;
  *(_QWORD *)(v1 + 48) = *((unsigned int *)qword_1B740 + (get_byte() & 7));
  return 1;
}

