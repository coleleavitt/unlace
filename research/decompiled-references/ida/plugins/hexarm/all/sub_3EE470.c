__int64 __fastcall sub_3EE470(__int64 a1, __int64 a2, char a3, double a4)
{
  unsigned int v4; // ebx

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 )
    return *(unsigned __int8 *)(a2 + 5);
  v4 = *(unsigned __int8 *)(a2 + 32);
  if ( (char)v4 <= 0 || !sub_3EDFE0(a1, a2) )
    return *(unsigned __int8 *)(a2 + 5);
  if ( (unsigned int)((char)v4 - 1) > 4 )
    sub_3EACF0(a4);
  sub_3EE110(a1, a2, a4);
  if ( get_dtype_size() < (unsigned __int64)(1 << (v4 - 1)) )
  {
    if ( !under_debugger )
      sub_3835A0(0xC866u, a4);
    goto LABEL_19;
  }
  if ( a3 )
  {
    if ( (_BYTE)v4 == 3 || (_BYTE)v4 == 4 )
      return v4;
    if ( (_BYTE)v4 == 2 )
      return 18;
    if ( !under_debugger )
      sub_3835A0(0xC867u, a4);
LABEL_19:
    BUG();
  }
  return get_dtype_by_size();
}

