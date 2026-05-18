_QWORD *__fastcall sub_3FC90(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rbx
  size_t v10; // r13
  _QWORD *v11; // rdx
  _QWORD *v12; // rbp
  _BOOL4 v13; // eax
  _QWORD *v14; // rdi
  void *v16; // rdi
  void *v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // si

  v5 = operator new(0x40u);
  v8 = *a3;
  *(_QWORD *)(v5 + 32) = 0;
  v9 = v5;
  *(_OWORD *)(v5 + 40) = 0;
  v10 = *(_QWORD *)(v8 + 8);
  if ( v10 )
  {
    v17 = (void *)sub_198760(*(_QWORD *)(v8 + 8));
    *(_QWORD *)(v9 + 32) = v17;
    *(_QWORD *)(v9 + 48) = v10;
    memcpy(v17, *(const void **)v8, v10);
    *(_QWORD *)(v9 + 40) = v10;
  }
  *(_DWORD *)(v9 + 56) = 0;
  v12 = sub_3FA10(a1, a2, v9 + 32, v6, v7);
  if ( v11 )
  {
    v13 = 1;
    v14 = a1 + 1;
    if ( !v12 && v11 != v14 )
    {
      v18 = *(_QWORD *)(v9 + 40);
      v19 = v11[5];
      v20 = v19;
      if ( v18 <= v19 )
        v20 = *(_QWORD *)(v9 + 40);
      if ( v20 )
      {
        v21 = 0;
        while ( 1 )
        {
          v22 = *(_BYTE *)(*(_QWORD *)(v9 + 32) + v21);
          v23 = *(_BYTE *)(v11[4] + v21);
          if ( v22 < v23 )
          {
            v13 = 1;
            goto LABEL_5;
          }
          if ( v23 < v22 )
            break;
          if ( v20 == ++v21 )
            goto LABEL_20;
        }
        v13 = 0;
      }
      else
      {
LABEL_20:
        v13 = v18 < v19;
      }
    }
LABEL_5:
    v12 = (_QWORD *)v9;
    std::_Rb_tree_insert_and_rebalance(v13, v9, v11, a1 + 1);
    ++a1[5];
    return v12;
  }
  if ( !v9 )
    return v12;
  v16 = *(void **)(v9 + 32);
  if ( v16 )
  {
    *(_QWORD *)(v9 + 40) = 0;
    j__free(v16);
  }
  operator delete((void *)v9, 0x40u);
  return v12;
}
