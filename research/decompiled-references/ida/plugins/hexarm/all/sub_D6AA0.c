__int64 __fastcall sub_D6AA0(__int64 a1)
{
  unsigned int tinfo_details; // r12d
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned int tinfo_size; // r14d
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rbp
  _QWORD *v15; // rbx
  int v17; // [rsp-8h] [rbp-F8h]
  __int64 *v18; // [rsp+0h] [rbp-F0h]
  _DWORD v19[4]; // [rsp+8h] [rbp-E8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+20h] [rbp-D0h]
  __int64 v22; // [rsp+28h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+30h] [rbp-C0h]
  int v24; // [rsp+40h] [rbp-B0h]
  __int64 v25; // [rsp+48h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+50h] [rbp-A0h]
  __int64 v27; // [rsp+60h] [rbp-90h]
  __int64 v28; // [rsp+68h] [rbp-88h]
  __int64 v29; // [rsp+70h] [rbp-80h]
  __int128 v30; // [rsp+78h] [rbp-78h]
  __int64 v31; // [rsp+88h] [rbp-68h]
  __int128 v32; // [rsp+90h] [rbp-60h]
  char v33; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v34; // [rsp+B0h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v25 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 16;
  v18 = &v25;
  v26 = 0;
  v30 = 0;
  v32 = 0;
  tinfo_details = get_tinfo_details();
  if ( !(_BYTE)tinfo_details )
  {
    if ( !under_debugger )
      sub_3835A0(50077);
    BUG();
  }
  if ( (_QWORD)v26 )
  {
    v2 = 0;
    v3 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    do
    {
      v4 = v25 + 80 * v3;
      tinfo_size = get_tinfo_size();
      sub_1C5A50(v19, a1, v4, tinfo_size);
      sub_1C2BF0(
        (unsigned int)v19,
        (unsigned int)&v20,
        tinfo_size,
        *(_QWORD *)(a1 + 1440),
        0,
        v6,
        v17,
        (_DWORD)v18,
        v19[0],
        v19[2],
        v20,
        v21,
        v22,
        v23,
        *((__int64 *)&v23 + 1),
        v24,
        v25,
        v26,
        DWORD2(v26),
        v27,
        v28);
      ++v2;
      cleanup_argloc();
      v3 = v2;
    }
    while ( v2 < (unsigned __int64)v26 );
    v11 = *(_QWORD *)(a1 + 520);
    if ( v11 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v11 + 48) )
        {
          if ( (*(_DWORD *)(v11 + 24) & 0x600) != 0x200 )
            sub_A6FD0(v11, 0, v7, v8, v9, v10);
          if ( (unsigned __int8)sub_318830(v11 + 216, &v22) || (unsigned __int8)sub_64180((_QWORD *)(v11 + 240), &v20) )
            break;
        }
        v11 = *(_QWORD *)(v11 + 8);
        if ( !v11 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      tinfo_details = 0;
    }
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree();
    }
    qfree();
  }
  else
  {
    tinfo_details = 0;
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v12 = v25;
  if ( v25 )
  {
    v13 = v26;
    if ( (_QWORD)v26 )
    {
      v14 = 0;
      do
      {
        v15 = (_QWORD *)(v12 + 80 * v14);
        clear_tinfo_t();
        if ( v15[5] )
        {
          v15[6] = 0;
          qfree();
        }
        if ( v15[2] )
        {
          v15[3] = 0;
          qfree();
        }
        ++v14;
        cleanup_argloc();
        v12 = v25;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return tinfo_details;
}

