__int64 __fastcall sub_240F50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6, int a7)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax

  v10 = j__qalloc_or_throw(64, a2, a3, a4);
  *(_QWORD *)(v10 + 12) = -1;
  v11 = v10;
  *(_QWORD *)v10 = a4;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  *(_DWORD *)(v10 + 8) = 61;
  *(_OWORD *)(v10 + 24) = 0;
  v13 = j__qalloc_or_throw(48, a2, v12, a4);
  *(_BYTE *)(v13 + 12) = a5;
  *(_WORD *)(v13 + 14) = 0;
  *(_QWORD *)v13 = 0;
  *(_DWORD *)(v13 + 8) = 0;
  *(_BYTE *)(v13 + 13) = 0;
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 40) = 0;
  *(_OWORD *)(v13 + 24) = 0;
  *(_QWORD *)(v11 + 24) = v13;
  sub_240A20(v11, a1, a3, a2, a7, a6, 0.0);
  return v11;
}

