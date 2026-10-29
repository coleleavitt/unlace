__int64 __fastcall sub_14850(__int64 a1, int *a2, __int64 a3, __int16 a4, unsigned int a5, char a6)
{
  __int64 v6; // rax

  v6 = a1 + 40LL * *a2;
  *(_BYTE *)(v6 + 41) = 3;
  *(_BYTE *)(v6 + 45) = a6;
  *(_WORD *)(v6 + 46) = a4;
  *(_QWORD *)(v6 + 48) = a5;
  ++*a2;
  return 1;
}

