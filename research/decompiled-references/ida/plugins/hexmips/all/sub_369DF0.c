__int64 __fastcall sub_369DF0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rbp
  char v8; // al
  unsigned int v9; // ebp
  __int64 v10; // rdi
  __int64 v11; // r12
  _QWORD *v12; // rbx
  bool v14; // cl
  char v15; // bp
  __int64 v16; // r13
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // [rsp+8h] [rbp-1C0h]
  char v23; // [rsp+Eh] [rbp-1BAh]
  char v24; // [rsp+Fh] [rbp-1B9h]
  __int64 v25; // [rsp+10h] [rbp-1B8h]
  __int128 v26; // [rsp+18h] [rbp-1B0h]
  char v27[8]; // [rsp+70h] [rbp-158h] BYREF
  __int64 v28; // [rsp+78h] [rbp-150h]
  __int64 v29; // [rsp+80h] [rbp-148h]
  __int64 v30; // [rsp+90h] [rbp-138h]
  __int64 v31; // [rsp+98h] [rbp-130h]
  _DWORD *v32; // [rsp+C8h] [rbp-100h]
  __int64 v33; // [rsp+D0h] [rbp-F8h]
  __int64 v34; // [rsp+E0h] [rbp-E8h]
  __int64 v35; // [rsp+E8h] [rbp-E0h]
  _QWORD v36[11]; // [rsp+100h] [rbp-C8h] BYREF
  _DWORD *v37; // [rsp+158h] [rbp-70h]
  __int64 v38; // [rsp+160h] [rbp-68h]
  __int64 v39; // [rsp+170h] [rbp-58h]
  __int64 v40; // [rsp+178h] [rbp-50h]
  unsigned __int64 v41; // [rsp+188h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 56LL))(*(_QWORD *)(a1 + 936)) )
    return 64;
  v1 = *(int *)(a1 + 480);
  v24 = 1;
  if ( (_DWORD)v1 != -1 )
    v24 = sub_364F00(*(_QWORD *)(a1 + 432) + 104 * v1);
  v25 = 0;
  v23 = v24 & (*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 148LL) == 2);
  v26 = 0;
  if ( *(_QWORD *)(a1 + 464) )
  {
    v22 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      if ( v3 < v4 + 1 )
      {
        v25 = qvector_reserve();
        v2 = v25;
        v4 = v26;
      }
      v6 = v2 + 80 * v4;
      *(_DWORD *)v6 = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 40) = 0;
      *(_QWORD *)(v6 + 64) = 0;
      *(_DWORD *)(v6 + 72) = 0;
      *(_OWORD *)(v6 + 24) = 0;
      *(_OWORD *)(v6 + 48) = 0;
      *(_QWORD *)&v26 = v26 + 1;
      v7 = *(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * v5);
      sub_1C3380(v36, a1, v7, *(_DWORD *)(v7 + 88));
      copy_argloc();
      cleanup_argloc();
      copy_tinfo_t();
      v8 = sub_364F00(v7);
      v5 = ++v22;
      v23 &= v8;
      if ( (unsigned __int64)v22 >= *(_QWORD *)(a1 + 464) )
        break;
      v3 = *((_QWORD *)&v26 + 1);
      v4 = v26;
      v2 = v25;
    }
    v9 = 256;
    if ( v23 )
      goto LABEL_11;
  }
  else
  {
    v9 = 256;
    if ( v23 )
      goto LABEL_11;
  }
  sub_369D70(a1);
  v9 = guess_func_cc();
  if ( v9 == 16 )
  {
    v9 = guess_func_cc();
    if ( v9 == 16 )
    {
      if ( (_QWORD)v26 )
      {
        if ( !under_debugger )
          sub_37E160(51139);
        BUG();
      }
      goto LABEL_46;
    }
  }
  if ( v9 == 112 )
  {
    if ( (getinf() & 0xF) != 6 )
      goto LABEL_45;
    v15 = getinf_flag();
    if ( v15 )
      goto LABEL_45;
    v16 = *(_QWORD *)(a1 + 1496);
    sub_CCEB0((__int64)v27, v16, 0x80u);
    if ( !v35 && v33 == 1 )
    {
      sub_CCEB0((__int64)v36, v16, 0x70u);
      if ( v38 )
        v15 = *v32 == *v37;
      if ( v39 )
      {
        v40 = 0;
        qfree();
      }
      if ( v37 )
      {
        v38 = 0;
        qfree();
      }
      if ( v36[4] )
      {
        v36[5] = 0;
        qfree();
      }
      if ( v36[1] )
      {
        v36[2] = 0;
        qfree();
      }
    }
    if ( v34 )
    {
      v35 = 0;
      qfree();
    }
    if ( v32 )
    {
      v33 = 0;
      qfree();
    }
    if ( v30 )
    {
      v31 = 0;
      qfree();
    }
    if ( v28 )
    {
      v29 = 0;
      qfree();
    }
    if ( !v15 )
      goto LABEL_45;
  }
  else if ( v9 != 128 )
  {
    if ( v9 > 0x10 )
    {
      v14 = v9 == 176;
      if ( v9 != 256 )
      {
        if ( v9 != 176 )
          goto LABEL_28;
        goto LABEL_48;
      }
      goto LABEL_60;
    }
LABEL_46:
    v17 = getinf();
    v14 = v17 == 176;
    if ( v17 != 256 )
    {
      if ( v17 != 176 )
        goto LABEL_11;
      goto LABEL_48;
    }
LABEL_60:
    if ( !v14 )
      goto LABEL_61;
LABEL_48:
    if ( (unsigned __int64)getinf() <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag()
        || (netnode_check(), v18 = netnode_altval(), v18 <= 0x74)
        || (v19 = *(_DWORD *)(get_ph() + 4)) != 0
        && ((v20 = (unsigned int)(v19 - 13), (unsigned int)v20 > 0x3B)
         || (v21 = 0x800000000000005LL, !_bittest64(&v21, v20))
         || v18 == 117) )
      {
LABEL_61:
        if ( !v24 )
          goto LABEL_45;
      }
    }
LABEL_28:
    if ( v9 - 208 > 0x2F )
      goto LABEL_11;
LABEL_45:
    v9 = 112;
    goto LABEL_11;
  }
  if ( !(unsigned __int8)sub_369B50(a1) )
    goto LABEL_45;
  v9 = 128;
  if ( *(_DWORD *)(sub_139080((_QWORD *)a1, 0) + 88) != *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) )
    goto LABEL_45;
LABEL_11:
  cleanup_argloc();
  clear_tinfo_t();
  v10 = v25;
  if ( v25 )
  {
    if ( (_QWORD)v26 )
    {
      v11 = 0;
      do
      {
        v12 = (_QWORD *)(v10 + 80 * v11);
        clear_tinfo_t();
        if ( v12[5] )
        {
          v12[6] = 0;
          qfree();
        }
        if ( v12[2] )
        {
          v12[3] = 0;
          qfree();
        }
        ++v11;
        cleanup_argloc();
        v10 = v25;
      }
      while ( (_QWORD)v26 != v11 );
    }
    qfree();
  }
  return v9;
}

