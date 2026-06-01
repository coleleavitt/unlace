bool __fastcall sub_3D7C0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 *v7; // rax
  __int128 v8; // [rsp+0h] [rbp-188h] BYREF
  __int64 v9; // [rsp+10h] [rbp-178h]
  __int64 v10; // [rsp+18h] [rbp-170h]
  __int64 v11; // [rsp+20h] [rbp-168h]
  char v12; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v13; // [rsp+168h] [rbp-20h] BYREF

  v2 = *a1;
  v13 = __readfsqword(0x28u);
  v3 = (**(__int64 (__fastcall ***)(__int64, __int64))(v2 + 8))(v2 + 8, *a2);
  if ( (v3 & 0x400) != 0 )
  {
    if ( (~BYTE1(v3) & 6) != 0 )
      return 0;
    v4 = *a2;
  }
  else
  {
    v4 = (**(__int64 (__fastcall ***)(__int64, __int64, __int64))(*a1 + 16))(*a1 + 16, *a2, *a2 - 15);
    v5 = (**(__int64 (__fastcall ***)(__int64, __int64))(*a1 + 8))(*a1 + 8, v4);
    if ( *a2 - 1 != v4 || (~BYTE1(v5) & 6) != 0 )
      return 0;
    *a2 = v4;
  }
  v9 = -1;
  v7 = (unsigned __int64 *)&v12;
  v10 = 0;
  v11 = 0;
  v8 = -1;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 5;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *(v7 - 2) = 0;
  }
  while ( &v13 != v7 );
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int128 *, double))(*a1 + 24))(*a1 + 24, v4, &v8, 0.0) )
    return 0;
  return (v10 & 0xFFFD) == 16;
}

