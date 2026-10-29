__int64 __fastcall sub_1C9F0(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v5; // r15
  unsigned int _32bit; // eax
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 i; // r12
  unsigned int v10; // r14d
  unsigned int v11; // eax
  __int64 (*v12)(); // r9
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned __int64 v17; // r15
  unsigned int v18; // r12d
  unsigned int v19; // eax
  __int64 (*v20)(); // rcx
  int v21; // eax
  unsigned int v22; // [rsp+Ch] [rbp-7Ch]
  unsigned __int64 v23; // [rsp+10h] [rbp-78h]
  __int64 v24; // [rsp+18h] [rbp-70h]
  unsigned __int64 v25; // [rsp+28h] [rbp-60h] BYREF
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  __int128 v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v2 = sub_15060(a1, 2);
  if ( v2 == -1 )
    return (unsigned int)-1;
  v3 = v2;
  v22 = sub_1C480(a1, v2, a2);
  if ( v22 )
    return v22;
  v5 = getseg();
  if ( !v5 )
    return (unsigned int)-1;
  _32bit = get_32bit();
  if ( _32bit == -1 )
    return (unsigned int)-1;
  v7 = _32bit;
  if ( *(_QWORD *)(v5 + 8) < v3 + _32bit + (unsigned __int64)(4 * _32bit) )
    return (unsigned int)-1;
  v25 = 0;
  if ( !(unsigned __int8)sub_14F10(a1, &v25, v3) )
    return (unsigned int)-1;
  if ( (a2[8] & 2) != 0 )
  {
    v26 = 0;
    v27 = 0;
    sub_D6A0(&v26);
    v8 = v25;
    set_name();
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree();
    }
  }
  else
  {
    v8 = v25;
  }
  for ( i = v8 + *(_QWORD *)(a1 + 680) * v7; v8 < i; v25 = v8 )
  {
    v13 = *((_DWORD *)a2 + 2);
    if ( (v13 & 1) != 0 )
    {
      if ( (unsigned __int8)callui(27) )
        return (unsigned int)-1;
      v13 = *((_DWORD *)a2 + 2);
    }
    if ( (v13 & 2) != 0 )
      sub_EB50(v8, *(_QWORD *)(a1 + 680), *(_QWORD *)(a1 + 656));
    v10 = get_32bit();
    if ( v10 != -1 )
    {
      v11 = get_32bit();
      if ( v11 - 1 <= 0xFFFFFFFD )
      {
        if ( v10 )
        {
          v12 = *(__int64 (**)())(*(_QWORD *)a2 + 24LL);
          if ( v12 != sub_F070 )
          {
            v14 = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64))v12)(a2, v10 + v3, v11 + v3);
            if ( v14 )
              return v14;
          }
        }
      }
    }
    v8 += *(_QWORD *)(a1 + 680);
  }
  v24 = getseg();
  if ( !v24 )
    return (unsigned int)-1;
  v15 = get_32bit();
  v16 = v15;
  if ( v15 == -1 )
    return (unsigned int)-1;
  v23 = *(_QWORD *)(a1 + 680) * v15 + v8;
  if ( *(_QWORD *)(v24 + 8) < v23 )
    return (unsigned int)-1;
  if ( (a2[8] & 2) != 0 )
  {
    v26 = 0;
    v27 = 0;
    sub_D6A0(&v26);
    set_name();
    create_data();
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree();
    }
  }
  if ( v16 )
  {
    v17 = v8 + 4;
    v25 = v17;
    if ( (a2[8] & 2) != 0 )
    {
      v26 = 0;
      v27 = 0;
      sub_D6A0(&v26);
      set_name();
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree();
      }
    }
    if ( v17 < v23 )
    {
      while ( 1 )
      {
        v21 = *((_DWORD *)a2 + 2);
        if ( (v21 & 1) != 0 )
        {
          if ( (unsigned __int8)callui(27) )
            return (unsigned int)-1;
          v21 = *((_DWORD *)a2 + 2);
        }
        if ( (v21 & 2) != 0 )
          sub_EB50(v17, *(_QWORD *)(a1 + 680), *(_QWORD *)(a1 + 656));
        v18 = get_32bit();
        if ( v18 != -1 )
        {
          v19 = get_32bit();
          if ( v19 - 1 <= 0xFFFFFFFD )
          {
            if ( v18 )
            {
              v20 = *(__int64 (**)())(*(_QWORD *)a2 + 24LL);
              if ( v20 != sub_F070 )
              {
                v14 = ((__int64 (__fastcall *)(_BYTE *, __int64, __int64))v20)(a2, v18 + v3, v3 + v19);
                if ( v14 )
                  break;
              }
            }
          }
        }
        v17 += *(_QWORD *)(a1 + 680);
        v25 = v17;
        if ( v17 >= v23 )
          return v22;
      }
      return v14;
    }
  }
  return v22;
}
