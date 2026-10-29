__int64 __fastcall hexrays_deregister_python_clearable_instance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // r9d
  __int64 v12; // rbp
  __int64 v13; // rbx
  int v14; // edx
  __int64 v15; // rax
  char v16; // [rsp+0h] [rbp-28h]
  char v17; // [rsp+0h] [rbp-28h]

  debug_hexrays_ctree(1, (int)"maybe de-registering %p\n", a1, a4, a5, a6, v16);
  if ( (_QWORD)xmmword_24638 )
  {
    v8 = 0;
    v9 = 0;
    while ( *(_QWORD *)(qword_24630 + v8) != a1 )
    {
      ++v9;
      v8 += 16;
      if ( v9 == (_QWORD)xmmword_24638 )
        goto LABEL_6;
    }
    debug_hexrays_ctree(1, (int)"de-registered %p\n", a1, qword_24630, v6, v7, v17);
    memmove((void *)(v8 + qword_24630), (const void *)(v8 + qword_24630 + 16), 16 * xmmword_24638 - 16 - v8);
    *(_QWORD *)&xmmword_24638 = xmmword_24638 - 1;
  }
LABEL_6:
  result = sub_6B10(2);
  if ( (_DWORD)result )
  {
    v12 = xmmword_24638;
    if ( (_QWORD)xmmword_24638 )
    {
      v13 = 0;
      do
      {
        v14 = v13;
        v15 = qword_24630 + 16 * v13++;
        result = debug_hexrays_ctree(2, (int)"\t#%3d: %p (%d)\n", v14, *(_QWORD *)v15, *(_DWORD *)(v15 + 8), v11, v17);
      }
      while ( v12 != v13 );
    }
  }
  return result;
}

