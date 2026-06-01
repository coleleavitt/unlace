__int64 __fastcall sub_258C0(__int64 a1, double a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r13
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  char v13; // dl
  __int64 v14; // [rsp+8h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+10h] [rbp-B8h]
  __m128i v16; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-90h]
  unsigned __int64 v18; // [rsp+88h] [rbp-40h]

  v2 = *(unsigned __int8 *)(a1 + 2144);
  v18 = __readfsqword(0x28u);
  if ( (_BYTE)v2 )
  {
    if ( !*(_DWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120)
      && !((unsigned __int64)sub_30490(a1, *(unsigned int *)(a1 + 1364)) >> 32) )
    {
      v4 = sub_304A0(a1, *(unsigned int *)(a1 + 1364));
      v14 = 0;
      v5 = *(int *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 128);
      if ( v5 == (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
                   a1,
                   v4,
                   &v14,
                   v5,
                   0) )
      {
        v6 = v14;
        sub_1BFD0((__int64)&v16);
        v7 = v6 & 0xFFFFFFFFFFFFF000LL;
        v8 = v7 - 0x20000;
        do
        {
          if ( (unsigned __int8)sub_24E80(a1, &v16, v7) )
            break;
          v7 -= 4096LL;
        }
        while ( v7 != v8 );
        if ( v16.m128i_i64[0] != -1
          && v16.m128i_i64[1]
          && v17 > 1
          && (unsigned __int8)sub_25760((_QWORD *)a1, v16.m128i_i64) )
        {
          *(_QWORD *)(a1 + 2032) = (v7 + 0xFFFFFFF) & 0xFFFFFFFFF0000000LL;
          sub_59020(a1, &v16);
LABEL_17:
          if ( !*(_QWORD *)(a1 + 2032) )
          {
            v2 = 0;
LABEL_19:
            sub_1C760(&v16);
            return v2;
          }
        }
        else
        {
          v9 = 0x100000000LL;
          while ( !(unsigned __int8)sub_1D740((_QWORD *)a1, v9, a2) )
          {
            v9 -= 0x10000000;
            if ( !v9 )
              goto LABEL_17;
          }
          *(_QWORD *)(a1 + 2032) = v9;
        }
        setinf();
        v15 = 0;
        LOBYTE(v15) = 1;
        set_compiler();
        add_til();
        if ( (unsigned __int8)sub_1DA80(a1, *(_QWORD *)(a1 + 2080), (__int64)"EFI_SYSTEM_TABLE")
          && *(_QWORD *)(a1 + 2040) == -1 )
        {
          *(_QWORD *)(a1 + 2040) = sub_1CCB0(a1, "BootServices");
        }
        sub_1BF10(a1, (__int64)"%a: EFI_BOOT_SERVICES\n", 0.0);
        if ( (unsigned __int8)sub_1DD80((__int64 *)a1) )
          sub_1D3A0((_QWORD *)a1, *(const char **)(a1 + 2048), (int)"StartImage", 0.0);
        if ( (unsigned __int8)sub_1CD00(a1) )
          sub_20120(a1);
        if ( *(_QWORD *)(a1 + 1424) != a1 + 1408 )
        {
          v10 = std::_Rb_tree_decrement();
          v11 = *(_QWORD *)(v10 + 48) + *(_QWORD *)(v10 + 32);
          while ( v11 < *(_QWORD *)(a1 + 2032) )
          {
            v12 = (v11 + 4095) & 0xFFFFFFFFFFFFF000LL;
            v13 = sub_24E80(a1, &v16, v12);
            v11 = v12 + 4096;
            if ( v13 )
            {
              sub_59020(a1, &v16);
              v11 = v12 + v16.m128i_i64[1];
            }
          }
        }
        goto LABEL_19;
      }
    }
  }
  return 0;
}

