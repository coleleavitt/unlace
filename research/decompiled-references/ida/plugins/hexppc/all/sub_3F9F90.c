__int64 __fastcall sub_3F9F90(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  result = sub_3F9C80(a1);
  if ( !(_BYTE)result )
  {
    v3 = *(_QWORD *)(a1 + 832);
    v4 = 2;
    if ( *(_DWORD *)(v3 + 80) == 8 )
      v4 = 7;
    result = sub_1D2C40(a1, 2, v4, *(_DWORD *)(v3 + 468), a2, 0);
    if ( result )
    {
      v5 = *(unsigned __int8 *)(result + 64);
      if ( (unsigned __int8)v5 <= 9u )
      {
        v6 = 610;
        if ( _bittest64(&v6, v5) )
          *(_BYTE *)(result + 65) |= 8u;
      }
    }
  }
  return result;
}

