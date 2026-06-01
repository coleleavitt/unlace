void __fastcall hexrays_register_python_clearable_instance(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  char v6; // bl
  __int64 v8; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // r9d
  __int64 v15; // rbp
  __int64 v16; // rbx
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // [rsp-18h] [rbp-18h]
  char v21; // [rsp-18h] [rbp-18h]

  if ( a1 )
  {
    v8 = qword_24630;
    v20 = v6;
    v10 = xmmword_24638;
    if ( (_QWORD)xmmword_24638 )
    {
      v11 = 0;
      while ( 1 )
      {
        a4 = 16 * v11;
        if ( *(_QWORD *)(qword_24630 + 16 * v11) == a1 )
          break;
        if ( (_QWORD)xmmword_24638 == ++v11 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v12 = xmmword_24638 + 1;
      if ( *((_QWORD *)&xmmword_24638 + 1) < (unsigned __int64)(xmmword_24638 + 1) )
      {
        v19 = qvector_reserve();
        v10 = xmmword_24638;
        qword_24630 = v19;
        v8 = v19;
        v12 = xmmword_24638 + 1;
      }
      *(_QWORD *)&xmmword_24638 = v12;
      v13 = 16 * v10 + v8;
      *(_QWORD *)v13 = a1;
      *(_DWORD *)(v13 + 8) = a2;
      debug_hexrays_ctree(1, (int)"registered %p\n", a1, a4, a5, a6, v20);
      if ( sub_6B10(2) )
      {
        v15 = xmmword_24638;
        if ( (_QWORD)xmmword_24638 )
        {
          v16 = 0;
          do
          {
            v17 = v16;
            v18 = qword_24630 + 16 * v16++;
            debug_hexrays_ctree(2, (int)"\t#%3d: %p (%d)\n", v17, *(_QWORD *)v18, *(_DWORD *)(v18 + 8), v14, v21);
          }
          while ( v15 != v16 );
        }
      }
    }
  }
}

