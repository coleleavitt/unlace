__int64 __fastcall sub_191610(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  int v6; // r13d
  __int64 v7; // rbx
  int v8; // r12d
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(v1 + 64) != 8 )
    return 0;
  v3 = *(_QWORD *)(v1 + 72);
  if ( *(_DWORD *)(v3 + 284) != 23 )
    return 0;
  v4 = *(_QWORD *)(v3 + 24);
  if ( *(_BYTE *)v4 == 10 )
    v4 = *(_QWORD *)(v4 + 8);
  v5 = sub_191430(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v4);
  *(_QWORD *)(a1 + 40) = v5;
  if ( v5 != -1 && v5 == *(_QWORD *)(a1 + 48) )
  {
    v6 = *(_DWORD *)(a1 + 56);
    v7 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)v4 = 9;
    v8 = *(_DWORD *)(v4 + 4);
    v9 = j__qalloc_or_throw();
    *(_QWORD *)v9 = v7;
    *(_QWORD *)(v9 + 8) = 0;
    *(_DWORD *)(v9 + 16) = v6;
    *(_QWORD *)(v4 + 8) = v9;
    *(_DWORD *)(v4 + 4) = v8;
  }
  return 1;
}

