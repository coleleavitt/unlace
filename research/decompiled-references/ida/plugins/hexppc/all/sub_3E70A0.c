__int64 __fastcall sub_3E70A0(__int64 *a1, double a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  int custom_refinfo; // eax
  char v6; // bp
  __int64 v7; // rax
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int16 *v11; // rax
  __int16 v12; // dx
  unsigned __int16 v13; // cx
  __int64 v15; // rax
  __int64 v16; // rax

  netnode_check();
  v3 = a1[39];
  v4 = a1[38];
  if ( a1[40] < (unsigned __int64)(v3 + 1) )
  {
    v15 = qvector_reserve();
    a1[38] = v15;
    v4 = v15;
    v3 = a1[39];
  }
  *(_BYTE *)(v4 + v3) = 6;
  ++a1[39];
  custom_refinfo = find_custom_refinfo();
  if ( custom_refinfo == -1 )
  {
    if ( !under_debugger )
      sub_37EEE0(0xCCD7u, a2);
LABEL_14:
    BUG();
  }
  v6 = custom_refinfo;
  v7 = a1[39];
  v8 = v6 | 0x40;
  v9 = a1[38];
  if ( a1[40] < (unsigned __int64)(v7 + 1) )
  {
    v16 = qvector_reserve();
    a1[38] = v16;
    v9 = v16;
    v7 = a1[39];
  }
  *(_BYTE *)(v9 + v7) = v8;
  v10 = a1[12];
  ++a1[39];
  sub_1CEFF0(v10);
  sub_14DC90((__int64)a1, (__int64)(a1 + 562));
  sub_1656E0((__int64)a1, (__int64)(a1 + 560));
  v11 = (__int16 *)&unk_421EE2;
  v12 = 1;
  do
  {
    v13 = v12;
    v12 = *v11;
    if ( v13 >= (unsigned __int16)*v11 )
    {
      if ( !under_debugger )
        sub_37EEE0(0xC8D5u, a2);
      goto LABEL_14;
    }
    ++v11;
  }
  while ( v11 != (__int16 *)&unk_422672 );
  sub_33AE60(a1[12]);
  return 1;
}

