__int64 __fastcall sub_293BB0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r15d
  __int64 v6; // rbp
  char v8; // r13
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // [rsp+Ch] [rbp-7Ch]
  __int64 v15; // [rsp+10h] [rbp-78h]
  __int64 v16; // [rsp+10h] [rbp-78h]
  __int64 v17; // [rsp+10h] [rbp-78h]
  __int64 v18; // [rsp+18h] [rbp-70h]
  __int64 v19; // [rsp+28h] [rbp-60h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) != 61 )
    return 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 51 )
    return 0;
  v6 = *(_QWORD *)(v3 + 24);
  if ( *(_DWORD *)(v6 + 8) != 48 )
    return 0;
  tinfo_property = get_tinfo_property();
  v8 = get_tinfo_property();
  clear_tinfo_t();
  if ( v8 != 33 )
  {
    if ( v8 == 32 )
    {
      v14 = 8;
      goto LABEL_9;
    }
    return 0;
  }
  v14 = 4;
LABEL_9:
  get_tinfo_property();
  if ( (get_tinfo_property() & 0xF) == 9
    && v14 == get_tinfo_size()
    && (v15 = *(_QWORD *)(a2 + 32), v14 == get_tinfo_size()) )
  {
    tinfo_property = 0xFFFFFFFF00000000LL;
    v9 = *(_QWORD *)(a1 + 72);
    v21 = 0;
    v10 = sub_11D360(
            (__int64)&tinfo_property,
            *(_QWORD *)(v9 + 112),
            *(_BYTE **)(v15 + 24),
            -(__int64)v14,
            *(double *)a3.m128_u64);
    v11 = v15;
    v4 = v10;
    if ( (_BYTE)v10 )
    {
      v12 = *(_QWORD *)(v15 + 24);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 16);
        if ( v13 )
        {
          v18 = v15;
          *(_QWORD *)(v12 + 24) = 0;
          v16 = v12;
          qfree(v13);
          v11 = v18;
          v12 = v16;
        }
        v17 = v11;
        j__qfree(v12);
        v11 = v17;
      }
      *(_DWORD *)(v11 + 8) = 62;
      *(_QWORD *)(v11 + 24) = v21;
      sub_32C150(&v19, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v14);
      copy_tinfo_t();
      clear_tinfo_t();
      LOBYTE(tinfo_property) = 0;
      sub_255850((__int64 *)v6, *(_QWORD *)(v6 + 24), *(double *)a3.m128_u64);
      sub_2441C0(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, *(double *)a3.m128_u64);
      *(_DWORD *)(a2 + 56) |= 4u;
      copy_tinfo_t();
      if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
        *(_DWORD *)(a1 + 8) |= 8u;
    }
    sub_11CDA0((__int64)&tinfo_property);
  }
  else
  {
    v4 = 0;
  }
  clear_tinfo_t();
  return v4;
}

