void *__fastcall sub_11E50(__int64 a1, double a2)
{
  void *result; // rax
  bool v4; // zf
  _QWORD *v5; // rax
  void *v6; // rdx
  void *v7; // r12
  size_t v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  size_t v11; // rbp
  size_t v12; // r13
  void *v13; // rdi
  __int64 v14; // rax

  result = (void *)netnode_altval(*(_QWORD *)(a1 + 120), -1, 65);
  v4 = *(_BYTE *)(a1 + 360) == 0;
  *(_WORD *)(a1 + 344) = (_WORD)result;
  if ( v4 )
  {
    result = (void *)netnode_qsupstr(**(_QWORD **)(a1 + 216), a1 + 136, -1, 83);
    if ( (__int64)result > 0 )
      return (void *)sub_10A50(a1 + 128, 0, a2);
  }
  else if ( *(_QWORD *)(a1 + 144) )
  {
    v7 = *(void **)(a1 + 136);
    if ( v7 )
    {
      v8 = strlen(*(const char **)(a1 + 136));
      v11 = v8;
      if ( v8 )
      {
        v12 = v8 + 1;
        v13 = v7;
        if ( *(_QWORD *)(a1 + 152) < v8 + 1 )
        {
          v14 = qvector_reserve(a1 + 136, v7, v8 + 1, 1, v9, v10);
          *(_QWORD *)(a1 + 136) = v14;
          v13 = (void *)v14;
        }
        *(_QWORD *)(a1 + 144) = v12;
        memmove(v13, v7, v11);
        *(_BYTE *)(*(_QWORD *)(a1 + 136) + v11) = 0;
        v5 = *(_QWORD **)(a1 + 216);
        if ( *(_QWORD *)(a1 + 144) )
          v6 = *(void **)(a1 + 136);
        else
          v6 = &unk_1D228;
        goto LABEL_5;
      }
LABEL_4:
      v5 = *(_QWORD **)(a1 + 216);
      v6 = &unk_1D228;
      *(_QWORD *)(a1 + 144) = 0;
LABEL_5:
      netnode_supset(*v5, -1, v6, 0, 83);
      return (void *)sub_10A50(a1 + 128, -2147483641, a2);
    }
  }
  else
  {
    result = &unk_1D228;
    if ( &unk_1D228 )
      goto LABEL_4;
  }
  return result;
}

