unsigned __int64 __fastcall sub_59860(__int64 a1, __int64 *a2, char *a3, __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v9; // rcx
  char *v10; // r13
  char v11; // bp
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  a2[1] = 0;
  if ( a2[2] < a5 )
    *a2 = qvector_reserve();
  if ( a4 )
  {
    v9 = a2[1];
    v10 = &a3[a4];
    do
    {
      if ( v9 >= a5 )
        break;
      v11 = *a3;
      if ( (unsigned __int8)(*a3 - 35) <= 1u || v11 == 125 )
      {
        if ( v9 + 1 >= a5 )
          return v17 - __readfsqword(0x28u);
        v12 = *a2;
        if ( a2[2] < v9 + 1 )
        {
          v15 = qvector_reserve();
          v9 = a2[1];
          *a2 = v15;
          v12 = v15;
        }
        *(_BYTE *)(v12 + v9) = 125;
        v11 ^= 0x20u;
        v9 = a2[1] + 1;
        a2[1] = v9;
      }
      v13 = *a2;
      if ( a2[2] < v9 + 1 )
      {
        v14 = qvector_reserve();
        v9 = a2[1];
        *a2 = v14;
        v13 = v14;
      }
      *(_BYTE *)(v13 + v9) = v11;
      ++a3;
      v9 = a2[1] + 1;
      a2[1] = v9;
    }
    while ( v10 != a3 );
  }
  return v17 - __readfsqword(0x28u);
}

