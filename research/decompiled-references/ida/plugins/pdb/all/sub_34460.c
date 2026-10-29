__int64 __fastcall sub_34460(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rax
  __int16 v3; // dx
  __int64 v4; // rcx
  const char *v5; // rdi

  result = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 4LL);
  if ( !(_DWORD)result && *(_DWORD *)(a1 + 144) == 17744 )
  {
    v2 = *(unsigned __int16 *)(a1 + 236);
    v3 = *(_WORD *)(a1 + 168);
    if ( (unsigned __int16)v2 <= 9u && (v4 = 684, _bittest64(&v4, v2)) )
    {
      v5 = "mssdk_win7";
      if ( v3 == 523 )
        v5 = "mssdk64_win7";
    }
    else
    {
      v5 = "ntddk_win7";
      if ( v3 == 523 )
        v5 = "ntddk64_win7";
    }
    return add_til(v5, 1);
  }
  return result;
}

