__int64 __fastcall sub_173720(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, double a5)
{
  __int64 v7; // rdi
  void (*v9)(); // rax
  __int64 v10; // rax
  int *v11; // rbx
  __int64 v12; // r14
  unsigned __int8 v14; // [rsp+Fh] [rbp-49h]
  __int64 v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a1 + 1504);
  v15[3] = __readfsqword(0x28u);
  v9 = *(void (**)())(*(_QWORD *)v7 + 80LL);
  if ( v9 != nullsub_36 )
    ((void (__fastcall *)(__int64, __int64, _QWORD *))v9)(v7, a1, a4);
  if ( !(unsigned __int8)sub_64880(a4) || a4[3] )
    return 0;
  v10 = *(_QWORD *)(a3 + 8);
  v11 = *(int **)a3;
  v15[0] = 0;
  v12 = *(_QWORD *)(a1 + 784);
  v15[1] = 0;
  if ( 4 * v10 )
  {
    do
      sub_64190(v15, *v11++, a5);
    while ( v11 != (int *)(*(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8)) );
  }
  if ( sub_64930(v15, 0) )
  {
    qfree(v15[0]);
    return 0;
  }
  v14 = sub_6FC30(v12, v15, 0, a2, a5);
  qfree(v15[0]);
  return v14;
}

