__int64 __fastcall sub_EB030(__int64 a1, size_t a2)
{
  void *v3; // rdi
  int v4; // edi

  v3 = *(void **)(a1 + 104);
  if ( v3 )
  {
    a2 = *(_QWORD *)(a1 + 88);
    off_241390(v3, a2);
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v4 = *(_DWORD *)(a1 + 24);
  if ( v4 >= 0 )
  {
    if ( off_241180(v4) )
    {
      a2 = 37416;
      sub_EAE20(a1, 0x9228u);
    }
    *(_DWORD *)(a1 + 24) = -1;
  }
  sub_C91C0(*(_QWORD *)(a1 + 48), a2);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 112) = 0;
  memset(
    (void *)((a1 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 8) & 0xFFFFFFF8) + 120) >> 3));
  return 0;
}
