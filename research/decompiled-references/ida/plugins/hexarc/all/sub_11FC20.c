void __fastcall sub_11FC20(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12

  if ( *(_BYTE *)a1 != 4 || *(unsigned __int8 **)(a1 + 8) != a2 )
  {
    v3 = *(unsigned int *)a2;
    if ( (_DWORD)v3 == 4 )
    {
      if ( a2 + 32 != (unsigned __int8 *)a1 )
      {
        sub_1166E0(a1);
        sub_11D380(a1, a2 + 32);
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_327830(v3) )
      {
        if ( !under_debugger )
          sub_37B760(50278);
        BUG();
      }
      v4 = j__qalloc_or_throw();
      *(_OWORD *)(v4 + 8) = 0;
      *(_QWORD *)(v4 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v4 + 40) = 0;
      *(_QWORD *)(v4 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v4 + 56) = 0;
      *(_QWORD *)(v4 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v4 + 72) = 0;
      sub_11ECE0(v4, (__int64)a2);
      sub_1166E0(a1);
      *(_BYTE *)a1 = 4;
      *(_QWORD *)(a1 + 8) = v4;
      *(_DWORD *)(a1 + 4) = *((_DWORD *)a2 + 17);
      *(_BYTE *)(a1 + 1) = a2[65];
      if ( a2[64] != 8 )
      {
        sub_1166E0(v4 + 64);
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + 65LL) = *(_BYTE *)(a1 + 1);
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 68LL) = *(_DWORD *)(a1 + 4);
      }
    }
    if ( (a2[65] & 0x20) != 0 )
      *(_BYTE *)(a1 + 1) |= 0x20u;
  }
}

