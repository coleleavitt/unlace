__int64 __fastcall sub_7F4B0(__int64 a1, unsigned int a2, char a3, int a4, _QWORD *a5)
{
  __int64 *v6; // rbp
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // rax

  v6 = (__int64 *)(a1 + 24LL * a2);
  v7 = *v6;
  if ( a3 == 1 )
  {
    *a5 = swap64(v7);
    v12 = swap64(v6[1]);
    a5[1] = (unsigned int)v12;
    a5[2] = HIDWORD(v12);
    result = swap64(v6[2]);
    a5[3] = result;
  }
  else
  {
    *a5 = v7;
    v8 = v6[1];
    v9 = (unsigned int)v8;
    if ( a4 == 8 && a3 == 2 )
    {
      v10 = HIBYTE(v8);
    }
    else
    {
      v10 = (unsigned int)v6[1];
      v9 = HIDWORD(v8);
    }
    a5[1] = v10;
    a5[2] = v9;
    result = v6[2];
    a5[3] = result;
  }
  return result;
}
