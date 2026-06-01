__int64 __fastcall sub_124DE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 != a1 )
  {
    if ( a2 + 32 != a1 + 32 )
    {
      sub_11C7E0(a1 + 32);
      sub_123480(a1 + 32, (unsigned __int8 *)(a2 + 32));
    }
    if ( a2 + 48 != a1 + 48 )
    {
      sub_11C7E0(a1 + 48);
      sub_123480(a1 + 48, (unsigned __int8 *)(a2 + 48));
    }
    if ( a2 + 64 != a1 + 64 )
    {
      sub_11C7E0(a1 + 64);
      sub_123480(a1 + 64, (unsigned __int8 *)(a2 + 64));
    }
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
    *(_DWORD *)a1 = *(_DWORD *)a2;
    result = *(unsigned int *)(a2 + 4);
    *(_DWORD *)(a1 + 4) = result;
  }
  return result;
}

