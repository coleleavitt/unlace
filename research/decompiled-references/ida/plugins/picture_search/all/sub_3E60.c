__int64 __fastcall sub_3E60(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 *v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v17)(__int64, __int64, __int64, const char *, const char *, __int64); // r10
  __int64 v18; // r9
  const char *v19; // r8
  const char *v20; // rcx
  __int64 *v21; // rdx

  v4 = *a2;
  if ( (unsigned int)*a2 > 0x2F )
  {
    v6 = *((__int64 **)a2 + 1);
    *((_QWORD *)a2 + 1) = v6 + 1;
  }
  else
  {
    v6 = (__int64 *)(*((_QWORD *)a2 + 2) + v4);
    *a2 = v4 + 8;
  }
  v7 = *v6;
  v8 = *v6;
  v9 = callui(144, *v6, v6, a4);
  v10 = *a2;
  if ( (unsigned int)*a2 > 0x2F )
  {
    v21 = *((__int64 **)a2 + 1);
    v14 = v21 + 1;
    *((_QWORD *)a2 + 1) = v21 + 1;
    v12 = *v21;
    goto LABEL_12;
  }
  v11 = *((_QWORD *)a2 + 2);
  v8 = v10 + 8;
  *a2 = v8;
  v12 = *(_QWORD *)(v11 + v10);
  if ( (unsigned int)v8 > 0x2F )
  {
    v14 = *((__int64 **)a2 + 1);
LABEL_12:
    v13 = (__int64)(v14 + 1);
    *((_QWORD *)a2 + 1) = v14 + 1;
    if ( v9 != 27 )
      goto LABEL_6;
LABEL_13:
    v17 = (__int64 (__fastcall *)(__int64, __int64, __int64, const char *, const char *, __int64))callui;
    v18 = 1;
    v19 = "Add breakpoint";
    v20 = "picture_search:open_picture";
    return v17(131, v7, v12, v20, v19, v18);
  }
  v13 = v10 + 16;
  v14 = (__int64 *)(v8 + v11);
  *a2 = v13;
  if ( v9 == 27 )
    goto LABEL_13;
LABEL_6:
  v15 = *v14;
  if ( v9 != 28 && (*(_DWORD *)(v15 + 8) != 35 || *(_QWORD *)(v15 + 40) != *(_QWORD *)(a1 + 144)) )
  {
    result = sub_3C50(v7, v8, v13, (__int64)v14);
    if ( !(_BYTE)result )
      return result;
    callui(131, v7, v12, "picture_search:save_picture");
    v17 = (__int64 (__fastcall *)(__int64, __int64, __int64, const char *, const char *, __int64))callui;
    v18 = 0;
    v19 = nullptr;
    v20 = "picture_search:open_in_viewer";
    return v17(131, v7, v12, v20, v19, v18);
  }
  callui(131, v7, v12, "picture_search:open_picture");
  callui(131, v7, v12, "picture_search:save_picture");
  result = callui(131, v7, v12, "picture_search:open_in_viewer");
  if ( *(_DWORD *)(v15 + 8) == 35 )
  {
    result = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v15 + 40) == result )
    {
      v17 = (__int64 (__fastcall *)(__int64, __int64, __int64, const char *, const char *, __int64))callui;
      v18 = 0;
      v19 = nullptr;
      v20 = "picture_search:jump_to_address";
      return v17(131, v7, v12, v20, v19, v18);
    }
  }
  return result;
}

