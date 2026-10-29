unsigned __int64 __fastcall sub_C0C20(_QWORD *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  const char *v6; // r8
  _BYTE *v8; // rsi
  _BYTE *v9; // rsi
  _BYTE *v10; // [rsp+0h] [rbp-70h] BYREF
  __int128 v11; // [rsp+8h] [rbp-68h]
  _BYTE *v12; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+28h] [rbp-48h]
  unsigned __int64 v14; // [rsp+38h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v10 = nullptr;
  v12 = nullptr;
  v11 = 0;
  v13 = 0;
  if ( !(unsigned __int8)print_tinfo() )
  {
    v8 = v12;
    if ( *((_QWORD *)&v13 + 1) <= 1u )
    {
      v12 = (_BYTE *)qvector_reserve((__int64)&v12, (__int64)v12, 2, 1);
      v8 = v12;
    }
    *(_QWORD *)&v13 = 2;
    *v8 = 63;
    v12[1] = 0;
  }
  if ( !(unsigned __int8)print_tinfo() )
  {
    v9 = v10;
    if ( *((_QWORD *)&v11 + 1) <= 1u )
    {
      v10 = (_BYTE *)qvector_reserve((__int64)&v10, (__int64)v10, 2, 1);
      v9 = v10;
    }
    *(_QWORD *)&v11 = 2;
    *v9 = 63;
    v10[1] = 0;
  }
  v6 = s1;
  if ( (_QWORD)v11 )
    v6 = v10;
  sub_3311F0(a1, a2, 0x20u, a4, v6);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree((__int64)v12);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree((__int64)v10);
  }
  return v14 - __readfsqword(0x28u);
}

