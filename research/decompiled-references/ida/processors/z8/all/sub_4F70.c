unsigned __int64 __fastcall sub_4F70(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  char v4; // r12
  __int64 v6; // [rsp+10h] [rbp-4F8h]
  __int64 v7; // [rsp+30h] [rbp-4D8h]
  _BYTE v8[1032]; // [rsp+D0h] [rbp-438h] BYREF
  unsigned __int64 v9; // [rsp+4D8h] [rbp-30h]

  v2 = a2[2];
  v9 = __readfsqword(0x28u);
  v3 = getseg();
  if ( !((v3 == 0) | ((getinf() & 0x200) == 0)) )
  {
    v4 = 0;
    if ( *(_QWORD *)v3 == v2 )
      v4 = *(_BYTE *)(v3 + 184) == 2;
    if ( (unsigned __int8)get_sreg_range() )
    {
      if ( !v2 )
      {
        if ( !(unsigned __int8)get_prev_sreg_range() )
          goto LABEL_9;
        v4 |= v6 != v7;
      }
      if ( !v4 )
        return v9 - __readfsqword(0x28u);
LABEL_9:
      btoa64();
      qsnprintf();
      (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64, double))(*a2 + 136LL))(a2, v8, 0xFFFF, 0.0);
    }
  }
  return v9 - __readfsqword(0x28u);
}

