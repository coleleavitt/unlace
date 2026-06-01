__int64 __fastcall sub_21BC50(__int64 *a1, int *a2, int a3, double a4)
{
  unsigned __int8 scalar_bt; // al
  __int64 v6; // r8
  unsigned int v7; // ebx
  int v9; // [rsp+4h] [rbp-54h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  int v11[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  scalar_bt = get_scalar_bt();
  if ( (scalar_bt & 0xF) == 9 )
  {
    return 0;
  }
  else
  {
    v6 = *a1;
    v10 = scalar_bt;
    (*(void (__fastcall **)(int *, __int64 *, int *, __int64 *))(v6 + 104))(v11, a1, &v9, &v10);
    clear_tinfo_t();
    v7 = 0;
    if ( !(unsigned int)sub_1C2AD0(v11, a2, a4) )
      LOBYTE(v7) = v9 == a3;
    cleanup_argloc();
  }
  return v7;
}

