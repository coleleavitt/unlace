unsigned __int64 __fastcall sub_203650(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rdi
  _QWORD vars0[7]; // [rsp+0h] [rbp+0h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  vars0[3] = __readfsqword(0x28u);
  vars0[0] = 0;
  v4 = *(_DWORD **)(v3 + 1504);
  vars0[1] = 0;
  sub_1EFA10(v4, (__int64 *)(v3 + 496), a2, *(_DWORD *)(a2 + 88), vars0, 0);
  cleanup_argloc();
  return sub_1F08B0(*(_QWORD **)(a1 + 56), 0xFFFFFFFFFFFFFFFFLL, 0x1Au);
}

