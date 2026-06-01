unsigned __int64 __fastcall sub_8940(__int64 *a1, int a2)
{
  bool v3; // zf
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rdi
  __int64 v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 i; // r15
  _QWORD *v14; // r13
  unsigned __int64 v15; // rbx
  char *v16; // rcx
  _QWORD *v17; // rax
  char *v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-1078h]
  __int64 v20; // [rsp+8h] [rbp-1070h]
  _BYTE v21[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v22; // [rsp+1038h] [rbp-40h]

  v3 = a1[2] == 0;
  v22 = __readfsqword(0x28u);
  if ( v3 || strcmp((const char *)a1[1], "NONE") )
  {
    (*(void (__fastcall **)(__int64 *, _BYTE *, __int64))(*a1 + 80))(a1, v21, 4096);
    v6 = *a1;
    a1[8] = 0;
    v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 24))(a1);
    v8 = a1[4];
    if ( !v7 )
      a2 = 0;
    *((_DWORD *)a1 + 20) = a2;
    if ( v8 )
    {
      v20 = a1[5];
      if ( v20 )
      {
        v19 = 0;
        v9 = 0;
        do
        {
          v10 = (_QWORD *)(v8 + v9);
          v11 = *(_QWORD *)(v8 + v9 + 56);
          if ( v11 )
          {
            v12 = v10[8];
            if ( v12 )
            {
              for ( i = 0; i != v12; ++i )
              {
                v14 = (_QWORD *)(v11 + 48 * i);
                if ( v14[3] )
                {
                  v14[4] = 0;
                  qfree();
                }
                if ( *v14 )
                {
                  v14[1] = 0;
                  qfree();
                }
                v11 = v10[7];
              }
            }
            v10[8] = 0;
            qfree();
          }
          if ( v10[4] )
          {
            v10[5] = 0;
            qfree();
          }
          if ( v10[1] )
          {
            v10[2] = 0;
            qfree();
          }
          ++v19;
          v8 = a1[4];
          v9 += 88;
        }
        while ( v20 != v19 );
      }
      a1[5] = 0;
      qfree();
      a1[4] = 0;
      a1[6] = 0;
    }
    read_ioports();
    if ( (a1[10] & 1) != 0 && a1[5] )
    {
      v15 = 0;
      do
      {
        v16 = byte_CF28;
        v17 = (_QWORD *)(a1[4] + 88 * v15);
        if ( v17[5] )
          v16 = (char *)v17[4];
        v18 = byte_CF28;
        if ( v17[2] )
          v18 = (char *)v17[1];
        ++v15;
        (*(void (__fastcall **)(__int64 *, _QWORD, char *, char *))(*a1 + 40))(a1, *v17, v18, v16);
      }
      while ( v15 < a1[5] );
    }
  }
  return v22 - __readfsqword(0x28u);
}

