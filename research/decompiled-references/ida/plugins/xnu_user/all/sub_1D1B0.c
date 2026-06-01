__int64 __fastcall sub_1D1B0(int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v6; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v7; // [rsp+8h] [rbp-D0h] BYREF
  __m128i v8; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+20h] [rbp-B8h]
  __int128 v10; // [rsp+28h] [rbp-B0h]
  __int64 v11; // [rsp+38h] [rbp-A0h]
  __int128 v12; // [rsp+40h] [rbp-98h]
  __int128 v13; // [rsp+50h] [rbp-88h]
  __int64 v14; // [rsp+80h] [rbp-58h]
  int v15; // [rsp+88h] [rbp-50h]
  __int64 v16; // [rsp+90h] [rbp-48h]
  char v17; // [rsp+98h] [rbp-40h]
  unsigned __int64 v18; // [rsp+A8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  LOWORD(v9) = 256;
  v6 = 0;
  v8.m128i_i64[1] = (__int64)"EFI_LOADED_IMAGE";
  v8.m128i_i64[0] = get_idati();
  if ( (unsigned __int8)create_tinfo() && (get_tinfo_property() & 0x2F) == 0xD )
  {
    v9 = 0;
    v11 = 0;
    v14 = 1;
    v15 = -1;
    v16 = 0;
    v17 = 0;
    v8 = 0;
    v10 = 0;
    v12 = 0;
    v13 = 0;
    if ( (unsigned __int8)sub_1C970((__int64)a1, &v8, &v6, "ImageBase")
      && (v2 = a1[294],
          v7 = 0,
          v3 = *(int *)(qword_9AD30 + 144 * v2 + 128),
          v3 == (*(__int64 (__fastcall **)(int *, unsigned __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
                  a1,
                  a2 + ((unsigned __int64)v8.m128i_i64[0] >> 3),
                  &v7,
                  v3,
                  0)) )
    {
      v4 = v7;
    }
    else
    {
      v4 = -1;
    }
    clear_tinfo_t();
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree();
    }
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
  else
  {
    v4 = -1;
  }
  clear_tinfo_t();
  return v4;
}

