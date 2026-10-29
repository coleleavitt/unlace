__int64 (__fastcall **__fastcall sub_39E1A0(__int64 a1))()
{
  __int64 v1; // rdx
  __int64 (__fastcall **result)(); // rax
  _QWORD *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 j; // rbx
  _QWORD *v12; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = off_4BA718;
  *(_QWORD *)a1 = off_4BA718;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 104))-- == 1 )
    {
      v4 = *(_QWORD **)(a1 + 24);
      if ( v4 )
      {
        sub_2535B0(*(__int64 **)(a1 + 24));
        v5 = v4[23];
        if ( v5 )
        {
          v6 = v4[24];
          if ( v6 )
          {
            for ( i = 0; i != v6; ++i )
            {
              v8 = (_QWORD *)(v5 + 24 * i);
              if ( *v8 )
              {
                v8[1] = 0;
                qfree();
                v5 = v4[23];
              }
            }
          }
          v4[24] = 0;
          qfree();
        }
        if ( v4[20] )
        {
          v4[21] = 0;
          qfree();
        }
        v9 = v4[16];
        if ( v9 )
        {
          v10 = v4[17];
          if ( v10 )
          {
            for ( j = 0; j != v10; ++j )
            {
              v12 = (_QWORD *)(v9 + 32 * j);
              if ( *v12 )
              {
                v12[1] = 0;
                qfree();
                v9 = v4[16];
              }
            }
          }
          v4[17] = 0;
          qfree();
        }
        sub_24FC90((__int64)(v4 + 2));
        return (__int64 (__fastcall **)())j__qfree();
      }
    }
  }
  return result;
}

