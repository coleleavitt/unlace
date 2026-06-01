void __fastcall sub_4A850(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rsi

  if ( a1[5] )
  {
    v1 = 0;
    v2 = 0;
    do
    {
      v3 = v2++;
      sub_4E3A0(a1[4] + 56 * v1, v3, a1[3]);
      v1 = (int)v2;
    }
    while ( (unsigned __int64)(int)v2 < a1[5] );
  }
}

