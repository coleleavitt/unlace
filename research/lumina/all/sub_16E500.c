unsigned __int64 __fastcall sub_16E500(__int64 a1, unsigned __int8 a2, __int16 a3, __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rax
  size_t v9; // rax
  size_t v10; // rbp
  void *v12; // rdi
  size_t v13; // r13
  __int64 v14; // rax
  char v15[4096]; // [rsp+0h] [rbp-1038h] BYREF
  _BYTE v16[8]; // [rsp+1000h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+1008h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  sub_166320(a1, a2);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)a1 = &unk_23DC40;
  *(_QWORD *)(a1 + 136) = 0;
  *(_WORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  v7 = (_QWORD *)operator new(0x10u);
  *(_WORD *)(a1 + 104) = a3;
  *v7 = off_23C4F0;
  v7[1] = a1;
  *(_QWORD *)(a1 + 168) = v7;
  sub_194590(v15, 0x1000u);
  v8 = sub_1976D0(v15);
  sub_1998A0(v8, a4, &v16[-v8]);
  v9 = strlen(v15);
  v10 = v9;
  if ( v9 )
  {
    v12 = *(void **)(a1 + 112);
    v13 = v9 + 1;
    if ( *(_QWORD *)(a1 + 128) < v9 + 1 )
    {
      v14 = sub_1987B0(a1 + 112, *(_QWORD *)(a1 + 112), v13, 1);
      *(_QWORD *)(a1 + 112) = v14;
      v12 = (void *)v14;
    }
    *(_QWORD *)(a1 + 120) = v13;
    memmove(v12, v15, v10);
    *(_BYTE *)(*(_QWORD *)(a1 + 112) + v10) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 120) = 0;
  }
  return v17 - __readfsqword(0x28u);
}
