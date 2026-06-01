_QWORD *__fastcall sub_24CEA0(__int64 a1, __int64 a2, _QWORD *a3, char a4, double a5)
{
  int v7; // eax
  int v9; // edi
  __int64 v10; // r15
  char tinfo_property; // al
  _QWORD *v12; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // [rsp+0h] [rbp-68h]
  int v18; // [rsp+4h] [rbp-64h]
  __int64 v19; // [rsp+18h] [rbp-50h] BYREF
  __int64 v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *(_DWORD *)a2;
  v20[1] = __readfsqword(0x28u);
  if ( v7 == 8 )
  {
    v18 = 1;
    v17 = 1;
  }
  else
  {
    v18 = 2;
    v17 = 2 * (v7 != 10);
  }
  v9 = *(_DWORD *)(a2 + 36);
  v19 = 0;
  if ( sub_11CA80(v9) )
  {
    sub_32C430(v20, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 36), v17);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( *(_DWORD *)a2 != 10 || (v10 = sub_24CBC0(a1, a2, a3, a5)) == 0 )
  {
    v10 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, &v19, &v19, 0, a5);
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
    {
      if ( (get_tinfo_property() & 0xF) == 9 )
      {
        sub_32C430(v20, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 36), v18);
        sub_248280(*(_QWORD *)(a1 + 328), v10, v20, a5);
        clear_tinfo_t();
      }
      else if ( v17 && v17 != (unsigned int)get_tinfo_property() )
      {
        v16 = sub_244E70(v10, (__int64)&v19, v14, v15);
        *(_DWORD *)(v16 + 56) |= 0x20u;
        v10 = v16;
      }
    }
  }
  v12 = sub_24AF50(a1, v10, a2, (__int64)a3, a4, a5);
  clear_tinfo_t();
  return v12;
}

