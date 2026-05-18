__int64 __fastcall sub_CE540(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // edx

  result = (unsigned int)*a1;
  if ( (int)result > 0 )
  {
    LODWORD(result) = 0;
    do
    {
      v3 = *(_QWORD *)&a1[6 * (int)result + 2];
      if ( v3 )
      {
        v4 = *(_DWORD *)(v3 + 40);
        if ( v4 > *a2 )
          *a2 = v4;
      }
      result = (unsigned int)(result + 1);
    }
    while ( (int)result < *a1 );
  }
  return result;
}
