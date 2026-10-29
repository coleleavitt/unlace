__int64 __fastcall sub_33970(_QWORD *a1)
{
  __int64 tinfo_size; // rax
  __int64 v3; // r12
  _QWORD *v4; // rbp
  _DWORD *v5; // rsi
  _QWORD *v6; // rdi
  unsigned int v7; // r13d
  _QWORD *v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-70h] BYREF
  _QWORD *v18; // [rsp+10h] [rbp-68h] BYREF
  __int128 v19; // [rsp+18h] [rbp-60h]
  __int128 v20; // [rsp+28h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  int v22; // [rsp+40h] [rbp-38h]
  unsigned __int64 v23; // [rsp+48h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, *a1, 0);
  v18 = nullptr;
  v3 = tinfo_size;
  v21 = 0;
  v22 = 1;
  v19 = 0;
  v20 = 0;
  sub_33330(&v18, 1u);
  v4 = v18;
  v5 = (_DWORD *)v18[2];
  if ( v18[4] <= 4u )
  {
    v16 = qvector_reserve(v18 + 2, v5, 5, 1);
    v4[2] = v16;
    v5 = (_DWORD *)v16;
  }
  v4[3] = 5;
  *v5 = 2036625250;
  *(_BYTE *)(v4[2] + 4LL) = 0;
  *v18 = 0;
  v6 = v18;
  v18[1] = 8 * v3;
  copy_tinfo_t(v6 + 8, a1);
  *(_QWORD *)&v20 = v3;
  v17 = 0;
  v7 = create_tinfo(&v17, 13, 13, &v18);
  if ( (_BYTE)v7 )
  {
    set_tinfo_property(&v17, 2, 4);
    v15 = v17;
    v17 = *a1;
    *a1 = v15;
  }
  clear_tinfo_t(&v17);
  v8 = v18;
  if ( v18 )
  {
    v9 = v19;
    if ( (_QWORD)v19 )
    {
      v10 = 0;
      do
      {
        v11 = &v8[18 * v10];
        clear_tinfo_t(v11 + 8);
        v12 = v11[5];
        if ( v12 )
        {
          v11[6] = 0;
          qfree(v12);
        }
        v13 = v11[2];
        if ( v13 )
        {
          v11[3] = 0;
          qfree(v13);
        }
        ++v10;
        v8 = v18;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v19 = 0;
    qfree(v8);
  }
  return v7;
}
