_QWORD *__fastcall sub_7C2D0(_QWORD *a1, const void ***a2)
{
  const void **v3; // rdx
  _BYTE *v4; // r14
  _BYTE *v5; // rax
  _BYTE *v6; // r14
  _BYTE *v7; // rax
  _BYTE *v8; // r13
  _BYTE *v9; // rax
  bool v10; // cc
  __int64 v12; // r12
  size_t v13; // rbx
  size_t v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r13
  size_t v17; // rbx
  size_t v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r13
  size_t v22; // rbx
  size_t v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // [rsp+28h] [rbp-98h] BYREF
  __int128 v27; // [rsp+30h] [rbp-90h]
  __int64 v28; // [rsp+48h] [rbp-78h] BYREF
  __int128 v29; // [rsp+50h] [rbp-70h]
  __int64 v30; // [rsp+68h] [rbp-58h] BYREF
  __int128 v31; // [rsp+70h] [rbp-50h]
  unsigned __int64 v32; // [rsp+80h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v27 = 0;
  v26 = 0;
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
        v16 = v27;
        v17 = v5 - v4 - 1;
        v18 = v17;
        if ( (_QWORD)v27 )
        {
          v16 = v27 - 1;
          v18 = v17 + v27 - 1;
        }
        v19 = v26;
        v20 = v18 + 1;
        if ( *((_QWORD *)&v27 + 1) < v18 + 1 )
        {
          v26 = qvector_reserve((__int64)&v26, v26, v20, 1);
          v20 = v18 + 1;
          v19 = v26;
        }
        *(_QWORD *)&v27 = v20;
        *(_BYTE *)(v19 + v18) = 0;
        memmove((void *)(v16 + v26), v4, v17);
      }
      v3 = *a2;
      break;
    }
  }
  v28 = 0;
  v29 = 0;
  v6 = *v3;
  v7 = *v3;
  while ( v7 < v3[1] )
  {
    if ( !*v7++ )
    {
      *v3 = v7;
      if ( v6 )
      {
        v21 = v29;
        v22 = v7 - v6 - 1;
        v23 = v22;
        if ( (_QWORD)v29 )
        {
          v21 = v29 - 1;
          v23 = v22 + v29 - 1;
        }
        v24 = v28;
        v25 = v23 + 1;
        if ( *((_QWORD *)&v29 + 1) < v23 + 1 )
        {
          v28 = qvector_reserve((__int64)&v28, v28, v25, 1);
          v25 = v23 + 1;
          v24 = v28;
        }
        *(_QWORD *)&v29 = v25;
        *(_BYTE *)(v24 + v23) = 0;
        memmove((void *)(v21 + v28), v6, v22);
      }
      v3 = *a2;
      break;
    }
  }
  v30 = 0;
  v31 = 0;
  v8 = *v3;
  v9 = *v3;
  while ( v9 < v3[1] )
  {
    if ( !*v9++ )
    {
      *v3 = v9;
      if ( v8 )
      {
        v12 = v31;
        v13 = v9 - v8 - 1;
        v14 = v13;
        if ( (_QWORD)v31 )
        {
          v12 = v31 - 1;
          v14 = v13 + v31 - 1;
        }
        v15 = v30;
        if ( *((_QWORD *)&v31 + 1) < v14 + 1 )
        {
          v30 = qvector_reserve((__int64)&v30, v30, v14 + 1, 1);
          v15 = v30;
        }
        *(_QWORD *)&v31 = v14 + 1;
        *(_BYTE *)(v15 + v14) = 0;
        memmove((void *)(v12 + v30), v8, v13);
      }
      break;
    }
  }
  v10 = (unsigned __int64)v27 <= 1;
  *a1 = 0;
  if ( !v10 )
    deserialize_tinfo();
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  return a1;
}

