__int64 __fastcall sub_4CB20(unsigned __int64 *a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax

  v4 = sub_4C640(a1);
  *(_DWORD *)(v4 + 8) = a3;
  v5 = v4;
  v6 = operator new(0x28u);
  *(_DWORD *)v6 = a2;
  v7 = v6;
  *(_QWORD *)(v6 + 8) = 0;
  *(_BYTE *)(v6 + 36) = 0;
  *(_BYTE *)(v6 + 4) = a3 == 0;
  *(_OWORD *)(v6 + 16) = 0;
  if ( a3 == 3 )
  {
    *(_DWORD *)(v5 + 4) = 3;
    v9 = operator new(0x10u);
    *(_BYTE *)(v9 + 8) = 0;
    *(_QWORD *)(v5 + 16) = v9;
    *(_QWORD *)v9 = v7;
    *(_BYTE *)(*(_QWORD *)(v5 + 16) + 8LL) = 1;
    *(_DWORD *)(v7 + 32) = 0;
    *(_BYTE *)(v7 + 36) = 1;
  }
  else
  {
    *(_QWORD *)(v5 + 16) = v6;
    *(_DWORD *)(v5 + 4) = 2;
  }
  return v5;
}

