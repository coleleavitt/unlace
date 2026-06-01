__int64 __fastcall sub_7F350(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // dx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v4 = *(_WORD *)(a3 + 26);
  if ( v4 == -1
    || (*(_BYTE *)(a2 + 28) & 0x10) != 0
    && (unsigned __int16)(v4 - 33) > 1u
    && (get_flags_ex(), !(unsigned __int8)is_off()) )
  {
    result = sel2para();
  }
  else
  {
    result = calc_dataseg();
  }
  if ( result != -1 )
  {
    v6 = *(_QWORD *)(a3 + 16);
    if ( (*(_QWORD *)a3 & 0xFFFF00000000FF00LL) == 0x1C000000000400LL )
      v6 += *(unsigned __int16 *)(a2 + 26) + *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( v6 == v7 || v6 == -1 )
    {
      return -1;
    }
    else
    {
      result = v6 + 16 * result;
      if ( v7 != result )
      {
        v8 = result & v7;
        if ( result != -1 )
          return v8;
      }
    }
  }
  return result;
}
