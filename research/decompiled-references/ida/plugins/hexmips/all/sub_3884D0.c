__int64 __fastcall sub_3884D0(__int64 a1, __int128 *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v4; // r13
  int v7; // eax
  __int128 *v8; // rbx
  __int64 v9; // rax
  unsigned int tinfo_udt_member; // ebx
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // r14
  int tinfo_property; // ebx
  int v16; // eax
  __int64 v17; // r14
  char v18; // al
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int128 v21; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-C8h]
  __int128 v23; // [rsp+28h] [rbp-C0h]
  __int64 v24; // [rsp+38h] [rbp-B0h]
  __int128 v25; // [rsp+40h] [rbp-A8h]
  __int128 v26; // [rsp+50h] [rbp-98h]
  __int64 v27; // [rsp+80h] [rbp-68h]
  int v28; // [rsp+88h] [rbp-60h]
  __int64 v29; // [rsp+90h] [rbp-58h]
  char v30; // [rsp+98h] [rbp-50h]
  unsigned __int64 v31; // [rsp+A8h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 != 1 )
    return (unsigned int)-1;
  v4 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(v4 + 8);
  if ( (unsigned int)(v7 - 59) > 1 )
  {
    if ( v7 == 35 && *(_DWORD *)(*(_QWORD *)(v4 + 32) + 8LL) == 61 )
    {
      v14 = *(_QWORD *)(v4 + 24);
      tinfo_property = get_tinfo_property();
      if ( tinfo_property > 0 )
      {
        v16 = *(_DWORD *)(v14 + 8);
        if ( v16 == 48 )
        {
          v14 = *(_QWORD *)(v14 + 24);
          v16 = *(_DWORD *)(v14 + 8);
        }
        if ( v16 == 52 )
        {
          v17 = *(_QWORD *)(v14 + 24);
          if ( *(_DWORD *)(v17 + 8) == 60 )
          {
            *(_QWORD *)&v21 = get_tinfo_property();
            if ( (_BYTE)v21 )
            {
              v18 = get_tinfo_property();
              v19 = 0;
              if ( (v18 & 0x3F) == 0xD )
                v19 = *(_DWORD *)(v17 + 32);
              if ( a3 )
              {
                v20 = v21;
                *(_QWORD *)&v21 = *a3;
                *a3 = v20;
              }
              if ( a4 )
                *a4 = 8 * (v19 + tinfo_property * sub_27D1E0(*(_QWORD *)(v4 + 32)));
            }
            clear_tinfo_t();
          }
        }
      }
    }
    return (unsigned int)-1;
  }
  v8 = a2;
  copy_tinfo_t();
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) == 60 )
  {
    *(_QWORD *)&v21 = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    tinfo_udt_member = -1;
  }
  else
  {
    if ( a3 )
      *a3 = 0;
    v22 = 0;
    if ( !a2 )
      v8 = &v21;
    v9 = *(_QWORD *)(a1 + 8);
    v24 = 0;
    v27 = 1;
    v28 = -1;
    v29 = 0;
    v30 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v26 = 0;
    *(_QWORD *)v8 = *(unsigned int *)(v9 + 32);
    if ( a4 && (get_tinfo_property() & 0x3F) == 0xD )
    {
      v12 = get_tinfo_property();
      v13 = 0;
      if ( (v12 & 0x3F) == 0xD )
        v13 = 8LL * *(_QWORD *)v8;
      *a4 = v13;
    }
    tinfo_udt_member = find_tinfo_udt_member();
    clear_tinfo_t();
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree();
    }
  }
  clear_tinfo_t();
  return tinfo_udt_member;
}

