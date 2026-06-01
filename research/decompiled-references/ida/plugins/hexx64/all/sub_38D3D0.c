__int64 __fastcall sub_38D3D0(__int64 a1, __int128 *a2, _QWORD *a3, __int64 *a4, double a5)
{
  __int64 v5; // r13
  int v8; // eax
  __int128 *v9; // rbx
  __int64 v10; // rax
  unsigned int tinfo_udt_member; // ebx
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r14
  int tinfo_property; // ebx
  int v17; // eax
  __int64 v18; // r14
  char v19; // al
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int128 v22; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-C8h]
  __int128 v24; // [rsp+28h] [rbp-C0h]
  __int64 v25; // [rsp+38h] [rbp-B0h]
  __int128 v26; // [rsp+40h] [rbp-A8h]
  __int128 v27; // [rsp+50h] [rbp-98h]
  __int64 v28; // [rsp+80h] [rbp-68h]
  int v29; // [rsp+88h] [rbp-60h]
  __int64 v30; // [rsp+90h] [rbp-58h]
  char v31; // [rsp+98h] [rbp-50h]
  unsigned __int64 v32; // [rsp+A8h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 != 1 )
    return (unsigned int)-1;
  v5 = *(_QWORD *)(a1 + 8);
  v8 = *(_DWORD *)(v5 + 8);
  if ( (unsigned int)(v8 - 59) > 1 )
  {
    if ( v8 == 35 && *(_DWORD *)(*(_QWORD *)(v5 + 32) + 8LL) == 61 )
    {
      v15 = *(_QWORD *)(v5 + 24);
      tinfo_property = get_tinfo_property();
      if ( tinfo_property > 0 )
      {
        v17 = *(_DWORD *)(v15 + 8);
        if ( v17 == 48 )
        {
          v15 = *(_QWORD *)(v15 + 24);
          v17 = *(_DWORD *)(v15 + 8);
        }
        if ( v17 == 52 )
        {
          v18 = *(_QWORD *)(v15 + 24);
          if ( *(_DWORD *)(v18 + 8) == 60 )
          {
            *(_QWORD *)&v22 = get_tinfo_property();
            if ( (_BYTE)v22 )
            {
              v19 = get_tinfo_property();
              v20 = 0;
              if ( (v19 & 0x3F) == 0xD )
                v20 = *(_DWORD *)(v18 + 32);
              if ( a3 )
              {
                v21 = v22;
                *(_QWORD *)&v22 = *a3;
                *a3 = v21;
              }
              if ( a4 )
                *a4 = 8 * (v20 + tinfo_property * sub_281A60(*(_QWORD *)(v5 + 32), a5));
            }
            clear_tinfo_t();
          }
        }
      }
    }
    return (unsigned int)-1;
  }
  v9 = a2;
  copy_tinfo_t();
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) == 60 )
  {
    *(_QWORD *)&v22 = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    tinfo_udt_member = -1;
  }
  else
  {
    if ( a3 )
      *a3 = 0;
    v23 = 0;
    if ( !a2 )
      v9 = &v22;
    v10 = *(_QWORD *)(a1 + 8);
    v25 = 0;
    v28 = 1;
    v29 = -1;
    v30 = 0;
    v31 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    *(_QWORD *)v9 = *(unsigned int *)(v10 + 32);
    if ( a4 && (get_tinfo_property() & 0x3F) == 0xD )
    {
      v13 = get_tinfo_property();
      v14 = 0;
      if ( (v13 & 0x3F) == 0xD )
        v14 = 8LL * *(_QWORD *)v9;
      *a4 = v14;
    }
    tinfo_udt_member = find_tinfo_udt_member();
    clear_tinfo_t();
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
  }
  clear_tinfo_t();
  return tinfo_udt_member;
}

