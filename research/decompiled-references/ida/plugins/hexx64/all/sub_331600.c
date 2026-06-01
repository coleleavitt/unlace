void __fastcall sub_331600(__int64 a1, double a2)
{
  __int64 v2; // rax
  int v3; // ebx

  if ( *(_QWORD *)(a1 + 736) )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      sub_6D0A0((__int64)"%a: %s\n", a2, *(const char **)(*(_QWORD *)(a1 + 728) + 40 * v2));
      v2 = v3;
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 736) );
  }
}

