char *__fastcall sub_F00A0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int v5; // eax
  int v6; // r14d
  unsigned int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r13
  char *v11; // rbp
  unsigned int v12; // edx
  __int64 v13; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r8d
  __int64 *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r13
  int v24; // eax
  __int64 v25; // rdx

  v4 = *(_QWORD *)a1;
  v5 = *(_DWORD *)(a1 + 56);
  if ( (_DWORD)a3 == 1 )
  {
    a4 = v5 - *(_DWORD *)(a1 + 52);
    if ( *(_DWORD *)(v4 + 16) <= (unsigned int)a4 || *(_DWORD *)(a1 + 40) <= (unsigned int)a4 )
      return nullptr;
    v18 = HIDWORD(qword_2421FC) && *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20) <= (int)qword_2421FC
        ? HIDWORD(qword_242228)
        : DWORD2(xmmword_2424B0);
    if ( v18 && *(_DWORD *)(a1 + 52) < (unsigned int)a4 )
      return nullptr;
  }
  v6 = a3;
  v7 = (unsigned int)a2;
  v8 = a1;
  if ( *(_DWORD *)(a1 + 60) <= v5 )
  {
    a2 = (__int64 *)(a1 + 64);
    a1 += 60;
    sub_D3DB0((unsigned int *)a1, a2, a3, a4);
  }
  v9 = *(unsigned int *)(v8 + 28);
  if ( !(_DWORD)v9 )
    goto LABEL_6;
  v10 = *(_QWORD *)(v4 + 72);
  v11 = (char *)v10;
  if ( *(_WORD *)(v10 + 22) )
    goto LABEL_6;
  if ( (unsigned int)(*(_DWORD *)(v8 + 56) + 1) < *(_DWORD *)(v8 + 36) )
  {
    a3 = HIDWORD(qword_2421FC);
    if ( HIDWORD(qword_2421FC) && *(_DWORD *)(v8 + 16) + *(_DWORD *)(v8 + 20) <= (int)qword_2421FC )
      v15 = HIDWORD(qword_242228);
    else
      v15 = DWORD2(xmmword_2424B0);
    if ( !v15 )
      goto LABEL_6;
    v11 = *(char **)(v4 + 72);
  }
  a2 = nullptr;
  a1 = *(_QWORD *)(v4 + 72);
  sub_CBD50(a1, 0);
  *(_QWORD *)(*(_QWORD *)(v10 + 48) + 40LL) = *(_QWORD *)(v10 + 40);
  a3 = *(_QWORD *)(v10 + 48);
  *(_QWORD *)(*(_QWORD *)(v10 + 40) + 48LL) = a3;
  v16 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 40) = 0;
  --*(_DWORD *)(v16 + 52);
  v17 = *(_QWORD *)(v10 + 32);
  v9 = *(unsigned int *)(v8 + 24);
  if ( *(_DWORD *)(v17 + 24) == (_DWORD)v9 )
  {
    *(_DWORD *)(v4 + 20) -= *(_DWORD *)(v17 + 28) - *(_DWORD *)(v8 + 28);
    if ( v10 )
      goto LABEL_8;
  }
  else
  {
    a1 = v10;
    sub_CBD10(v10, 0, a3);
  }
LABEL_6:
  v11 = *(char **)(v8 + 72);
  if ( v11 )
    goto LABEL_7;
  if ( *(_DWORD *)(v8 + 56) )
    goto LABEL_29;
  a3 = (unsigned int)dword_2421F8;
  if ( !dword_2421F8 )
    goto LABEL_29;
  v20 = *(unsigned int *)(v8 + 36);
  if ( (unsigned int)v20 <= 2 )
    goto LABEL_29;
  if ( qword_2424C0 )
  {
    qword_2424C0(a1, a2, (unsigned int)dword_2421F8, qword_2424C0);
    v20 = *(unsigned int *)(v8 + 36);
    LODWORD(a3) = dword_2421F8;
  }
  v21 = *(int *)(v8 + 24);
  if ( (int)a3 <= 0 )
    a1 = -1024LL * (int)a3;
  else
    a1 = v21 * (int)a3;
  v22 = v21 * v20;
  if ( v22 <= a1 )
    a1 = v22;
  v23 = sub_D1E10(a1, (__int64)a2);
  *(_QWORD *)(v8 + 80) = v23;
  if ( qword_2424C8 )
    qword_2424C8();
  if ( v23 )
  {
    a1 = v23;
    v24 = ((int (__fastcall *)(__int64))*(&xmmword_2414B0 + 1))(v23) / *(_DWORD *)(v8 + 24);
    do
    {
      v11 = (char *)(v23 + *(int *)(v8 + 16));
      *(_QWORD *)v11 = v23;
      *((_DWORD *)v11 + 5) = 1;
      *((_QWORD *)v11 + 1) = v11 + 56;
      v25 = *(_QWORD *)(v8 + 72);
      *((_QWORD *)v11 + 6) = 0;
      *((_QWORD *)v11 + 3) = v25;
      a3 = *(int *)(v8 + 24);
      *(_QWORD *)(v8 + 72) = v11;
      v23 += a3;
      --v24;
    }
    while ( v24 );
  }
  else
  {
    v11 = *(char **)(v8 + 72);
  }
  if ( v11 )
  {
LABEL_7:
    *(_QWORD *)(v8 + 72) = *((_QWORD *)v11 + 3);
    *((_QWORD *)v11 + 3) = 0;
    ++**(_DWORD **)(v8 + 8);
  }
  else
  {
LABEL_29:
    if ( v6 == 1 )
    {
      if ( qword_2424C0 )
        qword_2424C0(a1, a2, a3, v9);
      v19 = sub_D2D70(*(_DWORD *)(v8 + 24), (__int64)a2, a3);
      if ( qword_2424C8 )
        qword_2424C8();
    }
    else
    {
      v19 = sub_D2D70(*(_DWORD *)(v8 + 24), (__int64)a2, a3);
    }
    if ( !v19 )
      return nullptr;
    v11 = (char *)v19 + *(int *)(v8 + 16);
    *(_QWORD *)v11 = v19;
    *((_DWORD *)v11 + 5) = 0;
    *((_QWORD *)v11 + 6) = 0;
    *((_QWORD *)v11 + 1) = v11 + 56;
    ++**(_DWORD **)(v8 + 8);
    if ( !v11 )
      return nullptr;
  }
LABEL_8:
  ++*(_DWORD *)(v8 + 56);
  v12 = v7 % *(_DWORD *)(v8 + 60);
  *((_DWORD *)v11 + 4) = v7;
  v13 = *(_QWORD *)(*(_QWORD *)(v8 + 64) + 8LL * v12);
  *((_QWORD *)v11 + 4) = v8;
  *((_QWORD *)v11 + 5) = 0;
  *((_QWORD *)v11 + 3) = v13;
  **((_QWORD **)v11 + 1) = 0;
  *(_QWORD *)(*(_QWORD *)(v8 + 64) + 8LL * v12) = v11;
  if ( *(_DWORD *)(v8 + 44) < v7 )
    *(_DWORD *)(v8 + 44) = v7;
  return v11;
}
