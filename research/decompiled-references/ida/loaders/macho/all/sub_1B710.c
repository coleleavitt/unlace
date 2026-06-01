__int64 __fastcall sub_1B710(__int64 a1, __int64 a2, unsigned __int64 a3, size_t a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  int v15; // ebx
  __int64 result; // rax
  unsigned int v17; // r12d
  __int64 v18; // rsi
  char *v19; // rax
  __int64 v20; // rdx
  bool v21; // dl
  unsigned __int64 v22; // [rsp+0h] [rbp-98h]
  unsigned int v23; // [rsp+0h] [rbp-98h]
  __int64 v24; // [rsp+10h] [rbp-88h]
  char *v25; // [rsp+18h] [rbp-80h]
  char *v28; // [rsp+40h] [rbp-58h]

  if ( *(_DWORD *)(a6 + 32) != 1 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  if ( *(_QWORD *)(a2 + 16) && !(unsigned __int8)rangeset_t_has_common() )
    return 0;
  v9 = *(unsigned __int64 **)(a1 + 528);
  v10 = &v9[4 * *(_QWORD *)(a1 + 536)];
  if ( v9 == v10 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v11 = *v9;
    if ( a3 >= *v9 && v9[1] >= a3 - v11 )
      break;
    v9 += 4;
    if ( v10 == v9 )
      return 0xFFFFFFFFLL;
  }
  v12 = v9[2] + a3 - v11;
  if ( v12 == -1 || qlseek() != v12 )
    return 0xFFFFFFFFLL;
  v28 = nullptr;
  if ( a4 )
  {
    v28 = (char *)qvector_reserve();
    memset(v28, 0, a4);
  }
  v13 = qlread();
  if ( v13 <= 0 )
  {
    result = 0xFFFFFFFFLL;
    if ( v28 )
      goto LABEL_19;
    return result;
  }
  v24 = 4;
  v25 = &v28[v13];
  if ( *(_BYTE *)(a1 + 773) )
    v24 = 8;
  v22 = 0;
  v14 = *(unsigned int *)(a6 + 64);
LABEL_14:
  if ( v22 < v14 )
  {
    while ( 1 )
    {
      v15 = *(unsigned __int8 *)(a5 + v22);
      if ( (_BYTE)v15 )
        break;
LABEL_16:
      if ( ++v22 >= v14 )
        goto LABEL_17;
    }
    v17 = 0;
    while ( 1 )
    {
      if ( _bittest(&v15, v17) )
      {
        v18 = 32 * v22 + (int)(4 * v17);
        if ( v25 < &v28[v18 + v24] )
        {
          v14 = *(unsigned int *)(a6 + 64);
          goto LABEL_16;
        }
        v19 = &v28[v18];
        if ( *(_BYTE *)(a1 + 773) )
          v20 = *(_QWORD *)v19;
        else
          v20 = *(unsigned int *)v19;
        result = (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a2)(a2, a3 + v18, v20);
        v21 = (_DWORD)result == 0;
        if ( ++v17 == 8 )
        {
LABEL_29:
          ++v22;
          if ( (_DWORD)result )
            goto LABEL_18;
          v14 = *(unsigned int *)(a6 + 64);
          goto LABEL_14;
        }
      }
      else
      {
        ++v17;
        v21 = 1;
        result = 0;
        if ( v17 == 8 )
          goto LABEL_29;
      }
      if ( !v21 )
        goto LABEL_29;
    }
  }
LABEL_17:
  result = 0;
LABEL_18:
  if ( v28 )
  {
LABEL_19:
    v23 = result;
    qfree();
    return v23;
  }
  return result;
}

