__int64 __fastcall sub_10700(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // ecx
  int v5; // r13d
  __int64 flags; // r12
  int v7; // r15d
  __int64 v8; // r14
  int v10; // r14d
  char v11; // [rsp+11h] [rbp-1B7h]
  char v12; // [rsp+12h] [rbp-1B6h]
  char v13; // [rsp+13h] [rbp-1B5h]
  _BYTE v14[360]; // [rsp+20h] [rbp-1A8h] BYREF
  unsigned __int64 v15; // [rsp+188h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( (unsigned __int8)segtype() != 1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = a2[12];
    v4 = *(_DWORD *)(v2 + 104);
    if ( v3 < v4 || v3 >= *(_DWORD *)(v2 + 108) )
    {
      v5 = 0;
      is_forced_operand();
      is_forced_operand();
      is_forced_operand();
      *(_BYTE *)(a1 + 604) = 1;
      flags = get_flags_ex();
    }
    else
    {
      v10 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v4) + 8);
      v11 = is_forced_operand();
      v5 = v10 & 1;
      v12 = is_forced_operand();
      v13 = is_forced_operand();
      *(_BYTE *)(a1 + 604) = !(v10 & 1);
      *(_BYTE *)(a1 + 604) &= 1u;
      flags = get_flags_ex();
      if ( (v10 & 0x100) != 0 )
        sub_104B0(a1, (__int64)a2, (__int64)(a2 + 20), flags, v11);
      if ( (v10 & 0x200) != 0 )
        sub_104B0(a1, (__int64)a2, (__int64)(a2 + 40), flags, v12);
      if ( (v10 & 0x400) != 0 )
        sub_104B0(a1, (__int64)a2, (__int64)(a2 + 60), flags, v13);
      if ( (v10 & 4) != 0 )
        sub_104B0(a1, (__int64)a2, (__int64)(a2 + 20), flags, v11);
      if ( (v10 & 8) != 0 )
        sub_104B0(a1, (__int64)a2, (__int64)(a2 + 40), flags, v12);
      if ( (v10 & 0x10) != 0 )
        sub_104B0(a1, (__int64)a2, (__int64)(a2 + 60), flags, v13);
    }
    v7 = 0;
    qmemcpy(v14, a2, sizeof(v14));
    v8 = a1 + 312;
    sub_E080(a1, (__int64)v14);
    if ( *(int *)(a1 + 264) > 0 )
    {
      do
      {
        if ( *(_BYTE *)(v8 - 39) )
        {
          sub_104B0(a1, (__int64)a2, v8 - 40, flags, 0);
          if ( *(_BYTE *)(v8 + 1) )
            sub_104B0(a1, (__int64)a2, v8, flags, 0);
        }
        ++v7;
        v8 += 80;
      }
      while ( *(_DWORD *)(a1 + 264) > v7 );
    }
    if ( v5 )
    {
      *(_BYTE *)(a1 + 604) = 0;
    }
    else if ( *(_BYTE *)(a1 + 604) )
    {
      add_cref();
    }
  }
  return 1;
}

