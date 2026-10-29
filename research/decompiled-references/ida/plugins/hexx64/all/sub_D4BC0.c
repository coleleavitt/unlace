__int64 __fastcall sub_D4BC0(__int64 a1, __int64 a2, _DWORD *a3, char a4, double a5)
{
  unsigned int v5; // r14d
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned int tinfo_size; // eax
  unsigned int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r13
  int v16; // eax
  int v17; // r8d
  unsigned int v18; // eax
  unsigned int v19; // r15d
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-78h] BYREF
  __int64 v25; // [rsp+28h] [rbp-70h]
  __int64 v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+48h] [rbp-50h]
  __int64 v29; // [rsp+50h] [rbp-48h]
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( (unsigned int)(*a3 - 3) <= 1 )
  {
    v5 = sub_D4680(a1, a2, a3);
    if ( !(_BYTE)v5 )
    {
      copy_tinfo_t();
      if ( a4 )
      {
LABEL_21:
        clear_tinfo_t();
        return v5;
      }
      v9 = *(_DWORD *)(a1 + 72);
      if ( v9 <= 0x10 )
        v9 = getinf();
      if ( v9 == 176 )
      {
        if ( (unsigned __int64)getinf() <= 0x397 )
        {
          if ( !(unsigned __int8)getinf_flag() )
            goto LABEL_21;
          netnode_check();
          v19 = netnode_altval();
          if ( v19 <= 0x74 )
            goto LABEL_21;
          v20 = *(_DWORD *)(get_ph() + 4);
          if ( v20 )
          {
            v21 = (unsigned int)(v20 - 13);
            if ( (unsigned int)v21 > 0x3B )
              goto LABEL_21;
            v22 = 0x800000000000005LL;
            if ( !_bittest64(&v22, v21) || v19 == 117 )
              goto LABEL_21;
          }
        }
      }
      else if ( v9 == 256 )
      {
        goto LABEL_21;
      }
      if ( (unsigned __int8)sub_36E850(a1, a2, a3) )
      {
        v18 = sub_D4680(a1, a2, a3);
        if ( (_BYTE)v18 )
        {
          v5 = v18;
          goto LABEL_21;
        }
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 80) + 606LL) & 0x10) != 0 || (get_tinfo_property() & 0xF) == 0xB )
      {
        if ( (int)a3[22] <= 4 )
        {
          v10 = 9;
          goto LABEL_14;
        }
      }
      else
      {
        v23 = *(_DWORD *)(a1 + 72);
        if ( v23 <= 0x10 )
          v23 = getinf();
        if ( v23 != 176 && v23 != 256 || (int)a3[22] <= 8 )
        {
          sub_1EF530((__int64)a3);
          goto LABEL_21;
        }
      }
      v10 = 25;
LABEL_14:
      v27 = v10;
      sub_1EF530((__int64)a3);
      clear_tinfo_t();
      if ( !(unsigned __int8)sub_D4680(a1, a2, a3) )
      {
        sub_1EF530((__int64)a3);
        if ( !(unsigned __int8)sub_D4680(a1, a2, a3) )
        {
          if ( !under_debugger )
            sub_383060(0xCC90u, a5);
          BUG();
        }
      }
      sub_1F45B0(a2, -1, (__int64)a3);
      a3[6] |= 0x400u;
      v26 = 0;
      v29 = 0;
      tinfo_size = get_tinfo_size();
      v24 = 0;
      v25 = 0;
      v12 = sub_D2BA0(a1, (__int64)&v24, a3, tinfo_size, 0);
      v13 = v24;
      v5 = v12;
      if ( (_BYTE)v12 )
      {
        v14 = (unsigned int)a3[22];
        v15 = v25;
        v27 = 0;
        v28 = 0;
        v16 = sub_D2BA0(a1, (__int64)&v27, a3, v14, 0);
        LOBYTE(v17) = v28 == v15;
        v5 = v16 & v17;
        if ( v27 )
          qfree(v27);
      }
      if ( v13 )
        qfree(v13);
      goto LABEL_21;
    }
  }
  return 1;
}

