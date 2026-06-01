unsigned __int64 __fastcall sub_10A50(__int64 a1, int a2, double a3)
{
  bool v4; // zf
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // rax
  const char *v8; // rsi
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r14
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 i; // r15
  __int64 *v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  void *v24; // rcx
  _QWORD *v25; // rax
  void *v26; // rdx
  __int64 v27; // [rsp+0h] [rbp-1078h]
  __int64 v28; // [rsp+8h] [rbp-1070h]
  _QWORD v29[2]; // [rsp+20h] [rbp-1058h] BYREF
  _BYTE v30[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v31; // [rsp+1038h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 16) == 0;
  v31 = __readfsqword(0x28u);
  if ( v4 || strcmp(*(const char **)(a1 + 8), "NONE") )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 80LL);
    if ( v7 == sub_10050 )
    {
      getinf_buf(1);
      qstrlwr(v30);
      v8 = ".cfg";
      qstrncat(v30, ".cfg", 4096);
    }
    else
    {
      v8 = v30;
      v7(a1, (__int64)v30, 4096);
    }
    v9 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 64) = 0;
    v10 = (*(__int64 (__fastcall **)(__int64))(v9 + 24))(a1);
    v12 = *(_QWORD *)(a1 + 32);
    if ( !v10 )
      a2 = 0;
    *(_DWORD *)(a1 + 80) = a2;
    if ( v12 )
    {
      v28 = *(_QWORD *)(a1 + 40);
      if ( v28 )
      {
        v27 = 0;
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
                v18 = (__int64 *)(v15 + 48 * i);
                v19 = v18[3];
                if ( v19 )
                {
                  v18[4] = 0;
                  qfree(v19, v8, v11, a3);
                }
                v20 = *v18;
                if ( *v18 )
                {
                  v18[1] = 0;
                  qfree(v20, v8, v11, a3);
                }
                v15 = v14[7];
              }
            }
            v14[8] = 0;
            qfree(v15, v8, v11, a3);
          }
          v21 = v14[4];
          if ( v21 )
          {
            v14[5] = 0;
            qfree(v21, v8, v11, a3);
          }
          v22 = v14[1];
          if ( v22 )
          {
            v14[2] = 0;
            qfree(v22, v8, v11, a3);
          }
          ++v27;
          v12 = *(_QWORD *)(a1 + 32);
          v13 += 88;
        }
        while ( v28 != v27 );
      }
      *(_QWORD *)(a1 + 40) = 0;
      qfree(v12, v8, v11, a3);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 48) = 0;
    }
    v29[0] = off_23108;
    v29[1] = a1;
    read_ioports(a1 + 32, a1 + 8, v30, v29);
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && *(_QWORD *)(a1 + 40) )
    {
      v23 = 0;
      do
      {
        v24 = &unk_1D228;
        v25 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 88 * v23);
        if ( v25[5] )
          v24 = (void *)v25[4];
        v26 = &unk_1D228;
        if ( v25[2] )
          v26 = (void *)v25[1];
        ++v23;
        (*(void (__fastcall **)(__int64, _QWORD, void *, void *))(*(_QWORD *)a1 + 40LL))(a1, *v25, v26, v24);
      }
      while ( v23 < *(_QWORD *)(a1 + 40) );
    }
  }
  return v31 - __readfsqword(0x28u);
}

