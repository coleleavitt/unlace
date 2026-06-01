__int64 __fastcall sub_6A5D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 v3; // r12
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r14
  int flags; // r13d
  __int64 (*v8)(); // rax

  result = getseg();
  if ( result )
  {
    v2 = result;
    v3 = 4;
    if ( *(_BYTE *)(result + 43) == 2 )
      v3 = 8;
    result = get_flags_ex();
    v4 = *(_QWORD *)(v2 + 8);
    v5 = v3 + a1;
    if ( (result & 0x600) != 0 )
    {
      if ( v4 >= v5 )
      {
        v6 = a1;
        do
        {
          flags = get_flags_ex();
          result = flags & 0x600;
          if ( v3 == 8 )
          {
            if ( result != 1024 )
              return result;
            result = flags & 0xF0000000;
            if ( result != 805306368 )
              return result;
          }
          else
          {
            if ( result != 1024 )
              return result;
            result = flags & 0xF0000000;
            if ( result != 0x20000000 )
              return result;
          }
          if ( v6 != a1 && (flags & 0xD000) != 0 )
            break;
          result = sub_6A400(v6, v3);
          if ( !(_BYTE)result )
            break;
          if ( (flags & 0xF00000) != 0x500000 )
          {
            get_reftype_by_size();
            op_offset();
          }
          v6 += v3;
          result = v3 + v6;
        }
        while ( *(_QWORD *)(v2 + 8) >= (unsigned __int64)(v3 + v6) );
      }
    }
    else if ( v4 >= v5 )
    {
      result = sub_6A400(a1, v3);
      if ( (_BYTE)result )
      {
        v8 = sub_68E00;
        if ( v3 == 8 )
          v8 = sub_68E20;
        ((void (__fastcall *)(__int64, __int64, _QWORD))v8)(a1, v3, 0);
        get_reftype_by_size();
        return op_offset();
      }
    }
  }
  return result;
}
