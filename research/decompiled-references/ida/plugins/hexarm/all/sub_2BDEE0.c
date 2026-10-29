void __fastcall sub_2BDEE0(__int64 *a1, int a2, __int64 a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 *v9; // rdi
  __int64 v10; // rax

  if ( a2 != 2 )
    return;
  if ( *(_QWORD *)(a3 + 32) <= 1u )
  {
    if ( *(_QWORD *)(a3 + 64) <= 1u )
      goto LABEL_4;
LABEL_6:
    v5 = (__int64 *)sub_2BB590(a1);
    sub_6B2B0(v5);
    if ( !*(_BYTE *)(a3 + 48) )
      return;
    goto LABEL_7;
  }
  v9 = (__int64 *)sub_2BB590(a1);
  sub_6B2B0(v9);
  if ( *(_QWORD *)(a3 + 64) > 1u )
    goto LABEL_6;
LABEL_4:
  if ( !*(_BYTE *)(a3 + 48) )
    return;
LABEL_7:
  v6 = a1[1];
  v7 = *a1;
  if ( a1[2] < (unsigned __int64)(v6 + 1) )
  {
    v10 = qvector_reserve();
    v6 = a1[1];
    *a1 = v10;
    v7 = v10;
  }
  v8 = v7 + 24 * v6;
  *(_QWORD *)v8 = 0;
  *(_OWORD *)(v8 + 8) = 0;
  ++a1[1];
  dstr_tinfo();
  sub_6B2B0((__int64 *)v8);
}

