__int64 __fastcall sub_15A50(_BOOL8 (__fastcall ***a1)(__int64 a1, int a2))
{
  _BOOL8 (__fastcall **v2)(__int64, int); // rbx
  _BOOL8 (__fastcall **v3)(__int64, int); // rax
  __int64 v4; // r12
  size_t v5; // r14
  __int64 v6; // rsi
  size_t v7; // rax
  _BOOL8 (__fastcall **v8)(__int64, int); // rbx
  _BOOL8 (__fastcall *v9)(__int64, int); // rax
  unsigned int v10; // r8d
  _BOOL8 (__fastcall *v12)(__int64, int); // rax
  _BOOL8 (__fastcall *v13)(__int64, int); // rax
  _BOOL8 (__fastcall *v14)(__int64, int); // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  _BOOL8 (__fastcall **v17)(__int64, int); // r12
  size_t v18; // rax
  size_t v19; // rbx
  void *v20; // rdi
  size_t v21; // r13
  __int64 v22; // rbx
  int v23; // r13d
  int v24; // r13d
  int v25; // [rsp+14h] [rbp-109Ch]
  unsigned int v26; // [rsp+14h] [rbp-109Ch]
  unsigned int v27; // [rsp+28h] [rbp-1088h]
  unsigned int v28; // [rsp+28h] [rbp-1088h]
  _BOOL8 (__fastcall **v29)(__int64, int); // [rsp+28h] [rbp-1088h]
  unsigned int v30; // [rsp+28h] [rbp-1088h]
  unsigned int v31; // [rsp+28h] [rbp-1088h]
  unsigned int v32; // [rsp+28h] [rbp-1088h]
  __int64 v33; // [rsp+30h] [rbp-1080h]
  __int64 v34; // [rsp+50h] [rbp-1060h]

  if ( !a1[130] || (unsigned __int64)a1[139] <= 3 )
    goto LABEL_21;
  v2 = a1[138];
  v33 = qvector_reserve();
  *(_WORD *)v33 = *(_WORD *)v2;
  *(_BYTE *)(v33 + 2) = 0;
  v3 = a1[139];
  if ( !v3 )
    goto LABEL_4;
  v15 = (unsigned __int64)v3 - 1;
  v16 = 2;
  v34 = 0;
  v17 = a1[138];
  if ( v15 <= 2 )
    v16 = v15;
  v18 = v15 - v16;
  v19 = v18;
  if ( !v18 )
  {
LABEL_4:
    v4 = 6;
    v5 = 0;
LABEL_5:
    v34 = qvector_reserve();
    v6 = v34;
    goto LABEL_6;
  }
  v20 = nullptr;
  v21 = v18 + 1;
  if ( v18 != -1 )
  {
    v34 = qvector_reserve();
    v20 = (void *)v34;
  }
  memmove(v20, (char *)v17 + v16, v19);
  *(_BYTE *)(v34 + v19) = 0;
  v6 = v34;
  if ( v21 )
  {
    v4 = v21 + 5;
    v22 = v21 + 6;
    v5 = v21 - 1;
  }
  else
  {
    v5 = 0;
    v22 = 7;
    v4 = 6;
  }
  if ( v22 )
    goto LABEL_5;
LABEL_6:
  *(_BYTE *)(v6 + v4) = 0;
  v7 = v5 + v34;
  *(_DWORD *)v7 = 1650811950;
  *(_WORD *)(v7 + 4) = 26485;
  v8 = a1[129];
  if ( !(24LL * (_QWORD)a1[130]) )
  {
LABEL_17:
    if ( v34 )
      qfree();
    if ( v33 )
      qfree();
LABEL_21:
    if ( (unsigned __int64)a1[136] <= 1 || !(unsigned __int8)qdirname() )
      return 0;
    qmakepath();
    v12 = **a1;
    if ( v12 == sub_101D0 )
    {
      if ( (unsigned __int8)qfileexist() )
      {
        open_linput();
        v23 = calc_file_crc32();
        close_linput();
        if ( v23 == *((_DWORD *)a1 + 282) )
        {
          sub_15980(
            (__int64)a1,
            (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            (const char *)a1 + 8,
            1);
          return 1;
        }
      }
      sub_15980(
        (__int64)a1,
        (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        (const char *)a1 + 8,
        0);
    }
    else
    {
      v30 = v12((__int64)a1, 1);
      sub_15980(
        (__int64)a1,
        (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        (const char *)a1 + 8,
        v30);
      v10 = v30;
      if ( v30 )
        return v10;
    }
    qmakepath();
    v13 = **a1;
    if ( v13 == sub_101D0 )
    {
      if ( (unsigned __int8)qfileexist() )
      {
        open_linput();
        v24 = calc_file_crc32();
        close_linput();
        if ( v24 == *((_DWORD *)a1 + 282) )
        {
LABEL_52:
          sub_15980(
            (__int64)a1,
            (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            a1 + 1,
            1);
          return 1;
        }
      }
      sub_15980(
        (__int64)a1,
        (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        a1 + 1,
        0);
    }
    else
    {
      v32 = v13((__int64)a1, 1);
      sub_15980(
        (__int64)a1,
        (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        a1 + 1,
        v32);
      v10 = v32;
      if ( v32 )
        return v10;
    }
    v29 = a1[129];
    if ( 24LL * (_QWORD)a1[130] )
    {
      while ( 1 )
      {
        qmakepath();
        v14 = **a1;
        if ( v14 == sub_101D0 )
        {
          if ( (unsigned __int8)qfileexist() )
          {
            open_linput();
            v25 = calc_file_crc32();
            close_linput();
            if ( v25 == *((_DWORD *)a1 + 282) )
              goto LABEL_52;
          }
          sub_15980(
            (__int64)a1,
            (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            a1 + 1,
            0);
        }
        else
        {
          v26 = v14((__int64)a1, 1);
          sub_15980(
            (__int64)a1,
            (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            a1 + 1,
            v26);
          v10 = v26;
          if ( v26 )
            return v10;
        }
        v29 += 3;
        if ( v29 == &a1[129][3 * (_QWORD)a1[130]] )
          return 0;
      }
    }
    return 0;
  }
  while ( 1 )
  {
    qmakepath();
    v9 = **a1;
    if ( v9 == sub_101D0 )
      break;
    v31 = v9((__int64)a1, 0);
    sub_15980(
      (__int64)a1,
      (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "BUILDID",
      (const char *)a1 + 8,
      v31);
    v10 = v31;
    if ( v31 )
      goto LABEL_13;
LABEL_9:
    v8 += 3;
    if ( v8 == &a1[129][3 * (_QWORD)a1[130]] )
      goto LABEL_17;
  }
  if ( !(unsigned __int8)qfileexist() )
  {
    sub_15980(
      (__int64)a1,
      (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "BUILDID",
      (const char *)a1 + 8,
      0);
    goto LABEL_9;
  }
  sub_15980(
    (__int64)a1,
    (__int64)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
    "BUILDID",
    (const char *)a1 + 8,
    1);
  v10 = 1;
LABEL_13:
  if ( v34 )
  {
    v27 = v10;
    qfree();
    v10 = v27;
  }
  if ( v33 )
  {
    v28 = v10;
    qfree();
    return v28;
  }
  return v10;
}

