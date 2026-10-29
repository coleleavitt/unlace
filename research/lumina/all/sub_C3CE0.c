__int64 __fastcall sub_C3CE0(_DWORD *a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  unsigned int *v4; // rdx
  __int64 result; // rax
  unsigned int *v6; // r8
  unsigned int v7; // ecx
  unsigned int v8; // r9d

  v2 = (unsigned int)(*a1 + 1);
  v3 = v2;
  *a1 = v2;
  v4 = &a1[v2];
  result = v3 >> 1;
  *v4 = a2;
  if ( (_DWORD)result )
  {
    v6 = &a1[(unsigned int)result];
    v7 = *v6;
    if ( a2 < *v6 )
    {
      do
      {
        *v6 = a2;
        *v4 = v7;
        v8 = (unsigned int)result >> 1;
        if ( !((unsigned int)result >> 1) )
          break;
        v6 = &a1[v8];
        v4 = &a1[(unsigned int)result];
        result = v8;
        v7 = *v6;
        a2 = *v4;
      }
      while ( *v6 > *v4 );
    }
  }
  return result;
}
