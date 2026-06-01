unsigned __int64 __fastcall sub_C0A20(_QWORD *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  const char *v6; // r8
  const char *v7; // rcx
  _BYTE *v9; // rsi
  _BYTE *v10; // rsi
  _BYTE *v11; // [rsp+0h] [rbp-70h] BYREF
  __int128 v12; // [rsp+8h] [rbp-68h]
  _BYTE *v13; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+28h] [rbp-48h]
  unsigned __int64 v15; // [rsp+38h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  v11 = nullptr;
  v13 = nullptr;
  v12 = 0;
  v14 = 0;
  if ( !(unsigned __int8)print_tinfo() )
  {
    v9 = v13;
    if ( *((_QWORD *)&v14 + 1) <= 1u )
    {
      v13 = (_BYTE *)qvector_reserve((__int64)&v13, (__int64)v13, 2, 1);
      v9 = v13;
    }
    *(_QWORD *)&v14 = 2;
    *v9 = 63;
    v13[1] = 0;
  }
  if ( !(unsigned __int8)print_tinfo() )
  {
    v10 = v11;
    if ( *((_QWORD *)&v12 + 1) <= 1u )
    {
      v11 = (_BYTE *)qvector_reserve((__int64)&v11, (__int64)v11, 2, 1);
      v10 = v11;
    }
    *(_QWORD *)&v12 = 2;
    *v10 = 63;
    v11[1] = 0;
  }
  v6 = s1;
  if ( (_QWORD)v12 )
    v6 = v11;
  v7 = s1;
  if ( (_QWORD)v14 )
    v7 = v13;
  sub_3311F0(a1, a2, 0x1Fu, v7, v6, a4, v11);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree((__int64)v13);
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree((__int64)v11);
  }
  return v15 - __readfsqword(0x28u);
}

