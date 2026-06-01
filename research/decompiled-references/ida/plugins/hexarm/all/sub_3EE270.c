__int64 __fastcall sub_3EE270(__int64 a1, __int64 a2, double a3)
{
  int v3; // edx
  __int64 result; // rax
  int v5; // ebx
  unsigned int v6; // ecx

  v3 = *(char *)(a2 + 34);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
  {
    if ( (char)v3 <= 0 )
    {
      return 0;
    }
    else
    {
      v6 = *(char *)(a2 + 32) - 1;
      if ( v6 > 4 )
        sub_3EACF0(a3);
      return (unsigned int)((v3 - 1) << v6);
    }
  }
  else
  {
    result = 0;
    if ( (unsigned __int8)(v3 + 1) > 1u )
    {
      v5 = v3 - 1;
      if ( !sub_3EDFE0(a1, a2) )
        sub_3EAD10(a3);
      return v5 * (unsigned int)get_dtype_size();
    }
  }
  return result;
}

