__int64 __fastcall sub_F66D0(__int64 a1, _QWORD *a2, int a3, __int64 a4, char a5)
{
  _DWORD *exception; // rdi
  __int64 v6; // rax
  int v7; // r15d
  int v10; // r14d
  unsigned int v11; // ebp
  const char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  const char *v16; // rdx
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-78h] BYREF
  __int128 v20; // [rsp+28h] [rbp-70h]
  __int64 idati; // [rsp+40h] [rbp-58h]
  const char *v22; // [rsp+48h] [rbp-50h]
  __int16 v23; // [rsp+50h] [rbp-48h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v7 = a5 & 1;
  v24 = __readfsqword(0x28u);
  v20 = 0;
  v19 = 0;
  if ( a3 != -1 )
  {
    sub_674F0(&v19);
    sub_F6610(&v19);
    if ( v7 )
    {
      LOBYTE(v10) = 0;
LABEL_4:
      if ( (unsigned int)save_tinfo() )
      {
        if ( !under_debugger )
          sub_37DDE0(52657);
        BUG();
      }
      if ( (_BYTE)v10 )
      {
        exception = __cxa_allocate_exception(0x30u);
        *(_QWORD *)exception = off_4AE750;
        v6 = *(_QWORD *)(a1 + 40);
        exception[2] = -17;
        *((_QWORD *)exception + 3) = 0;
        *((_QWORD *)exception + 2) = v6;
        *((_OWORD *)exception + 2) = 0;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_76140);
      }
      goto LABEL_6;
    }
    if ( (_QWORD)v20 )
    {
      v13 = (const char *)v19;
      if ( !v19 )
        goto LABEL_33;
      goto LABEL_12;
    }
    if ( !s1 )
      goto LABEL_30;
LABEL_16:
    v13 = s1;
    goto LABEL_12;
  }
  v17 = qvector_reserve();
  v19 = v17;
  *(_QWORD *)&v20 = 7;
  *(_WORD *)(v17 + 4) = 27745;
  *(_DWORD *)v17 = 1987339634;
  *(_BYTE *)(v19 + 6) = 0;
  sub_F6610(&v19);
  if ( v7 )
  {
    v14 = v20;
    goto LABEL_18;
  }
  if ( !(_QWORD)v20 )
  {
    if ( !s1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 944) + 68LL) & 1) == 0 )
        goto LABEL_30;
      goto LABEL_34;
    }
    goto LABEL_16;
  }
  v15 = v19;
  v13 = (const char *)v19;
  if ( !v19 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 944) + 68LL) & 1) == 0 )
      goto LABEL_33;
    goto LABEL_21;
  }
LABEL_12:
  v22 = v13;
  v23 = 256;
  idati = get_idati();
  LOBYTE(v10) = create_tinfo();
  if ( !(_BYTE)v10 )
  {
    v14 = v20;
    if ( a3 != -1 )
      goto LABEL_4;
LABEL_18:
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 944) + 68LL) & 1;
    if ( !v10 )
      goto LABEL_4;
    if ( v14 )
    {
      v15 = v19;
LABEL_21:
      v16 = (const char *)v15;
      if ( v15 )
        goto LABEL_22;
LABEL_33:
      LOBYTE(v10) = 0;
      goto LABEL_4;
    }
LABEL_34:
    v16 = s1;
    if ( s1 )
    {
LABEL_22:
      v22 = v16;
      v23 = 256;
      idati = get_idati();
      LOBYTE(v10) = create_tinfo();
      if ( (_BYTE)v10 )
        LOBYTE(v10) = compare_tinfo() ^ 1;
      goto LABEL_4;
    }
LABEL_30:
    LOBYTE(v10) = 0;
    goto LABEL_4;
  }
  v11 = 0;
  if ( (a5 & 2) != 0 )
  {
    *a2 = 0;
LABEL_6:
    v11 = 1;
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v11;
}

