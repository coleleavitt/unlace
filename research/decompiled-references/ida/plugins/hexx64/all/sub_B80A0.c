__int64 __fastcall sub_B80A0(const void *a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  int v7; // ebx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rbp
  _QWORD *v11; // r15
  __int64 v12; // rax
  unsigned int v13; // r13d
  __int64 v14; // rdi
  __int64 v15; // r12
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v21; // [rsp+8h] [rbp-58h] BYREF
  __int128 v22; // [rsp+10h] [rbp-50h]
  unsigned __int64 v23; // [rsp+20h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v22 = 0;
  v21 = 0;
  sub_3349B0((__int64)&v21, a1, a2, nullptr, 3);
  v7 = 0;
  v8 = 0;
  if ( !(_QWORD)v22 )
  {
    v14 = v21;
    v13 = 0;
    if ( !v21 )
      return v13;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v9 = (_QWORD *)(v21 + (v8 << 6));
    v10 = *v9;
    v11 = v9;
    if ( *v9 )
    {
      if ( !under_debugger )
        sub_383060(0xC70Cu, 0.0);
      BUG();
    }
    if ( (get_tinfo_property() & 0xF) != 0xB && (a3 && (unsigned __int8)compare_tinfo() || a4 && a4 == get_tinfo_size()) )
      break;
    v8 = ++v7;
    if ( v7 >= (unsigned __int64)v22 )
    {
      v13 = 0;
      goto LABEL_14;
    }
  }
  if ( a5 )
  {
    v12 = *a5;
    *a5 = v11[7];
    v11[7] = v12;
  }
  v13 = 1;
LABEL_14:
  v14 = v21;
  if ( v21 )
  {
    v15 = v22;
    if ( (_QWORD)v22 )
    {
      do
      {
        v16 = (_QWORD *)(v14 + (v10 << 6));
        clear_tinfo_t();
        v17 = v16[4];
        if ( v17 )
        {
          v16[5] = 0;
          qfree(v17);
        }
        v18 = v16[1];
        if ( v18 )
        {
          v16[2] = 0;
          qfree(v18);
        }
        ++v10;
        v14 = v21;
      }
      while ( v15 != v10 );
    }
LABEL_21:
    *(_QWORD *)&v22 = 0;
    qfree(v14);
  }
  return v13;
}

