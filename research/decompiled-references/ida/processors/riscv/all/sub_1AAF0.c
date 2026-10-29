__int64 __fastcall sub_1AAF0(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned __int64 a4)
{
  char tinfo_property; // al
  unsigned int v6; // r12d
  char v8; // r15
  char v9; // al
  unsigned __int64 tinfo_size; // rax
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // r12d
  __int64 v16; // rdi
  struct _Unwind_Exception *v17; // rbx
  __int64 *v18; // [rsp+0h] [rbp-A8h]
  __int64 v19; // [rsp+30h] [rbp-78h] BYREF
  __int128 v20; // [rsp+38h] [rbp-70h]
  __int128 v21; // [rsp+48h] [rbp-60h]
  __int64 v22; // [rsp+58h] [rbp-50h]
  int v23; // [rsp+60h] [rbp-48h]
  unsigned __int64 v24; // [rsp+68h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( __PAIR128__(a4, (unsigned __int64)a3) == 0 )
  {
    if ( !under_debugger )
    {
      v17 = (struct _Unwind_Exception *)interr(10431);
      sub_1AA50(v18);
      _Unwind_Resume(v17);
    }
    BUG();
  }
  tinfo_property = get_tinfo_property(*a2, 2);
  if ( (tinfo_property & 0x3E) != 0 )
  {
    v8 = tinfo_property & 0xF;
    if ( (tinfo_property & 0xFu) <= 9 )
    {
      tinfo_size = get_tinfo_size(0, *a2, 0);
      if ( tinfo_size == -1 )
        return 0;
      if ( v8 == 9 )
      {
        if ( *(_QWORD *)(a1 + 72) < tinfo_size )
          return 0;
        v14 = *(unsigned __int8 *)(a1 + 87);
        if ( (unsigned __int8)v14 >= *(_BYTE *)(a1 + 85) )
          return 0;
        v15 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v14);
        cleanup_argloc(a3);
        *a3 = 3;
        a3[2] = v15;
        ++*(_BYTE *)(a1 + 87);
        return 1;
      }
    }
    else
    {
      v9 = tinfo_property & 0x3F;
      if ( v9 != 45 && ((v8 - 10) & 0xFD) != 0 )
      {
        if ( v9 == 13 )
        {
          v16 = *a2;
          v22 = 0;
          v23 = 1;
          v20 = 0;
          v21 = 0;
          get_tinfo_details(v16, 13);
          return (unsigned int)-1;
        }
        if ( v8 == 11 )
        {
          v13 = *a2;
          v19 = 0;
          *(_QWORD *)&v20 = 0;
          get_tinfo_details(v13, 11);
          v6 = -1;
          clear_tinfo_t(&v19);
          return v6;
        }
        return (unsigned int)-1;
      }
      tinfo_size = get_tinfo_size(0, *a2, 0);
      if ( tinfo_size == -1 )
        return 0;
    }
    if ( *(_QWORD *)(a1 + 64) < tinfo_size )
      return 0;
    v11 = *(unsigned __int8 *)(a1 + 86);
    if ( (unsigned __int8)v11 >= *(_BYTE *)(a1 + 84) )
      return 0;
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v11);
    cleanup_argloc(a3);
    *a3 = 3;
    a3[2] = v12;
    ++*(_BYTE *)(a1 + 86);
    return 1;
  }
  return (unsigned int)-1;
}

