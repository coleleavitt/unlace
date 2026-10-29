unsigned __int64 __fastcall sub_9840(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 *v4; // rbx
  _DWORD *v5; // rax
  __int64 v6; // r14
  int i; // ebx
  __int64 sreg; // r15
  unsigned __int64 v10; // [rsp+48h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 16);
  v10 = __readfsqword(0x28u);
  v3 = getseg();
  if ( v3 )
  {
    v4 = (__int64 *)v3;
    if ( (getinf() & 0x200) != 0 )
    {
      v5 = *(_DWORD **)(a1 + 16);
      v6 = *v4;
      for ( i = v5[17]; v5[18] >= i; ++i )
      {
        if ( v5[20] != i )
        {
          if ( (unsigned __int8)get_sreg_range() )
          {
            sreg = get_sreg();
            if ( v6 == v2 )
            {
              if ( v6 )
                get_sreg_range();
              sub_9770(a1, a2, i, sreg);
            }
          }
          v5 = *(_DWORD **)(a1 + 16);
        }
      }
    }
  }
  return v10 - __readfsqword(0x28u);
}

