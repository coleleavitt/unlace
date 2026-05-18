__int64 __fastcall sub_CD480(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r13
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v9; // [rsp+8h] [rbp-30h]

  result = *(unsigned int *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 32);
  if ( (int)result > 0 )
  {
    v5 = 0;
    v6 = (unsigned int)(result - 1) + 1LL;
    do
    {
      if ( v5 != 1 )
      {
        result = (unsigned int)(1 << v5);
        if ( ((unsigned int)result & *a2) != 0 )
        {
          result = 32 * v5;
          v7 = *(_QWORD *)(v4 + 32 * v5 + 8);
          if ( v7 )
          {
            if ( *(_BYTE *)(v7 + 17) )
            {
              if ( (*(_DWORD *)(v7 + 20))-- == 1 )
              {
                v9 = v5;
                result = sub_CC7D0(v7, (__int64)a2, a3);
                v5 = v9;
              }
            }
          }
        }
      }
      ++v5;
    }
    while ( v5 != v6 );
  }
  return result;
}
