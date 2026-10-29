__int64 __fastcall sub_21E760(__int64 *a1, double a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  signed int tinfo_size; // r15d
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  bool v15; // bp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rsi
  int v20; // eax
  __int64 v21; // [rsp+10h] [rbp-78h] BYREF
  signed __int64 v22; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24[11]; // [rsp+30h] [rbp-58h] BYREF

  v24[3] = __readfsqword(0x28u);
  v23[0] = 0;
  v23[1] = 0;
  sub_36D720(v24, *a1, (__int64)v23);
  copy_tinfo_t();
  clear_tinfo_t();
  v4 = a1[4];
  if ( !(_BYTE)v4 )
  {
    v5 = sub_1D5170(*a1, v4, v2, v3, a2);
    v6 = *(_QWORD *)(v5 + 184);
    if ( v6 )
    {
      v11 = *a1;
      v12 = *(_QWORD *)(v5 + 176) + 16 * v6;
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 1496) + 24LL) + 16LL)
          & (*(_QWORD *)(v12 - 16) - *(_QWORD *)(*a1 + 1440));
      v21 = v13;
      if ( v13 >= *(_QWORD *)(v11 + 144) )
      {
        v10 = *(_DWORD *)(v12 - 8);
        goto LABEL_11;
      }
    }
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  tinfo_size = get_tinfo_size();
  sub_1C5FB0((__int64)v24, (__int64)v23, tinfo_size, *(_QWORD *)(*a1 + 136) + *(int *)(*a1 + 116), a2);
  if ( !(unsigned __int8)sub_1C34E0((__int64)v24, &v21, &v22, tinfo_size, a2) )
    goto LABEL_8;
  if ( v22 - v21 > tinfo_size )
  {
    if ( !under_debugger )
      sub_383060(0xCE73u, a2);
    BUG();
  }
  v10 = v22 - v21;
  if ( !(unsigned __int8)sub_1C34E0((__int64)v24, &v21, nullptr, (int)v22 - (int)v21, a2) )
  {
LABEL_8:
    cleanup_argloc();
    goto LABEL_3;
  }
  cleanup_argloc();
  v13 = v21;
  v11 = *a1;
LABEL_11:
  v14 = a1[1];
  v15 = 1;
  v16 = v13 & -*(_DWORD *)(*(_QWORD *)(v11 + 1504) + 80LL);
  a1[1] = v16;
  if ( v14 == v16 )
  {
    v15 = 0;
    if ( !v10 )
      v15 = a1[2] != 0;
  }
  a1[2] = v16 + v10 - v13;
  v17 = get_tinfo_size();
  v18 = a1[2];
  if ( v17 != v18 )
  {
    clear_tinfo_t();
    v18 = a1[2];
  }
  v19 = (_DWORD *)*a1;
  v20 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504) + 80LL);
  a1[3] = (v18 + a1[1] + v20 - 1) & -v20;
  if ( v15 )
    *v19 |= 0x8000000u;
  v7 = 1;
LABEL_4:
  cleanup_argloc();
  return v7;
}

