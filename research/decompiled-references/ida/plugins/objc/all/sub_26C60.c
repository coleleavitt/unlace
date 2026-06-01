__int64 __fastcall sub_26C60(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, unsigned __int64, __int64, _QWORD),
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int a7)
{
  unsigned __int64 v9; // r10
  int v13; // eax
  int v14; // r15d
  unsigned int v16; // ebp
  char v17; // al
  _QWORD *v18; // rdi
  __int128 *v19; // rax
  __int128 *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // [rsp+8h] [rbp-90h]
  unsigned __int64 v25; // [rsp+18h] [rbp-80h] BYREF
  __int64 v26; // [rsp+20h] [rbp-78h] BYREF
  __int128 v27; // [rsp+28h] [rbp-70h] BYREF
  __int128 *v28; // [rsp+38h] [rbp-60h]
  __int128 *v29; // [rsp+40h] [rbp-58h]
  __int64 v30; // [rsp+48h] [rbp-50h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v9 = a3;
  if ( *(_BYTE *)(a1[1] + 2216LL) )
  {
    v27 = 0;
    v26 = 0;
    get_ea_name();
    sub_EC40();
    v9 = a3;
  }
  if ( a4 == 2 )
    return (**a2)(a2, v9, a5, a6);
  if ( a4 > 2 )
  {
    v16 = -1;
    if ( a4 == 3 )
    {
      v25 = v9;
      LODWORD(v27) = 0;
      *((_QWORD *)&v27 + 1) = 0;
      v28 = &v27;
      v29 = &v27;
      v30 = 0;
      while ( 1 )
      {
        v16 = (**a2)(a2, v9, a5, a6);
        if ( v16 )
          break;
        sub_26B40(&v26, &v25);
        v17 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64 *, unsigned __int64))(*a1 + 136LL))(
                a1,
                &v25,
                a1[116] + v25);
        v18 = (_QWORD *)*((_QWORD *)&v27 + 1);
        if ( v17 )
        {
          v9 = v25;
          if ( v25 )
          {
            if ( !*((_QWORD *)&v27 + 1) )
              continue;
            v19 = (__int128 *)*((_QWORD *)&v27 + 1);
            v20 = &v27;
            do
            {
              while ( 1 )
              {
                v21 = *((_QWORD *)v19 + 2);
                v22 = *((_QWORD *)v19 + 3);
                if ( *((_QWORD *)v19 + 4) >= v25 )
                  break;
                v19 = (__int128 *)*((_QWORD *)v19 + 3);
                if ( !v22 )
                  goto LABEL_20;
              }
              v20 = v19;
              v19 = (__int128 *)*((_QWORD *)v19 + 2);
            }
            while ( v21 );
LABEL_20:
            if ( v20 == &v27 || v25 < *((_QWORD *)v20 + 4) )
              continue;
          }
        }
        goto LABEL_22;
      }
      v18 = (_QWORD *)*((_QWORD *)&v27 + 1);
LABEL_22:
      sub_245B0(v18);
    }
    return v16;
  }
  v23 = v9;
  v13 = callui(1004);
  v9 = v23;
  v14 = a4 == 0 ? 0x4000 : 0x80000;
  if ( !v13 || (a7 & v14) != 0 )
    return (**a2)(a2, v9, a5, a6);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(_QWORD, unsigned __int64, __int64, _QWORD), unsigned __int64, __int64, _QWORD))(*a1 + 8LL))(
           a1,
           a2,
           v23,
           a5,
           a6);
}
