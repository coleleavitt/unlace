__int64 __fastcall sub_27A5D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // ebp
  unsigned int tinfo_size; // r14d
  int v6; // edx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // r8d
  int v11; // r9d
  int v13; // r9d
  char v14; // r15
  __int64 v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v17[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = a2;
  v17[3] = __readfsqword(0x28u);
  v4 = a3;
  if ( !a3 )
    v4 = 1;
  tinfo_size = get_tinfo_size();
  sub_327180(&v15, *(_QWORD *)(a1 + 112), tinfo_size, v4);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = (unsigned int)(v6 - 51);
  if ( (unsigned int)v7 > 0xE )
    goto LABEL_8;
  v8 = 25473;
  if ( !_bittest64(&v8, v7) )
  {
    if ( v6 == 57 && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 68 )
    {
      v16 = 0;
      copy_tinfo_t();
      v17[0] = 0;
      v17[1] = 0;
      v14 = sub_328960(a1, (unsigned int)&v16, -1, (unsigned int)&v15, (unsigned int)v17, v13);
      cleanup_argloc();
      if ( v14 )
      {
        if ( (unsigned __int8)sub_241F40(*(_QWORD *)(a2 + 24), a1, &v16) )
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
          sub_37DDE0(50594);
      }
      else if ( !under_debugger )
      {
        sub_37DDE0(50593);
      }
      goto LABEL_19;
    }
LABEL_8:
    if ( (unsigned __int8)sub_243680(a1, a2, &v15) )
      goto LABEL_9;
    if ( !under_debugger )
      sub_37DDE0(50592);
LABEL_19:
    BUG();
  }
  sub_327290(v17, *(_QWORD *)(a1 + 112), &v15);
  copy_tinfo_t();
  clear_tinfo_t();
  v9 = sub_242910(*(_QWORD *)(a1 + 112), a2);
  sub_241F40(v9, a1, &v15);
  v3 = sub_23F720(*(_QWORD *)(a1 + 112), v9, tinfo_size, 0, v10, v11);
LABEL_9:
  clear_tinfo_t();
  return v3;
}

