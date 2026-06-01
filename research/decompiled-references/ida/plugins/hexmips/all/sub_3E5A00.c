__int64 __fastcall sub_3E5A00(__int64 *a1, double a2)
{
  unsigned __int16 *v2; // rax
  unsigned __int16 i; // cx
  int custom_refinfo; // ebp
  __int64 v6; // rax
  char v7; // bp
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v11; // rax

  v2 = (unsigned __int16 *)&unk_415E60;
  for ( i = 1; ; i = *v2 )
  {
    v2 += 4;
    if ( v2 == (unsigned __int16 *)&unk_416800 )
      break;
    if ( i >= *v2 )
    {
      if ( !under_debugger )
        sub_37E160(0xCC1Cu, a2);
      goto LABEL_13;
    }
  }
  netnode_check();
  custom_refinfo = find_custom_refinfo();
  if ( custom_refinfo == -1 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCD8u, a2);
LABEL_13:
    BUG();
  }
  v6 = a1[39];
  v7 = custom_refinfo | 0x40;
  v8 = a1[38];
  if ( a1[40] < (unsigned __int64)(v6 + 1) )
  {
    v11 = qvector_reserve();
    a1[38] = v11;
    v8 = v11;
    v6 = a1[39];
  }
  *(_BYTE *)(v8 + v6) = v7;
  v9 = a1[12];
  ++a1[39];
  sub_1CE810(v9);
  sub_14D4D0((__int64)a1, (__int64)(a1 + 97));
  sub_164F20((__int64)a1, (__int64)(a1 + 99));
  sub_1CE800(a1[12], 1);
  return 1;
}

