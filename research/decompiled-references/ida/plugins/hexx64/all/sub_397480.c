__int64 __fastcall sub_397480(__int64 a1, double a2, double a3, __m128i a4, double a5)
{
  __int64 v5; // rax
  int v6; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h]
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]

  vars8 = __readfsqword(0x28u);
  vars0 = 0;
  if ( !(unsigned __int8)sub_3767A0(*(_QWORD *)(a1 + 24)) )
  {
    if ( !under_debugger )
      sub_383060(0xC51Au, a2);
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 108);
    if ( (v6 & 8) != 0 )
    {
      set_tinfo();
      goto LABEL_5;
    }
    *(_DWORD *)(v5 + 108) = v6 | 8;
  }
  set_tinfo();
  v11 = *(_QWORD *)(a1 + 32);
  if ( v11 )
  {
    *(_DWORD *)(v11 + 108) &= ~8u;
    if ( (*(_BYTE *)a1 & 2) == 0 )
      sub_395A90(a1, 0, a2, v8, v9, v10, a3, a4, a5);
  }
LABEL_5:
  clear_tinfo_t();
  return 1;
}

