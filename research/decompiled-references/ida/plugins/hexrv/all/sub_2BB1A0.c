__int64 __fastcall sub_2BB1A0(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  unsigned __int8 (***v5)(void); // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( a3 >= a2[6] )
    goto LABEL_4;
  v4 = 56 * a3;
  v5 = (unsigned __int8 (***)(void))(56 * a3 + a2[5]);
  v6 = **v5;
  if ( (char *)v6 == (char *)sub_2A8990 )
  {
    if ( !(unsigned int)sub_253070((__int64)(v5 + 1), (__int64)(v5 + 4)) )
    {
LABEL_4:
      sub_7D4C0(a1, (const char *)&unk_3F3793);
      return a1;
    }
  }
  else if ( !v6() )
  {
    goto LABEL_4;
  }
  switch_dbctx();
  v8 = a2[9];
  v9 = a2[5] + v4;
  v10 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 104) += 2;
    v11[0] = v8;
  }
  else
  {
    v11[0] = 0;
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_25B870(*(_DWORD *)(v9 + 16));
  sub_674F0((__int64 *)a1);
  sub_13BC80(v11, (__int64)"%a,%s,%s");
  sub_13BC80(&v10, (__int64)"%a,%s,%s");
  return a1;
}

