__int64 __fastcall sub_10D4F0(unsigned int *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // r13d
  __int64 v9; // rdi

  do
  {
    result = a1[12];
    if ( ((unsigned int)(result - 5) <= 1 || !(_DWORD)result) && a1[6] > a2 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      if ( v6 )
        xmmword_241500(v6);
      v8 = sub_10D2F0((__int64)(a1 + 2), (__int64)(a1 + 10), a2, a3, 1);
      result = *(_QWORD *)a1;
      v9 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      if ( v9 )
        result = xmmword_241510(v9, a1 + 10, v7);
      if ( v8 )
        a1[12] = v8;
    }
    a1 = *((unsigned int **)a1 + 8);
  }
  while ( a1 );
  return result;
}
