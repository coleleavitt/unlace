__int64 __fastcall sub_B9A0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx

  v3 = *((int *)qword_17920 + (a3 & 0xF));
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 5;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = v3;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

