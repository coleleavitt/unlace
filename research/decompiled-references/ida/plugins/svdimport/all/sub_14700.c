__int64 __fastcall sub_14700(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // r12
  _QWORD *v8; // r13
  const char *v9; // rdi
  const char *v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rbp
  __int64 v13; // rbx
  char v14; // bl
  _QWORD *v15; // rdx
  _QWORD *v16; // rbx
  const char *v17; // r12
  _QWORD *v18; // r15
  const char *v19; // rdi
  unsigned __int8 v22; // [rsp+Fh] [rbp-69h]
  _BYTE *v24; // [rsp+20h] [rbp-58h] BYREF
  __int128 v25; // [rsp+28h] [rbp-50h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 56);
  v26 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(a1 + 48);
  v5 = &v4[20 * v3];
  if ( v4 == v5 )
    return 0;
  v6 = a2[13];
  v8 = *(_QWORD **)(a1 + 48);
  while ( 1 )
  {
    v11 = v8[1];
    v12 = v8;
    if ( v6 )
    {
      v9 = s1;
      v10 = (const char *)a2[12];
      if ( !v11 )
        goto LABEL_4;
      goto LABEL_9;
    }
    if ( !v11 )
      break;
    v10 = s1;
LABEL_9:
    v9 = (const char *)*v8;
LABEL_4:
    if ( !strcmp(v9, v10) )
      break;
    v8 += 20;
    if ( v5 == v8 )
      return 0;
  }
  v22 = 0;
  if ( v8 )
  {
    do
    {
      v25 = 0;
      v24 = nullptr;
      v13 = a2[15];
      v24 = (_BYTE *)qvector_reserve();
      *(_QWORD *)&v25 = 1;
      *v24 = 0;
      v14 = sub_13FD0(a1, v12 + 17, (size_t *)&v24, v13, (__int64)a2, a3);
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree();
      }
      v22 |= v14;
      if ( v12[13] <= 1u )
        break;
      v15 = *(_QWORD **)(a1 + 48);
      v16 = &v15[20 * *(_QWORD *)(a1 + 56)];
      if ( v15 == v16 )
        break;
      v17 = (const char *)v12[12];
      v18 = *(_QWORD **)(a1 + 48);
      while ( 1 )
      {
        v12 = v18;
        v19 = s1;
        if ( v18[1] )
          v19 = (const char *)*v18;
        if ( !strcmp(v19, v17) )
          break;
        v18 += 20;
        if ( v16 == v18 )
          return v22;
      }
    }
    while ( v18 );
  }
  return v22;
}

