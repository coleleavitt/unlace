unsigned __int64 __fastcall sub_49BF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // rax
  _QWORD *v5; // r12
  __int128 v6; // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+10h] [rbp-58h]
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( (getinf(44) & 0x200) != 0 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    v6 = 0;
    if ( (unsigned __int8)get_sreg_range(&v6, v3, 32) )
    {
      if ( (_QWORD)v6 == v3 )
      {
        v4 = (_QWORD *)getseg(v3);
        v5 = v4;
        if ( v4 )
        {
          if ( *v4 != v3 )
          {
            v8 = 0;
            if ( !(unsigned __int8)get_prev_sreg_range(&v8, v3, 32) || v9 != v7 )
            {
              if ( v7 == 1 )
              {
                sub_48290(a2, 0xFFFF, (__int64)&unk_689CF);
              }
              else if ( *((_BYTE *)v5 + 184) == 2 )
              {
                sub_48290(a2, 0xFFFF, (__int64)&unk_689DD);
              }
            }
          }
        }
      }
    }
  }
  return v10 - __readfsqword(0x28u);
}
