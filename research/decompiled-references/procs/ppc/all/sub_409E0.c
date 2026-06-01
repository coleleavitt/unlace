__int64 __fastcall sub_409E0(__int64 a1, _QWORD *a2, unsigned int a3, int a4, int a5)
{
  char v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // r13
  __int64 tinfo_size; // rbx
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // r10d
  char tinfo_property; // al
  unsigned __int64 v20; // r15
  int v21; // ebx
  int v22; // eax
  int v24; // ebx
  int v25; // ebx
  int v26; // eax
  int v27; // ecx
  __int64 v29; // [rsp+10h] [rbp-58h]
  unsigned __int64 v30; // [rsp+18h] [rbp-50h]
  unsigned __int64 v31; // [rsp+18h] [rbp-50h]
  char v32; // [rsp+23h] [rbp-45h]
  int v33; // [rsp+24h] [rbp-44h]
  int v34; // [rsp+28h] [rbp-40h]

  v6 = getinf_flag(67, 32);
  v7 = a2[1];
  if ( (int)v7 <= 0 )
    return a3;
  v33 = 36;
  v8 = 0;
  v32 = v6;
  v29 = 16 * (5LL * (unsigned int)(v7 - 1) + 5);
  while ( 1 )
  {
    v13 = v8 + *a2;
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(v13 + 64), 0);
    if ( tinfo_size == -1 )
      return 0xFFFFFFFFLL;
    if ( v32 )
    {
      if ( (get_tinfo_property(*(_QWORD *)(v13 + 64), 2) & 0xF) == 9 )
      {
        v17 = 8;
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (tinfo_size + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v15 = getinf_flag(3, 4);
        v16 = *(_QWORD *)(a1 + 32);
        if ( v15 )
        {
          v17 = 8;
          v10 = *(_QWORD *)(v16 + 16) & (tinfo_size + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v17 = 4;
          v10 = *(_QWORD *)(v16 + 16) & (tinfo_size + 3) & 0xFFFFFFFFFFFFFFFCLL;
        }
      }
      v31 = v17;
      tinfo_property = get_tinfo_property(*(_QWORD *)(v13 + 64), 2);
      v9 = v31;
      if ( (tinfo_property & 0xF) == 9 )
      {
        v20 = (*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL) / v31;
        if ( a5 + 1 - (int)v20 >= v33 )
        {
          if ( (_DWORD)v20 == 2 )
          {
            v25 = v33 + 1;
            if ( (unsigned __int8)getinf_flag(3, 32) )
            {
              cleanup_argloc(v13);
              v21 = (v33 << 16) | v25;
            }
            else
            {
              cleanup_argloc(v13);
              v21 = v33 | (v25 << 16);
            }
            v22 = 4;
          }
          else
          {
            cleanup_argloc(v13);
            v21 = v33;
            v22 = 3;
          }
          v33 += v20;
          *(_DWORD *)v13 = v22;
          *(_DWORD *)(v13 + 8) = v21;
          goto LABEL_8;
        }
        if ( (unsigned __int8)getinf_flag(3, 4) )
        {
          v26 = -8;
          v27 = 7;
        }
        else
        {
          v26 = -4;
          v27 = 3;
        }
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        LODWORD(v10) = v11 & v26 & (tinfo_size + v27);
        goto LABEL_7;
      }
    }
    else if ( (unsigned __int8)getinf_flag(3, 4) )
    {
      v9 = 8;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (tinfo_size + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v9 = 4;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (tinfo_size + 3) & 0xFFFFFFFFFFFFFFFCLL;
    }
    if ( a4 <= 10 )
    {
      v34 = v10 / v9;
      v30 = v10 / v9;
      if ( !(unsigned __int8)getinf_flag(3, 4) && ((v10 - 8) & 0xFFFFFFFFFFFFFFF7LL) == 0 )
        a4 += (a4 & 1) == 0;
      if ( 11 - (int)v30 >= a4 )
      {
        if ( (_DWORD)v30 == 1 )
        {
          cleanup_argloc(v13);
          v18 = 1;
          *(_DWORD *)v13 = 3;
          *(_DWORD *)(v13 + 8) = a4;
        }
        else if ( (_DWORD)v30 == 2 )
        {
          v24 = a4 + 1;
          if ( (unsigned __int8)getinf_flag(3, 32) )
          {
            cleanup_argloc(v13);
            v18 = v30;
            *(_DWORD *)v13 = 4;
            *(_DWORD *)(v13 + 8) = v24 | (a4 << 16);
          }
          else
          {
            cleanup_argloc(v13);
            v18 = v30;
            *(_DWORD *)v13 = 4;
            *(_DWORD *)(v13 + 8) = a4 | (v24 << 16);
          }
        }
        else
        {
          sub_31B00(v13, a4, v34, tinfo_size, 0);
          v18 = v30;
        }
        a4 += v18;
        goto LABEL_8;
      }
      a4 = 11;
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    }
    else
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    }
LABEL_7:
    v12 = v11 & -(int)v10 & (a3 + v10 - 1);
    cleanup_argloc(v13);
    a3 = v10 + v12;
    *(_DWORD *)v13 = 1;
    *(_QWORD *)(v13 + 8) = v12;
LABEL_8:
    v8 += 80;
    sub_408F0(v13, (__int64 *)(v13 + 64), -1);
    if ( v8 == v29 )
      return a3;
  }
}
