__int64 __fastcall sub_2BFC40(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int8 (***v4)(void); // rdi
  unsigned __int8 (*v5)(void); // rax
  __int64 v7; // rdx
  __int64 *v8; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v9[5]; // [rsp+10h] [rbp-28h] BYREF

  v9[1] = (__int64 *)__readfsqword(0x28u);
  if ( a3 >= a2[6] )
    goto LABEL_4;
  v4 = (unsigned __int8 (***)(void))(88 * a3 + a2[5]);
  v5 = **v4;
  if ( (char *)v5 == (char *)sub_2AD660 )
  {
    if ( !(unsigned int)sub_257C40((__int64)(v4 + 1), (__int64)(v4 + 8)) )
    {
LABEL_4:
      sub_81980(a1, (const char *)&unk_418793);
      return a1;
    }
  }
  else if ( !v5() )
  {
    goto LABEL_4;
  }
  switch_dbctx();
  v7 = a2[9];
  v8 = (__int64 *)v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 104) += 2;
    v9[0] = (__int64 *)v7;
  }
  else
  {
    v9[0] = nullptr;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_FAAD0((__int64 *)a1);
  sub_140140(v9);
  sub_140140(&v8);
  return a1;
}

