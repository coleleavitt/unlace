_BOOL8 __fastcall sub_54EE0(_QWORD *a1, _QWORD *a2)
{
  const char *v2; // r14
  __int64 v3; // r15
  __int64 v5; // rdi
  __int64 v7; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  bool v12; // cc
  __int64 v13; // rsi
  __int64 v14; // rdx
  char *v15; // rax
  signed __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rbp
  size_t v22; // rdx
  char v23; // al
  unsigned __int8 (__fastcall ***v24)(_QWORD, _QWORD *); // rdi
  __int64 v25; // [rsp+0h] [rbp-58h] BYREF
  __int128 v26; // [rsp+8h] [rbp-50h]
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v5 = a1[1];
  v27 = __readfsqword(0x28u);
  LODWORD(v7) = sub_97BF0(v5);
  if ( (_WORD)v7 != (unsigned __int16)sub_97BF0(a2 + 1) )
    return a1[2] != 0;
  v9 = a2[29];
  if ( (v9 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v9 != -1 )
  {
    v10 = a1[1];
    v11 = *(_QWORD *)(v10 + 224);
    if ( (v11 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v11 != -1 )
    {
      if ( !(unsigned int)sub_849A0(v10 + 224, a2 + 29) )
        return a1[2] != 0;
      v25 = 0;
      v12 = a2[44] <= 1u;
      v26 = 0;
      if ( v12 )
        v2 = (const char *)a2[39];
      else
        v2 = (const char *)a2[43];
      if ( v2 )
      {
        v13 = 0;
        v14 = 1;
LABEL_14:
        v17 = qvector_reserve(&v25, v13, v14, 24);
        v7 = v26;
        v25 = v17;
        v13 = v17;
        v14 = v26 + 1;
        while ( 1 )
        {
          *(_QWORD *)&v26 = v14;
          v3 = v13 + 24 * v7;
          *(_QWORD *)v3 = v2;
          *(_BYTE *)(v3 + 8) = *v2 == 36;
          v15 = strstr(v2, "::");
          v7 = v26;
          if ( !v15 )
            goto LABEL_17;
          v13 = v25;
          v16 = v15 - v2;
          v2 = v15 + 2;
          *(_QWORD *)(v3 + 16) = v16;
          v14 = v7 + 1;
          if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v7 + 1) )
            goto LABEL_14;
        }
      }
      if ( !under_debugger )
        interr(30439);
LABEL_34:
      BUG();
    }
  }
  if ( under_debugger )
    goto LABEL_34;
  interr(30478);
LABEL_17:
  *(_QWORD *)(v3 + 16) = strlen(v2);
  if ( a1[7] != (int)v7 )
    goto LABEL_27;
  if ( (int)v7 > 0 )
  {
    v18 = a1[6];
    v19 = v25;
    v20 = v25;
    v21 = v18 + 8 * (3LL * (unsigned int)(v7 - 1) + 3);
    do
    {
      v23 = *(_BYTE *)(v20 + 8);
      if ( *(_BYTE *)(v18 + 8) != v23 )
        goto LABEL_25;
      if ( !v23 )
      {
        v22 = *(_QWORD *)(v20 + 16);
        if ( *(_QWORD *)(v18 + 16) != v22 || strncmp(*(const char **)v18, *(const char **)v20, v22) )
          goto LABEL_25;
      }
      v18 += 24;
      v20 += 24;
    }
    while ( v18 != v21 );
  }
  v24 = (unsigned __int8 (__fastcall ***)(_QWORD, _QWORD *))a1[9];
  if ( !v24 || (**v24)(v24, a2) )
  {
    a1[2] = a2;
    v19 = v25;
  }
  else
  {
LABEL_27:
    v19 = v25;
  }
LABEL_25:
  if ( v19 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v19);
  }
  return a1[2] != 0;
}

