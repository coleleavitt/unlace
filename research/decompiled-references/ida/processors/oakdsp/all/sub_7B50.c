__int64 __fastcall sub_7B50(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 sreg; // rax
  __int64 v10; // rdx

  v4 = *(_BYTE *)(a3 + 33);
  if ( (v4 & 4) != 0 )
  {
    if ( (v4 & 1) == 0 )
    {
      v5 = *(unsigned int *)(a3 + 16);
      v6 = *(_QWORD *)(a1 + 232);
      result = v6 + v5;
      if ( v6 != -1 )
        return result;
      return -1;
    }
    sreg = get_sreg();
    if ( sreg == -1 )
      return -1;
    v10 = *(_QWORD *)(a1 + 232);
    result = v10 + (*(_DWORD *)(a3 + 16) | (unsigned int)(unsigned __int16)((_WORD)sreg << 8));
    if ( v10 == -1 )
      return -1;
  }
  else
  {
    result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    v8 = *(_QWORD *)(a3 + 16) + 16LL * *a2;
    if ( v8 != result )
    {
      if ( v8 != -1 )
        return v8 & result;
      return -1;
    }
  }
  return result;
}

