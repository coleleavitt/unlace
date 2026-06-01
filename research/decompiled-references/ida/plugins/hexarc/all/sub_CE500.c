__int64 __fastcall sub_CE500(__int64 a1, __int64 a2, _DWORD *a3, char a4)
{
  unsigned int v4; // r14d
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int tinfo_size; // eax
  unsigned int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r13
  int v15; // eax
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // r15d
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // [rsp+18h] [rbp-80h] BYREF
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
    v4 = sub_CDFC0(a1, a2, a3);
    if ( !(_BYTE)v4 )
    {
      v23 = 0;
      copy_tinfo_t();
      if ( a4 )
      {
LABEL_21:
        clear_tinfo_t();
        return v4;
      }
      v8 = *(_DWORD *)(a1 + 72);
      if ( v8 <= 0x10 )
        v8 = getinf();
      if ( v8 == 176 )
      {
        if ( (unsigned __int64)getinf() <= 0x397 )
        {
          if ( !(unsigned __int8)getinf_flag() )
            goto LABEL_21;
          netnode_check();
          v18 = netnode_altval();
          if ( v18 <= 0x74 )
            goto LABEL_21;
          v19 = *(_DWORD *)(get_ph() + 4);
          if ( v19 )
          {
            v20 = (unsigned int)(v19 - 13);
            if ( (unsigned int)v20 > 0x3B )
              goto LABEL_21;
            v21 = 0x800000000000005LL;
            if ( !_bittest64(&v21, v20) || v18 == 117 )
              goto LABEL_21;
          }
        }
      }
      else if ( v8 == 256 )
      {
        goto LABEL_21;
      }
      if ( (unsigned __int8)sub_366FD0(a1, a2, a3) )
      {
        v17 = sub_CDFC0(a1, a2, a3);
        if ( (_BYTE)v17 )
        {
          v4 = v17;
          goto LABEL_21;
        }
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 80) + 606LL) & 0x10) != 0 || (get_tinfo_property() & 0xF) == 0xB )
      {
        if ( (int)a3[22] <= 4 )
        {
          v9 = 9;
          goto LABEL_14;
        }
      }
      else
      {
        v22 = *(_DWORD *)(a1 + 72);
        if ( v22 <= 0x10 )
          v22 = getinf();
        if ( v22 != 176 && v22 != 256 || (int)a3[22] <= 8 )
        {
          sub_1E81B0(a3, &v23);
          goto LABEL_21;
        }
      }
      v9 = 25;
LABEL_14:
      v27 = v9;
      sub_1E81B0(a3, &v27);
      clear_tinfo_t();
      if ( !(unsigned __int8)sub_CDFC0(a1, a2, a3) )
      {
        sub_1E81B0(a3, *(_QWORD *)(a1 + 80) + 264LL);
        if ( !(unsigned __int8)sub_CDFC0(a1, a2, a3) )
        {
          if ( !under_debugger )
            sub_37B760(52368);
          BUG();
        }
      }
      sub_1ED230(a2, -1, a3);
      a3[6] |= 0x400u;
      v26 = 0;
      v29 = 0;
      tinfo_size = get_tinfo_size();
      v24 = 0;
      v25 = 0;
      v11 = sub_CC4E0(a1, &v24, a3, tinfo_size, 0);
      v12 = v24;
      v4 = v11;
      if ( (_BYTE)v11 )
      {
        v13 = (unsigned int)a3[22];
        v14 = v25;
        v27 = 0;
        v28 = 0;
        v15 = sub_CC4E0(a1, &v27, a3, v13, 0);
        LOBYTE(v16) = v28 == v14;
        v4 = v15 & v16;
        if ( v27 )
          qfree();
      }
      if ( v12 )
        qfree();
      goto LABEL_21;
    }
  }
  return 1;
}

