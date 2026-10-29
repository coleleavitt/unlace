__int64 __fastcall sub_7C10(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = get_sreg();
  if ( result != -1 )
    return *(_QWORD *)(a2 + 16) | ((_DWORD)result << 16) & 0xFF0000;
  return result;
}

