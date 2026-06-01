__int64 __fastcall sub_3CF00(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  int v3; // ecx
  unsigned __int64 v5; // rax

  if ( under_debugger )
    BUG();
  interr();
  if ( !*(_DWORD *)(qword_8FB50 + 120) && v3 == 18 && !(a2 >> 16) )
  {
    v5 = a2 + 16LL * *(_QWORD *)(v2 + 8);
    a2 = 0;
    if ( v5 )
    {
      a2 = 0;
      if ( v5 == -1 )
        return -1;
    }
  }
  return a2;
}

