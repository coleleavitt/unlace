unsigned __int64 __fastcall sub_88B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 *v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // r14
  int i; // ebx
  __int64 sreg; // r15
  unsigned __int64 v9; // [rsp+48h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 16);
  v9 = __readfsqword(0x28u);
  v3 = (__int64 *)getseg();
  if ( (getinf() & 0x200) != 0 )
  {
    if ( v3 )
    {
      v4 = *(_DWORD **)(a1 + 16);
      v5 = *v3;
      for ( i = v4[17]; v4[18] >= i; ++i )
      {
        if ( v4[20] != i )
        {
          if ( (unsigned __int8)get_sreg_range() && (v5 == v2 || !v2) )
          {
            sreg = get_sreg();
            if ( v2 )
            {
              if ( (unsigned __int8)get_sreg_range() )
              {
                if ( v5 == v2 || sreg != get_sreg() )
                {
LABEL_17:
                  sub_87E0(a1, a2, i, sreg);
                  v4 = *(_DWORD **)(a1 + 16);
                  continue;
                }
              }
              else if ( v5 == v2 )
              {
                goto LABEL_17;
              }
            }
            else if ( !v5 )
            {
              goto LABEL_17;
            }
          }
          v4 = *(_DWORD **)(a1 + 16);
        }
      }
    }
  }
  return v9 - __readfsqword(0x28u);
}

