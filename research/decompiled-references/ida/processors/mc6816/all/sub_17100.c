unsigned __int64 __fastcall sub_17100(__int64 *a1, int a2)
{
  bool v3; // zf
  __int64 (*v6)(); // rax
  char *v7; // rsi
  __int64 v8; // rax
  bool (*v9)(); // rax
  int v10; // eax
  char v11; // al
  __int64 v12; // rdi
  __int64 v13; // r14
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 i; // r15
  _QWORD *v18; // r13
  unsigned __int64 v19; // rbx
  char *v20; // r15
  _QWORD *v21; // rax
  __int64 (*v22)(); // r8
  char *v23; // rsi
  __int64 v24; // [rsp+0h] [rbp-1078h]
  __int64 v25; // [rsp+8h] [rbp-1070h]
  _BYTE v26[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v27; // [rsp+1038h] [rbp-40h]

  v3 = a1[2] == 0;
  v27 = __readfsqword(0x28u);
  if ( !v3 && !strcmp((const char *)a1[1], "NONE") )
    return v27 - __readfsqword(0x28u);
  v6 = *(__int64 (**)())(*a1 + 80);
  if ( v6 == sub_16DC0 )
  {
    getinf_buf();
    qstrlwr();
    v7 = ".cfg";
    qstrncat();
  }
  else
  {
    v7 = v26;
    ((void (__fastcall *)(__int64 *, _BYTE *, __int64))v6)(a1, v26, 4096);
  }
  v8 = *a1;
  a1[8] = 0;
  v9 = *(bool (**)())(v8 + 24);
  if ( v9 != sub_16F60 )
  {
    v11 = ((__int64 (__fastcall *)(__int64 *, char *))v9)(a1, v7);
LABEL_10:
    if ( !v11 )
      a2 = 0;
    goto LABEL_12;
  }
  v10 = getinf();
  if ( v10 != 2 && v10 != 5 )
  {
    v11 = v10 == 6 || v10 == 13;
    goto LABEL_10;
  }
LABEL_12:
  v12 = a1[4];
  *((_DWORD *)a1 + 20) = a2;
  if ( v12 )
  {
    v25 = a1[5];
    if ( v25 )
    {
      v24 = 0;
      v13 = 0;
      do
      {
        v14 = (_QWORD *)(v12 + v13);
        v15 = *(_QWORD *)(v12 + v13 + 56);
        if ( v15 )
        {
          v16 = v14[8];
          if ( v16 )
          {
            for ( i = 0; i != v16; ++i )
            {
              v18 = (_QWORD *)(v15 + 48 * i);
              if ( v18[3] )
              {
                v18[4] = 0;
                qfree();
              }
              if ( *v18 )
              {
                v18[1] = 0;
                qfree();
              }
              v15 = v14[7];
            }
          }
          v14[8] = 0;
          qfree();
        }
        if ( v14[4] )
        {
          v14[5] = 0;
          qfree();
        }
        if ( v14[1] )
        {
          v14[2] = 0;
          qfree();
        }
        ++v24;
        v12 = a1[4];
        v13 += 88;
      }
      while ( v25 != v24 );
    }
    a1[5] = 0;
    qfree();
    a1[4] = 0;
    a1[6] = 0;
  }
  read_ioports();
  if ( (a1[10] & 1) != 0 && a1[5] )
  {
    v19 = 0;
    do
    {
      v20 = byte_1A764;
      v21 = (_QWORD *)(a1[4] + 88 * v19);
      v22 = *(__int64 (**)())(*a1 + 40);
      if ( v21[5] )
        v20 = (char *)v21[4];
      v23 = byte_1A764;
      if ( v21[2] )
        v23 = (char *)v21[1];
      if ( v22 == sub_16E00 )
      {
        set_name();
        set_cmt();
      }
      else
      {
        ((void (__fastcall *)(__int64 *, _QWORD, char *, char *))v22)(a1, *v21, v23, v20);
      }
      ++v19;
    }
    while ( v19 < a1[5] );
  }
  return v27 - __readfsqword(0x28u);
}

