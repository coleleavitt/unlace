unsigned __int64 __fastcall sub_28A00(unsigned __int64 **a1)
{
  unsigned __int64 *v1; // rax
  unsigned __int64 *v2; // r12
  unsigned __int64 *v4; // r14
  unsigned __int64 v5; // r13
  unsigned __int64 *v6; // rbx
  const char *v7; // rsi
  unsigned __int64 *v8; // rbp
  const char *v9; // rdi
  int v10; // eax
  unsigned __int64 *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  const char *v14; // rsi
  const char *v15; // rdi
  unsigned __int64 *v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 *v18; // rsi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  int v22; // [rsp+Ch] [rbp-5Ch]
  unsigned __int64 *v23; // [rsp+10h] [rbp-58h]
  unsigned __int64 *v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 *v25; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v1 = a1[1];
  v26 = __readfsqword(0x28u);
  v2 = *a1;
  v24 = (unsigned __int64 *)(a1 + 4);
  v22 = 0;
  v23 = (unsigned __int64 *)(a1 + 10);
  if ( !(72LL * (_QWORD)v1) )
    return v26 - __readfsqword(0x28u);
  do
  {
    v4 = a1[5];
    if ( !v4 )
    {
      v6 = v24;
      goto LABEL_20;
    }
    v5 = v2[3];
    v6 = v24;
    while ( 1 )
    {
      v12 = v4[5];
      if ( !v5 )
        break;
      v7 = (const char *)v2[2];
      v8 = v4;
      v9 = nptr;
      if ( v12 )
        goto LABEL_5;
LABEL_6:
      v10 = strcmp(v9, v7);
      v11 = (unsigned __int64 *)v4[2];
      v4 = (unsigned __int64 *)v4[3];
      if ( v10 >= 0 )
      {
        v6 = v8;
        v4 = v11;
      }
      if ( !v4 )
        goto LABEL_15;
    }
    if ( v12 )
    {
LABEL_13:
      v7 = nptr;
LABEL_5:
      v9 = (const char *)v4[4];
      v8 = v4;
      goto LABEL_6;
    }
    while ( 1 )
    {
      v13 = v4[2];
      if ( !v13 )
        break;
      v6 = v4;
      v4 = (unsigned __int64 *)v4[2];
      if ( *(_QWORD *)(v13 + 40) )
        goto LABEL_13;
    }
    v6 = v4;
LABEL_15:
    if ( v24 == v6 )
      goto LABEL_20;
    if ( !v6[5] )
    {
      v14 = nptr;
      if ( v5 )
      {
LABEL_18:
        v15 = (const char *)v2[2];
        goto LABEL_19;
      }
      *((_DWORD *)v6 + 14) = v22;
      v16 = a1[11];
      if ( v16 )
        goto LABEL_22;
LABEL_33:
      v18 = v23;
      goto LABEL_28;
    }
    v14 = (const char *)v6[4];
    v15 = nptr;
    if ( v5 )
      goto LABEL_18;
LABEL_19:
    if ( strcmp(v15, v14) < 0 )
    {
LABEL_20:
      v25 = v2 + 2;
      v6 = sub_285A0(a1 + 3, v6, (__int64 *)&v25);
    }
    *((_DWORD *)v6 + 14) = v22;
    v16 = a1[11];
    if ( !v16 )
      goto LABEL_33;
LABEL_22:
    v17 = v2[1];
    v18 = v23;
    do
    {
      while ( 1 )
      {
        v19 = v16[2];
        v20 = v16[3];
        if ( v16[4] < v17 )
          break;
        v18 = v16;
        v16 = (unsigned __int64 *)v16[2];
        if ( !v19 )
          goto LABEL_26;
      }
      v16 = (unsigned __int64 *)v16[3];
    }
    while ( v20 );
LABEL_26:
    if ( v18 == v23 || v17 < v18[4] )
    {
LABEL_28:
      v25 = v2 + 1;
      v18 = sub_16E80(a1 + 9, v18, &v25);
    }
    v2 += 9;
    *((_DWORD *)v18 + 10) = v22++;
  }
  while ( v2 != &(*a1)[9 * (_QWORD)a1[1]] );
  return v26 - __readfsqword(0x28u);
}

