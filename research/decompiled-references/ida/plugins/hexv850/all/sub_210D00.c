__int64 __fastcall sub_210D00(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v3; // r12d
  unsigned int v5; // esi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  bool v10; // cc
  _QWORD *v12; // rax
  _QWORD *v13; // rbx

  if ( a2[1] )
  {
    v2 = 0;
    v3 = 0;
    v5 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = 96 * v2;
        v8 = v7 + *a2;
        v9 = *(_DWORD *)(v8 + 88);
        if ( (v9 & 0x20) != 0 )
          break;
        v6 = a2[1];
        ++v3;
LABEL_4:
        v2 = v3;
        if ( v3 >= v6 )
          return v5;
      }
      v10 = *(_QWORD *)(v8 + 32) <= 1u;
      *(_DWORD *)(v8 + 88) = v9 & 0xFFFFFFDF;
      if ( v10 && !*(_BYTE *)(v8 + 48) && *(_QWORD *)(v8 + 64) <= 1u && (v9 & 0xE) == 0 )
      {
        v12 = (_QWORD *)(*a2 + v7);
        v13 = v12;
        if ( v12[7] )
        {
          v12[8] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v13[3] )
        {
          v13[4] = 0;
          qfree();
        }
        cleanup_argloc();
        memmove(v13, v13 + 12, *a2 + 96LL * a2[1] - (_QWORD)v13 - 96);
        v5 = 1;
        v6 = a2[1] - 1LL;
        a2[1] = v6;
        goto LABEL_4;
      }
      ++v3;
      v5 = 1;
      v2 = v3;
      if ( (unsigned __int64)v3 >= a2[1] )
        return v5;
    }
  }
  return 0;
}

