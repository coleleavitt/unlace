__int64 __fastcall sub_BB20(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = *((unsigned __int8 *)word_1791A + (a3 >> 1));
  v3 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = v3 + 40;
  *(_BYTE *)(v3 + 41) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (a3 & 1) == 0 ? 6 : 10;
  return 1;
}

