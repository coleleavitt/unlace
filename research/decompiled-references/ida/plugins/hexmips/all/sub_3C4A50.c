__int64 __fastcall sub_3C4A50(_QWORD *a1, __int64 a2, int a3)
{
  __int64 (__fastcall *v3)(__int64, int); // rax
  __int64 v4; // rbp
  unsigned int v6; // edi
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v3 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 136LL);
  if ( v3 == sub_3C37B0 )
  {
    v4 = *(_QWORD *)(a1[23] + 8LL * a3);
    if ( v4 == a1[22] )
    {
      v6 = 65280;
    }
    else
    {
      if ( *(int *)(v4 + 8) > 69 )
        return v9 - __readfsqword(0x28u);
      v7 = 0;
      v8 = 0;
      if ( (unsigned __int8)sub_3268C0(&v7, v4 + 48, nullptr) )
      {
        if ( v7 )
        {
          *(_QWORD *)&v8 = 0;
          qfree();
        }
        v6 = 255;
        if ( *(_DWORD *)(v4 + 8) != 48 )
          return v9 - __readfsqword(0x28u);
      }
      else
      {
        if ( v7 )
        {
          *(_QWORD *)&v8 = 0;
          qfree();
        }
        v6 = 3329434;
      }
    }
  }
  else
  {
    v6 = v3((__int64)a1, a3);
    if ( v6 == -1 )
      return v9 - __readfsqword(0x28u);
  }
  sub_3C3450(v6);
  return sub_628C0();
}

