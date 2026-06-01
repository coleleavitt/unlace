__int64 __fastcall sub_79F0(__int64 a1)
{
  void *v1; // rax

  *(_DWORD *)(a1 + 232) = 480;
  v1 = (void *)qcalloc();
  *(_QWORD *)(a1 + 224) = v1;
  memcpy(v1, &qword_FE60, 120LL * *(int *)(a1 + 232));
  return sub_78C0(a1);
}

