__int64 __fastcall sub_5EFA0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int64 a7)
{
  __int64 v13; // rax
  __int64 v14; // rbx
  const char *v15; // rsi
  __int64 v16; // rbx
  char v17; // al
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  __int64 v24; // [rsp+8h] [rbp-80h] BYREF
  __int64 v25; // [rsp+10h] [rbp-78h] BYREF
  __int64 v26; // [rsp+18h] [rbp-70h]
  __int128 v27; // [rsp+20h] [rbp-68h]
  __int128 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+40h] [rbp-48h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  netnode_check(&v24, "$ macho", 0, 0);
  if ( v24 == a3 )
  {
    if ( a5 || a4 != 83 )
    {
      if ( a5 == 0xFFFFFFFF && a4 == 65 )
      {
        if ( a7 != 4 )
        {
          sub_47050(a2, (__int64)"Wrong data size in the MACHO 'alt imagebase' record");
          return 0;
        }
        v25 = *a6;
        netnode_supset(a3, -1, &v25, 8, 65);
      }
      else
      {
        if ( a5 != 4294967294 || a4 != 83 )
          return 0;
        if ( a7 != 16 )
        {
          sub_47050(a2, (__int64)"Wrong data size in the MACHO 'alt uuid' record");
          return 0;
        }
        netnode_supset(a3, -2, a6, 16, 83);
      }
    }
    else
    {
      if ( a7 != 28 )
      {
        sub_47050(a2, (__int64)"Wrong data size in the MACHO 'mach_header' record");
        return 0;
      }
      netnode_supset(a3, 0, a6, 28, 83);
    }
  }
  else
  {
    if ( a3 != *(_QWORD *)(a1 + 120) )
      return 0;
    if ( a4 == 71 )
    {
      v22 = node2ea(a5);
      v23 = netnode_altval(*(_QWORD *)(a1 + 120), v22, 839);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 && (unsigned __int64)(int)v23 >= 0xFFFFFFFFFFFFFFFDLL )
        v23 = (int)v23;
      sub_4F800(a1, v22, v23);
    }
    else if ( a4 <= 0x47u )
    {
      if ( a4 == 65 )
      {
        if ( a5 <= 0xFFFFFFF9 )
        {
          v19 = node2ea(a5);
          v20 = netnode_altval(*(_QWORD *)(a1 + 120), v19, 833);
          v21 = *(_QWORD *)(a1 + 120);
          v25 = v20;
          netnode_supset(v21, v19, &v25, 8, 833);
        }
      }
      else
      {
        if ( a4 != 68 )
          return 0;
        v16 = node2ea(a5);
        v17 = netnode_charval(*(_QWORD *)(a1 + 120), v16, 324);
        v18 = *(_QWORD *)(a1 + 120);
        LOBYTE(v25) = v17;
        netnode_supset(v18, v16, &v25, 1, 324);
      }
    }
    else if ( a4 == 83 )
    {
      if ( a5 == 0xFFFFFFFF )
        netnode_supset(a3, -1, a6, a7, 83);
    }
    else
    {
      if ( a4 != 115 )
        return 0;
      v13 = node2ea(a5);
      v27 = 0;
      v14 = v13;
      v25 = 56;
      v26 = 0;
      v29 = -1;
      v28 = -1;
      if ( (unsigned __int8)sub_54AC0((__int64)&v25, a1, v13) )
      {
        v15 = (const char *)a1;
        sub_54A30((__int64)&v25, a1, v14);
      }
      else
      {
        v15 = "could not read PUSHINFO for %a";
        sub_47050(a2, (__int64)"could not read PUSHINFO for %a", NAN);
      }
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26, v15);
      }
    }
  }
  return 1;
}

