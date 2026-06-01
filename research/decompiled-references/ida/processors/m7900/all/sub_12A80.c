__int64 __fastcall sub_12A80(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rsi

  result = 0;
  v4 = (__int64 *)&off_1C7E0;
  v5 = 0;
  do
  {
    while ( !_bittest(&a2, v5) )
    {
      ++v5;
      --v4;
      if ( v5 == 8 )
        return result;
    }
    if ( (_DWORD)result )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    ++v5;
    v6 = *v4--;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, v6, 33);
    result = 1;
  }
  while ( v5 != 8 );
  return result;
}

