void __fastcall sub_1262E0(__int64 a1, unsigned __int8 *a2, double a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r12

  if ( *(_BYTE *)a1 != 4 || *(unsigned __int8 **)(a1 + 8) != a2 )
  {
    v4 = *(unsigned int *)a2;
    if ( (_DWORD)v4 == 4 )
    {
      if ( a2 + 32 != (unsigned __int8 *)a1 )
      {
        sub_11CDA0(a1);
        sub_123A40(a1, a2 + 32, v5, v6);
      }
    }
    else
    {
      if ( !sub_32ED70(v4) )
      {
        if ( !under_debugger )
          sub_383060(0xC466u, a3);
        BUG();
      }
      v9 = j__qalloc_or_throw(80, (__int64)a2, v7, v8);
      *(_OWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v9 + 40) = 0;
      *(_QWORD *)(v9 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v9 + 56) = 0;
      *(_QWORD *)(v9 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v9 + 72) = 0;
      sub_1253A0(v9, (__int64)a2);
      sub_11CDA0(a1);
      *(_BYTE *)a1 = 4;
      *(_QWORD *)(a1 + 8) = v9;
      *(_DWORD *)(a1 + 4) = *((_DWORD *)a2 + 17);
      *(_BYTE *)(a1 + 1) = a2[65];
      if ( a2[64] != 8 )
      {
        sub_11CDA0(v9 + 64);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 65LL) = *(_BYTE *)(a1 + 1);
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 68LL) = *(_DWORD *)(a1 + 4);
      }
    }
    if ( (a2[65] & 0x20) != 0 )
      *(_BYTE *)(a1 + 1) |= 0x20u;
  }
}

