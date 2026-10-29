__int64 __fastcall sub_32DC20(__int64 a1, __int64 *a2, int a3, __int64 *a4, _DWORD *a5, double a6, __m128 a7)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  char v11; // bp
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r13
  _QWORD *v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 tinfo_size; // rbx
  unsigned int v23; // eax
  char v25; // [rsp+Fh] [rbp-D9h]
  unsigned int v26; // [rsp+14h] [rbp-D4h] BYREF
  __int64 tinfo_property; // [rsp+18h] [rbp-D0h] BYREF
  _DWORD v28[4]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v29[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-A8h]
  __int128 v31; // [rsp+48h] [rbp-A0h]
  __int64 v32; // [rsp+58h] [rbp-90h]
  __int64 v33; // [rsp+60h] [rbp-88h] BYREF
  __int64 v34; // [rsp+68h] [rbp-80h]
  __int128 v35; // [rsp+70h] [rbp-78h]
  __int64 v36; // [rsp+80h] [rbp-68h]
  __int128 v37; // [rsp+88h] [rbp-60h]
  char v38; // [rsp+98h] [rbp-50h]
  unsigned __int64 v39; // [rsp+A8h] [rbp-40h]

  v9 = a3;
  v39 = __readfsqword(0x28u);
  if ( a3 == -1 && (get_tinfo_property() & 0xF) == 0xB )
  {
    if ( !under_debugger )
      sub_383060(0xC5CFu, a6);
    goto LABEL_53;
  }
  tinfo_property = get_tinfo_property();
  if ( (_BYTE)tinfo_property )
  {
    v25 = 1;
  }
  else
  {
    copy_tinfo_t();
    v25 = 0;
  }
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 16;
  v35 = 0;
  v37 = 0;
  if ( !(unsigned __int8)get_tinfo_details() )
    goto LABEL_19;
  v10 = *a4;
  if ( !(unsigned __int8)*a4
    || (v10 & 0xE) == 0 && (v10 & 0x30) != 0
    || (v29[0] = get_tinfo_property(), v11 = get_tinfo_property(), clear_tinfo_t(), (v11 & 0x3F) == 0x30) )
  {
    if ( (_DWORD)v9 != -1 || (tinfo_size = get_tinfo_size(), tinfo_size >= get_tinfo_size()) )
    {
      if ( !under_debugger )
        sub_383060(0xC5CEu, 0.0);
      goto LABEL_53;
    }
LABEL_35:
    copy_tinfo_t();
    v23 = v38 & 0xF0;
    if ( v23 <= 0x10 )
      v23 = getinf();
    if ( v23 - 208 > 0x2F )
      goto LABEL_12;
    if ( (get_tinfo_property() & 0x3F) == 1 || *a5 )
    {
LABEL_11:
      copy_argloc();
      goto LABEL_12;
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD, unsigned int *, __int64 *))(**(_QWORD **)(a1 + 112) + 104LL))(
      v28,
      *(_QWORD *)(a1 + 112),
      &v26,
      &v33);
    if ( v28[0] <= 1u )
    {
      if ( !under_debugger )
        sub_383060(0xCC16u, 0.0);
    }
    else
    {
      sub_1C76E0(v29, (__int64)v28, v26, 0, 0.0);
      copy_argloc();
      cleanup_argloc();
      if ( (_DWORD)v34 )
      {
        cleanup_argloc();
        goto LABEL_12;
      }
      if ( !under_debugger )
        sub_383060(0xCC1Bu, 0.0);
    }
LABEL_53:
    BUG();
  }
  if ( (_DWORD)v9 == -1 )
    goto LABEL_35;
  if ( v9 >= (unsigned __int64)v31 )
  {
LABEL_19:
    v13 = 0;
    goto LABEL_20;
  }
  copy_tinfo_t();
  if ( *a5 )
    goto LABEL_11;
LABEL_12:
  LODWORD(v32) = v32 & 0xFFFFFEFF;
  create_tinfo();
  LOBYTE(v12) = sub_32CB80(&tinfo_property, a1, 0.0, a7);
  v13 = v12;
  if ( !(_BYTE)v12 )
    goto LABEL_19;
  v14 = *a2;
  *a2 = tinfo_property;
  tinfo_property = v14;
  if ( v25 )
  {
    sub_32C540(v29, *(_QWORD *)(a1 + 112), a2);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( (unsigned int)verify_tinfo() )
  {
    if ( !under_debugger )
      sub_383060(0xC78Au, 0.0);
    goto LABEL_53;
  }
LABEL_20:
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v15 = v30;
  if ( v30 )
  {
    v16 = v31;
    if ( (_QWORD)v31 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 80 * v17);
        clear_tinfo_t();
        v19 = v18[5];
        if ( v19 )
        {
          v18[6] = 0;
          qfree(v19);
        }
        v20 = v18[2];
        if ( v20 )
        {
          v18[3] = 0;
          qfree(v20);
        }
        ++v17;
        cleanup_argloc();
        v15 = v30;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v31 = 0;
    qfree(v15);
  }
  clear_tinfo_t();
  return v13;
}

