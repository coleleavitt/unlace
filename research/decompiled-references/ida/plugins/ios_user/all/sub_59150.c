__int64 __fastcall sub_59150(__int64 a1, unsigned __int64 a2)
{
  *(_QWORD *)a1 = &unk_8DA08;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 48) = a2;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 56) = operator new[](a2);
  *(_QWORD *)(a1 + 240) = 0;
  return sub_590D0(a1);
}

