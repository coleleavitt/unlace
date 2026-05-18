__int64 __fastcall sub_CD3F0(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // [rsp+8h] [rbp-30h]

  result = *(unsigned int *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 32);
  if ( (int)result > 0 )
  {
    v4 = 0;
    v5 = (unsigned int)(result - 1) + 1LL;
    do
    {
      if ( v4 != 1 )
      {
        result = (unsigned int)(1 << v4);
        if ( ((unsigned int)result & *a2) != 0 )
        {
          result = 32 * v4;
          v6 = *(_QWORD *)(v3 + 32 * v4 + 8);
          if ( v6 )
          {
            if ( *(_BYTE *)(v6 + 17) )
            {
              v7 = v4;
              result = sub_CC740(v6);
              v4 = v7;
            }
          }
        }
      }
      ++v4;
    }
    while ( v4 != v5 );
  }
  return result;
}
