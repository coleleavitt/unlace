char __fastcall sub_23FC0(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // rdi
  __int64 v8; // rdi
  unsigned __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdi
  __int64 (__fastcall *v14)(__int64, int); // rax
  int v15; // eax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, int, int); // rax
  int v19; // eax
  __int128 v20; // [rsp+0h] [rbp-198h] BYREF
  __int64 v21; // [rsp+10h] [rbp-188h]
  __int64 v22; // [rsp+18h] [rbp-180h]
  __int64 v23; // [rsp+20h] [rbp-178h]
  char v24; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int64 v25; // [rsp+168h] [rbp-30h] BYREF

  v4 = a3;
  v6 = a1[2];
  v25 = __readfsqword(0x28u);
  if ( (unsigned int)fc_calc_block_type(v6, a3) - 2 > 1 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    if ( v8 && get_spd(v8, a4) )
      return 0;
    v21 = -1;
    v9 = (unsigned __int64 *)&v24;
    v22 = 0;
    v23 = 0;
    v20 = -1;
    do
    {
      *(_WORD *)v9 = 0;
      v9 += 5;
      *((_WORD *)v9 - 19) = 0;
      *((_WORD *)v9 - 18) = 0;
      *((_DWORD *)v9 - 2) = 0;
      *((_WORD *)v9 - 17) = 0;
      *((_OWORD *)v9 - 2) = 0;
      *(v9 - 2) = 0;
    }
    while ( v9 != &v25 );
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int128 *, double))(*a1 + 24LL))(
            *a1 + 24LL,
            a4,
            &v20,
            0.0) )
      return 0;
    if ( (_WORD)v22 != 159 )
    {
      v13 = (_QWORD *)a1[2];
      v14 = *(__int64 (__fastcall **)(__int64, int))(*v13 + 96LL);
      if ( v14 == sub_23F40 )
        v15 = *(_DWORD *)(v13[9] + (v4 << 6) + 24);
      else
        v15 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64 (__fastcall *)(__int64, int), __int64, __int64, __int64, _QWORD, _QWORD, __int64))v14)(
                v13,
                (unsigned int)v4,
                sub_23F40,
                v10,
                v11,
                v12,
                v20,
                *((_QWORD *)&v20 + 1),
                v21);
      if ( v15 == 1 )
      {
        v17 = a1[2];
        v18 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)v17 + 112LL);
        if ( v18 == sub_23F60 )
        {
          v19 = **(_DWORD **)(*(_QWORD *)(v17 + 72) + (v4 << 6) + 16);
        }
        else
        {
          v19 = v18(v17, v4, 0);
          v17 = a1[2];
        }
        if ( *(_DWORD *)(v17 + 96) <= v19 )
          return (unsigned __int16)(v22 - 86) <= 2u;
      }
      else if ( !v15 )
      {
        return (unsigned __int16)(v22 - 86) <= 2u;
      }
      return 0;
    }
  }
  return 1;
}

