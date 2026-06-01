unsigned __int64 __fastcall sub_AB00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  _QWORD *v4; // r13
  _DWORD *v5; // rax
  int i; // ebx
  char v8[136]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v9; // [rsp+D8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 16);
  v9 = __readfsqword(0x28u);
  v3 = getseg();
  if ( v3 )
  {
    v4 = (_QWORD *)v3;
    if ( (getinf() & 0x200) != 0 )
    {
      v5 = *(_DWORD **)(a1 + 16);
      for ( i = v5[17]; v5[18] >= i; ++i )
      {
        if ( v5[20] != i )
        {
          if ( (unsigned __int8)get_sreg_range() )
          {
            get_sreg();
            if ( *v4 == v2 )
            {
              if ( v2 )
                get_sreg_range();
              v5 = *(_DWORD **)(a1 + 16);
              if ( v5[21] == i )
                continue;
              btoa64();
              sub_A040(
                a2,
                (__int64)"assume %s = %s",
                *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * i),
                v8);
            }
          }
          v5 = *(_DWORD **)(a1 + 16);
        }
      }
    }
  }
  return v9 - __readfsqword(0x28u);
}

