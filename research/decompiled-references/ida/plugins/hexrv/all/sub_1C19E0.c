__int64 __fastcall sub_1C19E0(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v6; // r15d
  char v7; // al
  unsigned int v8; // r14d
  __int64 v9; // rdx
  int tinfo_size; // eax
  int v12; // eax
  unsigned int v13; // r13d
  int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // dl
  unsigned int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B0h]
  __int64 v26; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+58h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-90h]
  __int64 v29; // [rsp+70h] [rbp-88h]
  __int64 v30; // [rsp+78h] [rbp-80h]
  __int128 v31; // [rsp+80h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-68h]
  __int128 v33; // [rsp+98h] [rbp-60h]
  char v34; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+B8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x3F) == 1 )
    return 1;
  if ( !*a3 )
    return 0;
  if ( a4 > 0x10 )
  {
    v6 = a4;
    if ( a4 - 208 > 0x2F )
      goto LABEL_5;
    goto LABEL_16;
  }
  v18 = getinf();
  a4 = v18;
  if ( v18 - 208 <= 0x2F )
  {
LABEL_16:
    v6 = 16;
LABEL_17:
    a4 = getinf();
    goto LABEL_5;
  }
  v6 = v18;
  if ( v18 <= 0x10 )
    goto LABEL_17;
LABEL_5:
  if ( a4 == 176 )
  {
    if ( (unsigned __int64)getinf() > 0x397 )
      goto LABEL_7;
    if ( (unsigned __int8)getinf_flag() )
    {
      netnode_check();
      v19 = netnode_altval();
      if ( v19 > 0x74 )
      {
        v20 = *(_DWORD *)(get_ph() + 4);
        if ( !v20 )
          goto LABEL_7;
        v21 = (unsigned int)(v20 - 13);
        if ( (unsigned int)v21 <= 0x3B )
        {
          v22 = 0x800000000000005LL;
          if ( _bittest64(&v22, v21) )
          {
            if ( v19 != 117 )
              goto LABEL_7;
          }
        }
      }
    }
  }
  else if ( a4 != 256 )
  {
LABEL_7:
    v24 = 0;
    v25 = 0;
    v27 = 0;
    v7 = v6;
    v26 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v32 = 0;
    v31 = 0;
    v33 = 0;
    if ( v6 == 192 || (v6 & 0xFFFFFF0F) != 0 )
    {
      HIDWORD(v28) = v6;
      v7 = -64;
    }
    v34 = v7;
    copy_tinfo_t();
    v8 = calc_retloc();
    if ( (_BYTE)v8 )
    {
      v9 = v31;
      *(_QWORD *)&v31 = v25;
      v25 = v9;
      LODWORD(v9) = v30;
      LODWORD(v30) = v24;
      LODWORD(v24) = v9;
    }
    cleanup_argloc();
    clear_tinfo_t();
    if ( (_BYTE)v8 )
    {
      tinfo_size = get_tinfo_size();
      sub_1C1370((__int64)&v26, a1, (__int64)&v24, tinfo_size, 0);
      v8 = sub_1BF880();
      cleanup_argloc();
    }
    else
    {
      v12 = v6;
      if ( v6 <= 0x10 )
        v12 = getinf();
      if ( v12 == 176 )
      {
        if ( (unsigned __int64)getinf() > 0x397
          || (unsigned __int8)getinf_flag()
          && (netnode_check(), v13 = netnode_altval(), v13 > 0x74)
          && ((v14 = *(_DWORD *)(get_ph() + 4)) == 0
           || (v15 = (unsigned int)(v14 - 13), (unsigned int)v15 <= 0x3B)
           && (v16 = 0x800000000000005LL, _bittest64(&v16, v15))
           && v13 != 117) )
        {
          v26 = 0;
          v28 = 0;
          v29 = 0;
          v30 = 0;
          v32 = 0;
          v27 = 0;
          v31 = 0;
          v33 = 0;
          copy_tinfo_t();
          v17 = -64;
          if ( v6 != 192 && (v6 & 0xFFFFFF0F) == 0 )
          {
            v23 = v6;
            v6 = 0;
            v17 = v23;
          }
          HIDWORD(v28) = v6;
          v34 = v17;
          if ( (unsigned __int8)calc_arglocs() )
            v8 = sub_1BED80(nullptr, nullptr, (__int64)a3, 1);
          cleanup_argloc();
          clear_tinfo_t();
        }
      }
    }
    cleanup_argloc();
    return v8;
  }
  return sub_1BED80(nullptr, nullptr, (__int64)a3, 1);
}

