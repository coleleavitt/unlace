__int64 __fastcall sub_36E850(__int64 a1, __int64 a2, _DWORD *a3, double a4)
{
  _QWORD *v4; // r15
  unsigned int v6; // ebx
  unsigned int v8; // eax
  _DWORD v9[4]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h] BYREF
  __int16 v12; // [rsp+30h] [rbp-48h]
  char v13; // [rsp+32h] [rbp-46h]
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD **)(a2 + 1504);
  v14 = __readfsqword(0x28u);
  copy_tinfo_t();
  if ( (get_tinfo_property() & 0xF) != 9 && !get_tinfo_property() )
  {
    if ( (unsigned __int8)sub_D45B0(*(_QWORD *)(a1 + 80), *(_DWORD *)(a1 + 72), a3[22])
      && (unsigned __int8)sub_1EF680(a3, v4, a3[22], 3, a4)
      && (unsigned __int8)sub_D4680(a1, a2, a3) )
    {
      goto LABEL_13;
    }
    v8 = *(_DWORD *)(a1 + 72);
    if ( v8 <= 0x10 )
      v8 = getinf();
    if ( v8 != 176 && v8 != 256 )
    {
      sub_1C7740(v9, a2, (__int64)a3, (unsigned int)a3[22], a4);
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 48;
      if ( (unsigned __int8)sub_32A590((__int64)&v10) )
      {
        sub_1EF8F0((__int64)a3, *(_QWORD *)(a2 + 1504), &v11, 0, a4);
        clear_tinfo_t();
        cleanup_argloc();
LABEL_13:
        v6 = 1;
        goto LABEL_4;
      }
      clear_tinfo_t();
      cleanup_argloc();
    }
    v6 = 0;
    goto LABEL_4;
  }
  v6 = sub_1EF680(a3, v4, a3[22], 2, a4);
LABEL_4:
  clear_tinfo_t();
  return v6;
}

