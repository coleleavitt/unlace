__int64 __fastcall sub_3F8CD0(__int64 a1, double a2, __m128 a3, __m128 a4)
{
  _QWORD v5[47]; // [rsp+0h] [rbp-178h] BYREF

  v5[45] = __readfsqword(0x28u);
  qmemcpy(v5, (const void *)(a1 + 24), 0x168u);
  LOWORD(v5[3]) = 46;
  BYTE1(v5[5]) = 5;
  v5[6] = 128;
  return sub_3F7F00(a1, (__int64)v5, 0, a2, a3, a4);
}

