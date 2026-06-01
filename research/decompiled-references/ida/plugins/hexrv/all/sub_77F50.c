_QWORD *__fastcall sub_77F50(_QWORD *a1, const void ***a2)
{
  const void **v3; // rdx
  _BYTE *v4; // r14
  _BYTE *v5; // rax
  _BYTE *v6; // r14
  _BYTE *v7; // rax
  _BYTE *v8; // r13
  _BYTE *v9; // rax
  size_t v11; // rbx
  _BYTE *v12; // rsi
  size_t v13; // rbx
  _BYTE *v14; // rsi
  unsigned __int64 v15; // rdx
  size_t v16; // rbx
  _BYTE *v17; // rsi
  _BYTE *v18; // [rsp+28h] [rbp-98h]
  unsigned __int64 v19; // [rsp+30h] [rbp-90h]
  _BYTE *v20; // [rsp+48h] [rbp-78h]
  _BYTE *v21; // [rsp+68h] [rbp-58h]

  v19 = 0;
  v18 = nullptr;
  v3 = *a2;
  v4 = **a2;
  v5 = v4;
  while ( v5 < (*a2)[1] )
  {
    if ( !*v5++ )
    {
      *v3 = v5;
      if ( v4 )
      {
        v13 = v5 - v4 - 1;
        v14 = nullptr;
        v15 = v13 + 1;
        if ( v13 != -1 )
        {
          v18 = (_BYTE *)qvector_reserve();
          v15 = v13 + 1;
          v14 = v18;
        }
        v19 = v15;
        v14[v13] = 0;
        memmove(v18, v4, v13);
      }
      v3 = *a2;
      break;
    }
  }
  v20 = nullptr;
  v6 = *v3;
  v7 = *v3;
  while ( v7 < v3[1] )
  {
    if ( !*v7++ )
    {
      *v3 = v7;
      if ( v6 )
      {
        v16 = v7 - v6 - 1;
        v17 = nullptr;
        if ( v16 != -1 )
        {
          v20 = (_BYTE *)qvector_reserve();
          v17 = v20;
        }
        v17[v16] = 0;
        memmove(v20, v6, v16);
      }
      v3 = *a2;
      break;
    }
  }
  v21 = nullptr;
  v8 = *v3;
  v9 = *v3;
  while ( v9 < v3[1] )
  {
    if ( !*v9++ )
    {
      *v3 = v9;
      if ( v8 )
      {
        v11 = v9 - v8 - 1;
        v12 = nullptr;
        if ( v11 != -1 )
        {
          v21 = (_BYTE *)qvector_reserve();
          v12 = v21;
        }
        v12[v11] = 0;
        memmove(v21, v8, v11);
      }
      break;
    }
  }
  *a1 = 0;
  if ( v19 > 1 )
    deserialize_tinfo();
  if ( v21 )
    qfree();
  if ( v20 )
    qfree();
  if ( v18 )
    qfree();
  return a1;
}

