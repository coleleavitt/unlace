__int64 __fastcall sub_C8C0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  size_t v11; // r12
  const char *v12; // rsi
  __int128 v13; // kr00_16
  void *v14; // rdi
  __int64 v15; // rax
  void *v16; // [rsp+0h] [rbp-458h] BYREF
  __int128 v17; // [rsp+8h] [rbp-450h]
  char src; // [rsp+20h] [rbp-438h] BYREF
  __int64 v19; // [rsp+21h] [rbp-437h]
  unsigned __int64 v20; // [rsp+428h] [rbp-30h]

  v5 = a4;
  v20 = __readfsqword(0x28u);
  v6 = netnode_supval(a2, a3, &src, 1024, a4);
  if ( v6 >= 0 )
  {
    v9 = v6;
    if ( v6 == 9 )
    {
      if ( !src )
      {
        netnode_qgetblob(v19, a1, 1, 0, v5 | 0x400u);
        return 1;
      }
      v16 = nullptr;
      v11 = 8;
      v17 = 0;
    }
    else
    {
      if ( !v6 )
        return 1;
      v16 = nullptr;
      v12 = nullptr;
      v17 = 0;
      v11 = v6 - 1;
      v13 = 0u;
      if ( v6 == 1 )
      {
LABEL_8:
        v14 = *(void **)a1;
        v15 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)a1 = v12;
        *(_OWORD *)(a1 + 8) = v13;
        v16 = v14;
        *((_QWORD *)&v17 + 1) = v15;
        if ( v14 )
          qfree(v14, v12, *((_QWORD *)&v13 + 1), (_QWORD)v13, v7, v8, v16, 0, *((_QWORD *)&v17 + 1));
        return 1;
      }
    }
    v16 = (void *)qvector_reserve(&v16, 0, v6, 1);
    *(_QWORD *)&v17 = v9;
    memmove(v16, &src, v11);
    *((_BYTE *)v16 + v11) = 0;
    v12 = (const char *)v16;
    v13 = v17;
    goto LABEL_8;
  }
  return 0;
}

