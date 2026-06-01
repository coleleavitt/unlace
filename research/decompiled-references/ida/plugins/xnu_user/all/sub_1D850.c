__int64 __fastcall sub_1D850(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v6; // [rsp+8h] [rbp-D0h] BYREF
  __m128i v7; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+20h] [rbp-B8h]
  __int128 v9; // [rsp+28h] [rbp-B0h]
  __int64 v10; // [rsp+38h] [rbp-A0h]
  __int128 v11; // [rsp+40h] [rbp-98h]
  __int128 v12; // [rsp+50h] [rbp-88h]
  __int64 v13; // [rsp+80h] [rbp-58h]
  int v14; // [rsp+88h] [rbp-50h]
  __int64 v15; // [rsp+90h] [rbp-48h]
  char v16; // [rsp+98h] [rbp-40h]
  unsigned __int64 v17; // [rsp+A8h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 2080) == -1 )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    LOWORD(v8) = 256;
    v7.m128i_i64[1] = (__int64)"EFI_SYSTEM_TABLE";
    v7.m128i_i64[0] = get_idati();
    if ( (unsigned __int8)create_tinfo() && (get_tinfo_property() & 0x2F) == 0xD )
    {
      v8 = 0;
      v10 = 0;
      v13 = 1;
      v14 = -1;
      v15 = 0;
      v16 = 0;
      v7 = 0;
      v9 = 0;
      v11 = 0;
      v12 = 0;
      v1 = sub_1C970(a1, &v7, &v5, "RuntimeServices");
      if ( (_BYTE)v1
        && (v3 = *(int *)(a1 + 1176),
            v6 = 0,
            v4 = *(int *)(qword_9AD30 + 144 * v3 + 128),
            v4 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
                    a1,
                    *(_QWORD *)(a1 + 2080) + ((unsigned __int64)v7.m128i_i64[0] >> 3),
                    &v6,
                    v4,
                    0)) )
      {
        *(_QWORD *)(a1 + 2096) = v6;
        sub_1BF10(a1, (__int64)"%a: EFI_RUNTIME_SERVICES\n", 0.0);
      }
      else
      {
        v1 = 0;
      }
      clear_tinfo_t();
      if ( v10 )
      {
        *(_QWORD *)&v11 = 0;
        qfree();
      }
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree();
      }
    }
    else
    {
      v1 = 0;
    }
    clear_tinfo_t();
  }
  return v1;
}

