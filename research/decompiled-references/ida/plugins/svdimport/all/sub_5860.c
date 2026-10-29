__int64 *__fastcall sub_5860(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v5; // r9
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 *result; // rax
  __int64 *v12; // rbx
  unsigned __int64 v13; // rbp
  const void *v14; // r13
  __int64 *v15; // rdi
  __int64 v16; // rax

  v5 = *(_QWORD **)(a1 + 4280);
  v6 = v5[11];
  if ( !v6 )
    goto LABEL_15;
  v7 = v5 + 10;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 16);
      v9 = *(_QWORD *)(v6 + 24);
      if ( a5 <= *(_DWORD *)(v6 + 32) )
        break;
      v6 = *(_QWORD *)(v6 + 24);
      if ( !v9 )
        goto LABEL_6;
    }
    v7 = (_QWORD *)v6;
    v6 = *(_QWORD *)(v6 + 16);
  }
  while ( v8 );
LABEL_6:
  if ( v5 + 10 == v7 || a5 < *((_DWORD *)v7 + 8) || (v10 = v7[5], v10 == -1) )
  {
LABEL_15:
    result = *a2;
    (*a2)[1] = 0;
  }
  else
  {
    result = &qword_1C320;
    if ( v10 < v5[6] )
      result = (__int64 *)(v5[5] + 80 * v10);
    v12 = *a2;
    if ( *a2 != result + 6 )
    {
      v13 = result[7];
      if ( v13 > 1 )
      {
        v14 = (const void *)result[6];
        v15 = (__int64 *)*v12;
        if ( v12[2] < v13 )
        {
          v16 = qvector_reserve();
          *v12 = v16;
          v15 = (__int64 *)v16;
        }
        v12[1] = v13;
        memmove(v15, v14, v13 - 1);
        result = (__int64 *)*v12;
        *(_BYTE *)(*v12 + v13 - 1) = 0;
      }
      else
      {
        v12[1] = 0;
      }
    }
  }
  return result;
}

