__int64 __fastcall sub_3F44C0(__int64 a1, __int64 *a2, int a3, unsigned int a4, double a5)
{
  _WORD *v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  int *v11; // rcx
  __int64 v12; // rsi
  int *v13; // rax
  unsigned int v14; // r12d
  const void *v15; // rbx
  int v16; // r13d
  size_t v17; // rax
  size_t v18; // r8
  __int64 v19; // rax
  void *v20; // rdi
  size_t v21; // rdx
  __int64 v22; // rax
  size_t v23; // [rsp+0h] [rbp-48h]
  size_t v24; // [rsp+0h] [rbp-48h]
  size_t v25; // [rsp+8h] [rbp-40h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD18u, a5);
LABEL_29:
    BUG();
  }
  if ( a3 <= 6 )
  {
    if ( a2 )
    {
      v8 = (_WORD *)*a2;
      if ( (unsigned __int64)a2[2] <= 2 )
      {
        v19 = qvector_reserve();
        *a2 = v19;
        v8 = (_WORD *)v19;
      }
      a2[1] = 3;
      *v8 = 26211;
      *(_BYTE *)(*a2 + 2) = 0;
      if ( a3 )
        sub_F68D0(a2);
    }
    return a4;
  }
  v10 = *(_QWORD *)(a1 + 736);
  if ( !v10 || (v11 = (int *)(a1 + *(_QWORD *)v10), *(_QWORD *)v10 == 692) )
  {
LABEL_27:
    if ( !under_debugger )
      sub_37E160(0xCC05u, a5);
    goto LABEL_29;
  }
  while ( 1 )
  {
    v12 = *(_QWORD *)(v10 + 16);
    v13 = v11;
    v11 = (int *)(a1 + v12);
    if ( a3 < *(_DWORD *)(a1 + v12) )
      break;
    v10 += 16;
    if ( v12 == 692 )
      goto LABEL_27;
  }
  v14 = *(char *)(v10 + 15);
  if ( a2 )
  {
    v15 = (const void *)(v10 + 8);
    v16 = *v13;
    v17 = strlen((const char *)(v10 + 8));
    v18 = v17;
    if ( v17 )
    {
      v20 = (void *)*a2;
      v21 = v17 + 1;
      if ( a2[2] < v17 + 1 )
      {
        v24 = v17 + 1;
        v25 = v17;
        v22 = qvector_reserve();
        v18 = v25;
        v21 = v24;
        *a2 = v22;
        v20 = (void *)v22;
      }
      a2[1] = v21;
      v23 = v18;
      memmove(v20, v15, v18);
      *(_BYTE *)(*a2 + v23) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    if ( a3 != v16 )
      sub_F68D0(a2);
  }
  result = a4;
  if ( (int)v14 <= (int)a4 )
    return v14;
  return result;
}

