unsigned __int64 __fastcall sub_D8C60(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  int v4; // ebx
  __int64 v5; // rdi

  result = *(unsigned int *)(a1 + 40);
  if ( (int)result > 0 )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        result = *(_QWORD *)(a1 + 32) + 32LL * v4;
        v5 = *(_QWORD *)(result + 24);
        if ( (*(_BYTE *)(v5 + 114) & 8) != 0 )
          break;
        if ( ++v4 >= *(_DWORD *)(a1 + 40) )
          return result;
      }
      result = sub_D8A60(v5, a2);
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 40) );
  }
  return result;
}
