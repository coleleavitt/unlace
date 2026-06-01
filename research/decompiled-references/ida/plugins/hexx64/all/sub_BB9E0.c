void __fastcall sub_BB9E0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rbx
  char *v4; // r12
  unsigned __int64 v5; // rdx
  int *v6; // rbx
  int v7; // r14d
  int v8; // r12d
  _BYTE *v9; // rdi
  int v10; // eax
  int v11; // r13d
  int *v12; // r15
  _BYTE *v13; // rdi
  int *v14; // [rsp+0h] [rbp-48h]
  char *v15; // [rsp+8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 712);
  if ( v1 <= 1 )
    return;
  v3 = 4 * v1;
  v4 = *(char **)(a1 + 704);
  v15 = &v4[4 * v1];
  if ( v4 == v15 )
    return;
  if ( !(v3 >> 2) )
  {
    sub_B9F30(v4, v15, -2, a1);
    goto LABEL_21;
  }
  _BitScanReverse64(&v5, v3 >> 2);
  sub_B9F30(v4, v15, 2LL * (int)v5, a1);
  if ( v3 <= 64 )
  {
LABEL_21:
    sub_B8A50(v4, v15, a1);
    return;
  }
  v14 = (int *)(v4 + 64);
  sub_B8A50(v4, v4 + 64, a1);
  do
  {
    v6 = v14;
    v7 = *v14;
    while ( 1 )
    {
      v11 = *(v6 - 1);
      v12 = v6;
      v13 = (_BYTE *)sub_330E60(a1, v7);
      if ( v13 != *(_BYTE **)(a1 + 56) || (v8 = 1000, *(_DWORD *)(a1 + 76) != 4) )
        v8 = sub_175240(v13);
      v9 = (_BYTE *)sub_330E60(a1, v11);
      if ( v9 != *(_BYTE **)(a1 + 56) || (v10 = 1000, *(_DWORD *)(a1 + 76) != 4) )
        v10 = sub_175240(v9);
      --v6;
      if ( v10 <= v8 )
        break;
      v6[1] = *v6;
    }
    ++v14;
    *v12 = v7;
  }
  while ( v15 != (char *)v14 );
}

