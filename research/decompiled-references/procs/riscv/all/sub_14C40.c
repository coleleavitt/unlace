bool __fastcall sub_14C40(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 module_data; // rax
  __int64 v13; // r12
  int v14; // eax
  __int64 *v15; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v16; // [rsp+8h] [rbp-1B0h]
  __int64 v17; // [rsp+10h] [rbp-1A8h]
  int v18; // [rsp+18h] [rbp-1A0h]
  __int128 v19; // [rsp+20h] [rbp-198h] BYREF
  __int64 v20; // [rsp+30h] [rbp-188h]
  __int64 v21; // [rsp+38h] [rbp-180h]
  __int64 v22; // [rsp+40h] [rbp-178h]
  char v23; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int64 v24; // [rsp+188h] [rbp-30h] BYREF

  v4 = a1[1];
  v24 = __readfsqword(0x28u);
  v15 = a1;
  v17 = 0;
  LOWORD(v18) = 0;
  v20 = -1;
  v21 = 0;
  v22 = 0;
  v16 = v4;
  v6 = (unsigned __int64 *)&v23;
  v19 = -1;
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
  while ( &v24 != v6 );
  if ( (unsigned __int8)sub_14950((__int64)&v19, a3)
    && (module_data = get_module_data(
                        (unsigned int)dword_35604,
                        a3,
                        v7,
                        v8,
                        v9,
                        v10,
                        0.0,
                        v15,
                        v16,
                        v17,
                        v18,
                        v19,
                        *((_QWORD *)&v19 + 1),
                        v20,
                        v21,
                        v22),
        *(_QWORD *)(module_data + 504) = &v15,
        v13 = module_data,
        v14 = sub_13E70(module_data, (__int64)&v19),
        *(_QWORD *)(v13 + 504) = 0,
        v14) )
  {
    sub_14A30(&v15, (__int64)&v19);
    if ( a2 )
      *a2 = WORD1(v21);
    return a1[1] != 0;
  }
  else
  {
    if ( a2 )
      *a2 = 0;
    return 0;
  }
}
