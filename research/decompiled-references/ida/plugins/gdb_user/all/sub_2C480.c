__int64 __fastcall sub_2C480(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rsi
  struct _Unwind_Exception *v9; // rbp
  void *v10[17]; // [rsp+80h] [rbp-F8h] BYREF
  void *dest[2]; // [rsp+108h] [rbp-70h]
  __int128 v12; // [rsp+118h] [rbp-60h]
  __int128 v13; // [rsp+128h] [rbp-50h]
  unsigned __int64 v14; // [rsp+138h] [rbp-40h]

  v2 = *(unsigned int *)(a2 + 24);
  v3 = *(_QWORD *)(a1 + 1384);
  v14 = __readfsqword(0x28u);
  if ( (_DWORD)v2 == -3 || !(_DWORD)v2 )
  {
    if ( !v3 )
    {
      v2 = 4294967293LL;
      goto LABEL_12;
    }
    v7 = *(_QWORD *)(a1 + 1376);
    v6 = -3;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 1376);
    v5 = v4 + 112 * v3;
    if ( v4 == v5 )
    {
LABEL_12:
      *(_OWORD *)dest = 0;
      v10[14] = (void *)0xFFFFFFFFLL;
      v10[15] = (void *)-1LL;
      v10[16] = nullptr;
      v12 = 0;
      v13 = 0;
      set_debug_event_code();
      v9 = (struct _Unwind_Exception *)sub_1A9A0();
      sub_23A80(v10);
      sub_23A80((_QWORD *)v2);
      free_debug_event();
      _Unwind_Resume(v9);
    }
    while ( 1 )
    {
      v6 = *(_DWORD *)(v4 + 24);
      v7 = v4;
      if ( (_DWORD)v2 == v6 )
        break;
      v4 += 112;
      if ( v5 == v4 )
        goto LABEL_12;
    }
  }
  if ( !v7 )
  {
    v2 = v6;
    goto LABEL_12;
  }
  return 0;
}

