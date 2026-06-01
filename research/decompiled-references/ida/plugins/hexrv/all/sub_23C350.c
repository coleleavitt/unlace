__int64 __fastcall sub_23C350(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax

  v10 = j__qalloc_or_throw();
  *(_QWORD *)(v10 + 12) = -1;
  v11 = v10;
  *(_QWORD *)v10 = a4;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  *(_DWORD *)(v10 + 8) = 61;
  *(_OWORD *)(v10 + 24) = 0;
  v12 = j__qalloc_or_throw();
  *(_BYTE *)(v12 + 12) = a5;
  *(_WORD *)(v12 + 14) = 0;
  *(_QWORD *)v12 = 0;
  *(_DWORD *)(v12 + 8) = 0;
  *(_BYTE *)(v12 + 13) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 40) = 0;
  *(_OWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v11 + 24) = v12;
  sub_23BE20(v11, a1, a3, a2, a7, a6);
  return v11;
}

