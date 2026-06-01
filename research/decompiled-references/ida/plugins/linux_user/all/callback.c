__int64 __fastcall callback(const td_thrhandle_t *a1, __int64 *a2)
{
  td_err_e info; // eax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  const char *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  td_thrinfo_t v16; // [rsp+0h] [rbp-328h] BYREF
  _BYTE v17[384]; // [rsp+180h] [rbp-1A8h] BYREF
  unsigned __int64 v18; // [rsp+308h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  info = td_thr_get_info(a1, &v16);
  if ( info )
  {
    v12 = sub_FF60(info);
    sub_13770((__int64)"%s: %s\n", (__int64)"td_thr_get_info", (__int64)v12, v13, v14, v15, (char)v16.ti_ta_p);
  }
  if ( (v16.ti_state & 0xFFFFFFFB) != 1 )
  {
    v5 = *(_QWORD *)(*a2 + 1224);
    if ( !v5 )
      goto LABEL_11;
    v6 = *a2 + 1216;
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(v5 + 16);
        v8 = *(_QWORD *)(v5 + 24);
        if ( v16.ti_lid <= *(_DWORD *)(v5 + 32) )
          break;
        v5 = *(_QWORD *)(v5 + 24);
        if ( !v8 )
          goto LABEL_9;
      }
      v6 = v5;
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v7 );
LABEL_9:
    if ( *a2 + 1216 == v6 || v16.ti_lid < *(_DWORD *)(v6 + 32) )
    {
LABEL_11:
      sub_15380(*a2, (__int64)&v16, a1);
      v9 = (__int64 *)a2[1];
      v10 = v9[1];
      v11 = *v9;
      qmemcpy(v17, &v16, sizeof(v17));
      if ( v9[2] < (unsigned __int64)(v10 + 1) )
      {
        v11 = qvector_reserve();
        v10 = v9[1];
        *v9 = v11;
      }
      qmemcpy((void *)(384 * v10 + v11), v17, 0x180u);
      ++v9[1];
    }
  }
  return 0;
}

