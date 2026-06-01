_BOOL8 __fastcall sub_FDAA0(__int64 a1)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  result = 0;
  if ( *(_QWORD *)(v1 + 24) == *(_QWORD *)(a1 + 40) )
    return (unsigned int)(*(_DWORD *)v1 - 56) <= 1;
  return result;
}

