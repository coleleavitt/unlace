__int64 __fastcall sub_3C2050(_QWORD *a1, __int64 a2, int a3)
{
  __int64 (__fastcall *v3)(__int64, int); // rax
  __int64 v4; // rbp
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 136LL);
  if ( v3 == sub_3C0DB0 )
  {
    v4 = *(_QWORD *)(a1[23] + 8LL * a3);
    if ( v4 == a1[22] )
    {
      LODWORD(a1) = 65280;
    }
    else
    {
      if ( *(int *)(v4 + 8) > 69 )
        return v8 - __readfsqword(0x28u);
      v6 = 0;
      v7 = 0;
      if ( (unsigned __int8)sub_3242C0(&v6, v4 + 48, nullptr) )
      {
        if ( v6 )
        {
          *(_QWORD *)&v7 = 0;
          qfree();
        }
        LODWORD(a1) = 255;
        if ( *(_DWORD *)(v4 + 8) != 48 )
          return v8 - __readfsqword(0x28u);
      }
      else
      {
        if ( v6 )
        {
          *(_QWORD *)&v7 = 0;
          qfree();
        }
        a1 = &loc_32CD9A;
      }
    }
  }
  else
  {
    LODWORD(a1) = v3((__int64)a1, a3);
    if ( (_DWORD)a1 == -1 )
      return v8 - __readfsqword(0x28u);
  }
  sub_3C0A50((unsigned int)a1);
  return sub_60540();
}

