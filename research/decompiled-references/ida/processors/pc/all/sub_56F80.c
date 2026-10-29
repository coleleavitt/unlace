__int64 __fastcall sub_56F80(__int64 a1, __int64 a2, const char *a3, double a4)
{
  unsigned int fixups; // r12d
  __int64 v7; // rax
  char v8; // al
  char v9; // al
  int v10; // eax
  int v11; // r12d
  unsigned int v12; // eax
  int flags; // eax
  __int64 func; // rax

  if ( *(_BYTE *)(a1 + 5506) )
    return 1;
  v7 = getseg();
  if ( !v7 )
    return 1;
  if ( !*(_BYTE *)(v7 + 43) )
    return 1;
  v8 = *(_BYTE *)(v7 + 184);
  if ( v8 )
  {
    if ( (unsigned __int8)(v8 - 2) > 1u )
      return 1;
  }
  v9 = *a3;
  if ( !*a3 )
    return 1;
  if ( v9 == 95 )
  {
    if ( strcmp(a3 + 1, "HALT0") )
      return 1;
    goto LABEL_30;
  }
  if ( v9 != 117 )
  {
    if ( v9 != 64 )
      return 1;
    if ( strcmp(a3 + 1, "System@@Halt0$qqrv") )
    {
      if ( (*(_BYTE *)(a1 + 4452) & 0x20) == 0 )
        return 1;
      if ( (unsigned __int8)get_byte() == 51 && !strcmp(a3 + 1, "$xp$14System@PVarRec") )
      {
        fixups = get_fixups();
        if ( !(_BYTE)fixups )
        {
          sub_51B00(a2, 1);
          return fixups;
        }
      }
      goto LABEL_18;
    }
LABEL_30:
    flags = get_flags_ex();
    if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 || (unsigned __int8)add_func_ex() )
    {
      func = get_func();
      if ( func )
      {
        *(_QWORD *)(func + 16) |= 1uLL;
        update_func();
        reanalyze_callers();
      }
    }
    return 1;
  }
LABEL_18:
  if ( (*(_BYTE *)(a1 + 4452) & 0x20) == 0 || (unsigned int)getinf() == 12 && !*(_BYTE *)(getseg() + 43) )
    return 1;
  if ( *(_BYTE *)(a1 + 5505)
    && (*(_BYTE *)(a1 + 4452) & 0x40) != 0
    && (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0
    && *a3 == 117
    && (int)qsscanf() <= 0
    && !strlen(a3) )
  {
    v11 = 3;
    goto LABEL_25;
  }
  v10 = demangle_name();
  if ( (v10 & 0x70000000) == 0x20000000 && v10 >= 0 && (v10 & 0x84000000) != 0 )
  {
    v11 = ((v10 & 0x2000000) == 0) + 1;
LABEL_25:
    if ( *(_QWORD *)(a1 + 5496) == -1 )
      netnode_check();
    if ( *(_BYTE *)(a1 + 5505) )
    {
      *(_BYTE *)(a1 + 5506) = 1;
      LOBYTE(v12) = sub_56CB0(a1, a2, v11, a4);
      fixups = v12;
      *(_BYTE *)(a1 + 5506) = 0;
      return fixups;
    }
    netnode_supset();
  }
  return 1;
}
