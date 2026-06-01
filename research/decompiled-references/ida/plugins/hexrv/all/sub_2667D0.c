__int64 __fastcall sub_2667D0(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  __int64 tinfo_property4; // [rsp+8h] [rbp-D0h]
  __int64 v7; // [rsp+8h] [rbp-D0h]
  __int64 v8; // [rsp+18h] [rbp-C0h] BYREF
  __m128i v9; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+30h] [rbp-A8h]
  __int128 v11; // [rsp+38h] [rbp-A0h]
  __int64 v12; // [rsp+48h] [rbp-90h]
  __int128 v13; // [rsp+50h] [rbp-88h]
  __int128 v14; // [rsp+60h] [rbp-78h]
  __int64 v15; // [rsp+90h] [rbp-48h]
  int v16; // [rsp+98h] [rbp-40h]
  __int64 v17; // [rsp+A0h] [rbp-38h]
  char v18; // [rsp+A8h] [rbp-30h]
  unsigned __int64 v19; // [rsp+B8h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 64 )
    return *(_QWORD *)(a1 + 24);
  if ( v1 != 65 )
    return -1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 432LL) + 104LL * *(int *)(a1 + 32);
  if ( *(_DWORD *)v3 != 1 )
    return -1;
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 < 0 )
    return -1;
  v5 = *(_QWORD **)(a1 + 24);
  v9 = 0;
  v10 = 0;
  v12 = 0;
  v15 = 1;
  v16 = -1;
  v17 = 0;
  v18 = 0;
  v8 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  if ( sub_1CBBD0(v5, &v9, v4, nullptr, &v8) == -1 )
  {
    clear_tinfo_t();
    clear_tinfo_t();
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
    return -1;
  }
  tinfo_property4 = get_tinfo_property4();
  clear_tinfo_t();
  clear_tinfo_t();
  result = tinfo_property4;
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
    result = tinfo_property4;
  }
  if ( v10 )
  {
    v7 = result;
    *(_QWORD *)&v11 = 0;
    qfree();
    return v7;
  }
  return result;
}

