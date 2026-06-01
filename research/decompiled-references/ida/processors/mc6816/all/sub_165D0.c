unsigned __int64 __fastcall sub_165D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 *v3; // rbx
  __int64 v4; // r14
  _DWORD *v5; // rax
  bool v6; // zf
  int v7; // ebx
  bool i; // r15
  __int64 sreg; // rax
  __int64 v11; // [rsp+8h] [rbp-90h]
  unsigned __int64 v12; // [rsp+58h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 16);
  v12 = __readfsqword(0x28u);
  v3 = (__int64 *)getseg();
  if ( (getinf() & 0x200) != 0 )
  {
    if ( v3 )
    {
      v4 = *v3;
      v5 = *(_DWORD **)(a1 + 16);
      v6 = *v3 == v2;
      v7 = v5[17];
      for ( i = v6; v5[18] >= v7; ++v7 )
      {
        if ( v5[20] != v7 )
        {
          if ( (unsigned __int8)get_sreg_range() )
          {
            sreg = get_sreg();
            if ( !v2 || i )
            {
              if ( v2 )
              {
                v11 = sreg;
                if ( (unsigned __int8)get_sreg_range() )
                {
                  if ( v4 == v2 || v11 != get_sreg() )
                  {
LABEL_13:
                    sub_16540(a1, a2, v7);
                    v5 = *(_DWORD **)(a1 + 16);
                    continue;
                  }
                }
                else if ( v4 == v2 )
                {
                  goto LABEL_13;
                }
              }
              else if ( !v4 )
              {
                goto LABEL_13;
              }
            }
          }
          v5 = *(_DWORD **)(a1 + 16);
        }
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}

