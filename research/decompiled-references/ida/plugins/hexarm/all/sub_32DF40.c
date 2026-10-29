__int64 __fastcall sub_32DF40(__int64 a1, __int64 *a2, int a3, __int64 *a4, _DWORD *a5)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  char v9; // bp
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r13
  _QWORD *v16; // r12
  unsigned __int64 tinfo_size; // rbx
  unsigned int v19; // eax
  char v21; // [rsp+Fh] [rbp-D9h]
  signed int v22; // [rsp+14h] [rbp-D4h] BYREF
  __int64 tinfo_property; // [rsp+18h] [rbp-D0h] BYREF
  _DWORD v24[4]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v25[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-A8h]
  __int128 v27; // [rsp+48h] [rbp-A0h]
  __int64 v28; // [rsp+58h] [rbp-90h]
  __int64 v29; // [rsp+60h] [rbp-88h] BYREF
  __int64 v30; // [rsp+68h] [rbp-80h]
  __int128 v31; // [rsp+70h] [rbp-78h]
  __int64 v32; // [rsp+80h] [rbp-68h]
  __int128 v33; // [rsp+88h] [rbp-60h]
  char v34; // [rsp+98h] [rbp-50h]
  unsigned __int64 v35; // [rsp+A8h] [rbp-40h]

  v7 = a3;
  v35 = __readfsqword(0x28u);
  if ( a3 == -1 && (get_tinfo_property() & 0xF) == 0xB )
  {
    if ( !under_debugger )
      sub_3835A0(50639);
    goto LABEL_53;
  }
  tinfo_property = get_tinfo_property();
  if ( (_BYTE)tinfo_property )
  {
    v21 = 1;
  }
  else
  {
    copy_tinfo_t();
    v21 = 0;
  }
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 16;
  v31 = 0;
  v33 = 0;
  if ( !(unsigned __int8)get_tinfo_details() )
    goto LABEL_19;
  v8 = *a4;
  if ( !(unsigned __int8)*a4
    || (v8 & 0xE) == 0 && (v8 & 0x30) != 0
    || (v25[0] = get_tinfo_property(), v9 = get_tinfo_property(), clear_tinfo_t(), (v9 & 0x3F) == 0x30) )
  {
    if ( (_DWORD)v7 != -1 || (tinfo_size = get_tinfo_size(), tinfo_size >= get_tinfo_size()) )
    {
      if ( !under_debugger )
        sub_3835A0(50638);
      goto LABEL_53;
    }
LABEL_35:
    copy_tinfo_t();
    v19 = v34 & 0xF0;
    if ( v19 <= 0x10 )
      v19 = getinf();
    if ( v19 - 208 > 0x2F )
      goto LABEL_12;
    if ( (get_tinfo_property() & 0x3F) == 1 || *a5 )
    {
LABEL_11:
      copy_argloc();
      goto LABEL_12;
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD, signed int *, __int64 *))(**(_QWORD **)(a1 + 112) + 104LL))(
      v24,
      *(_QWORD *)(a1 + 112),
      &v22,
      &v29);
    if ( v24[0] <= 1u )
    {
      if ( !under_debugger )
        sub_3835A0(52246);
    }
    else
    {
      sub_1C7120(v25, (__int64)v24, v22, 0);
      copy_argloc();
      cleanup_argloc();
      if ( (_DWORD)v30 )
      {
        cleanup_argloc();
        goto LABEL_12;
      }
      if ( !under_debugger )
        sub_3835A0(52251);
    }
LABEL_53:
    BUG();
  }
  if ( (_DWORD)v7 == -1 )
    goto LABEL_35;
  if ( v7 >= (unsigned __int64)v27 )
  {
LABEL_19:
    v11 = 0;
    goto LABEL_20;
  }
  copy_tinfo_t();
  if ( *a5 )
    goto LABEL_11;
LABEL_12:
  LODWORD(v28) = v28 & 0xFFFFFEFF;
  create_tinfo();
  LOBYTE(v10) = sub_32CEA0(&tinfo_property, a1);
  v11 = v10;
  if ( !(_BYTE)v10 )
    goto LABEL_19;
  v12 = *a2;
  *a2 = tinfo_property;
  tinfo_property = v12;
  if ( v21 )
  {
    sub_32C870(v25, *(_QWORD *)(a1 + 112), a2);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( (unsigned int)verify_tinfo() )
  {
    if ( !under_debugger )
      sub_3835A0(51082);
    goto LABEL_53;
  }
LABEL_20:
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v13 = v26;
  if ( v26 )
  {
    v14 = v27;
    if ( (_QWORD)v27 )
    {
      v15 = 0;
      do
      {
        v16 = (_QWORD *)(v13 + 80 * v15);
        clear_tinfo_t();
        if ( v16[5] )
        {
          v16[6] = 0;
          qfree();
        }
        if ( v16[2] )
        {
          v16[3] = 0;
          qfree();
        }
        ++v15;
        cleanup_argloc();
        v13 = v26;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v11;
}

