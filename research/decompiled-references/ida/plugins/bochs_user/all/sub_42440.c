__int64 __fastcall sub_42440(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  size_t v4; // rax
  size_t v6; // r13
  size_t v7; // rbp
  void *v8; // rax
  char v9[4104]; // [rsp+8h] [rbp-1038h] BYREF
  unsigned __int64 v10; // [rsp+1010h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  v10 = __readfsqword(0x28u);
  memset(v9, 0, 0x1000u);
  sub_4C8B0(qword_753F8 + 64, v3, (unsigned int)v9, 4096, 0, 0, 0);
  v4 = strlen(v9);
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  if ( v4 )
  {
    v6 = v4 + 1;
    v7 = v4;
    v8 = (void *)qvector_reserve();
    *(_QWORD *)(a2 + 8) = v8;
    *(_QWORD *)(a2 + 16) = v6;
    memmove(v8, v9, v7);
    *(_BYTE *)(*(_QWORD *)(a2 + 8) + v7) = 0;
  }
  return 0;
}

