__int64 __fastcall sub_17230(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 == -1 )
    return 0;
  v4 = a2;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) - 12) > 1 )
  {
    result = is_spec_ea(a2);
    if ( (_BYTE)result )
      return result;
    goto LABEL_4;
  }
  if ( !(unsigned __int8)getinf_flag(3, 4) )
    v4 = (unsigned int)a2 & 0xFFFFFFFE;
  result = is_spec_ea(v4);
  if ( !(_BYTE)result )
  {
LABEL_4:
    if ( a3 <= 1 || (unsigned __int8)is_loaded(v4 + a3 - 1) )
      return is_loaded(v4);
    else
      return 0;
  }
  return result;
}

