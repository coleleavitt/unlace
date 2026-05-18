__int64 __fastcall sub_CC760(__int64 a1)
{
  __int64 result; // rax
  char v3; // dl
  int v4; // ebx
  __int64 v5; // rdi

  result = *(unsigned int *)(a1 + 40);
  if ( (int)result <= 0 )
  {
    *(_BYTE *)(a1 + 111) = 1;
  }
  else
  {
    v3 = 1;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        result = *(_QWORD *)(a1 + 32) + 32LL * v4;
        v5 = *(_QWORD *)(result + 8);
        if ( v5 )
        {
          if ( *(_BYTE *)(v5 + 17) )
            break;
        }
        if ( *(_DWORD *)(a1 + 40) <= ++v4 )
          goto LABEL_7;
      }
      result = sub_CC740(v5);
      ++v4;
      v3 = 0;
    }
    while ( *(_DWORD *)(a1 + 40) > v4 );
LABEL_7:
    *(_BYTE *)(a1 + 111) = v3;
  }
  return result;
}
