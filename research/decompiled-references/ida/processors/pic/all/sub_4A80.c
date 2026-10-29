__int64 __fastcall sub_4A80(__int64 a1, __int16 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 sreg; // rax
  __int64 v5; // rdx
  bool v6; // zf

  v2 = (unsigned __int8)a2;
  *(_BYTE *)(a1 + 41) = 2;
  *(_BYTE *)(a1 + 45) = 0;
  if ( (a2 & 0x100) != 0 )
  {
    sreg = get_sreg();
    v5 = sreg << 8;
    v6 = sreg == -1;
    result = 0;
    if ( !v6 )
      result = v5;
    *(_QWORD *)(a1 + 56) = result | (unsigned __int8)a2;
  }
  else
  {
    result = (unsigned __int8)a2 + 3840LL;
    if ( (a2 & 0x80) != 0 )
      v2 = (unsigned __int8)a2 + 3840LL;
    *(_QWORD *)(a1 + 56) = v2;
  }
  return result;
}

