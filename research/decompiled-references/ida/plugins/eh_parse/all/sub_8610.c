__int64 __fastcall sub_8610(__int64 a1)
{
  __int64 result; // rax

  result = getinf(3) & 6;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 2 )
    {
      *(_DWORD *)(a1 + 132) = 4;
      *(_QWORD *)(a1 + 136) = 0xFFFFFFFFLL;
    }
    else
    {
      *(_DWORD *)(a1 + 132) = 8;
      *(_QWORD *)(a1 + 136) = -1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 132) = 2;
    *(_QWORD *)(a1 + 136) = 0xFFFF;
  }
  return result;
}

