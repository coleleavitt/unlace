__int64 __fastcall sub_2C0370(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int8 (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 *v8; // [rsp+8h] [rbp-38h] BYREF
  __int64 *v9[6]; // [rsp+10h] [rbp-30h] BYREF

  v9[1] = (__int64 *)__readfsqword(0x28u);
  if ( a3 >= a2[6] )
    goto LABEL_8;
  v4 = 264 * a3 + a2[5];
  v5 = **(unsigned __int8 (***)(void))v4;
  if ( (char *)v5 == (char *)sub_2AF040 )
  {
    if ( *(_DWORD *)(v4 + 120) == *(_DWORD *)(v4 + 248) && !sub_1377A0(v4 + 8, v4 + 136) )
      goto LABEL_8;
  }
  else if ( !v5() )
  {
LABEL_8:
    sub_81980(a1, (const char *)&unk_418793);
    return a1;
  }
  switch_dbctx();
  v6 = a2[9];
  v8 = (__int64 *)v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 104) += 2;
    v9[0] = (__int64 *)v6;
  }
  else
  {
    v9[0] = nullptr;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_6B870((__int64 *)a1);
  sub_140140(v9);
  sub_140140(&v8);
  return a1;
}

