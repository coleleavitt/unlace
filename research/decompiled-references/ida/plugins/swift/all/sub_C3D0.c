__int64 __fastcall sub_C3D0(__int64 a1, int *a2)
{
  unsigned __int64 v3; // r12
  size_t v4; // r14
  __int64 v5; // r13
  size_t v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // r12
  size_t v11; // r14
  __int64 v12; // r13
  size_t v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rax
  const char *v16; // r15
  size_t v17; // rax
  __int64 v18; // rbp
  size_t v19; // r12
  __int64 v20; // r13
  __int64 v21; // rsi
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( *((_QWORD *)a2 + 4) )
  {
    sub_C3D0(&src);
    v3 = v27;
    if ( v27 )
    {
      v4 = v27 - 1;
      if ( v27 != 1 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        v6 = v27 - 1;
        if ( v5 )
        {
          --v5;
          v6 = v4 + v5;
          v3 = v27 + v5;
        }
        v7 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v3 )
        {
          v24 = qvector_reserve(a1, v7, v3, 1);
          *(_QWORD *)a1 = v24;
          v7 = v24;
        }
        *(_QWORD *)(a1 + 8) = v3;
        *(_BYTE *)(v7 + v6) = 0;
        memcpy((void *)(v5 + *(_QWORD *)a1), src, v4);
      }
    }
    if ( src )
    {
      v27 = 0;
      qfree(src);
    }
  }
  v8 = *((_QWORD *)a2 + 2);
  if ( v8 > 1 )
  {
    sub_C310((__int64 *)a1, (__int64)"%d", v8 - 1);
    v10 = *((_QWORD *)a2 + 2);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v10 != 1 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        v13 = v10 - 1;
        if ( v12 )
        {
          --v12;
          v13 = v11 + v12;
          v10 += v12;
        }
        v14 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v10 )
        {
          v25 = qvector_reserve(a1, v14, v10, 1);
          *(_QWORD *)a1 = v25;
          v14 = v25;
        }
        *(_QWORD *)(a1 + 8) = v10;
        *(_BYTE *)(v14 + v13) = 0;
        memcpy((void *)(v12 + *(_QWORD *)a1), *((const void **)a2 + 1), v11);
      }
    }
    v15 = *a2;
    if ( (int)v15 > 4 )
    {
      v18 = *(_QWORD *)(a1 + 8);
      v19 = 2;
      v16 = "XY";
      v20 = 2;
      if ( !v18 )
        goto LABEL_23;
    }
    else
    {
      v16 = (&off_28560)[v15];
      if ( !v16 )
        return a1;
      v17 = strlen((&off_28560)[v15]);
      v18 = *(_QWORD *)(a1 + 8);
      v19 = v17;
      v20 = v17;
      if ( !v18 )
      {
LABEL_23:
        v21 = *(_QWORD *)a1;
        v22 = v20 + 1;
        if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v20 + 1) )
        {
LABEL_24:
          *(_QWORD *)(a1 + 8) = v22;
          *(_BYTE *)(v21 + v20) = 0;
          memmove((void *)(v18 + *(_QWORD *)a1), v16, v19);
          return a1;
        }
LABEL_27:
        v23 = qvector_reserve(a1, v21, v22, 1);
        *(_QWORD *)a1 = v23;
        v21 = v23;
        goto LABEL_24;
      }
    }
    --v18;
    v21 = *(_QWORD *)a1;
    v20 = v18 + v19;
    v22 = v18 + v19 + 1;
    if ( *(_QWORD *)(a1 + 16) >= v22 )
      goto LABEL_24;
    goto LABEL_27;
  }
  return a1;
}

