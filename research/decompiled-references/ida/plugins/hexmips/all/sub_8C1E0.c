unsigned __int64 __fastcall sub_8C1E0(__int64 a1, __int64 a2)
{
  int v4; // r13d
  int v5; // r14d
  __int64 v6; // r12
  __int64 v7; // rdi
  int v8; // r14d
  __int64 v9; // r12
  __int64 v10; // rdi
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // r15
  char *v14; // rsi
  __int64 v15; // rax
  _BYTE v17[8]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  sub_8B480(a2, 2, "callinfo.role");
  sub_7B6E0((__int64 *)a2);
  if ( *(_DWORD *)(a1 + 284) == 13 )
  {
    sub_325C90(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL) + 16LL),
      *(unsigned int *)(*(_QWORD *)(a1 + 24) + 84LL),
      0);
    return sub_7B6E0((__int64 *)a2);
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 48);
    sub_8B480(a2, 2, "callinfo.callee");
    sub_7B970((__int64 *)a2, *(_QWORD *)a1 - *(_QWORD *)(a2 + 40));
    sub_8B480(a2, 2, "callinfo.solid_args");
    sub_7B6E0((__int64 *)a2);
    sub_8B480(a2, 2, "callinfo.call_spd");
    sub_7B6E0((__int64 *)a2);
    sub_8B480(a2, 2, "callinfo.stkargs_top");
    sub_7B6E0((__int64 *)a2);
    sub_8B480(a2, 2, "callinfo.cc");
    sub_7B6E0((__int64 *)a2);
    sub_8B480(a2, 2, "callinfo.args");
    sub_7B6E0((__int64 *)a2);
    if ( *(_QWORD *)(a1 + 32) )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        ++v5;
        sub_8BA50(a2, 4);
        v7 = 5 * v6;
        v6 = v5;
        sub_8CB20(*(_QWORD *)(a1 + 24) + 16 * v7, a2);
      }
      while ( (unsigned __int64)v5 < *(_QWORD *)(a1 + 32) );
    }
    sub_8B480(a2, 2, "callinfo.retregs");
    sub_7B6E0((__int64 *)a2);
    if ( *(_QWORD *)(a1 + 56) )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        ++v8;
        sub_8BA50(a2, 4);
        v10 = v9;
        v9 = v8;
        sub_8C6D0(*(_QWORD *)(a1 + 48) + 16 * v10, a2);
      }
      while ( (unsigned __int64)v8 < *(_QWORD *)(a1 + 56) );
    }
    sub_8B480(a2, 2, "callinfo.return_type");
    sub_7BB50((__int64 *)a2, (_BYTE *)(a1 + 72));
    sub_8B480(a2, 2, "callinfo.return_argloc");
    sub_7D810((__int64 *)a2);
    sub_8B480(a2, 2, "callinfo.return_regs");
    sub_7C210((__int64 *)(a1 + 96), (__int64 *)a2);
    sub_7BFC0(a1 + 112, (__int64 *)a2);
    if ( (unsigned __int8)sub_76440(v4, 3, 0x88u) )
    {
      sub_8B480(a2, 2, "callinfo.spoiled");
      sub_7C210((__int64 *)(a1 + 136), (__int64 *)a2);
      sub_7BFC0(a1 + 152, (__int64 *)a2);
    }
    if ( (unsigned __int8)sub_76440(v4, 3, 0xB0u) )
    {
      sub_8B480(a2, 2, "callinfo.pass_regs");
      sub_7C210((__int64 *)(a1 + 176), (__int64 *)a2);
      sub_7BFC0(a1 + 192, (__int64 *)a2);
    }
    if ( (unsigned __int8)sub_76440(v4, 3, 0xD8u) )
    {
      sub_8B480(a2, 2, "callinfo.visible_memory");
      sub_7BFC0(a1 + 216, (__int64 *)a2);
    }
    sub_8B480(a2, 2, "callinfo.dead_regs");
    sub_7C210((__int64 *)(a1 + 240), (__int64 *)a2);
    sub_7BFC0(a1 + 256, (__int64 *)a2);
    sub_8B480(a2, 2, "callinfo.flags");
    sub_7B6E0((__int64 *)a2);
    sub_8B480(a2, 2, "callinfo.fti_attrs");
    sub_7B6E0((__int64 *)a2);
    if ( *(_QWORD *)(a1 + 296) )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        v13 = *(_QWORD *)(a1 + 288) + 48 * v12;
        sub_8BA50(a2, 4);
        sub_8B480(a2, 4, "fti_attrs.key");
        v14 = (char *)s1;
        if ( *(_QWORD *)(v13 + 8) )
          v14 = *(char **)v13;
        ++v11;
        sub_7BA40((__int64 *)a2, v14);
        sub_8B480(a2, 4, "fti_attrs.value");
        v15 = pack_dd();
        sub_7B560((__int64 *)a2, (__int64)v17, v15 - (_QWORD)v17);
        sub_7B560((__int64 *)a2, *(_QWORD *)(v13 + 24), *(_QWORD *)(v13 + 32));
        v12 = v11;
      }
      while ( (unsigned __int64)v11 < *(_QWORD *)(a1 + 296) );
    }
    return v18 - __readfsqword(0x28u);
  }
}

