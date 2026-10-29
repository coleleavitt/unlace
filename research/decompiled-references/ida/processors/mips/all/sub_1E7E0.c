__int64 __fastcall sub_1E7E0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 *a4)
{
  __int16 *v4; // r13
  __int64 v6; // rbx
  __int16 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v10; // [rsp+8h] [rbp-40h]

  v4 = (__int16 *)(a4 + 10);
  v6 = a2 + 40;
  v10 = a3;
  do
  {
    v7 = *v4;
    if ( !*v4 )
      break;
    v8 = v6;
    v6 += 40;
    ++v4;
    sub_1BA30(a1, a2, v8, v10, *a4, v7);
  }
  while ( v6 != a2 + 240 );
  return 1;
}

