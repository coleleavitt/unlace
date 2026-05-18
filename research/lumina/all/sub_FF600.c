__int64 __fastcall sub_FF600(__int64 a1, const char *a2, __int64 a3, int a4, _DWORD *a5)
{
  const char *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-50h]
  unsigned int v25; // [rsp+Ch] [rbp-44h]
  __int64 v26; // [rsp+10h] [rbp-40h]

  *(_QWORD *)(a3 + 16) = 0;
  *(_OWORD *)a3 = 0;
  if ( a2 )
  {
    v8 = a2;
    v25 = strlen(a2) & 0x3FFFFFFF;
    if ( v25 > 1 && *a2 == 47 )
    {
      if ( (_BYTE)word_241484 )
      {
        v16 = xmmword_2414F0(11);
        v26 = v16;
        if ( v16 )
          xmmword_241500(v16);
      }
      else
      {
        v26 = 0;
      }
      if ( dword_242230 > 0 )
      {
        v17 = qword_242238;
        v24 = qword_242238 + 8LL * (unsigned int)(dword_242230 - 1) + 8;
        while ( 1 )
        {
          v11 = *(_QWORD *)v17;
          a2 = v8;
          if ( !strcmp(*(const char **)(*(_QWORD *)v17 + 64LL), v8) )
            break;
          v17 += 8;
          if ( v24 == v17 )
            goto LABEL_28;
        }
        if ( v11 )
        {
          v18 = *(_QWORD *)(v11 + 32);
          if ( v18 )
            xmmword_241500(v18);
          ++*(_DWORD *)(v11 + 56);
          goto LABEL_25;
        }
      }
LABEL_28:
      v11 = sub_D1E10((int)v25 + 75LL, (__int64)a2);
      if ( !v11 )
      {
        if ( v26 )
        {
          xmmword_241510(v26, a2, v19);
          return 7;
        }
        return 7;
      }
      a2 = (const char *)(8LL * (dword_242230 + 1));
      v20 = sub_D2640(qword_242238, (__int64)a2);
      if ( v20 )
      {
        v21 = dword_242230;
        qword_242238 = v20;
        *(_QWORD *)(v20 + 8LL * dword_242230) = v11;
        *(_OWORD *)(v11 + 16) = 0;
        *(_QWORD *)(v11 + 64) = 0;
        dword_242230 = v21 + 1;
        a2 = v8;
        *(_OWORD *)(v11 + 32) = 0;
        *(_OWORD *)v11 = 0;
        *(_OWORD *)(v11 + 48) = 0;
        *(_DWORD *)(v11 + 44) = 3;
        v22 = qword_241608;
        *(_QWORD *)(v11 + 64) = v11 + 72;
        *(_QWORD *)(v11 + 16) = v22;
        memcpy((void *)(v11 + 72), v8, (int)(v25 + 1));
        v23 = sub_FF5D0(0, (__int64)v8);
        *(_QWORD *)(v11 + 32) = v23;
        if ( v23 )
        {
          *(_DWORD *)(v11 + 56) = 1;
          xmmword_241500(v23);
LABEL_25:
          if ( v26 )
            xmmword_241510(v26, a2, v10);
          goto LABEL_6;
        }
        --dword_242230;
        sub_C91C0(v11, (__int64)v8);
        if ( !v26 )
          return 7;
        v15 = v26;
      }
      else
      {
        sub_C91C0(v11, (__int64)a2);
        v15 = v26;
        if ( !v26 )
          return 7;
      }
      xmmword_241510(v15, a2, v14);
      return 7;
    }
  }
  v9 = sub_D1E10(72, (__int64)a2);
  v11 = v9;
  if ( !v9 )
    return 7;
  *(_QWORD *)(v9 + 64) = 0;
  *(_OWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 44) = 3;
  *(_OWORD *)v9 = 0;
  *(_OWORD *)(v9 + 16) = 0;
  *(_OWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v9 + 16) = qword_241608;
LABEL_6:
  *(_QWORD *)(a3 + 8) = v11;
  if ( a5 )
  {
    LOBYTE(a4) = a4 | 0x80;
    *a5 = a4;
  }
  *(_QWORD *)a3 = &unk_23BE60;
  v12 = *(_QWORD *)(v11 + 32);
  if ( v12 )
    xmmword_241510(v12, a2, v10);
  return 0;
}
