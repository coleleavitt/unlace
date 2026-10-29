void *__fastcall sub_31D60(__int64 a1)
{
  char *v2; // rbx
  unsigned int v3; // r13d
  __int64 v4; // rax
  char *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rsi
  char v10; // al
  signed int v11; // r12d
  __int64 v12; // rbx
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  unsigned __int8 *v15; // rax
  char *v16; // rax
  char v17; // dl
  __int64 v19; // [rsp+8h] [rbp-40h]

  v2 = (char *)&unk_4F200 + (int)qsnprintf(&unk_4F200, 1024, "0x%llx", **(_QWORD **)(a1 + 32));
  if ( *(_QWORD *)(a1 + 40) > 1u )
  {
    v3 = 1;
    v4 = 1;
    v5 = (char *)&operator new[] - 1;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16 * v4);
        if ( v6 )
          break;
LABEL_3:
        v4 = ++v3;
        if ( (unsigned __int64)v3 >= *(_QWORD *)(a1 + 40) )
          return &unk_4F200;
      }
      v7 = (__int64)v2;
      v2 += (int)qsnprintf(v2, (char *)&operator new[] - v2, " + 0x%llx(", v6);
      if ( *(_QWORD *)(a1 + 16) )
      {
        v9 = 0;
        v10 = 0;
        v11 = 0;
        do
        {
LABEL_12:
          if ( !_bittest((const int *)&v3, v11) )
            goto LABEL_11;
          if ( v10 )
          {
            if ( v2 >= (char *)&operator new[] )
            {
              if ( !under_debugger )
              {
                interr(518);
                goto LABEL_29;
              }
LABEL_31:
              BUG();
            }
            *v2 = 38;
            if ( v2 + 1 >= (char *)&operator new[] )
            {
              byte_4F5FF = 0;
              v12 = *(_QWORD *)(a1 + 8) + 16 * v9;
              hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(v7, v12, v8);
              v7 = 278;
              hexdsp(278, v12);
LABEL_10:
              byte_4F5FF = 0;
              v10 = 1;
              v2 = &byte_4F5FF;
LABEL_11:
              v9 = ++v11;
              if ( (unsigned __int64)v11 >= *(_QWORD *)(a1 + 16) )
                break;
              goto LABEL_12;
            }
            ++v2;
          }
          else if ( v2 >= (char *)&operator new[] )
          {
            goto LABEL_29;
          }
          v19 = *(_QWORD *)(a1 + 8) + 16 * v9;
          v14 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v7, v19, v8);
          v7 = 278;
          v15 = (unsigned __int8 *)v14(278, v19);
          if ( v2 == v5 )
            goto LABEL_10;
          while ( 1 )
          {
            v8 = *v15++;
            *v2 = v8;
            if ( !(_BYTE)v8 )
              break;
            if ( ++v2 == v5 )
              goto LABEL_10;
          }
          ++v11;
          v10 = 1;
          v9 = v11;
        }
        while ( (unsigned __int64)v11 < *(_QWORD *)(a1 + 16) );
      }
      if ( v2 >= (char *)&operator new[] )
      {
LABEL_29:
        if ( !under_debugger )
          interr(520);
        goto LABEL_31;
      }
      v16 = ")";
      if ( v2 != v5 )
      {
        do
        {
          v17 = *v16++;
          *v2 = v17;
          if ( !v17 )
            goto LABEL_3;
        }
        while ( ++v2 != v5 );
      }
      byte_4F5FF = 0;
      v2 = &byte_4F5FF;
      v4 = ++v3;
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 40) );
  }
  return &unk_4F200;
}

