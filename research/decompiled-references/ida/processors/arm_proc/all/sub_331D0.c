unsigned __int64 sub_331D0()
{
  _WORD *v0; // r13
  unsigned __int64 v1; // r15
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 i; // r15
  _QWORD *v8; // r12
  int v10; // [rsp+14h] [rbp-64h]
  __int64 v11; // [rsp+20h] [rbp-58h]
  unsigned __int64 v12; // [rsp+38h] [rbp-40h]

  v0 = &unk_8B0D7;
  v12 = __readfsqword(0x28u);
  getinf();
  v10 = 2;
  if ( (unsigned __int8)getinf_flag() )
  {
    v10 = 0;
    v0 = &unk_8B0D5;
  }
  while ( 1 )
  {
    getinf();
    v11 = qvector_reserve();
    *(_OWORD *)(v11 + 8) = 0;
    *(_QWORD *)v11 = 0;
    v1 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 24) = 0;
    *(_QWORD *)(v11 + 48) = 0;
    *(_DWORD *)(v11 + 72) = -1;
    *(_OWORD *)(v11 + 32) = 0;
    v2 = v1 + 2;
    *(_OWORD *)(v11 + 56) = 0;
    if ( v1 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v2 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v3 = qvector_reserve();
      v4 = *(_QWORD *)(v11 + 8);
      *(_QWORD *)v11 = v3;
      memset((void *)(v3 + v4), 0, v1 + 2 - v4);
    }
    *(_QWORD *)(v11 + 8) = v2;
    *(_WORD *)(*(_QWORD *)v11 + v1) = *v0;
    v5 = v11;
    v6 = bin_search();
    if ( v11 )
    {
      for ( i = 0; i != 1; ++i )
      {
        v8 = (_QWORD *)(v5 + 80 * i);
        if ( v8[6] )
        {
          v8[7] = 0;
          qfree();
        }
        if ( v8[3] )
        {
          v8[4] = 0;
          qfree();
        }
        if ( *v8 )
        {
          v8[1] = 0;
          qfree();
        }
        v5 = v11;
      }
      qfree();
    }
    if ( v6 >= getinf() )
      break;
    if ( (v6 & 3) == v10 && (get_dword() & 0xFFFFF000) == 0xE24DD000 )
    {
      auto_mark_range();
      split_sreg_range();
    }
  }
  return v12 - __readfsqword(0x28u);
}

