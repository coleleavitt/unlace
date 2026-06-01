unsigned __int64 __fastcall sub_4B350(__int64 a1, int a2, double a3)
{
  bool v4; // zf
  __int64 v7; // rax
  bool (*v8)(); // rax
  int v9; // eax
  __int64 v10; // rdx
  char v11; // al
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
  const char *v24; // r15
  __int64 *v25; // rax
  __int64 v26; // r12
  __int64 (__fastcall *v27)(__int64, __int64, __int64, __int64); // r8
  const char *v28; // rsi
  __int64 v29; // [rsp+0h] [rbp-1078h]
  __int64 v30; // [rsp+8h] [rbp-1070h]
  _QWORD v31[2]; // [rsp+20h] [rbp-1058h] BYREF
  _BYTE v32[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v33; // [rsp+1038h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 16) == 0;
  v33 = __readfsqword(0x28u);
  if ( !v4 && !strcmp(*(const char **)(a1 + 8), "NONE") )
    return v33 - __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 80LL))(a1, v32, 4096);
  v7 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 64) = 0;
  v8 = *(bool (**)())(v7 + 24);
  if ( v8 != sub_4B310 )
  {
    v11 = ((__int64 (__fastcall *)(__int64))v8)(a1);
LABEL_8:
    if ( !v11 )
      a2 = 0;
    goto LABEL_10;
  }
  v9 = getinf(5);
  if ( v9 != 2 && v9 != 5 )
  {
    LOBYTE(v10) = v9 == 6;
    v11 = v9 == 6 || v9 == 13;
    goto LABEL_8;
  }
LABEL_10:
  v12 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 80) = a2;
  if ( v12 )
  {
    v30 = *(_QWORD *)(a1 + 40);
    if ( v30 )
    {
      v29 = 0;
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
                qfree(v19, v32, v10, a3);
              }
              v20 = *v18;
              if ( *v18 )
              {
                v18[1] = 0;
                qfree(v20, v32, v10, a3);
              }
              v15 = v14[7];
            }
          }
          v14[8] = 0;
          qfree(v15, v32, v10, a3);
        }
        v21 = v14[4];
        if ( v21 )
        {
          v14[5] = 0;
          qfree(v21, v32, v10, a3);
        }
        v22 = v14[1];
        if ( v22 )
        {
          v14[2] = 0;
          qfree(v22, v32, v10, a3);
        }
        ++v29;
        v12 = *(_QWORD *)(a1 + 32);
        v13 += 88;
      }
      while ( v30 != v29 );
    }
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v12, v32, v10, a3);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v31[0] = off_92AF0;
  v31[1] = a1;
  read_ioports(a1 + 32, a1 + 8, v32, v31);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && *(_QWORD *)(a1 + 40) )
  {
    v23 = 0;
    do
    {
      v24 = s1;
      v25 = (__int64 *)(*(_QWORD *)(a1 + 32) + 88 * v23);
      v26 = *v25;
      v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 40LL);
      if ( v25[5] )
        v24 = (const char *)v25[4];
      v28 = s1;
      if ( v25[2] )
        v28 = (const char *)v25[1];
      if ( v27 == sub_4ACE0 )
      {
        set_name(*v25, v28, 4096);
        set_cmt(v26, v24, 1);
      }
      else
      {
        v27(a1, *v25, (__int64)v28, (__int64)v24);
      }
      ++v23;
    }
    while ( v23 < *(_QWORD *)(a1 + 40) );
  }
  return v33 - __readfsqword(0x28u);
}
