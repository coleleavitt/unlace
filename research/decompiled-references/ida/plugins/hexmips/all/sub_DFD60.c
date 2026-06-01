__int64 __fastcall sub_DFD60(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  _QWORD v9[2]; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( a2 < 0 )
    return v10 - __readfsqword(0x28u);
  v2 = a1[1];
  if ( a2 >= v2 )
  {
    v4 = a2 + 1;
    if ( v4 != v2 )
    {
      v9[0] = 0;
      v5 = *a1;
      if ( v4 < v2 )
      {
        v8 = v4;
        do
        {
          ++v8;
          clear_tinfo_t();
        }
        while ( v8 < v2 );
        a1[1] = v4;
      }
      else
      {
        v6 = a1[2];
        if ( (unsigned __int64)v9 < v5 || (unsigned __int64)v9 >= v5 + 8 * v6 )
        {
          if ( v6 < v4 )
          {
            *a1 = qvector_reserve();
            v2 = a1[1];
          }
          while ( v2 < v4 )
          {
            *(_QWORD *)(*a1 + 8 * v2) = 0;
            copy_tinfo_t();
            ++v2;
          }
          a1[1] = v4;
        }
        else
        {
          v9[1] = 0;
          copy_tinfo_t();
          if ( a1[2] < v4 )
            *a1 = qvector_reserve();
          v7 = a1[1];
          if ( v7 < v4 )
          {
            do
            {
              *(_QWORD *)(*a1 + 8 * v7) = 0;
              copy_tinfo_t();
              ++v7;
            }
            while ( v4 != v7 );
          }
          a1[1] = v4;
          clear_tinfo_t();
        }
      }
      clear_tinfo_t();
    }
  }
  return copy_tinfo_t();
}

