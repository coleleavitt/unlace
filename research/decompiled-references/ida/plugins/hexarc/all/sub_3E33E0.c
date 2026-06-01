__int64 __fastcall sub_3E33E0(_QWORD *a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v8; // rbx

  v8 = j__qalloc_or_throw();
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 72) = 0;
  sub_329320(v8, a2);
  *(_DWORD *)(v8 + 56) = a3;
  *(_BYTE *)(v8 + 48) = 1;
  *(_DWORD *)v8 = 44;
  *(_DWORD *)(v8 + 52) = 4;
  sub_11A350(v8 + 32, *(_QWORD *)(a1[60] + 112LL), a4, 4, -1, 0);
  *(_BYTE *)(v8 + 64) = 7;
  *(_DWORD *)(v8 + 72) = a5;
  return sub_AEBD0(a1, v8);
}

