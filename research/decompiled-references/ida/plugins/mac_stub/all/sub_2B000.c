__int64 __fastcall sub_2B000(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  int v5; // edx
  __int64 v6; // rax
  int v7; // ecx

  result = j__deserialize_dynamic_register_set();
  v3 = *(_QWORD *)(a1 + 680);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 672);
    v5 = 0;
    result = 0;
    do
    {
      v6 = v4 + 32 * result;
      v7 = *(_DWORD *)(v6 + 8);
      if ( (v7 & 4) != 0 )
      {
        *(_DWORD *)(a1 + 780) = v5;
        v7 = *(_DWORD *)(v6 + 8);
      }
      if ( (v7 & 2) != 0 )
        *(_DWORD *)(a1 + 784) = v5;
      result = ++v5;
    }
    while ( v5 < v3 );
  }
  return result;
}

