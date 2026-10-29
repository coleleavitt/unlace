__int64 __fastcall sub_34440(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 *v3; // rcx
  unsigned int v4; // edx

  v2 = *(unsigned __int64 **)(a1 + 16);
  v3 = &v2[*(_QWORD *)(a1 + 24)];
  v4 = 0;
  if ( 8LL * *(_QWORD *)(a1 + 24) )
  {
    do
    {
      if ( a2 < *v2 )
        break;
      ++v2;
      ++v4;
    }
    while ( v2 != v3 );
  }
  return v4;
}

