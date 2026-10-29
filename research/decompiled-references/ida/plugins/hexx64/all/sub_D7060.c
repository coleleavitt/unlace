__int64 __fastcall sub_D7060(__int64 a1)
{
  unsigned int tinfo_details; // r12d
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned int tinfo_size; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  _DWORD v18[4]; // [rsp+8h] [rbp-E8h] BYREF
  __int64 v19[2]; // [rsp+18h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+28h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+30h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-A8h]
  __int128 v23; // [rsp+50h] [rbp-A0h]
  __int64 v24; // [rsp+60h] [rbp-90h]
  __int64 v25; // [rsp+68h] [rbp-88h]
  __int64 v26; // [rsp+70h] [rbp-80h]
  __int128 v27; // [rsp+78h] [rbp-78h]
  __int64 v28; // [rsp+88h] [rbp-68h]
  __int128 v29; // [rsp+90h] [rbp-60h]
  char v30; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v31; // [rsp+B0h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v22 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v28 = 0;
  v30 = 16;
  v23 = 0;
  v27 = 0;
  v29 = 0;
  tinfo_details = get_tinfo_details();
  if ( !(_BYTE)tinfo_details )
  {
    if ( !under_debugger )
      sub_383060(0xC39Du, 0.0);
    BUG();
  }
  if ( (_QWORD)v23 )
  {
    v2 = 0;
    v3 = 0;
    v19[0] = 0;
    v19[1] = 0;
    v20 = 0;
    v21 = 0;
    do
    {
      v4 = v22 + 80 * v3;
      tinfo_size = get_tinfo_size();
      sub_1C6010((__int64)v18, a1, v4, tinfo_size);
      sub_1C31B0((__int64)v18, (__int64)v19, tinfo_size, *(_QWORD *)(a1 + 1440), 0);
      ++v2;
      cleanup_argloc();
      v3 = v2;
    }
    while ( v2 < (unsigned __int64)v23 );
    v10 = *(_QWORD *)(a1 + 520);
    if ( v10 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v10 + 48) )
        {
          if ( (*(_DWORD *)(v10 + 24) & 0x600) != 0x200 )
            sub_A7590(v10, 0, v6, v7, v8, v9);
          if ( (unsigned __int8)sub_318470((unsigned __int64 **)(v10 + 216), (__int64)&v20)
            || (unsigned __int8)sub_64780((_QWORD *)(v10 + 240), v19) )
          {
            break;
          }
        }
        v10 = *(_QWORD *)(v10 + 8);
        if ( !v10 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      tinfo_details = 0;
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20);
    }
    qfree(v19[0]);
  }
  else
  {
    tinfo_details = 0;
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v11 = v22;
  if ( v22 )
  {
    v12 = v23;
    if ( (_QWORD)v23 )
    {
      v13 = 0;
      do
      {
        v14 = (_QWORD *)(v11 + 80 * v13);
        clear_tinfo_t();
        v15 = v14[5];
        if ( v15 )
        {
          v14[6] = 0;
          qfree(v15);
        }
        v16 = v14[2];
        if ( v16 )
        {
          v14[3] = 0;
          qfree(v16);
        }
        ++v13;
        cleanup_argloc();
        v11 = v22;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v23 = 0;
    qfree(v11);
  }
  return tinfo_details;
}

