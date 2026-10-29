__int64 __fastcall sub_2C06A0(__int64 a1, _QWORD *a2, unsigned __int64 a3, double a4)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 *v11; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v12[5]; // [rsp+10h] [rbp-28h] BYREF

  v12[1] = (__int64 *)__readfsqword(0x28u);
  if ( a3 >= a2[6] )
    goto LABEL_4;
  v5 = 192 * a3;
  v6 = 192 * a3 + a2[5];
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2AD0E0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v6 + 40) - 3) > 1 )
    {
LABEL_4:
      sub_81980(a1, (const char *)&unk_418793);
      return a1;
    }
  }
  else if ( !v7() )
  {
    goto LABEL_4;
  }
  switch_dbctx();
  v9 = a2[9];
  v10 = a2[5] + v5;
  v11 = (__int64 *)v9;
  if ( v9 )
  {
    *(_DWORD *)(v9 + 104) += 2;
    v12[0] = (__int64 *)v9;
  }
  else
  {
    v12[0] = nullptr;
  }
  sub_2BE190(a1, (__int64)v12, v10 + 8, v10 + 48, a4);
  sub_140140(v12);
  sub_140140(&v11);
  return a1;
}

