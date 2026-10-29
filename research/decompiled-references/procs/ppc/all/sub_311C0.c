bool __fastcall sub_311C0(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 module_data; // rax
  __int64 *v13; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-1B0h]
  __int64 v15; // [rsp+10h] [rbp-1A8h]
  int v16; // [rsp+18h] [rbp-1A0h]
  __int128 v17; // [rsp+20h] [rbp-198h] BYREF
  __int64 v18; // [rsp+30h] [rbp-188h]
  __int64 v19; // [rsp+38h] [rbp-180h]
  __int64 v20; // [rsp+40h] [rbp-178h]
  char v21; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int64 v22; // [rsp+188h] [rbp-30h] BYREF

  v4 = a1[1];
  v22 = __readfsqword(0x28u);
  v13 = a1;
  v15 = 0;
  LOWORD(v16) = 0;
  v18 = -1;
  v19 = 0;
  v20 = 0;
  v14 = v4;
  v6 = (unsigned __int64 *)&v21;
  v17 = -1;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( &v22 != v6 );
  if ( (unsigned __int8)sub_2E460((__int64)&v17, a3)
    && (module_data = get_module_data(
                        (unsigned int)dword_959F0,
                        a3,
                        v7,
                        v8,
                        v9,
                        v10,
                        0.0,
                        v13,
                        v14,
                        v15,
                        v16,
                        v17,
                        *((_QWORD *)&v17 + 1),
                        v18,
                        v19,
                        v20),
        (unsigned int)sub_31160(module_data, (__int64)&v17, (__int64)&v13)) )
  {
    sub_2E540(&v13, (__int64)&v17);
    if ( a2 )
      *a2 = WORD1(v19);
    return a1[1] != 0;
  }
  else
  {
    if ( a2 )
      *a2 = 0;
    return 0;
  }
}
