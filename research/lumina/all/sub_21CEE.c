void __fastcall sub_21CEE(__int64 *a1)
{
  __int64 v1; // r12
  __int64 v2; // r14
  __int64 *i; // r15
  char v4; // al
  unsigned int v5; // r13d
  __int64 v6; // r10
  unsigned int v7; // ebp
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-40h]

  v1 = a1[2];
  v2 = *a1;
  for ( i = (__int64 *)a1[19]; i; i = (__int64 *)*i )
  {
    v4 = *((_BYTE *)a1 + 31);
    v5 = *((_DWORD *)i + 5);
    v6 = *(_QWORD *)(v2 + 32) + 32LL * *((int *)i + 4);
    if ( v4 )
    {
      v8 = v4 - 1;
      *((_BYTE *)a1 + 31) = v8;
      v7 = *((_DWORD *)a1 + v8 + 54);
    }
    else
    {
      v7 = *((_DWORD *)a1 + 14) + 1;
      *((_DWORD *)a1 + 14) = v7;
    }
    v11 = v6;
    sub_E1710(v1, 55, v5 + 2, (unsigned int)(*(_DWORD *)(v1 + 144) + 7), v5);
    sub_F2630(a1, 0, *((unsigned int *)i + 4), *(_QWORD *)(*(_QWORD *)(v11 + 24) + 104LL), 113);
    v9 = sub_E2F10(v1, 5, &unk_1BABF0);
    if ( !v9 )
      break;
    v10 = v5 + 1;
    *(_DWORD *)(v9 + 60) = v7;
    *(_DWORD *)(v9 + 80) = v7;
    *(_DWORD *)(v9 + 4) = v10;
    *(_DWORD *)(v9 + 32) = v10;
    *(_DWORD *)(v9 + 52) = v5 - 1;
    *(_DWORD *)(v9 + 84) = v10;
    *(_WORD *)(v9 + 74) = 8;
    if ( v7 )
      sub_CEFE0(a1, v7, v10);
  }
}
