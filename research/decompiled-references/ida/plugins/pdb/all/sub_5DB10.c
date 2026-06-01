__int64 __fastcall sub_5DB10(__int64 a1, __int64 a2)
{
  *(_WORD *)a2 = 20;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 96);
  return 0;
}

