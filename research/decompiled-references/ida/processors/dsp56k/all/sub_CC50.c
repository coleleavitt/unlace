__int64 __fastcall sub_CC50(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = (a3 & 8) == 0 ? 6 : 10;
  v3 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = v3 + 40;
  *(_BYTE *)(v3 + 41) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = -(a3 & 1) & 3;
  return 1;
}

