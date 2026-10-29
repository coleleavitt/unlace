_BOOL8 __fastcall sub_E3B70(__int64 a1, __int64 a2, _QWORD *a3, int a4, double a5)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r12
  __int64 v10; // rbp
  int *v11; // rbx
  unsigned int tinfo_size; // eax
  signed int v14; // r14d
  signed int v15; // r13d
  char tinfo_property; // al
  char v17; // al
  int v18; // eax
  unsigned __int64 *v19; // rsi
  unsigned int v21; // [rsp+18h] [rbp-90h]
  bool v22; // [rsp+1Fh] [rbp-89h]
  __int64 v23; // [rsp+20h] [rbp-88h]
  _QWORD v24[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-68h] BYREF
  int v26[6]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 32);
  if ( a4 <= (int)v6 )
  {
    v7 = a4;
  }
  else
  {
    v7 = (int)v6;
    v8 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF0;
    if ( v8 != 64 && v8 != 208 )
      sub_E3A20(a5);
  }
  if ( (int)v7 <= 0 )
    return 1;
  v9 = 0;
  v23 = 80 * v7;
  while ( 1 )
  {
    v10 = v9 + *(_QWORD *)(a2 + 24);
    v11 = (int *)(v9 + *a3);
    if ( !(unsigned int)lexcompare_tinfo() && !(unsigned int)compare_arglocs() )
      goto LABEL_8;
    tinfo_size = get_tinfo_size();
    v14 = *(_DWORD *)(v10 + 4);
    v15 = tinfo_size;
    v21 = tinfo_size;
    v22 = (unsigned int)compare_arglocs() == 0 && tinfo_size == v14;
    if ( v22 )
      goto LABEL_8;
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0x3E) == 0 )
      return v22;
    if ( (tinfo_property & 0xFu) > 8 )
      return v22;
    v17 = get_tinfo_property();
    if ( (v17 & 0x3E) == 0 )
      return v22;
    if ( (v17 & 0xFu) > 8 )
      return v22;
    if ( v14 >= v15 )
      return v22;
    v18 = *v11;
    if ( *(_DWORD *)(v10 + 56) != *v11 || (unsigned int)(v18 - 3) > 1 && v18 != 1 )
      return v22;
    v24[1] = 0;
    v24[0] = 0xFFFFFFFF00000000LL;
    sub_1C5FB0((__int64)v26, v10 + 56, v14, 0);
    sub_126420((__int64)v24, a1, (__int64)v26, v14);
    cleanup_argloc();
    v19 = *(unsigned __int64 **)(a1 + 1504);
    v25[0] = 0;
    v25[1] = 0;
    if ( !sub_131780((__int64)v24, v19, v21, 0, 0) || !(unsigned __int8)sub_1C5030((char *)v24, (__int64)v25) )
      goto LABEL_25;
    sub_1C5FB0((__int64)v26, (__int64)v11, v21, 0);
    if ( (unsigned int)sub_1C2AD0(v26, (int *)v25) )
      break;
    cleanup_argloc();
    cleanup_argloc();
    sub_11CDA0((__int64)v24);
LABEL_8:
    v9 += 80;
    if ( v23 == v9 )
      return 1;
  }
  cleanup_argloc();
LABEL_25:
  cleanup_argloc();
  sub_11CDA0((__int64)v24);
  return v22;
}

