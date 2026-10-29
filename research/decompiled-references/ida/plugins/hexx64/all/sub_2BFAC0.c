__int64 __fastcall sub_2BFAC0(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 *v11; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v12[1] = (__int64 *)__readfsqword(0x28u);
  if ( a3 >= a2[6] )
    goto LABEL_8;
  v4 = 80 * a3;
  v5 = 80 * a3 + a2[5];
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2AD100 )
  {
    if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)(v5 + 56) && *(_DWORD *)(v5 + 16) == *(_DWORD *)(v5 + 64) )
      goto LABEL_8;
  }
  else if ( !v6() )
  {
LABEL_8:
    sub_81980(a1, (const char *)&unk_418793);
    return a1;
  }
  switch_dbctx();
  v7 = a2[9];
  v8 = a2[5];
  v11 = (__int64 *)v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 104) += 2;
    v12[0] = (__int64 *)v7;
  }
  else
  {
    v12[0] = nullptr;
  }
  *(_QWORD *)a1 = 0;
  v9 = v8 + v4;
  *(_OWORD *)(a1 + 8) = 0;
  sub_6B870((__int64 *)a1);
  sub_1AF8F0((__int64 *)a1, *(_DWORD *)(v9 + 16));
  sub_140140(v12);
  sub_140140(&v11);
  return a1;
}

