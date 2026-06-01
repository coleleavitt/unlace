__int64 __fastcall sub_2A790(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax

  v2 = a2;
  if ( !*(_BYTE *)(a1 + 48) )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 > a2 || !v3 )
      v2 = *(_QWORD *)(a1 + 32) + a2;
  }
  if ( v2 == qlseek() )
    return qlread();
  else
    return -1;
}

