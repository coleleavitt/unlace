__int64 __fastcall sub_64B0(
        __int64 a1,
        const char *a2,
        __int64 (__fastcall *a3)(__int64, _WORD *),
        _WORD *a4,
        __int16 a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  __int16 v7; // bp
  int v8; // r13d
  __int64 (__fastcall *v9)(__int64, _WORD *); // r14
  _WORD *v10; // r15

  if ( !a4 )
  {
    if ( !a5 || !a6 )
      return *(unsigned __int8 *)(a1 + 164);
    if ( under_debugger )
      BUG();
    interr(767);
    goto LABEL_13;
  }
  LOBYTE(v8) = a6 != 0 || a5 == 0;
  if ( !(_BYTE)v8 )
    return *(unsigned __int8 *)(a1 + 164);
  v7 = a5;
  v9 = a3;
  v10 = a4;
  v6 = a6;
  sub_2EE0((__int64)"TDS: load %s information\n", a2);
  if ( a5 )
  {
LABEL_13:
    if ( !v6 )
      return *(unsigned __int8 *)(a1 + 164);
    while ( 1 )
    {
      if ( *v10 == v7 )
      {
        if ( (unsigned __int8)sub_3180(a1, v6) )
          break;
        v8 &= v9(a1, v10);
        if ( !--v6 )
          break;
      }
      v10 += 6;
    }
    goto LABEL_6;
  }
  LOBYTE(v8) = v9(a1, v10);
LABEL_6:
  if ( !(_BYTE)v8 && (debug & 0x400000) != 0 )
    sub_2AE0((__int64)"TDS: there were errors during parsing %s information\n", a2);
  return *(unsigned __int8 *)(a1 + 164);
}
