__int64 __fastcall sub_6EDF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // dx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 word; // rdi
  __int64 v9; // rdx

  v5 = *(_WORD *)(a2 + 24);
  if ( v5 == 18 || v5 == 88 )
  {
    result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    v7 = a3 + 16LL * *(_QWORD *)a2;
    if ( v7 != result )
    {
      result &= v7;
      if ( v7 == -1 )
        return -1;
    }
  }
  else if ( (v5 == 17 || v5 == 87) && (word = (unsigned __int16)get_word(), word != 0xFFFF) && word )
  {
    v9 = 16 * sel2para() + a3;
    result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( v9 != result )
    {
      if ( v9 != -1 )
        return v9 & result;
      return -1;
    }
  }
  else
  {
    return a3;
  }
  return result;
}

