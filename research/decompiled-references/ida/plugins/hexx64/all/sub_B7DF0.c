__int64 __fastcall sub_B7DF0(__int64 a1, unsigned int a2, __int64 a3, double a4)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // r14
  char v8; // bl
  __int64 v10; // rdx
  unsigned int *v11; // rbx
  unsigned int *i; // r14
  unsigned int v13; // edx
  __int64 v14; // rdi
  char v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 (__fastcall **v19)(); // [rsp+10h] [rbp-88h] BYREF
  __int64 v20; // [rsp+18h] [rbp-80h]
  __int64 v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+28h] [rbp-70h]
  __int64 v23; // [rsp+30h] [rbp-68h]
  char v24; // [rsp+38h] [rbp-60h]
  __int64 v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 320);
  v6 = *(_DWORD *)(v5 + 64);
  if ( a2 )
  {
    v7 = *(_QWORD *)(v5 + 784);
    v19 = nullptr;
    v20 = 0;
    sub_64190((__int64 *)&v19, a2, a4);
    v8 = sub_6FC30(v7, (__int64 *)&v19, 0, v6 - 1, a4);
    qfree((__int64)v19);
    if ( v8 )
      return 0;
    v5 = *(_QWORD *)(a1 + 320);
    v6 = *(_DWORD *)(v5 + 64);
  }
  if ( a2 >= v6 )
    sub_B7BA0(a4);
  v10 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8LL * a2);
  v11 = *(unsigned int **)(v10 + 368);
  for ( i = &v11[*(_QWORD *)(v10 + 376)]; i != v11; v5 = *(_QWORD *)(a1 + 320) )
  {
    v13 = *v11;
    v14 = *(_QWORD *)(v5 + 784);
    v19 = nullptr;
    v20 = 0;
    v15 = sub_6FC30(v14, (__int64 *)&v19, v13, a2, a4);
    qfree((__int64)v19);
    if ( v15 )
      return 0;
    ++v11;
  }
  v20 = 0;
  v19 = &off_4DC0E0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = a3;
  v26 = a1 + 64;
  v16 = *(_QWORD *)(v5 + 1544);
  v17 = v16 + 80LL * *(_QWORD *)(v5 + 1552);
  if ( v16 == v17 )
    return 0;
  while ( !(unsigned int)sub_11E9B0(v16, (__int64)&v19, 0, 0) )
  {
    v16 += 80;
    if ( v17 == v16 )
      return 0;
  }
  return 1;
}

