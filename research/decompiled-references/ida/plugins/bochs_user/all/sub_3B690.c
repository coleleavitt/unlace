__int64 __fastcall sub_3B690(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &off_71C68;
  *(_WORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  return 0;
}

