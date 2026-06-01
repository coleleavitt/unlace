unsigned __int64 sub_331D0()
{
  _WORD *v0; // r13
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // al
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 *v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  __int64 v22; // [rsp+0h] [rbp-78h]
  __int64 v23; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+10h] [rbp-68h]
  int v25; // [rsp+14h] [rbp-64h]
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v0 = &unk_8B0D7;
  v28 = __readfsqword(0x28u);
  getinf(19);
  v5 = getinf_flag(3, 32, v1, v2, v3, v4, v22, v23, v24);
  v25 = 2;
  if ( v5 )
  {
    v25 = 0;
    v0 = &unk_8B0D5;
  }
  while ( 1 )
  {
    getinf(20);
    v27 = 0;
    v26 = 0;
    v26 = qvector_reserve((__int64)&v26, 0, 1, 80);
    v6 = v26 + 80 * v27;
    *(_OWORD *)(v6 + 8) = 0;
    *(_QWORD *)v6 = 0;
    *(_QWORD *)&v27 = v27 + 1;
    v7 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 24) = 0;
    *(_QWORD *)(v6 + 48) = 0;
    *(_DWORD *)(v6 + 72) = -1;
    *(_OWORD *)(v6 + 32) = 0;
    v8 = v7 + 2;
    *(_OWORD *)(v6 + 56) = 0;
    if ( v7 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v9 = qvector_reserve(v6, *(_QWORD *)v6, v7 + 2, 1);
      v10 = *(_QWORD *)(v6 + 8);
      *(_QWORD *)v6 = v9;
      memset((void *)(v9 + v10), 0, v7 + 2 - v10);
    }
    *(_QWORD *)(v6 + 8) = v8;
    *(_WORD *)(*(_QWORD *)v6 + v7) = *v0;
    v11 = bin_search();
    v12 = v26;
    v13 = v11;
    if ( v26 )
    {
      v14 = v27;
      if ( (_QWORD)v27 )
      {
        v15 = 0;
        do
        {
          v16 = (__int64 *)(v12 + 80 * v15);
          v17 = v16[6];
          if ( v17 )
          {
            v16[7] = 0;
            qfree(v17);
          }
          v18 = v16[3];
          if ( v18 )
          {
            v16[4] = 0;
            qfree(v18);
          }
          v19 = *v16;
          if ( *v16 )
          {
            v16[1] = 0;
            qfree(v19);
          }
          ++v15;
          v12 = v26;
        }
        while ( v14 != v15 );
      }
      *(_QWORD *)&v27 = 0;
      qfree(v12);
    }
    if ( v13 >= getinf(20) )
      break;
    v20 = v13 & 3;
    if ( v20 == v25 && (get_dword(v13 - v20 + 4) & 0xFFFFF000) == 0xE24DD000 )
    {
      auto_mark_range();
      split_sreg_range();
    }
  }
  return v28 - __readfsqword(0x28u);
}
