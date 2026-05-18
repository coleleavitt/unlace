__int64 __fastcall sub_11E7F0(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64, _QWORD, __int64),
        __int64 a6)
{
  __int64 v6; // rbx
  int v9; // r15d
  int v10; // r14d
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned int v19; // r12d
  __int64 v20; // r8
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rdi
  __int64 v25; // [rsp+8h] [rbp-40h]
  __int64 v26; // [rsp+8h] [rbp-40h]

  if ( !a1 )
  {
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      97211,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 21;
  }
  v6 = *((_QWORD *)a1 + 4);
  v9 = a3;
  v10 = a4;
  v12 = *(_QWORD *)(v6 + 24);
  if ( v12 )
    xmmword_241500(v12);
  if ( v9 < 0 || v10 < 0 || (a3 = *a1, v9 + (__int64)v10 > a3) )
  {
    *(_DWORD *)(v6 + 80) = 1;
    v19 = 1;
    sub_CA220((__int64 *)v6, 1, a3, a4, (__int64)a5, a6);
    goto LABEL_19;
  }
  v13 = *((_QWORD *)a1 + 3);
  if ( !v13 )
  {
    *(_DWORD *)(v6 + 80) = 4;
    sub_CA220((__int64 *)v6, 4, a3, a4, 0, a6);
    v19 = 4;
    goto LABEL_19;
  }
  v14 = *((_QWORD *)a1 + 2);
  if ( *(_BYTE *)(*(_QWORD *)(v14 + 8) + 17LL) )
  {
    v26 = *((_QWORD *)a1 + 3);
    sub_CC740(*(_QWORD *)(v14 + 8));
    v14 = *((_QWORD *)a1 + 2);
    v13 = v26;
  }
  v25 = v13;
  v15 = (unsigned int)(v10 + a1[1]);
  v19 = a5(v14, v15, (unsigned int)v9, a2);
  v20 = v25;
  v21 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
  if ( *(_BYTE *)(v21 + 17) )
  {
    v22 = (*(_DWORD *)(v21 + 20))-- == 1;
    if ( v22 )
    {
      sub_CC7D0(v21, v15, v16);
      v20 = v25;
    }
  }
  if ( v19 == 4 )
  {
    sub_11E630(v20, v15, v16, v17, v20, v18);
    *((_QWORD *)a1 + 3) = 0;
    *(_DWORD *)(v6 + 80) = 4;
    goto LABEL_26;
  }
  *(_DWORD *)(v20 + 52) = v19;
  *(_DWORD *)(v6 + 80) = v19;
  if ( v19 )
  {
LABEL_26:
    sub_CA220((__int64 *)v6, v19, v16, v17, v20, v18);
    goto LABEL_19;
  }
  if ( *(_QWORD *)(v6 + 392) )
  {
    v15 = 0;
    sub_CA220((__int64 *)v6, 0, v16, v17, v20, v18);
    if ( !*(_BYTE *)(v6 + 103) )
      goto LABEL_20;
    goto LABEL_19;
  }
  v22 = *(_BYTE *)(v6 + 103) == 0;
  *(_DWORD *)(v6 + 84) = -1;
  if ( !v22 )
  {
LABEL_19:
    v15 = v19;
    v19 = sub_D42C0(v6, v19, v16, v17, v20, v18);
  }
LABEL_20:
  v23 = *(_QWORD *)(v6 + 24);
  if ( v23 )
    xmmword_241510(v23, v15, v16);
  return v19;
}
