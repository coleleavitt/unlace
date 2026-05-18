__int64 __fastcall sub_ECE40(__int64 *a1, unsigned int a2, __int64 a3, char *a4, void (*a5)())
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r12d
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rdi

  v11 = sub_ECB40(a1, a2);
  if ( v11 )
  {
    if ( a5 )
      ((void (__fastcall *)(__int64))a5)(a3);
  }
  else
  {
    v13 = a1[16];
    v14 = v13 + 56LL * (int)a2 - 56;
    sub_C9690(v14, a2, v13, v8, v9, v10);
    *(_QWORD *)(v14 + 8) = a3;
    *(_BYTE *)(v14 + 23) = 112;
    if ( !a4 )
      a4 = "";
    *(_WORD *)(v14 + 20) = 6657;
    *(_QWORD *)v14 = a4;
    if ( !a5 )
      a5 = nullsub_58;
    *(_QWORD *)(v14 + 48) = a5;
    v16 = *(_QWORD *)(*a1 + 24);
    if ( v16 )
      xmmword_241510(v16, a2, v15);
  }
  return v11;
}
