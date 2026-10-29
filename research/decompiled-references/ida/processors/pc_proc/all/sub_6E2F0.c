__int64 __fastcall sub_6E2F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int16 v3; // ax
  __int64 cmt; // rbp
  char v5; // r15
  bool v6; // r14
  int v7; // ebp
  char *v9; // rax
  char v10; // [rsp+27h] [rbp-51h]

  v2 = a1;
  v3 = *(_WORD *)(a2 + 24);
  if ( (v3 == 588 || v3 == 46 && *(_QWORD *)(a2 + 48) == 128)
    && (unsigned int)getinf() != 11
    && (unsigned int)getinf() != 10 )
  {
    if ( (unsigned int)getinf() == 25 )
    {
      v6 = (unsigned int)getinf() == 25;
    }
    else
    {
      v7 = getinf();
      if ( (unsigned int)getinf() != 18 || (netnode_check(), netnode_valobj() != 16) || !v10 || v10 == 3 )
      {
        v5 = 1;
        v6 = 1;
        cmt = get_cmt();
        goto LABEL_7;
      }
      v6 = v7 == 25;
    }
    cmt = get_cmt();
    if ( v6 )
    {
      v5 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    cmt = get_cmt();
  }
  if ( cmt > 0 )
    return 1;
  v5 = 0;
  v6 = 0;
LABEL_7:
  if ( get_predef_insn_cmt() <= 0 )
    return 1;
  if ( v6 )
  {
    if ( v5 )
    {
      v9 = strchr(nullptr, 59);
      if ( v9 )
      {
        *v9 = 0;
        sub_5B340(a1, a2, v9 + 1);
      }
    }
    LOBYTE(v2) = stristr() == 0;
    goto LABEL_10;
  }
  v2 = 1;
  if ( !strncasecmp(s1, "linux", 5u) )
    return 1;
LABEL_10:
  if ( cmt <= 0 )
    set_cmt();
  return v2;
}

