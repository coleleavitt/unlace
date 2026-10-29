__int64 __fastcall sub_CA70(__int64 a1)
{
  __int64 v1; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 6;
  v1 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 248) = v1 + 40;
  *(_BYTE *)(v1 + 41) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = 10;
  return 1;
}

