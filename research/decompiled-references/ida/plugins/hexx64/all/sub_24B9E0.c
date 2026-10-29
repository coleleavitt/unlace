_QWORD *__fastcall sub_24B9E0(__int64 a1, __int64 a2, int a3, char a4, double a5)
{
  __int64 v7; // rax
  int v8; // edx
  __int64 *v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rbp
  _QWORD v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a1 + 328);
  v8 = *(_DWORD *)(a2 + 36);
  v17[1] = __readfsqword(0x28u);
  sub_32C150(v17, *(_QWORD *)(v7 + 112), v8);
  v10 = *(__int64 **)(a2 + 24);
  v11 = sub_249AF0(a1, v10, a2 + 32, v17, v17, 0, a5);
  v14 = j__qalloc_or_throw(64, (__int64)v10, v12, v13);
  *(_QWORD *)v14 = -1;
  *(_DWORD *)(v14 + 8) = a3;
  *(_QWORD *)(v14 + 12) = -1;
  *(_QWORD *)(v14 + 24) = v11;
  *(_QWORD *)(v14 + 32) = 0;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 48) = 0;
  *(_DWORD *)(v14 + 56) = 4;
  *(_QWORD *)v14 = *(_QWORD *)(a2 + 24);
  v15 = sub_24AE20(a1, a2, v14, v17, a4, a5);
  clear_tinfo_t();
  return v15;
}

