__int64 __fastcall sub_5BED0(__int64 a1)
{
  size_t v2; // rax
  size_t v3; // r12
  __int64 v4; // r12
  int v5; // ebp
  void *v7; // rdi
  size_t v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-2098h] BYREF
  __int128 v15; // [rsp+8h] [rbp-2090h]
  __int64 v16; // [rsp+20h] [rbp-2078h] BYREF
  int v17; // [rsp+28h] [rbp-2070h] BYREF
  void *v18; // [rsp+30h] [rbp-2068h]
  int *v19; // [rsp+38h] [rbp-2060h]
  int *v20; // [rsp+40h] [rbp-2058h]
  __int64 v21; // [rsp+48h] [rbp-2050h]
  char v22[4096]; // [rsp+50h] [rbp-2048h] BYREF
  char s[4104]; // [rsp+1050h] [rbp-1048h] BYREF
  unsigned __int64 v24; // [rsp+2058h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  sub_58E50(a1, 2);
  *(_BYTE *)(a1 + 328) = 0;
  if ( (unsigned int)sub_58CE0(a1, v22, s, 4096) )
  {
    sub_EBD0((__int64)"Bochs startup script file (%s) not found!\n", s);
    return 0;
  }
  v2 = strlen(s);
  v3 = v2;
  if ( v2 )
  {
    v7 = *(void **)(a1 + 304);
    v8 = v2 + 1;
    if ( *(_QWORD *)(a1 + 320) < v2 + 1 )
    {
      v13 = qvector_reserve();
      *(_QWORD *)(a1 + 304) = v13;
      v7 = (void *)v13;
    }
    *(_QWORD *)(a1 + 312) = v8;
    memmove(v7, s, v3);
    *(_BYTE *)(*(_QWORD *)(a1 + 304) + v3) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 312) = 0;
  }
  v4 = qfopen();
  if ( !v4 )
    return 0;
  if ( (unsigned __int8)sub_591F0(a1, (__int64)s) )
  {
    v5 = sub_5AC60(a1, v4, 2, (__int64)s);
    qfclose();
    *(_BYTE *)(a1 + 328) = v5 == 0;
    if ( !v5 )
    {
      v14 = 0;
      v15 = 0;
      if ( (unsigned __int8)qgetenv() )
        sub_5A2B0((_QWORD *)(a1 + 56), (__int64)&v14, (__int64)";", "/", "\\");
      if ( (unsigned __int8)qgetenv() )
      {
        v17 = 0;
        v18 = nullptr;
        v19 = &v17;
        v20 = &v17;
        v21 = 0;
        if ( (int)sub_5A2B0(&v16, (__int64)&v14, (__int64)"++", "/", "\\") > 0 && v19 != &v17 )
        {
          do
          {
            v10 = *(_QWORD *)(a1 + 40);
            v11 = *(_QWORD *)(a1 + 32);
            if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v10 + 1) )
            {
              v12 = qvector_reserve();
              *(_QWORD *)(a1 + 32) = v12;
              v10 = *(_QWORD *)(a1 + 40);
              v11 = v12;
            }
            v9 = v11 + 24 * v10;
            *(_QWORD *)v9 = 0;
            *(_OWORD *)(v9 + 8) = 0;
            ++*(_QWORD *)(a1 + 40);
            sub_F490((__int64 *)v9);
          }
          while ( (int *)std::_Rb_tree_increment() != &v17 );
        }
        sub_589D0(v18);
      }
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree();
      }
      return 0;
    }
  }
  else
  {
    qfclose();
  }
  return 36;
}

