__int64 __fastcall sub_1961D0(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r13d
  __int64 v10; // rbx
  int v11; // r12d
  __int64 v12; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(v2 + 64) != 8 )
    return 0;
  v4 = *(_QWORD *)(v2 + 72);
  if ( *(_DWORD *)(v4 + 284) != 23 )
    return 0;
  v5 = *(_QWORD *)(v4 + 24);
  if ( *(_BYTE *)v5 == 10 )
    v5 = *(_QWORD *)(v5 + 8);
  v6 = sub_195FF0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v5, a2);
  *(_QWORD *)(a1 + 40) = v6;
  if ( v6 != -1 && v6 == *(_QWORD *)(a1 + 48) )
  {
    v9 = *(_DWORD *)(a1 + 56);
    v10 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)v5 = 9;
    v11 = *(_DWORD *)(v5 + 4);
    v12 = j__qalloc_or_throw(24, v5, v7, v8);
    *(_QWORD *)v12 = v10;
    *(_QWORD *)(v12 + 8) = 0;
    *(_DWORD *)(v12 + 16) = v9;
    *(_QWORD *)(v5 + 8) = v12;
    *(_DWORD *)(v5 + 4) = v11;
  }
  return 1;
}

