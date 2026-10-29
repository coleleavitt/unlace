__int64 __fastcall sub_7950(__int64 a1, __int64 a2, char a3)
{
  __int16 v3; // dx

  v3 = *((unsigned __int8 *)&dword_F464 + (a3 & 3));
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 0;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v3;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

