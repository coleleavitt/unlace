_QWORD *__fastcall sub_81180(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rbp
  int v6; // r15d
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  bool v12; // zf

  LODWORD(v5) = a4;
  if ( !a4 )
    v5 = *(_QWORD *)(a2 + 48);
  v6 = *(_DWORD *)(a2 + 32);
  v8 = operator new(0x40u);
  v9 = *(_QWORD *)(a2 + 24);
  v10 = v8;
  v11 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v10 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)v10 = off_B23F8;
  *(_QWORD *)(v10 + 16) = v11;
  *(_QWORD *)(v10 + 24) = v9;
  *(_DWORD *)(v10 + 32) = v6;
  *(_QWORD *)(v10 + 40) = a3;
  *(_QWORD *)(v10 + 48) = (unsigned int)v5;
  *(_BYTE *)(v10 + 56) = 1;
  if ( qlseek(v9, a3, 0, off_B23F8) == a3 )
  {
    v12 = *(_QWORD *)(v10 + 48) == 0;
    *(_BYTE *)(v10 + 56) = 1;
    if ( v12 )
      *(_QWORD *)(v10 + 48) = qlsize(*(_QWORD *)(v10 + 24)) - *(_QWORD *)(v10 + 40);
  }
  else
  {
    sub_37FD0(*(__int64 **)(v10 + 8), (__int64)"COFF failed to seek at 0x%llX", a3);
    *(_BYTE *)(v10 + 56) = 0;
  }
  *a1 = v10;
  return a1;
}

