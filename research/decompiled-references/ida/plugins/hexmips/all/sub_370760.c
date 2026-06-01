unsigned __int64 __fastcall sub_370760(__int64 a1, double a2)
{
  __int64 v2; // rax
  _BYTE *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned int v6; // r14d
  __int64 v8; // [rsp+10h] [rbp-498h]
  __int64 v9; // [rsp+30h] [rbp-478h]
  _QWORD v10[4]; // [rsp+40h] [rbp-468h] BYREF
  _BYTE v11[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v12; // [rsp+468h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( !under_debugger )
      sub_37E160(52585);
    BUG();
  }
  netnode_check();
  if ( v9 != -1 )
  {
    if ( netnode_supfirst() != -1 )
    {
      do
      {
        v8 = node2ea();
        v2 = netnode_supval();
        v10[0] = 0;
        v3 = &v11[v2];
        v4 = unpack_ds();
        v5 = unpack_ds();
        v6 = 0;
        if ( v11 < v3 )
          v6 = v11[0];
        v10[1] = v4;
        v10[2] = v5;
        if ( v4 && (unsigned __int8)deserialize_tinfo() )
        {
          v10[3] = 0;
          if ( v6 == 3 || v6 != 1 && (unsigned int)sub_3338C0(v8) != 2 )
            sub_36FF50(a1, v8, (__int64)v10, v6);
          clear_tinfo_t();
        }
        else
        {
          sub_68EA0((__int64)"%a: incorrect type has been skipped!\n", a2);
        }
        qfree();
        qfree();
        clear_tinfo_t();
      }
      while ( netnode_supnext() != -1 );
    }
    netnode_kill();
  }
  return v12 - __readfsqword(0x28u);
}

