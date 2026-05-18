__int64 __fastcall sub_E15B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // rdi
  int v5; // edx
  __int64 v6; // rax
  __int64 *v8; // r12
  __int64 v9; // rax
  int v10; // ecx
  unsigned __int64 v11; // rdx

  v1 = *(int *)(a1 + 148);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)v3;
  v5 = v1;
  v6 = 2 * v1;
  if ( !v5 )
    v6 = 42;
  if ( *(int *)(v4 + 156) < v6 )
  {
    if ( !*(_BYTE *)(v4 + 103) && !*(_BYTE *)(v4 + 104) )
      sub_DBE60(v4);
    return 7;
  }
  v8 = sub_DFAD0(v4, *(_QWORD **)(a1 + 136), 24 * v6);
  if ( !v8 )
    return 7;
  v9 = *(_QWORD *)v3;
  if ( !*(_QWORD *)v3 || *(_QWORD *)(v9 + 488) <= (unsigned __int64)v8 )
    goto LABEL_10;
  if ( *(_QWORD *)(v9 + 472) <= (unsigned __int64)v8 )
  {
    LODWORD(v11) = 5;
    v10 = 128;
    goto LABEL_11;
  }
  if ( *(_QWORD *)(v9 + 480) <= (unsigned __int64)v8 )
  {
    v10 = *(unsigned __int16 *)(v9 + 414);
    LODWORD(v11) = v10 / 0x18u;
  }
  else
  {
LABEL_10:
    v10 = ((__int64 (__fastcall *)(__int64 *))*(&xmmword_2414B0 + 1))(v8);
    v11 = v10 / 0x18uLL;
  }
LABEL_11:
  *(_DWORD *)(v3 + 60) = v10;
  *(_QWORD *)(a1 + 136) = v8;
  *(_DWORD *)(a1 + 148) = v11;
  return 0;
}
