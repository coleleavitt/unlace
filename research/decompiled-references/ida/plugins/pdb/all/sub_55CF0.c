__int64 __fastcall sub_55CF0(
        _QWORD *a1,
        unsigned int a2,
        __int64 (__fastcall ***a3)(_QWORD, int *, _QWORD *, __int64),
        __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v6; // r14d
  unsigned __int8 v7; // r9
  signed int v8; // eax
  __int64 (__fastcall **v9)(_QWORD, int *, _QWORD *, __int64); // rax
  int v10; // eax
  unsigned int v11; // r9d
  int v13; // eax
  int v14; // [rsp+8h] [rbp-60h]
  unsigned __int8 v15; // [rsp+8h] [rbp-60h]
  unsigned __int8 v16; // [rsp+Fh] [rbp-59h]
  int v19; // [rsp+20h] [rbp-48h] BYREF
  signed int v20; // [rsp+24h] [rbp-44h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v5 = *a1;
  v21 = __readfsqword(0x28u);
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  if ( a2 )
  {
    v6 = 0;
    while ( a2 >= (unsigned __int64)v6 + 8 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 40LL))(*a1, v14 + v6) )
        break;
      v7 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(*(_QWORD *)*a1 + 48LL))(*a1, &v19, 8);
      if ( !v7 )
        break;
      v8 = v20;
      if ( a2 - 8LL - (unsigned __int64)v6 < v20 )
        break;
      if ( v19 > 0 )
      {
        if ( !v20 )
        {
          v15 = v7;
          v9 = *a3;
          v20 = a2 - 8 - v6;
          v10 = (*v9)(a3, &v19, a1, a4);
          v11 = v15;
          if ( v10 != -1 )
            return v11;
          return 0;
        }
        v16 = v7;
        v13 = (**a3)(a3, &v19, a1, a4);
        if ( v13 == -1 )
          return 0;
        v11 = v16;
        if ( v13 == 1 )
          return v11;
        v8 = v20;
      }
      v6 = (v8 + v6 + 11) & 0xFFFFFFFC;
      if ( v6 >= a2 )
        return 1;
    }
    return 0;
  }
  else
  {
    return 1;
  }
}

