__int64 __fastcall sub_1C6060(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4, double a5)
{
  unsigned int v7; // r15d
  char v8; // al
  unsigned int v9; // r14d
  __int64 v10; // rdx
  unsigned int tinfo_size; // eax
  int v13; // eax
  unsigned int v14; // r13d
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // dl
  unsigned int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // al
  __int64 v25; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B0h]
  __int64 v27; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+58h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-90h]
  __int64 v30; // [rsp+70h] [rbp-88h]
  __int64 v31; // [rsp+78h] [rbp-80h]
  __int128 v32; // [rsp+80h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-68h]
  __int128 v34; // [rsp+98h] [rbp-60h]
  char v35; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+B8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x3F) == 1 )
    return 1;
  if ( !*a3 )
    return 0;
  if ( a4 > 0x10 )
  {
    v7 = a4;
    if ( a4 - 208 > 0x2F )
      goto LABEL_5;
    goto LABEL_16;
  }
  v19 = getinf();
  a4 = v19;
  if ( v19 - 208 <= 0x2F )
  {
LABEL_16:
    v7 = 16;
LABEL_17:
    a4 = getinf();
    goto LABEL_5;
  }
  v7 = v19;
  if ( v19 <= 0x10 )
    goto LABEL_17;
LABEL_5:
  if ( a4 == 176 )
  {
    if ( (unsigned __int64)getinf() > 0x397 )
      goto LABEL_7;
    if ( (unsigned __int8)getinf_flag() )
    {
      netnode_check();
      v20 = netnode_altval();
      if ( v20 > 0x74 )
      {
        v21 = *(_DWORD *)(get_ph() + 4);
        if ( !v21 )
          goto LABEL_7;
        v22 = (unsigned int)(v21 - 13);
        if ( (unsigned int)v22 <= 0x3B )
        {
          v23 = 0x800000000000005LL;
          if ( _bittest64(&v23, v22) )
          {
            if ( v20 != 117 )
              goto LABEL_7;
          }
        }
      }
    }
  }
  else if ( a4 != 256 )
  {
LABEL_7:
    v25 = 0;
    v26 = 0;
    v28 = 0;
    v8 = v7;
    v27 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v33 = 0;
    v32 = 0;
    v34 = 0;
    if ( v7 == 192 || (v7 & 0xFFFFFF0F) != 0 )
    {
      HIDWORD(v29) = v7;
      v8 = -64;
    }
    v35 = v8;
    copy_tinfo_t();
    v9 = calc_retloc();
    if ( (_BYTE)v9 )
    {
      v10 = v32;
      *(_QWORD *)&v32 = v26;
      v26 = v10;
      LODWORD(v10) = v31;
      LODWORD(v31) = v25;
      LODWORD(v25) = v10;
    }
    cleanup_argloc();
    clear_tinfo_t();
    if ( (_BYTE)v9 )
    {
      tinfo_size = get_tinfo_size();
      sub_1C59F0((__int64)&v27, a1, (__int64)&v25, tinfo_size, 0, 0.0);
      v9 = sub_1C3F00();
      cleanup_argloc();
    }
    else
    {
      v13 = v7;
      if ( v7 <= 0x10 )
        v13 = getinf();
      if ( v13 == 176 )
      {
        if ( (unsigned __int64)getinf() > 0x397
          || (unsigned __int8)getinf_flag()
          && (netnode_check(), v14 = netnode_altval(), v14 > 0x74)
          && ((v15 = *(_DWORD *)(get_ph() + 4)) == 0
           || (v16 = (unsigned int)(v15 - 13), (unsigned int)v16 <= 0x3B)
           && (v17 = 0x800000000000005LL, _bittest64(&v17, v16))
           && v14 != 117) )
        {
          v27 = 0;
          v29 = 0;
          v30 = 0;
          v31 = 0;
          v33 = 0;
          v28 = 0;
          v32 = 0;
          v34 = 0;
          copy_tinfo_t();
          v18 = -64;
          if ( v7 != 192 && (v7 & 0xFFFFFF0F) == 0 )
          {
            v24 = v7;
            v7 = 0;
            v18 = v24;
          }
          HIDWORD(v29) = v7;
          v35 = v18;
          if ( (unsigned __int8)calc_arglocs() )
            v9 = sub_1C3400(nullptr, nullptr, (__int64)a3, 1, 0.0);
          cleanup_argloc();
          clear_tinfo_t();
        }
      }
    }
    cleanup_argloc();
    return v9;
  }
  return sub_1C3400(nullptr, nullptr, (__int64)a3, 1, a5);
}

