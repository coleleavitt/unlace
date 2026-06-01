unsigned __int64 __fastcall sub_7C10(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _QWORD *v3; // rbx
  _DWORD *v4; // rax
  bool v5; // r14
  int i; // ebx
  bool v8; // al
  __int64 v9; // [rsp+10h] [rbp-68h]
  __int64 v10; // [rsp+30h] [rbp-48h]
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 16);
  v11 = __readfsqword(0x28u);
  v3 = (_QWORD *)getseg();
  if ( (getinf() & 0x200) != 0 )
  {
    if ( v3 )
    {
      v4 = *(_DWORD **)(a1 + 16);
      v5 = *v3 == v2;
      for ( i = v4[17]; v4[18] >= i; ++i )
      {
        if ( v4[20] == i || i != 17 )
          continue;
        if ( (unsigned __int8)get_sreg_range() )
        {
          v8 = v5;
          if ( !v2 )
          {
            if ( !(unsigned __int8)get_prev_sreg_range() )
            {
LABEL_14:
              sub_7B40(a1, a2, 17, v9);
              v4 = *(_DWORD **)(a1 + 16);
              continue;
            }
            v8 = v5 || v9 != v10;
          }
          if ( v8 )
            goto LABEL_14;
        }
        v4 = *(_DWORD **)(a1 + 16);
      }
    }
  }
  return v11 - __readfsqword(0x28u);
}

