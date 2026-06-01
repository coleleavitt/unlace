unsigned __int64 __fastcall sub_57430(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbp
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r12
  const void *v7; // rbp
  void *v8; // rax
  void *v9; // r13
  void *v10; // rdi
  __int64 v11; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  src = nullptr;
  v13 = 0;
  if ( (unsigned __int8)sub_97CA0(&src, *a2, a1 + 1) )
  {
    v3 = v13;
    if ( (unsigned __int64)v13 <= 1 )
    {
LABEL_3:
      a1[44] = 0;
      goto LABEL_4;
    }
    v9 = src;
    v10 = (void *)a1[43];
    if ( a1[45] < (unsigned __int64)v13 )
    {
      v11 = qvector_reserve(a1 + 43, a1[43], v13, 1);
      a1[43] = v11;
      v10 = (void *)v11;
    }
    a1[44] = v3;
    memmove(v10, v9, v3 - 1);
    *(_BYTE *)(a1[43] + v3 - 1) = 0;
  }
  else
  {
    v5 = a1 + 43;
    if ( a1 + 43 != a2 )
    {
      v6 = a2[1];
      if ( v6 < 2 )
        goto LABEL_3;
      v7 = (const void *)*a2;
      v8 = (void *)a1[43];
      if ( a1[45] < v6 )
      {
        v8 = (void *)qvector_reserve(v5, a1[43], v6, 1);
        a1[43] = v8;
      }
      a1[44] = v6;
      memmove(v8, v7, v6 - 1);
      *(_BYTE *)(a1[43] + v6 - 1) = 0;
    }
  }
LABEL_4:
  if ( src )
  {
    *(_QWORD *)&v13 = 0;
    qfree(src);
  }
  return v14 - __readfsqword(0x28u);
}

