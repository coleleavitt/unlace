unsigned __int64 __fastcall sub_58B20(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v3; // rdi
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned int v6; // eax
  _QWORD *v7; // rdx
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // [rsp+8h] [rbp-40h] BYREF
  __int64 v16; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v1 = a1[5];
  v17 = __readfsqword(0x28u);
  while ( v1 )
  {
    sub_546C0(*(_QWORD **)(v1 + 24));
    v3 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = a1[2];
  a1[5] = 0;
  a1[6] = a1 + 4;
  a1[7] = a1 + 4;
  a1[8] = 0;
  v15 = netnode_supfirst(v4, 65);
  v5 = v15;
  while ( v15 != -1 )
  {
    v6 = netnode_altval(a1[2], v5, 65);
    v7 = (_QWORD *)a1[5];
    v8 = v6;
    if ( v7 )
    {
      v9 = v15;
      v10 = a1 + 4;
      do
      {
        while ( 1 )
        {
          v11 = v7[2];
          v12 = v7[3];
          if ( v7[4] < v15 )
            break;
          v10 = v7;
          v7 = (_QWORD *)v7[2];
          if ( !v11 )
            goto LABEL_9;
        }
        v7 = (_QWORD *)v7[3];
      }
      while ( v12 );
LABEL_9:
      if ( v10 != a1 + 4 && v15 >= v10[4] )
        goto LABEL_12;
    }
    else
    {
      v10 = a1 + 4;
    }
    v16 = (__int64)&v15;
    v10 = sub_53410(a1 + 3, v10, (unsigned __int64 **)&v16);
    v9 = v15;
LABEL_12:
    v10[5] = v8;
    v15 = netnode_supnext(a1[2], v9, 65);
    v5 = v15;
  }
  if ( !netnode_altval(a1[2], 1, 83) )
  {
    v14 = a1[2];
    v16 = 0x7FFFFFFFFFFFFFFFLL;
    netnode_supset(v14, 1, &v16, 8, 83);
  }
  return v17 - __readfsqword(0x28u);
}

