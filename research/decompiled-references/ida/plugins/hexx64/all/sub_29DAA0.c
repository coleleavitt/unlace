unsigned __int64 __fastcall sub_29DAA0(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int8 (__fastcall ***a4)(_QWORD, __int64),
        bool a5,
        double a6)
{
  __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rdi
  char tinfo_property; // bp
  unsigned int v16; // esi
  __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // r13
  int v23; // r13d
  __int64 v24; // r14
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+4h] [rbp-B4h]
  __int64 v33; // [rsp+8h] [rbp-B0h]
  __int64 v34; // [rsp+10h] [rbp-A8h]
  _QWORD *v35; // [rsp+18h] [rbp-A0h]
  bool v37; // [rsp+30h] [rbp-88h]
  __int64 tinfo_size; // [rsp+30h] [rbp-88h]
  int v39; // [rsp+30h] [rbp-88h]
  char v40; // [rsp+38h] [rbp-80h]
  __int64 v41; // [rsp+40h] [rbp-78h]
  unsigned int v42; // [rsp+50h] [rbp-68h]
  int v43; // [rsp+54h] [rbp-64h]
  bool v45; // [rsp+63h] [rbp-55h]
  unsigned int v46; // [rsp+64h] [rbp-54h]
  __int64 v47; // [rsp+70h] [rbp-48h]
  unsigned __int64 v48; // [rsp+78h] [rbp-40h]

  v45 = a5;
  v48 = __readfsqword(0x28u);
  v8 = a3[1];
  if ( a5 )
  {
    if ( !v8 )
      return v48 - __readfsqword(0x28u);
    v9 = 0;
    v10 = 0;
    do
    {
      if ( (**a4)(a4, *a3 + 32 * v10 + 16) && (get_tinfo_property() & 0xF) == 0xA )
      {
        v11 = a3[1];
        v12 = v9;
        v45 = v10 != v11;
        if ( v9 < v11 )
          goto LABEL_10;
        goto LABEL_16;
      }
      ++v9;
      v11 = a3[1];
      v10 = v9;
    }
    while ( v9 < v11 );
    v12 = 0;
    v9 = 0;
    v45 = v10 != v11;
    if ( v11 )
      goto LABEL_10;
  }
  else
  {
    v12 = 0;
    v9 = 0;
    if ( !v8 )
      return v48 - __readfsqword(0x28u);
LABEL_10:
    while ( 1 )
    {
      v13 = *a3 + 32 * v12;
      if ( (**a4)(a4, v13 + 16) )
      {
        v14 = *(_QWORD *)(v13 + 16);
        if ( (_BYTE)v14 )
        {
          if ( (v14 & 0xE) != 0 || (v14 & 0x30) == 0 )
          {
            get_tinfo_property();
            tinfo_property = get_tinfo_property();
            clear_tinfo_t();
            if ( (tinfo_property & 0x3F) != 0x30 )
              break;
          }
        }
      }
      ++v9;
      v11 = a3[1];
      v12 = v9;
      if ( v9 >= v11 )
        goto LABEL_16;
    }
    v11 = a3[1];
  }
LABEL_16:
  if ( v11 == v12 )
    return v48 - __readfsqword(0x28u);
  v16 = v9 + 1;
  v17 = *a3;
  v18 = v9 + 1;
  v42 = v9 + 1;
  v19 = *(unsigned int *)(*a3 + 32 * v12 + 28);
  if ( v18 < v11 )
  {
    do
    {
      v18 *= 32LL;
      if ( *(_DWORD *)(v17 + v18 + 28) > (int)v19 )
        break;
      v18 = (int)++v16;
    }
    while ( (int)v16 < v11 );
    v42 = v16;
  }
  if ( (int)v42 <= v9 )
    return v48 - __readfsqword(0x28u);
  v32 = v9;
  v46 = 0;
  v41 = 32LL * v9;
  while ( 2 )
  {
    v20 = v41 + v17;
    v35 = (_QWORD *)(v20 + 16);
    if ( !((unsigned __int8 (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD, __int64), __int64, unsigned __int64, __int64))**a4)(
            a4,
            v20 + 16,
            v18,
            v19)
      || v45 && (get_tinfo_property() & 0xF) != 0xA )
    {
      goto LABEL_46;
    }
    v21 = *(_QWORD *)(v20 + 16);
    if ( !(_BYTE)v21 || (v21 & 0xE) == 0 && (v21 & 0x30) != 0 )
      goto LABEL_46;
    get_tinfo_property();
    v22 = get_tinfo_property() & 0x3F;
    clear_tinfo_t();
    if ( (_BYTE)v22 == 48 )
      goto LABEL_46;
    v23 = v9;
    v43 = *(_DWORD *)(*a3 + v41 + 24);
    v33 = 32LL * v9;
    do
    {
      if ( v23 == v32 )
        goto LABEL_33;
      v24 = *a3 + v33;
      v34 = *(_QWORD *)(a1 + 1496);
      get_tinfo_property();
      v37 = (get_tinfo_property() & 0x3F) == 1;
      clear_tinfo_t();
      get_tinfo_property();
      v40 = get_tinfo_property();
      clear_tinfo_t();
      if ( v37 == ((v40 & 0x3F) == 1) && sub_245630(v34, (__int64 *)(v24 + 16), v35, 0) )
      {
        if ( (get_tinfo_property() & 0xF) != 0xA )
          goto LABEL_32;
        get_tinfo_property();
        v26 = get_tinfo_property();
        if ( (v26 & 0xFu) <= 0xA || (v26 & 0x3F) == 0x2D )
        {
          clear_tinfo_t();
LABEL_32:
          v43 += *(_DWORD *)(*a3 + v33 + 24);
          goto LABEL_33;
        }
        clear_tinfo_t();
        if ( *(_DWORD *)v24 != 6 )
        {
LABEL_37:
          if ( sub_29D2B0(v34, a1, v24, a6) )
            goto LABEL_32;
          if ( (get_tinfo_property() & 0x2F) == 0xD )
          {
            tinfo_size = get_tinfo_size();
            if ( tinfo_size == get_tinfo_size() && sub_29B010(*(_QWORD *)(v34 + 112), (_DWORD)v35, 0, v24 + 16) )
              goto LABEL_32;
          }
          goto LABEL_33;
        }
      }
      else if ( *(_DWORD *)v24 != 6 )
      {
        goto LABEL_37;
      }
      v27 = *(_QWORD *)(v24 + 8);
      if ( *(_DWORD *)(v27 + 8) != 61 )
        goto LABEL_37;
      v47 = sub_255A30(*(__int64 **)(v27 + 24));
      if ( (get_tinfo_property() & 0xF) != 9 )
        goto LABEL_37;
      v39 = get_tinfo_size();
      if ( get_tinfo_size() != v39 )
        goto LABEL_37;
      if ( !v47 || (unsigned int)sub_CFF70() == 1 )
        goto LABEL_32;
LABEL_33:
      ++v23;
      v33 += 32;
    }
    while ( v23 != v42 );
    v18 = v46;
    if ( v43 > (int)v46 )
    {
      v28 = *a2;
      if ( *a2 )
      {
        a2[1] = 0;
        qfree(v28);
        *a2 = 0;
        v28 = 0;
        v29 = 0;
        a2[2] = 0;
      }
      else
      {
        v29 = a2[2];
      }
    }
    else
    {
      if ( v43 != v46 )
        goto LABEL_46;
      v29 = a2[2];
      v28 = *a2;
    }
    v30 = a2[1];
    v18 = v30 + 1;
    if ( v29 < v30 + 1 )
    {
      v31 = qvector_reserve((__int64)a2, v28, v18, 4);
      *a2 = v31;
      v28 = v31;
      v30 = a2[1];
    }
    *(_DWORD *)(v28 + 4 * v30) = v32;
    ++a2[1];
    v46 = v43;
LABEL_46:
    ++v32;
    v19 = v42;
    v41 += 32;
    if ( v32 != v42 )
    {
      v17 = *a3;
      continue;
    }
    return v48 - __readfsqword(0x28u);
  }
}

