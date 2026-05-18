__int64 __fastcall sub_ECB40(__int64 *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r9
  char *v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // ebp
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // r13
  int v13; // eax
  int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdi

  v3 = sub_ECAE0(a1);
  v6 = "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b";
  v7 = 87187;
  if ( v3 )
  {
LABEL_21:
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      v7,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 21;
  }
  v8 = 0;
  v9 = *(_QWORD *)(*a1 + 24);
  if ( v9 )
    xmmword_241500(v9);
  if ( *((_BYTE *)a1 + 197) != 1 )
  {
    v19 = *a1;
    *(_DWORD *)(v19 + 80) = 21;
    sub_CA220((__int64 *)v19, 21, v4, v7, (__int64)v6, v5);
    v21 = *(_QWORD *)(*a1 + 24);
    if ( v21 )
      xmmword_241510(v21, 21, v20);
    sub_E8BB0(0x15u, "bind on a busy prepared statement: [%s]", (const char *)a1[31]);
    LODWORD(v7) = 87195;
    goto LABEL_21;
  }
  if ( (int)a2 <= 0 || *((__int16 *)a1 + 16) < (int)a2 )
  {
    v15 = *a1;
    *(_DWORD *)(v15 + 80) = 25;
    sub_CA220((__int64 *)v15, 25, v4, v7, (__int64)v6, v5);
    v17 = *(_QWORD *)(*a1 + 24);
    v8 = 25;
    if ( v17 )
      xmmword_241510(v17, 25, v16);
  }
  else
  {
    v10 = a2 - 1;
    v11 = a1[16];
    v12 = v11 + 56LL * ((int)a2 - 1);
    if ( (*(_WORD *)(v12 + 20) & 0x9000) != 0 || (v11 = *(unsigned int *)(v12 + 32), (_DWORD)v11) )
      sub_C9690(v12, a2, v11, v7, (__int64)v6, v5);
    *(_WORD *)(v12 + 20) = 1;
    *(_DWORD *)(*a1 + 80) = 0;
    v13 = *((_DWORD *)a1 + 71);
    if ( v13 )
    {
      v14 = 0x80000000;
      if ( v10 < 31 )
        v14 = 1 << v10;
      if ( (v14 & v13) != 0 )
        *((_BYTE *)a1 + 198) = *((_BYTE *)a1 + 198) & 0xFC | 1;
    }
  }
  return v8;
}
