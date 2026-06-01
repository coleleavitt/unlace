unsigned __int64 __fastcall sub_151B0(__int64 a1, int a2)
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
  __int64 *v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  const char *v22; // r15
  __int64 *v23; // rax
  __int64 v24; // r12
  __int64 (__fastcall *v25)(__int64, __int64, __int64, __int64); // r8
  const char *v26; // rsi
  __int64 v27; // [rsp+0h] [rbp-1078h]
  __int64 v28; // [rsp+8h] [rbp-1070h]
  _QWORD v29[2]; // [rsp+20h] [rbp-1058h] BYREF
  _BYTE v30[4104]; // [rsp+30h] [rbp-1048h] BYREF
  unsigned __int64 v31; // [rsp+1038h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 16) == 0;
  v31 = __readfsqword(0x28u);
  if ( !v3 && !strcmp(*(const char **)(a1 + 8), "NONE") )
    return v31 - __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 80LL))(a1, v30, 4096);
  v6 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 64) = 0;
  v7 = *(bool (**)())(v6 + 24);
  if ( v7 != sub_15010 )
  {
    v9 = ((__int64 (__fastcall *)(__int64))v7)(a1);
LABEL_8:
    if ( !v9 )
      a2 = 0;
    goto LABEL_10;
  }
  v8 = getinf(5);
  if ( v8 != 2 && v8 != 5 )
  {
    v9 = v8 == 6 || v8 == 13;
    goto LABEL_8;
  }
LABEL_10:
  v10 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 80) = a2;
  if ( v10 )
  {
    v28 = *(_QWORD *)(a1 + 40);
    if ( v28 )
    {
      v27 = 0;
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
              v16 = (__int64 *)(v13 + 48 * i);
              v17 = v16[3];
              if ( v17 )
              {
                v16[4] = 0;
                qfree(v17);
              }
              v18 = *v16;
              if ( *v16 )
              {
                v16[1] = 0;
                qfree(v18);
              }
              v13 = v12[7];
            }
          }
          v12[8] = 0;
          qfree(v13);
        }
        v19 = v12[4];
        if ( v19 )
        {
          v12[5] = 0;
          qfree(v19);
        }
        v20 = v12[1];
        if ( v20 )
        {
          v12[2] = 0;
          qfree(v20);
        }
        ++v27;
        v10 = *(_QWORD *)(a1 + 32);
        v11 += 88;
      }
      while ( v28 != v27 );
    }
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v29[0] = off_29350;
  v29[1] = a1;
  read_ioports(a1 + 32, a1 + 8, v30, v29);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && *(_QWORD *)(a1 + 40) )
  {
    v21 = 0;
    do
    {
      v22 = needle;
      v23 = (__int64 *)(*(_QWORD *)(a1 + 32) + 88 * v21);
      v24 = *v23;
      v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 40LL);
      if ( v23[5] )
        v22 = (const char *)v23[4];
      v26 = needle;
      if ( v23[2] )
        v26 = (const char *)v23[1];
      if ( v25 == sub_14ED0 )
      {
        set_name(*v23, v26, 4096);
        set_cmt(v24, v22, 1);
      }
      else
      {
        v25(a1, *v23, (__int64)v26, (__int64)v22);
      }
      ++v21;
    }
    while ( v21 < *(_QWORD *)(a1 + 40) );
  }
  return v31 - __readfsqword(0x28u);
}

