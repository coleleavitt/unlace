__int64 __fastcall sub_19DBF0(__int64 a1, char a2, __int64 a3, __int64 a4, double a5)
{
  unsigned __int64 v6; // r15
  signed int v7; // ebx
  int v8; // ebp
  __int64 v9; // r13
  __int64 v10; // r15
  unsigned int v11; // ebx
  signed int tinfo_size; // ebp
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r13
  int v18; // eax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // [rsp+10h] [rbp-128h]
  __int64 v23; // [rsp+18h] [rbp-120h]
  __int64 v24; // [rsp+20h] [rbp-118h]
  unsigned __int64 v27; // [rsp+30h] [rbp-108h]
  __int64 v28; // [rsp+38h] [rbp-100h]
  unsigned __int64 v31; // [rsp+60h] [rbp-D8h] BYREF
  unsigned __int64 v32; // [rsp+68h] [rbp-D0h]
  __int64 v33; // [rsp+70h] [rbp-C8h]
  __int128 v34; // [rsp+78h] [rbp-C0h]
  __int64 v35; // [rsp+88h] [rbp-B0h]
  __int128 v36; // [rsp+90h] [rbp-A8h]
  __int128 v37; // [rsp+A0h] [rbp-98h]
  __int64 v38; // [rsp+D0h] [rbp-68h]
  int v39; // [rsp+D8h] [rbp-60h]
  __int64 v40; // [rsp+E0h] [rbp-58h]
  char v41; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+F8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 40 + 24);
  v24 = *(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 40;
  v27 = v6;
  v28 = *(_QWORD *)(a1 + 104);
  v22 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v23 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  cleanup_argloc();
  v31 = 1;
  v32 = v6;
  v8 = sub_1F06C0((__int64 *)(v23 + 432), (int *)&v31, v7, 0);
  cleanup_argloc();
  if ( v8 >= 0 )
  {
    v9 = *(_QWORD *)(v23 + 432) + 104LL * v8;
    if ( *(_DWORD *)v9 == 1 )
      v10 = *(_QWORD *)(v9 + 8);
    else
      v10 = -1;
    if ( a2 && (*(_QWORD *)(v24 + 24) != v10 || *(_DWORD *)(v9 + 88) != 1) )
      return 0;
    tinfo_size = get_tinfo_size();
    if ( *(_QWORD *)(v24 + 24) != v10 || *(_DWORD *)(v9 + 88) > v7 )
    {
      sub_CFF70();
      if ( *(_DWORD *)v9 == 1 )
        v14 = *(_QWORD *)(v9 + 8);
      else
        v14 = -1;
      v15 = *(_QWORD *)(v24 + 24);
      if ( *(_BYTE *)(*(_QWORD *)(v23 + 1496) + 145LL) && v7 > tinfo_size && v14 > v15 )
      {
        if ( v14 - v15 < v7 && !(v15 % v7) )
        {
          cleanup_argloc();
          *(_DWORD *)v9 = 1;
          *(_QWORD *)(v9 + 8) = v15;
LABEL_15:
          sub_1EF680((_DWORD *)v9, *(_QWORD **)(v23 + 1504), v7, 0);
          goto LABEL_16;
        }
        if ( !under_debugger )
          sub_383060(0xCE55u, a5);
      }
      else
      {
        if ( v14 == v15 || v15 - v14 >= v7 )
          goto LABEL_15;
        if ( !under_debugger )
          sub_383060(0xC971u, a5);
      }
      BUG();
    }
  }
LABEL_16:
  get_func();
  get_func_frame();
  v16 = *(_QWORD *)(v24 + 24);
  if ( v16 < 0 )
    v16 = 0;
  v17 = sub_1CFD50((_QWORD *)v23, v16);
  v18 = v7 - 1;
  if ( v7 - 1 >= 0 )
  {
    v19 = 8 * (v18 + v17);
    v20 = 8 * (v17 + v18 - (unsigned __int64)(unsigned int)v18);
    while ( 1 )
    {
      v32 = 0;
      v33 = 0;
      v35 = 0;
      v38 = 1;
      v39 = -1;
      v40 = 0;
      v41 = 0;
      v31 = v19;
      v34 = 0;
      v36 = 0;
      v37 = 0;
      if ( (unsigned int)find_tinfo_udt_member() == -1 )
      {
        clear_tinfo_t();
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree(v35);
        }
        v21 = v33;
        if ( v33 )
          goto LABEL_24;
      }
      else
      {
        if ( v31 >> 3 == v17 && v22 >= v32 >> 3 )
        {
          clear_tinfo_t();
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree(v35);
          }
          if ( v33 )
          {
            *(_QWORD *)&v34 = 0;
            qfree(v33);
          }
          break;
        }
        if ( a2 )
        {
          clear_tinfo_t();
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree(v35);
          }
          if ( v33 )
          {
            *(_QWORD *)&v34 = 0;
            qfree(v33);
          }
LABEL_50:
          v11 = 0;
          clear_tinfo_t();
          return v11;
        }
        set_tinfo_property4();
        clear_tinfo_t();
        if ( v35 )
        {
          *(_QWORD *)&v36 = 0;
          qfree(v35);
        }
        v21 = v33;
        if ( v33 )
        {
LABEL_24:
          *(_QWORD *)&v34 = 0;
          qfree(v21);
        }
      }
      if ( v20 == v19 )
        break;
      v19 -= 8LL;
    }
  }
  if ( !*(_BYTE *)(v23 + 320)
    && ((int)((__int64)(v27 - v28) / v22 - *(_DWORD *)(a1 + 112)) > 16 || *(_QWORD *)(v24 + 24) < a3) )
  {
    goto LABEL_50;
  }
  v11 = 1;
  if ( a2 )
  {
    if ( *(int *)(v23 + 68) > 0 || (*(_BYTE *)(v24 + 32) & 1) == 0 )
      goto LABEL_50;
    LOBYTE(v11) = *(_QWORD *)(v24 + 24) >= a4;
  }
  clear_tinfo_t();
  return v11;
}

