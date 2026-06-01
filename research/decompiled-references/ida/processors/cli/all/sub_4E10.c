__int64 *__fastcall sub_4E10(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  size_t v7; // r13
  __int64 v8; // r13
  __int128 v9; // kr00_16
  __int64 v10; // rdi
  void *v11; // rdi
  size_t v12; // rax
  void *v13; // [rsp+0h] [rbp-468h] BYREF
  __int128 v14; // [rsp+8h] [rbp-460h]
  char src; // [rsp+20h] [rbp-448h] BYREF
  __int64 v16; // [rsp+21h] [rbp-447h]
  unsigned __int64 v17; // [rsp+428h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v4 = netnode_supval(*(_QWORD *)(a2 + 144), a3, &src, 1024, 98);
  v5 = v4;
  if ( v4 == 9 )
  {
    if ( !src )
    {
      netnode_qgetblob(v16, a1, 1, 0, 1122);
      return a1;
    }
    v13 = nullptr;
    v7 = 8;
    v14 = 0;
    goto LABEL_6;
  }
  if ( v4 <= 0 )
    return a1;
  v8 = 0;
  v13 = nullptr;
  v14 = 0;
  v12 = v4 - 1;
  v9 = 0u;
  if ( v12 )
  {
    v7 = v12;
LABEL_6:
    v13 = (void *)qvector_reserve(&v13, 0, v5, 1);
    *(_QWORD *)&v14 = v5;
    memmove(v13, &src, v7);
    *((_BYTE *)v13 + v7) = 0;
    v8 = (__int64)v13;
    v9 = v14;
  }
  v10 = *a1;
  v13 = nullptr;
  v14 = 0;
  if ( v10 )
  {
    a1[1] = 0;
    qfree();
    v11 = v13;
    *a1 = v8;
    *(_OWORD *)(a1 + 1) = v9;
    if ( v11 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
  }
  else
  {
    *a1 = v8;
    *(_OWORD *)(a1 + 1) = v9;
  }
  return a1;
}

