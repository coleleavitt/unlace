unsigned __int64 __fastcall sub_7FE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v5; // rbx
  __int64 v6; // r9
  char v7; // bl
  __int64 v8; // [rsp+10h] [rbp-68h]
  __int64 v9; // [rsp+30h] [rbp-48h]
  unsigned __int64 v10; // [rsp+48h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 16);
  v10 = __readfsqword(0x28u);
  v3 = getseg();
  if ( (getinf() & 0x200) != 0 )
  {
    if ( v3 )
    {
      if ( (*(_BYTE *)(v3 + 184) & 0xFD) != 1 )
      {
        v5 = *(_QWORD *)v3;
        if ( (getinf() & 0x200) != 0 )
        {
          if ( (unsigned __int8)get_sreg_range() )
          {
            v7 = v5 == v2;
            if ( !v2 )
            {
              if ( !(unsigned __int8)get_prev_sreg_range() )
                goto LABEL_9;
              v7 |= v8 != v9;
            }
            if ( v7 )
LABEL_9:
              sub_6A50(
                a2,
                0xFFFF,
                (__int64)word_96E2,
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
                (unsigned int)v8,
                v6,
                0.0,
                (__int128)0LL);
          }
        }
      }
    }
  }
  return v10 - __readfsqword(0x28u);
}

