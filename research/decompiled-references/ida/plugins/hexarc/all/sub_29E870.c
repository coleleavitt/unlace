__int64 __fastcall sub_29E870(__int64 a1, __int64 a2)
{
  int v2; // r14d
  unsigned int v4; // r13d
  int v5; // eax
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 **v14; // rax
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  int i; // ebp
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // rbp
  unsigned int v23; // eax
  __int64 tinfo_size; // r15
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // r15
  __m128i *v28; // rax
  unsigned int *v29; // rsi
  char tinfo_property; // r15
  __int64 v31; // [rsp+8h] [rbp-A0h]
  int v32; // [rsp+8h] [rbp-A0h]
  bool v33; // [rsp+8h] [rbp-A0h]
  __int64 v34; // [rsp+10h] [rbp-98h]
  _QWORD v35[3]; // [rsp+28h] [rbp-80h] BYREF
  __int128 v36; // [rsp+40h] [rbp-68h] BYREF
  __int64 v37; // [rsp+50h] [rbp-58h]
  int v38; // [rsp+58h] [rbp-50h]
  __int16 v39; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v40; // [rsp+68h] [rbp-40h]

  v2 = 0;
  v40 = __readfsqword(0x28u);
  v31 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 112LL);
  while ( *(_DWORD *)(a1 + 32) == 1 )
  {
    if ( *(_DWORD *)(a1 + 16) == 6 && (v21 = *(_QWORD *)(a1 + 24), *(_DWORD *)(v21 + 8) == 35) )
    {
      v22 = sub_295670(&v36, v21);
      if ( v22 && (__int64)v36 > 0 && (v4 = sub_2990B0(a1, a2), (_BYTE)v4) )
      {
        v26 = (_QWORD *)operator new(0x10u);
        *v26 = 3;
        v27 = v26;
        v26[1] = 0;
        v28 = (__m128i *)qalloc();
        if ( !v28 )
          JUMPOUT(0x4C908);
        v28->m128i_i64[0] = 0;
        v28->m128i_i64[1] = 0;
        v29 = (unsigned int *)v36;
        v27[1] = v28;
        sub_29E5D0(v28, v29, (unsigned int *)a1);
        sub_297A30(a1, v31, v27);
        *(_QWORD *)(a1 + 24) = v22;
      }
      else
      {
        v4 = v2;
      }
      v35[0] = 0;
      if ( *(_DWORD *)(a1 + 32) != 1 )
        goto LABEL_4;
    }
    else
    {
      v35[0] = 0;
      v4 = v2;
    }
    if ( *(_DWORD *)(a1 + 16) != 6 )
      goto LABEL_4;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) != 51 )
      goto LABEL_4;
    if ( (unsigned __int8)sub_294040(a1, *(_QWORD *)(a2 + 8), v35) )
    {
      tinfo_size = get_tinfo_size();
      if ( get_tinfo_size() != tinfo_size )
        goto LABEL_4;
    }
    if ( *(_DWORD *)a1 == 1 )
    {
      v35[2] = 0;
      v36 = 0;
      v35[1] = 0;
      copy_tinfo_t();
      v37 = 0;
      copy_tinfo_t();
      v38 = 0;
      v39 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    else
    {
      sub_29E7F0((unsigned int *)a1, v31);
    }
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    *(_QWORD *)(a1 + 24) = v13;
    if ( *(_DWORD *)(v13 + 8) == 48 && (unsigned __int8)sub_2954B0(*(_QWORD *)(a2 + 8), a1, (_DWORD *)(a1 + 16)) )
      *(_QWORD *)(a1 + 24) = sub_24DC60(*(_QWORD *)(a1 + 24));
    v2 = 1;
    clear_tinfo_t();
  }
  v35[0] = 0;
  v4 = v2;
LABEL_4:
  clear_tinfo_t();
  if ( *(_DWORD *)(a1 + 32) != 1 )
  {
LABEL_5:
    if ( !(_BYTE)v2 )
      goto LABEL_6;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a1 + 16) == 6 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) == 65 )
    {
      v23 = sub_2990B0(a1, a2);
      if ( (_BYTE)v23 )
      {
        v4 = v23;
        sub_29E7F0((unsigned int *)a1, v31);
      }
      goto LABEL_5;
    }
  }
  else if ( (_BYTE)v2 )
  {
LABEL_15:
    v7 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v7 + 8) == 65
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 432LL) + 104LL * *(int *)(v7 + 32) + 24) & 2) == 0
      && !(unsigned __int8)sub_2954B0(*(_QWORD *)(a2 + 8), a1, (_DWORD *)(a1 + 16)) )
    {
      v4 = 1;
      sub_2978B0(a1);
      *(_DWORD *)a1 = 2;
      v8 = (_QWORD *)operator new(0x10u);
      *v8 = 0;
      v8[1] = 0;
      *(_QWORD *)(a1 + 8) = v8;
      v5 = *(_DWORD *)(a1 + 32);
LABEL_7:
      if ( v5 == 3 )
        goto LABEL_9;
      goto LABEL_8;
    }
LABEL_6:
    v5 = *(_DWORD *)(a1 + 32);
    goto LABEL_7;
  }
LABEL_8:
  if ( *(_DWORD *)a1 == 2 && !**(_DWORD **)(a1 + 8) && *(_DWORD *)(a1 + 16) == 6 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v9 + 8) == 35 )
    {
      v10 = sub_295670(&v36, v9);
      if ( v10 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v31 + 96) + 24LL);
        LOBYTE(v11) = (_QWORD)v36 == ((unsigned __int64)v36 & *(_QWORD *)(v11 + 16)) && *(_DWORD *)(v10 + 8) == 65;
        v12 = v11;
        if ( (_BYTE)v11 )
        {
          if ( !(unsigned __int8)is_mapped() )
          {
            *(_QWORD *)(a1 + 24) = v10;
            v4 = v12;
          }
        }
      }
    }
  }
LABEL_9:
  if ( *(_DWORD *)a1 != 6 || *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) != 51 || *(_DWORD *)(a1 + 16) != 1 )
    goto LABEL_10;
  v34 = a1;
  for ( i = 0; ; i = 1 )
  {
    v32 = get_tinfo_size();
    if ( v32 >= 0 )
    {
      v20 = get_tinfo_size();
      if ( v20 >= 0 && v32 == v20 )
      {
        v33 = v20 >= 0 && v32 == v20;
        tinfo_property = get_tinfo_property();
        if ( ((get_tinfo_property() & 0xF) == 9) == ((tinfo_property & 0xF) == 9) )
          break;
      }
    }
    if ( i == 1 )
      goto LABEL_11;
LABEL_10:
    if ( *(_DWORD *)(a1 + 16) != 6 || *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) != 51 || *(_DWORD *)a1 != 1 )
      goto LABEL_11;
    v34 = a1 + 16;
  }
  sub_292F00();
  v4 = v33;
  *(_QWORD *)(v34 + 8) = *(_QWORD *)(*(_QWORD *)(v34 + 8) + 24LL);
LABEL_11:
  if ( *(_DWORD *)a1 != 8 )
    return v4;
  v14 = *(__int64 ***)(a1 + 8);
  if ( *((_DWORD *)v14 + 2) == -1 )
    return v4;
  if ( *(_DWORD *)(a1 + 16) != 6 )
    return v4;
  v15 = *(_QWORD **)(*(_QWORD *)(a2 + 8) + 1376LL);
  if ( !v15 )
    return v4;
  v16 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v16 )
  {
LABEL_71:
    v25 = sub_24DC60(*(_QWORD *)(a1 + 24));
    if ( *(_QWORD *)(a1 + 24) != v25 )
    {
      *(_QWORD *)(a1 + 24) = v25;
      return 1;
    }
    return v4;
  }
  if ( (*(_BYTE *)v16 & 2) != 0 )
    return v4;
  v17 = **v14;
  while ( 1 )
  {
    v18 = *(_QWORD *)(v16 + 24);
    if ( v17 >= v18 )
      break;
    v16 = *(_QWORD *)(v16 + 8);
LABEL_44:
    if ( (*(_BYTE *)v16 & 2) != 0 )
      return v4;
  }
  if ( v18 < v17 )
  {
    v16 = *(_QWORD *)(v16 + 16);
    goto LABEL_44;
  }
  if ( v15 != (_QWORD *)v16 )
    goto LABEL_71;
  return v4;
}

