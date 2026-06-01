__int64 __fastcall sub_1CE210(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 208;
  *(_QWORD *)(v2 - 208) = &off_4D8F30;
  sub_119360(v2);
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_QWORD *)a1 = &off_4D74D8;
  return sub_4005B0(a1);
}

