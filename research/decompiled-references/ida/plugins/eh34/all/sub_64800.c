__int64 __fastcall sub_64800(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 *v4; // rax
  __int128 v5; // [rsp+0h] [rbp-188h] BYREF
  __int64 v6; // [rsp+10h] [rbp-178h]
  __int64 v7; // [rsp+18h] [rbp-170h]
  __int64 v8; // [rsp+20h] [rbp-168h]
  char v9; // [rsp+28h] [rbp-160h] BYREF
  char v10; // [rsp+29h] [rbp-15Fh]
  __int64 v11; // [rsp+38h] [rbp-150h]
  unsigned __int64 v12; // [rsp+168h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v12 = __readfsqword(0x28u);
  if ( (~((**(unsigned __int16 (__fastcall ***)(__int64))(v2 + 8))(v2 + 8) >> 8) & 6) != 0 )
    return -1;
  v6 = -1;
  v4 = (unsigned __int64 *)&v9;
  v7 = 0;
  v8 = 0;
  v5 = -1;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( &v12 != v4 );
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int128 *, double))(*(_QWORD *)(a1 + 56) + 24LL))(
          *(_QWORD *)(a1 + 56) + 24LL,
          a2,
          &v5,
          0.0) )
    return -1;
  if ( (_WORD)v7 != 86 )
  {
    if ( (_WORD)v7 == 88 && v10 == 2 )
      return v11;
    return -1;
  }
  if ( v10 != 7 )
    return -1;
  return v11;
}

