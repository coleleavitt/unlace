__int64 __fastcall sub_369950(__int64 a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v3; // r15
  unsigned int v5; // ebx
  unsigned int v7; // eax
  _DWORD v8[4]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h] BYREF
  __int16 v11; // [rsp+30h] [rbp-48h]
  char v12; // [rsp+32h] [rbp-46h]
  unsigned __int64 v13; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD **)(a2 + 1504);
  v13 = __readfsqword(0x28u);
  copy_tinfo_t();
  if ( (get_tinfo_property() & 0xF) != 9 && !get_tinfo_property() )
  {
    if ( (unsigned __int8)sub_D03B0(*(_QWORD *)(a1 + 80), *(_DWORD *)(a1 + 72), a3[22])
      && (unsigned __int8)sub_1EAE00(a3, v3, a3[22], 3)
      && (unsigned __int8)sub_D0480(a1, a2, a3) )
    {
      goto LABEL_13;
    }
    v7 = *(_DWORD *)(a1 + 72);
    if ( v7 <= 0x10 )
      v7 = getinf();
    if ( v7 != 176 && v7 != 256 )
    {
      sub_1C3380(v8, a2, (__int64)a3, a3[22]);
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 48;
      if ( (unsigned __int8)sub_325780((__int64)&v9) )
      {
        sub_1EB070((__int64)a3, *(_QWORD *)(a2 + 1504), &v10, 0);
        clear_tinfo_t();
        cleanup_argloc();
LABEL_13:
        v5 = 1;
        goto LABEL_4;
      }
      clear_tinfo_t();
      cleanup_argloc();
    }
    v5 = 0;
    goto LABEL_4;
  }
  v5 = sub_1EAE00(a3, v3, a3[22], 2);
LABEL_4:
  clear_tinfo_t();
  return v5;
}

