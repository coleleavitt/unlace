__int64 __fastcall sub_14D30(__int64 a1, const char *a2)
{
  size_t v3; // rax
  unsigned __int64 v4; // r13
  size_t v5; // r12
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // r12
  void *v9; // rax
  const char *v11; // rax
  const char *v12; // rbp
  size_t v13; // rax
  size_t v14; // r13
  size_t v15; // r12
  void *v16; // rax
  _BOOL8 v17; // r12
  size_t v18; // rax
  size_t v19; // rbp
  void *v20; // rdi
  _BYTE *v21; // [rsp+20h] [rbp-1078h]
  __int64 v22; // [rsp+40h] [rbp-1058h]

  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    v21 = (_BYTE *)qvector_reserve();
    memmove(v21, a2, v5);
    v21[v5] = 0;
    if ( v4 > 1 && *v21 == 126 && (unsigned __int8)qgetenv() )
    {
      v22 = 0;
      v17 = v4 != 1;
      v18 = v4 - 1 - v17;
      v19 = v18;
      if ( v18 )
      {
        v20 = nullptr;
        if ( v18 != -1 )
        {
          v22 = qvector_reserve();
          v20 = (void *)v22;
        }
        memmove(v20, &v21[v17], v19);
        *(_BYTE *)(v22 + v19) = 0;
      }
      v11 = (const char *)qmakepath();
      *(_QWORD *)a1 = 0;
      v12 = v11;
      *(_OWORD *)(a1 + 8) = 0;
      if ( v11 )
      {
        v13 = strlen(v11);
        v14 = v13 + 1;
        v15 = v13;
        v16 = (void *)qvector_reserve();
        *(_QWORD *)a1 = v16;
        *(_QWORD *)(a1 + 8) = v14;
        memmove(v16, v12, v15);
        *(_BYTE *)(*(_QWORD *)a1 + v15) = 0;
      }
      if ( v22 )
        qfree();
    }
    else
    {
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v6 = strlen(a2);
      v7 = v6 + 1;
      v8 = v6;
      v9 = (void *)qvector_reserve();
      *(_QWORD *)a1 = v9;
      *(_QWORD *)(a1 + 8) = v7;
      memmove(v9, a2, v8);
      *(_BYTE *)(*(_QWORD *)a1 + v8) = 0;
    }
    if ( v21 )
      qfree();
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
  }
  return a1;
}

