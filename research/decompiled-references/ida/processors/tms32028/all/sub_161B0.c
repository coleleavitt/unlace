unsigned __int64 __fastcall sub_161B0(__int64 *a1, int a2)
{
  bool v3; // zf
  __int64 v6; // rax
  bool (*v7)(); // rax
  int v8; // eax
  char v9; // al
  __int64 v10; // rdi
  __int64 v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 i; // r15
  _QWORD *v16; // r13
  unsigned __int64 v17; // rbx
  __int64 *v18; // r15
  _QWORD *v19; // rax
  __int64 (*v20)(); // r8
  __int64 *v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-1078h]
  __int64 v23; // [rsp+8h] [rbp-1070h]
  _BYTE v24[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v25; // [rsp+1038h] [rbp-40h]

  v3 = a1[2] == 0;
  v25 = __readfsqword(0x28u);
  if ( !v3 && !strcmp((const char *)a1[1], "NONE") )
    return v25 - __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64 *, _BYTE *, __int64))(*a1 + 80))(a1, v24, 4096);
  v6 = *a1;
  a1[8] = 0;
  v7 = *(bool (**)())(v6 + 24);
  if ( v7 != sub_16170 )
  {
    v9 = ((__int64 (__fastcall *)(__int64 *))v7)(a1);
LABEL_8:
    if ( !v9 )
      a2 = 0;
    goto LABEL_10;
  }
  v8 = getinf();
  if ( v8 != 2 && v8 != 5 )
  {
    v9 = v8 == 6 || v8 == 13;
    goto LABEL_8;
  }
LABEL_10:
  v10 = a1[4];
  *((_DWORD *)a1 + 20) = a2;
  if ( v10 )
  {
    v23 = a1[5];
    if ( v23 )
    {
      v22 = 0;
      v11 = 0;
      do
      {
        v12 = (_QWORD *)(v10 + v11);
        v13 = *(_QWORD *)(v10 + v11 + 56);
        if ( v13 )
        {
          v14 = v12[8];
          if ( v14 )
          {
            for ( i = 0; i != v14; ++i )
            {
              v16 = (_QWORD *)(v13 + 48 * i);
              if ( v16[3] )
              {
                v16[4] = 0;
                qfree();
              }
              if ( *v16 )
              {
                v16[1] = 0;
                qfree();
              }
              v13 = v12[7];
            }
          }
          v12[8] = 0;
          qfree();
        }
        if ( v12[4] )
        {
          v12[5] = 0;
          qfree();
        }
        if ( v12[1] )
        {
          v12[2] = 0;
          qfree();
        }
        ++v22;
        v10 = a1[4];
        v11 += 88;
      }
      while ( v23 != v22 );
    }
    a1[5] = 0;
    qfree();
    a1[4] = 0;
    a1[6] = 0;
  }
  read_ioports();
  if ( (a1[10] & 1) != 0 && a1[5] )
  {
    v17 = 0;
    do
    {
      v18 = qword_1AF48;
      v19 = (_QWORD *)(a1[4] + 88 * v17);
      v20 = *(__int64 (**)())(*a1 + 40);
      if ( v19[5] )
        v18 = (__int64 *)v19[4];
      v21 = qword_1AF48;
      if ( v19[2] )
        v21 = (__int64 *)v19[1];
      if ( v20 == sub_15F60 )
      {
        set_name();
        set_cmt();
      }
      else
      {
        ((void (__fastcall *)(__int64 *, _QWORD, __int64 *, __int64 *))v20)(a1, *v19, v21, v18);
      }
      ++v17;
    }
    while ( v17 < a1[5] );
  }
  return v25 - __readfsqword(0x28u);
}

