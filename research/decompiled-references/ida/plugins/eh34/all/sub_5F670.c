__int64 __fastcall sub_5F670(__int64 a1)
{
  __int64 v2; // rbp
  void *v3; // rdi

  v2 = *(_QWORD *)(a1 + 240);
  *(_BYTE *)(a1 + 138) = 6;
  *(_QWORD *)(a1 + 176) = -1;
  *(_QWORD *)(a1 + 280) = -1;
  *(_WORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  while ( v2 )
  {
    sub_5F4A0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  *(_BYTE *)(a1 + 272) = 1;
  *(_QWORD *)(a1 + 248) = a1 + 232;
  *(_QWORD *)(a1 + 256) = a1 + 232;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 296) = 0;
  *(_WORD *)(a1 + 300) = 0;
  return 0;
}

