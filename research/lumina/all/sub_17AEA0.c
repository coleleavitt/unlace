__int64 __fastcall sub_17AEA0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  int *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax

  if ( *(_BYTE *)a2 != 5 )
    return sub_176730((unsigned __int8 *)a1, (unsigned __int8 *)a2);
  v4 = operator new(0x38u);
  v5 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v6 = v4;
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 24) = v4 + 8;
  *(_QWORD *)(v4 + 32) = v4 + 8;
  *(_QWORD *)(v4 + 40) = 0;
  v7 = *(int **)(v5 + 16);
  if ( v7 )
  {
    v8 = sub_17ACD0(v7, v4 + 8);
    v9 = v8;
    do
    {
      v10 = v9;
      v9 = *(_QWORD *)(v9 + 16);
    }
    while ( v9 );
    *(_QWORD *)(v6 + 24) = v10;
    v11 = v8;
    do
    {
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 24);
    }
    while ( v11 );
    *(_QWORD *)(v6 + 32) = v12;
    v13 = *(_QWORD *)(v5 + 40);
    *(_QWORD *)(v6 + 16) = v8;
    *(_QWORD *)(v6 + 40) = v13;
  }
  v14 = *(_DWORD *)(v5 + 52);
  *(_DWORD *)(v6 + 48) = 1;
  *(_DWORD *)(v6 + 52) = v14;
  sub_176520(a1);
  *(_BYTE *)a1 = 5;
  *(_QWORD *)(a1 + 8) = v6;
  return 0;
}
