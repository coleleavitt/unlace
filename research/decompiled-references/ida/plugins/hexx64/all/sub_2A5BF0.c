__int64 __fastcall sub_2A5BF0(__int64 a1, __int64 a2, __m128 a3)
{
  int v3; // r14d
  unsigned int v5; // r13d
  int v6; // eax
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 **v15; // rax
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  int i; // ebp
  int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rbp
  unsigned int v24; // eax
  __int64 tinfo_size; // r15
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // r15
  __m128i *v29; // rax
  unsigned int *v30; // rsi
  char tinfo_property; // r15
  __int64 v32; // [rsp+8h] [rbp-A0h]
  int v33; // [rsp+8h] [rbp-A0h]
  bool v34; // [rsp+8h] [rbp-A0h]
  __int64 v35; // [rsp+10h] [rbp-98h]
  _QWORD v36[3]; // [rsp+28h] [rbp-80h] BYREF
  __int128 v37; // [rsp+40h] [rbp-68h] BYREF
  __int64 v38; // [rsp+50h] [rbp-58h]
  int v39; // [rsp+58h] [rbp-50h]
  __int16 v40; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v41; // [rsp+68h] [rbp-40h]

  v3 = 0;
  v41 = __readfsqword(0x28u);
  v32 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 112LL);
  while ( *(_DWORD *)(a1 + 32) == 1 )
  {
    if ( *(_DWORD *)(a1 + 16) == 6 && (v22 = *(_QWORD *)(a1 + 24), *(_DWORD *)(v22 + 8) == 35) )
    {
      v23 = sub_29C9F0((__int64 *)&v37, v22);
      if ( v23 && (__int64)v37 > 0 && (v5 = sub_2A0430(a1, a2), (_BYTE)v5) )
      {
        v27 = (_QWORD *)operator new(0x10u);
        *v27 = 3;
        v28 = v27;
        v27[1] = 0;
        v29 = (__m128i *)qalloc();
        if ( !v29 )
          JUMPOUT(0x4EB98);
        v29->m128i_i64[0] = 0;
        v29->m128i_i64[1] = 0;
        v30 = (unsigned int *)v37;
        v28[1] = v29;
        sub_2A5950(v29, v30, (unsigned int *)a1, a3);
        sub_29EDB0(a1, v32, v28, *(double *)a3.m128_u64);
        *(_QWORD *)(a1 + 24) = v23;
      }
      else
      {
        v5 = v3;
      }
      v36[0] = 0;
      if ( *(_DWORD *)(a1 + 32) != 1 )
        goto LABEL_4;
    }
    else
    {
      v36[0] = 0;
      v5 = v3;
    }
    if ( *(_DWORD *)(a1 + 16) != 6 )
      goto LABEL_4;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) != 51 )
      goto LABEL_4;
    if ( (unsigned __int8)sub_29B3C0(a1, *(_QWORD *)(a2 + 8), v36, *(double *)a3.m128_u64) )
    {
      tinfo_size = get_tinfo_size();
      if ( get_tinfo_size() != tinfo_size )
        goto LABEL_4;
    }
    if ( *(_DWORD *)a1 == 1 )
    {
      a3 = 0;
      v36[2] = 0;
      v37 = 0;
      v36[1] = 0;
      copy_tinfo_t();
      v38 = 0;
      copy_tinfo_t();
      v39 = 0;
      v40 = 0;
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
      sub_2A5B70((unsigned int *)a1, v32, a3);
    }
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    *(_QWORD *)(a1 + 24) = v14;
    if ( *(_DWORD *)(v14 + 8) == 48
      && (unsigned __int8)sub_29C830(*(_QWORD *)(a2 + 8), a1, (_DWORD *)(a1 + 16), *(double *)a3.m128_u64) )
    {
      *(_QWORD *)(a1 + 24) = sub_254FE0(*(_QWORD *)(a1 + 24));
    }
    v3 = 1;
    clear_tinfo_t();
  }
  v36[0] = 0;
  v5 = v3;
LABEL_4:
  clear_tinfo_t();
  if ( *(_DWORD *)(a1 + 32) != 1 )
  {
LABEL_5:
    if ( !(_BYTE)v3 )
      goto LABEL_6;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a1 + 16) == 6 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) == 65 )
    {
      v24 = sub_2A0430(a1, a2);
      if ( (_BYTE)v24 )
      {
        v5 = v24;
        sub_2A5B70((unsigned int *)a1, v32, a3);
      }
      goto LABEL_5;
    }
  }
  else if ( (_BYTE)v3 )
  {
LABEL_15:
    v8 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v8 + 8) == 65
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 432LL) + 104LL * *(int *)(v8 + 32) + 24) & 2) == 0
      && !(unsigned __int8)sub_29C830(*(_QWORD *)(a2 + 8), a1, (_DWORD *)(a1 + 16), *(double *)a3.m128_u64) )
    {
      v5 = 1;
      sub_29EC30(a1, *(double *)a3.m128_u64);
      *(_DWORD *)a1 = 2;
      v9 = (_QWORD *)operator new(0x10u);
      *v9 = 0;
      v9[1] = 0;
      *(_QWORD *)(a1 + 8) = v9;
      v6 = *(_DWORD *)(a1 + 32);
LABEL_7:
      if ( v6 == 3 )
        goto LABEL_9;
      goto LABEL_8;
    }
LABEL_6:
    v6 = *(_DWORD *)(a1 + 32);
    goto LABEL_7;
  }
LABEL_8:
  if ( *(_DWORD *)a1 == 2 && !**(_DWORD **)(a1 + 8) && *(_DWORD *)(a1 + 16) == 6 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v10 + 8) == 35 )
    {
      v11 = sub_29C9F0((__int64 *)&v37, v10);
      if ( v11 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v32 + 96) + 24LL);
        LOBYTE(v12) = (_QWORD)v37 == ((unsigned __int64)v37 & *(_QWORD *)(v12 + 16)) && *(_DWORD *)(v11 + 8) == 65;
        v13 = v12;
        if ( (_BYTE)v12 )
        {
          if ( !(unsigned __int8)is_mapped() )
          {
            *(_QWORD *)(a1 + 24) = v11;
            v5 = v13;
          }
        }
      }
    }
  }
LABEL_9:
  if ( *(_DWORD *)a1 != 6 || *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) != 51 || *(_DWORD *)(a1 + 16) != 1 )
    goto LABEL_10;
  v35 = a1;
  for ( i = 0; ; i = 1 )
  {
    v33 = get_tinfo_size();
    if ( v33 >= 0 )
    {
      v21 = get_tinfo_size();
      if ( v21 >= 0 && v33 == v21 )
      {
        v34 = v21 >= 0 && v33 == v21;
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
    v35 = a1 + 16;
  }
  sub_29A280();
  v5 = v34;
  *(_QWORD *)(v35 + 8) = *(_QWORD *)(*(_QWORD *)(v35 + 8) + 24LL);
LABEL_11:
  if ( *(_DWORD *)a1 != 8 )
    return v5;
  v15 = *(__int64 ***)(a1 + 8);
  if ( *((_DWORD *)v15 + 2) == -1 )
    return v5;
  if ( *(_DWORD *)(a1 + 16) != 6 )
    return v5;
  v16 = *(_QWORD **)(*(_QWORD *)(a2 + 8) + 1376LL);
  if ( !v16 )
    return v5;
  v17 = *v16 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v17 )
  {
LABEL_71:
    v26 = sub_254FE0(*(_QWORD *)(a1 + 24));
    if ( *(_QWORD *)(a1 + 24) != v26 )
    {
      *(_QWORD *)(a1 + 24) = v26;
      return 1;
    }
    return v5;
  }
  if ( (*(_BYTE *)v17 & 2) != 0 )
    return v5;
  v18 = **v15;
  while ( 1 )
  {
    v19 = *(_QWORD *)(v17 + 24);
    if ( v18 >= v19 )
      break;
    v17 = *(_QWORD *)(v17 + 8);
LABEL_44:
    if ( (*(_BYTE *)v17 & 2) != 0 )
      return v5;
  }
  if ( v19 < v18 )
  {
    v17 = *(_QWORD *)(v17 + 16);
    goto LABEL_44;
  }
  if ( v16 != (_QWORD *)v17 )
    goto LABEL_71;
  return v5;
}

