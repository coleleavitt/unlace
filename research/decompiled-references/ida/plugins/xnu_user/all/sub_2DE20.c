__int64 __fastcall sub_2DE20(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    return qfree();
  }
  return result;
}

