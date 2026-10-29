__int64 __fastcall sub_24D5F0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // r9
  unsigned __int64 v5; // rdx

  v2 = *a2;
  v3 = 0;
  if ( *a2 != -1 )
  {
    v4 = a1[8];
    v5 = v2 - v4;
    if ( v2 - v4 < 0 )
      v5 = a1[8] - v2;
    if ( v5 < a1[9] )
    {
      a1[9] = v5;
      a1[10] = a2;
      return v2 == v4;
    }
  }
  return v3;
}

