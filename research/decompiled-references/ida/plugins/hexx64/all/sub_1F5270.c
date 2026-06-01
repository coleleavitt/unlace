void __fastcall sub_1F5270(__int64 a1, int a2, double a3, __m128 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // rdi
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // rax

  sub_1F5100(a1, a2);
  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 784);
    v10 = *(_DWORD *)(v9 + 48);
    if ( (v10 & 1) != 0 )
    {
      if ( (v10 & 2) != 0 )
        return;
      goto LABEL_5;
    }
    v12 = (_QWORD *)sub_110340(v9, 0, v5, v6, v7, v8, a3, a4);
    if ( v12 )
      sub_105140(v12, *(_QWORD *)(a1 + 1504), a2);
    v9 = *(_QWORD *)(a1 + 784);
    if ( (*(_DWORD *)(v9 + 48) & 2) == 0 )
    {
LABEL_5:
      v11 = (_QWORD *)sub_1108E0(v9, 0, v5, v6, v7, v8, a3, a4);
      if ( v11 )
        sub_105140(v11, *(_QWORD *)(a1 + 1504), a2);
    }
  }
}

