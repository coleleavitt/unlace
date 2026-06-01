__int64 __fastcall sub_2CCD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r13

  v2 = sub_2C970(a1, a2, (__int64)&unk_59870, 4);
  if ( v2 != -1 )
    return v2;
  v4 = sub_2C970(a1, a2, (__int64)&unk_59860, 4);
  if ( v4 == -1 )
  {
    v4 = sub_2CBF0(a1, a2);
    if ( v4 == -1 )
    {
      v4 = sub_2C970(a1, a2, (__int64)&unk_59840, 4);
      if ( v4 == -1 )
      {
        v4 = sub_2C970(a1, a2, (__int64)&unk_59830, 4);
        if ( v4 == -1 )
        {
          v4 = sub_2CA80(a1, a2);
          if ( v4 == -1 )
          {
            v4 = sub_2CB60(a1, a2);
            if ( v4 == -1 )
              return v2;
          }
        }
      }
    }
  }
  if ( !(unsigned __int8)is_loaded(v4) )
    return v2;
  else
    return (unsigned int)get_dword(v4);
}
