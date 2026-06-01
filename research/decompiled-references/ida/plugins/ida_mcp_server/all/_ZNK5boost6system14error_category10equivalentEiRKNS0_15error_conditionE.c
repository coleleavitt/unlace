__int64 __fastcall boost::system::error_category::equivalent(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = 0;
  if ( *(_DWORD *)a3 != v4 )
    return v6;
  v7 = *(_QWORD *)(a3 + 8);
  if ( v5 )
  {
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( !v8 )
        return v5 == v7;
      LOBYTE(v8) = *(_QWORD *)(v5 + 8) == v8;
      return (unsigned int)v8;
    }
    else
    {
      LOBYTE(v6) = *(_QWORD *)(v5 + 8) == 0xB2AB117A257EDFD0LL;
      return v6;
    }
  }
  else
  {
    if ( !v7 )
      return 1;
    LOBYTE(v6) = *(_QWORD *)(v7 + 8) == 0xB2AB117A257EDFD0LL;
    return v6;
  }
}

