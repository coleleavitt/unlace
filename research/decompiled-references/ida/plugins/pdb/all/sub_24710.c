_QWORD *__fastcall sub_24710(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a2 + 16) + 16LL * *(int *)(a2 + 40);
  v3 = operator new(0x38u);
  v4 = *(_DWORD *)(v2 + 8);
  v5 = *(_QWORD *)v2;
  *(_DWORD *)(v3 + 8) = 1;
  *(_QWORD *)v3 = &off_AA270;
  *(_QWORD *)(v3 + 16) = v5;
  *(_DWORD *)(v3 + 24) = v4;
  *(_QWORD *)(v3 + 32) = 0;
  *a1 = v3;
  *(_OWORD *)(v3 + 40) = 0;
  return a1;
}

