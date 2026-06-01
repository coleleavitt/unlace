__int64 __fastcall sub_25AE0(__int64 a1, _DWORD **a2, int a3, _DWORD *a4, unsigned int a5, unsigned int *a6)
{
  _DWORD *v9; // rdi
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v9 = *(_DWORD **)(a1 + 8);
  v12[1] = __readfsqword(0x28u);
  v12[0] = 0;
  sub_25690(v9, a3, 0, (int *)v12);
  return sub_22950(
           *(_QWORD *)(a1 + 8),
           LODWORD(v12[0]),
           (unsigned int)(HIDWORD(v12[0]) - LODWORD(v12[0])),
           a2,
           a4,
           a5,
           a6);
}

