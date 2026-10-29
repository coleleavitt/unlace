__int64 __fastcall sub_1267B0(__int64 a1, __int64 a2, double a3)
{
  unsigned __int16 **v4; // rax
  unsigned __int16 *v5; // rdx
  unsigned int v6; // ecx
  unsigned __int16 *v8; // rbp
  __int64 v9; // rdx
  _QWORD *v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rdi
  int v13[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( *(_BYTE *)a1 != 15 )
  {
    if ( !under_debugger )
      sub_383060(0xC7B9u, a3);
    BUG();
  }
  v4 = *(unsigned __int16 ***)(*(_QWORD *)(a1 + 8) + 8LL);
  v5 = v4[1];
  if ( v5 == (unsigned __int16 *)&byte_1 )
  {
    v13[0] = 0;
    copy_argloc();
    sub_126420(a1, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64)v13, *(_DWORD *)(a1 + 4), a3);
    cleanup_argloc();
    return 1;
  }
  else
  {
    v6 = 0;
    if ( v5 == &word_2 )
    {
      v8 = *v4;
      if ( !(*v4)[8] )
      {
        v9 = v8[9];
        if ( (_DWORD)v9 == *(_DWORD *)(a1 + 4) / 2 && (_DWORD)v9 == v8[20] && (_DWORD)v9 == v8[21] )
        {
          v10 = (_QWORD *)j__qalloc_or_throw(32, a2, v9, 0);
          *v10 = 0xFFFFFFFF00000000LL;
          v10[1] = 0;
          v10[2] = 0xFFFFFFFF00000000LL;
          v10[3] = 0;
          sub_126420((__int64)v10, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64)v8, v8[9], a3);
          sub_126420((__int64)(v10 + 2), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), (__int64)(v8 + 12), v8[21], a3);
          v11 = *(_QWORD *)(a1 + 8);
          if ( v11 )
          {
            clear_tinfo_t();
            v12 = *(_QWORD *)(v11 + 24);
            if ( v12 )
            {
              *(_QWORD *)(v11 + 32) = 0;
              qfree(v12);
            }
            cleanup_argloc();
            qfree(v11);
          }
          *(_BYTE *)a1 = 14;
          *(_QWORD *)(a1 + 8) = v10;
        }
      }
      return 1;
    }
  }
  return v6;
}

