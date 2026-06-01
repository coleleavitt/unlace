__int64 __fastcall sub_27F1D0(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v4; // rbx
  int v5; // ebp
  unsigned int tinfo_size; // r14d
  int v7; // edx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  char v14; // r15
  __int64 v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v17[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = a2;
  v17[3] = __readfsqword(0x28u);
  v5 = a3;
  if ( !a3 )
    v5 = 1;
  tinfo_size = get_tinfo_size();
  sub_32C430(&v15, *(_QWORD *)(a1 + 112), tinfo_size, v5);
  v7 = *(_DWORD *)(a2 + 8);
  v8 = (unsigned int)(v7 - 51);
  if ( (unsigned int)v8 > 0xE )
    goto LABEL_8;
  v9 = 25473;
  if ( !_bittest64(&v9, v8) )
  {
    if ( v7 == 57 && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 68 )
    {
      v16 = 0;
      copy_tinfo_t();
      v17[0] = 0;
      v17[1] = 0;
      v14 = sub_32DC20(a1, &v16, -1, &v15, v17);
      cleanup_argloc();
      if ( v14 )
      {
        if ( (unsigned __int8)sub_246B40(*(_QWORD *)(a2 + 24), a1, &v16, a4) )
        {
          v17[0] = 0;
          v17[0] = get_tinfo_property();
          copy_tinfo_t();
          clear_tinfo_t();
          copy_tinfo_t();
          clear_tinfo_t();
          goto LABEL_9;
        }
        if ( !under_debugger )
          sub_383060(0xC5A2u, a4);
      }
      else if ( !under_debugger )
      {
        sub_383060(0xC5A1u, a4);
      }
      goto LABEL_19;
    }
LABEL_8:
    if ( (unsigned __int8)sub_248280(a1, a2, &v15, a4) )
      goto LABEL_9;
    if ( !under_debugger )
      sub_383060(0xC5A0u, a4);
LABEL_19:
    BUG();
  }
  sub_32C540(v17, *(_QWORD *)(a1 + 112), &v15);
  copy_tinfo_t();
  clear_tinfo_t();
  v12 = sub_247510(*(_QWORD *)(a1 + 112), a2, v10, v11, a4);
  sub_246B40(v12, a1, &v15, a4);
  v4 = sub_244320(*(_QWORD *)(a1 + 112), v12, tinfo_size, 0, a4);
LABEL_9:
  clear_tinfo_t();
  return v4;
}

