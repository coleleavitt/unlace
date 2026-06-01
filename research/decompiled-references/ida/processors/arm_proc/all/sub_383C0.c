bool __fastcall sub_383C0(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rax
  unsigned __int64 *v4; // rax
  __int64 module_data; // rax
  __int64 *v7[3]; // [rsp+0h] [rbp-1B8h] BYREF
  __int16 v8; // [rsp+18h] [rbp-1A0h]
  __int128 v9; // [rsp+20h] [rbp-198h] BYREF
  __int64 v10; // [rsp+30h] [rbp-188h]
  __int64 v11; // [rsp+38h] [rbp-180h]
  __int64 v12; // [rsp+40h] [rbp-178h]
  char v13; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+188h] [rbp-30h] BYREF

  v3 = (__int64 *)a1[1];
  v14 = __readfsqword(0x28u);
  v7[0] = a1;
  v7[2] = nullptr;
  v8 = 0;
  v10 = -1;
  v11 = 0;
  v12 = 0;
  v7[1] = v3;
  v4 = (unsigned __int64 *)&v13;
  v9 = -1;
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
  while ( &v14 != v4 );
  if ( (unsigned __int8)sub_38020((__int64)&v9, a3)
    && (module_data = get_module_data(), (int)sub_20E30(module_data, (__int64)&v9, v7) > 0) )
  {
    sub_381B0((__int64)v7, (__int64)&v9);
    if ( a2 )
      *a2 = WORD1(v11);
    return a1[1] != 0;
  }
  else
  {
    if ( a2 )
      *a2 = 0;
    return 0;
  }
}

