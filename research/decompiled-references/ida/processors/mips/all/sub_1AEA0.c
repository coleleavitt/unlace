__int64 __fastcall sub_1AEA0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        double a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rcx
  const char *v9; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  _QWORD v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v20[5] = __readfsqword(0x28u);
  if ( a3 != *(_QWORD *)(a1 + 152) )
    return 0;
  if ( a4 == 108 )
  {
    v12 = node2ea(a5);
    v13 = v12;
    if ( a8 == 4 )
    {
      if ( netnode_altval(*(_QWORD *)(a1 + 152), v12, 364) )
      {
        v17 = *(_QWORD *)(a1 + 152);
        v20[0] = 1;
        netnode_supset(v17, v13, v20, 8, 364);
      }
      return 1;
    }
    sub_1ADE0(a2, (__int64)"Wrong data size in the MIPS '%s' record for %a", "local GOT", a6);
    return 0xFFFFFFFFLL;
  }
  if ( a4 > 0x6Cu )
  {
    if ( a4 == 111 )
    {
      v14 = node2ea(a5);
      v15 = v14;
      if ( a8 == 1 )
      {
        if ( (unsigned __int8)netnode_charval(*(_QWORD *)(a1 + 152), v14, 367) )
        {
          LOBYTE(v20[0]) = 1;
          netnode_supset(*(_QWORD *)(a1 + 152), v15, v20, 1, 367);
        }
        return 1;
      }
      sub_1ADE0(a2, (__int64)"Wrong data size in the MIPS '%s' record for %a", "no offset for li", a6);
      return 0xFFFFFFFFLL;
    }
    if ( a4 == 115 )
    {
      LODWORD(v20[0]) = 0;
      v11 = node2ea(a5);
      memset(&v20[1], 0, 24);
      sub_43930(v20, a1, v11);
      sub_438A0(v20, a1, v11);
      if ( v20[1] )
      {
        v20[2] = 0;
        qfree(v20[1]);
      }
      return 1;
    }
    return 0;
  }
  if ( a4 != 65 )
  {
    if ( a4 == 83 )
    {
      if ( a5 == 0xFFFFFFFFLL )
      {
        memset(v20, 0, 24);
        netnode_qsupstr(a3, v20, -1, 83);
        v8 = v20[1];
        v9 = byte_51ACD;
        if ( v20[1] )
        {
          v9 = (const char *)v20[0];
          v8 = v20[1] - 1LL;
        }
        netnode_supset(*(_QWORD *)(a1 + 152), -1, v9, v8, 83);
        if ( v20[0] )
        {
          v20[1] = 0;
          qfree(v20[0]);
        }
        return 1;
      }
      sub_1ADE0(a2, (__int64)"An unknown index in the MIPS 'supstr' record for %X", a5);
    }
    return 0;
  }
  if ( !a5 || (unsigned __int64)(a5 - 4294967292LL) <= 3 )
    return 1;
  v16 = node2ea(a5);
  if ( !(unsigned __int8)is_mapped(v16) )
  {
    sub_1ADE0(a2, (__int64)"An unmapped address in the MIPS 'callee' record for %a", a6);
    return 0;
  }
  if ( a8 == 4 )
  {
    v18 = netnode_altval(*(_QWORD *)(a1 + 152), v16, 833);
    v19 = *(_QWORD *)(a1 + 152);
    v20[0] = v18;
    netnode_supset(v19, v16, v20, 8, 833);
    return 1;
  }
  sub_1ADE0(a2, (__int64)"Wrong data size in the MIPS '%s' record for %a", "callee", a6);
  return 0xFFFFFFFFLL;
}

