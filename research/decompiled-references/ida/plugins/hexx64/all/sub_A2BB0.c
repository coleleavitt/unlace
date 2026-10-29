__int64 __fastcall sub_A2BB0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int v3; // eax

  v1 = *(_QWORD *)(a1 + 56);
  result = 1;
  if ( v1 )
  {
    if ( (unsigned int)(*(_DWORD *)v1 - 56) > 1 || (result = 0, *(_BYTE *)(v1 + 64) == 8) )
    {
      LOBYTE(v3) = sub_32ED40(*(_DWORD *)v1, 0);
      return v3 ^ 1u;
    }
  }
  return result;
}

