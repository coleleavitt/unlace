__int64 __fastcall sub_1CD00(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  __int64 i; // rax
  __int64 v7; // rsi
  __int64 v8; // [rsp+8h] [rbp-1D0h]
  __int64 tinfo_size; // [rsp+10h] [rbp-1C8h]
  __int64 v10; // [rsp+28h] [rbp-1B0h] BYREF
  __int64 v11; // [rsp+30h] [rbp-1A8h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-1A0h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-198h] BYREF
  __int16 v14; // [rsp+50h] [rbp-188h]
  __m128i v15; // [rsp+60h] [rbp-178h] BYREF
  __int64 v16; // [rsp+70h] [rbp-168h]
  __int128 v17; // [rsp+78h] [rbp-160h]
  __int64 v18; // [rsp+88h] [rbp-150h]
  __int128 v19; // [rsp+90h] [rbp-148h]
  __int128 v20; // [rsp+A0h] [rbp-138h]
  __int64 v21; // [rsp+D0h] [rbp-108h]
  int v22; // [rsp+D8h] [rbp-100h]
  __int64 v23; // [rsp+E0h] [rbp-F8h]
  char v24; // [rsp+E8h] [rbp-F0h]
  __m128i v25; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+100h] [rbp-D8h]
  __int128 v27; // [rsp+108h] [rbp-D0h]
  __int64 v28; // [rsp+118h] [rbp-C0h]
  __int128 v29; // [rsp+120h] [rbp-B8h]
  __int128 v30; // [rsp+130h] [rbp-A8h]
  __int64 v31; // [rsp+160h] [rbp-78h]
  int v32; // [rsp+168h] [rbp-70h]
  __int64 v33; // [rsp+170h] [rbp-68h]
  char v34; // [rsp+178h] [rbp-60h]
  _QWORD v35[11]; // [rsp+180h] [rbp-58h] BYREF

  v35[3] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 2080) == -1 )
  {
    return 0;
  }
  else
  {
    v10 = 0;
    LOWORD(v26) = 256;
    v25.m128i_i64[1] = (__int64)"EFI_SYSTEM_TABLE";
    v25.m128i_i64[0] = get_idati();
    if ( (unsigned __int8)create_tinfo() && (get_tinfo_property() & 0x2F) == 0xD )
    {
      v16 = 0;
      v18 = 0;
      v21 = 1;
      v22 = -1;
      v23 = 0;
      v24 = 0;
      v26 = 0;
      v28 = 0;
      v31 = 1;
      v32 = -1;
      v33 = 0;
      v34 = 0;
      v15 = 0;
      v17 = 0;
      v19 = 0;
      v20 = 0;
      v25 = 0;
      v27 = 0;
      v29 = 0;
      v30 = 0;
      if ( !(unsigned __int8)sub_1C970(a1, &v15, &v10, "ConfigurationTable") )
        goto LABEL_24;
      if ( !(unsigned __int8)sub_1C970(a1, &v25, &v10, "NumberOfTableEntries") )
        goto LABEL_24;
      v3 = *(int *)(a1 + 1176);
      v11 = 0;
      v12 = 0;
      v4 = *(int *)(qword_9AD30 + 144 * v3 + 128);
      if ( v4 != (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
                   a1,
                   *(_QWORD *)(a1 + 2080) + ((unsigned __int64)v15.m128i_i64[0] >> 3),
                   &v11,
                   v4,
                   0) )
        goto LABEL_24;
      if ( (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
             a1,
             *(_QWORD *)(a1 + 2080) + ((unsigned __int64)v25.m128i_i64[0] >> 3),
             &v12,
             8,
             0) != 8 )
        goto LABEL_24;
      v14 = 256;
      v13[1] = "EFI_CONFIGURATION_TABLE";
      v13[0] = get_idati();
      if ( !(unsigned __int8)create_tinfo() )
        goto LABEL_24;
      if ( (get_tinfo_property() & 0x2F) != 0xD )
        goto LABEL_24;
      tinfo_size = get_tinfo_size();
      if ( !v12 )
        goto LABEL_24;
      v5 = 0;
      for ( i = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
                  a1,
                  v11,
                  v35,
                  16,
                  0);
            i != 16 || v35[1] ^ 0x8B5ED9FEFE7AA2B7LL | v35[0] ^ 0x47641ADA49152E77LL;
            i = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
                  a1,
                  v7,
                  v35,
                  16,
                  0) )
      {
        v7 = v11 + tinfo_size;
        ++v5;
        v11 += tinfo_size;
        if ( v5 >= v12 )
          goto LABEL_24;
      }
      if ( v11 != -1
        && (v8 = v11, v1 = sub_1C970(a1, &v15, &v10, "VendorTable"), (_BYTE)v1)
        && (v13[0] = 0,
            v4 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
                    a1,
                    v8 + ((unsigned __int64)v15.m128i_i64[0] >> 3),
                    v13,
                    v4,
                    0)) )
      {
        *(_QWORD *)(a1 + 2088) = v13[0];
        sub_1BF10(a1, (__int64)"%a: EFI_DEBUG_IMAGE_INFO_TABLE\n", 0.0);
      }
      else
      {
LABEL_24:
        v1 = 0;
      }
      clear_tinfo_t();
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree();
      }
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree();
      }
      clear_tinfo_t();
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree();
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
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

