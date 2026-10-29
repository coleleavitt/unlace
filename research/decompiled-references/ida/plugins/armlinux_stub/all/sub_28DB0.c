__int64 __fastcall sub_28DB0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  bool v3; // zf
  const char *v4; // rax

  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD))(qword_39700 + 280))(*(_QWORD *)(a1 + 88));
  v2 = (int)result;
  if ( (int)result < 0LL )
  {
    v3 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(qword_39700 + 232))(
           *(_QWORD *)(a1 + 88),
           (unsigned int)result) == 5;
    v4 = "irs";
    if ( !v3 )
      v4 = "openssl";
    *(_QWORD *)(a1 + 64) = v4;
    return v2;
  }
  else
  {
    if ( !(_DWORD)result )
      *(_QWORD *)(a1 + 64) = "connection_closed_by_peer";
    return (int)result;
  }
}

