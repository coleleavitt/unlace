__int64 __fastcall sub_1C0430(int *a1, int a2, __int64 a3, __m128i *a4)
{
  __int64 v4; // rbx
  _QWORD vars0[9]; // [rsp+0h] [rbp+0h] BYREF

  v4 = a3;
  vars0[3] = __readfsqword(0x28u);
  vars0[0] = 0;
  vars0[1] = 0;
  sub_32B320(a3, vars0);
  LODWORD(v4) = sub_1C0380(a1, a2, (__int64)vars0, *(_DWORD *)(v4 + 12), a4);
  cleanup_argloc();
  return (unsigned int)v4;
}

