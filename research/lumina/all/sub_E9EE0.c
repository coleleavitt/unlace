__int64 __fastcall sub_E9EE0(__int64 a1, int a2, int a3, __int64 a4)
{
  int v4; // ebx
  int *v6; // rax
  unsigned __int64 v7; // r13
  char *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  char *v13; // r8
  char *v14; // rsi
  size_t v15; // rdx
  char *v16; // rax
  char *v17; // r8
  __int16 v18; // bp
  int v19; // ecx
  int v21; // [rsp+Ch] [rbp-8Ch]
  char *v22; // [rsp+10h] [rbp-88h]
  unsigned __int64 v23; // [rsp+18h] [rbp-80h]
  char *src; // [rsp+20h] [rbp-78h]
  char *v25; // [rsp+28h] [rbp-70h]
  char *v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  char *v28; // [rsp+40h] [rbp-58h]
  char *v29; // [rsp+48h] [rbp-50h]
  int v30; // [rsp+50h] [rbp-48h]
  __int16 v31; // [rsp+54h] [rbp-44h]

  v4 = a2;
  v6 = *(int **)(a4 + 72);
  v31 = a3;
  v7 = *(_QWORD *)(a4 + 96);
  v22 = *(char **)(a4 + 80);
  v8 = *(char **)(*(_QWORD *)v6 + 280LL);
  v9 = v6[14];
  v25 = &v22[v9];
  v26 = v8;
  v30 = a2 + a3;
  v27 = *(unsigned __int8 *)(a4 + 9);
  v28 = &v22[v27 + 5];
  v29 = &v22[v27 + 6];
  v10 = (unsigned __int8)*v29 | ((unsigned __int8)*v28 << 8);
  if ( (unsigned int)v9 < (unsigned int)v10 )
  {
    src = v22;
    memcpy(v8, v22, (unsigned int)v9);
  }
  else
  {
    src = &v22[v10];
    memcpy(&v8[v10], &v22[v10], (unsigned int)(v9 - v10));
  }
  if ( a2 < *(_DWORD *)(a1 + 80) )
  {
    v21 = 0;
  }
  else
  {
    v11 = 1;
    while ( *(_DWORD *)(a1 + 4 * v11 + 80) <= a2 )
    {
      if ( ++v11 == 7 )
      {
        v21 = 6;
        goto LABEL_8;
      }
    }
    v21 = v11;
  }
LABEL_8:
  v12 = v21;
  v13 = v25;
  v23 = *(_QWORD *)(a1 + 8LL * v21 + 32);
  while ( 1 )
  {
    v14 = *(char **)(*(_QWORD *)(a1 + 16) + 8LL * v4);
    v15 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 2LL * v4);
    v16 = &v14[v15];
    if ( v14 < src || v14 >= v25 )
    {
      if ( (unsigned __int64)v14 < v23 && v23 < (unsigned __int64)v16 )
      {
        v19 = 74023;
LABEL_22:
        sub_E8BB0(
          0xBu,
          "%s at line %d of [%.10s]",
          "database corruption",
          v19,
          "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
        return 11;
      }
    }
    else
    {
      if ( v25 < v16 )
      {
        v19 = 74018;
        goto LABEL_22;
      }
      v14 = &v26[v14 - v22];
    }
    v17 = &v13[-v15];
    v7 += 2LL;
    v18 = (_WORD)v17 - (_WORD)v22;
    *(_BYTE *)(v7 - 1) = (_BYTE)v17 - (_BYTE)v22;
    *(_BYTE *)(v7 - 2) = (unsigned __int16)((_WORD)v17 - (_WORD)v22) >> 8;
    if ( (unsigned __int64)v17 < v7 )
    {
      v19 = 74029;
      goto LABEL_22;
    }
    ++v4;
    v13 = (char *)memmove(v17, v14, v15);
    if ( v30 <= v4 )
      break;
    if ( *(_DWORD *)(a1 + 4 * v12 + 80) <= v4 )
    {
      v12 = ++v21;
      v23 = *(_QWORD *)(a1 + 8LL * v21 + 32);
    }
  }
  *(_BYTE *)(a4 + 12) = 0;
  *(_WORD *)(a4 + 24) = v31;
  v22[v27 + 1] = 0;
  v22[v27 + 2] = 0;
  v22[v27 + 3] = *(_BYTE *)(a4 + 25);
  v22[v27 + 4] = *(_WORD *)(a4 + 24);
  *v28 = HIBYTE(v18);
  *v29 = v18;
  v22[v27 + 7] = 0;
  return 0;
}
