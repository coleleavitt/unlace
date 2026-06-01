unsigned __int64 __fastcall sub_299E20(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int8 (__fastcall ***a4)(_QWORD, __int64),
        bool a5)
{
  __int64 v7; // rax
  int v8; // r15d
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rdi
  char tinfo_property; // bp
  unsigned int v15; // esi
  __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // r13
  int v22; // r13d
  __int64 v23; // r14
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+4h] [rbp-B4h]
  __int64 v32; // [rsp+8h] [rbp-B0h]
  __int64 v33; // [rsp+10h] [rbp-A8h]
  _QWORD *v34; // [rsp+18h] [rbp-A0h]
  bool v36; // [rsp+30h] [rbp-88h]
  __int64 tinfo_size; // [rsp+30h] [rbp-88h]
  int v38; // [rsp+30h] [rbp-88h]
  char v39; // [rsp+38h] [rbp-80h]
  __int64 v40; // [rsp+40h] [rbp-78h]
  unsigned int v41; // [rsp+50h] [rbp-68h]
  int v42; // [rsp+54h] [rbp-64h]
  bool v44; // [rsp+63h] [rbp-55h]
  unsigned int v45; // [rsp+64h] [rbp-54h]
  __int64 v46; // [rsp+70h] [rbp-48h]
  unsigned __int64 v47; // [rsp+78h] [rbp-40h]

  v44 = a5;
  v47 = __readfsqword(0x28u);
  v7 = a3[1];
  if ( a5 )
  {
    if ( !v7 )
      return v47 - __readfsqword(0x28u);
    v8 = 0;
    v9 = 0;
    do
    {
      if ( (**a4)(a4, *a3 + 32 * v9 + 16) && (get_tinfo_property() & 0xF) == 0xA )
      {
        v10 = a3[1];
        v11 = v8;
        v44 = v9 != v10;
        if ( v8 < v10 )
          goto LABEL_10;
        goto LABEL_16;
      }
      ++v8;
      v10 = a3[1];
      v9 = v8;
    }
    while ( v8 < v10 );
    v11 = 0;
    v8 = 0;
    v44 = v9 != v10;
    if ( v10 )
      goto LABEL_10;
  }
  else
  {
    v11 = 0;
    v8 = 0;
    if ( !v7 )
      return v47 - __readfsqword(0x28u);
LABEL_10:
    while ( 1 )
    {
      v12 = *a3 + 32 * v11;
      if ( (**a4)(a4, v12 + 16) )
      {
        v13 = *(_QWORD *)(v12 + 16);
        if ( (_BYTE)v13 )
        {
          if ( (v13 & 0xE) != 0 || (v13 & 0x30) == 0 )
          {
            get_tinfo_property();
            tinfo_property = get_tinfo_property();
            clear_tinfo_t();
            if ( (tinfo_property & 0x3F) != 0x30 )
              break;
          }
        }
      }
      ++v8;
      v10 = a3[1];
      v11 = v8;
      if ( v8 >= v10 )
        goto LABEL_16;
    }
    v10 = a3[1];
  }
LABEL_16:
  if ( v10 == v11 )
    return v47 - __readfsqword(0x28u);
  v15 = v8 + 1;
  v16 = *a3;
  v17 = v8 + 1;
  v41 = v8 + 1;
  v18 = *(unsigned int *)(*a3 + 32 * v11 + 28);
  if ( v17 < v10 )
  {
    do
    {
      v17 *= 32LL;
      if ( *(_DWORD *)(v16 + v17 + 28) > (int)v18 )
        break;
      v17 = (int)++v15;
    }
    while ( (int)v15 < v10 );
    v41 = v15;
  }
  if ( (int)v41 <= v8 )
    return v47 - __readfsqword(0x28u);
  v31 = v8;
  v45 = 0;
  v40 = 32LL * v8;
  while ( 2 )
  {
    v19 = v40 + v16;
    v34 = (_QWORD *)(v19 + 16);
    if ( !((unsigned __int8 (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD, __int64), __int64, unsigned __int64, __int64))**a4)(
            a4,
            v19 + 16,
            v17,
            v18)
      || v44 && (get_tinfo_property() & 0xF) != 0xA )
    {
      goto LABEL_46;
    }
    v20 = *(_QWORD *)(v19 + 16);
    if ( !(_BYTE)v20 || (v20 & 0xE) == 0 && (v20 & 0x30) != 0 )
      goto LABEL_46;
    get_tinfo_property();
    v21 = get_tinfo_property() & 0x3F;
    clear_tinfo_t();
    if ( (_BYTE)v21 == 48 )
      goto LABEL_46;
    v22 = v8;
    v42 = *(_DWORD *)(*a3 + v40 + 24);
    v32 = 32LL * v8;
    do
    {
      if ( v22 == v31 )
        goto LABEL_33;
      v23 = *a3 + v32;
      v33 = *(_QWORD *)(a1 + 1496);
      get_tinfo_property();
      v36 = (get_tinfo_property() & 0x3F) == 1;
      clear_tinfo_t();
      get_tinfo_property();
      v39 = get_tinfo_property();
      clear_tinfo_t();
      if ( v36 == ((v39 & 0x3F) == 1) && sub_2419B0(v33, (__int64 *)(v23 + 16), v34, 0) )
      {
        if ( (get_tinfo_property() & 0xF) != 0xA )
          goto LABEL_32;
        get_tinfo_property();
        v25 = get_tinfo_property();
        if ( (v25 & 0xFu) <= 0xA || (v25 & 0x3F) == 0x2D )
        {
          clear_tinfo_t();
LABEL_32:
          v42 += *(_DWORD *)(*a3 + v32 + 24);
          goto LABEL_33;
        }
        clear_tinfo_t();
        if ( *(_DWORD *)v23 != 6 )
        {
LABEL_37:
          if ( (unsigned __int8)sub_299630(v33, a1, v23) )
            goto LABEL_32;
          if ( (get_tinfo_property() & 0x2F) == 0xD )
          {
            tinfo_size = get_tinfo_size();
            if ( tinfo_size == get_tinfo_size() && sub_297390(*(_QWORD *)(v33 + 112), (_DWORD)v34, 0, v23 + 16) )
              goto LABEL_32;
          }
          goto LABEL_33;
        }
      }
      else if ( *(_DWORD *)v23 != 6 )
      {
        goto LABEL_37;
      }
      v26 = *(_QWORD *)(v23 + 8);
      if ( *(_DWORD *)(v26 + 8) != 61 )
        goto LABEL_37;
      v46 = sub_251DB0(*(__int64 **)(v26 + 24));
      if ( (get_tinfo_property() & 0xF) != 9 )
        goto LABEL_37;
      v38 = get_tinfo_size();
      if ( get_tinfo_size() != v38 )
        goto LABEL_37;
      if ( !v46 || (unsigned int)sub_CC530() == 1 )
        goto LABEL_32;
LABEL_33:
      ++v22;
      v32 += 32;
    }
    while ( v22 != v41 );
    v17 = v45;
    if ( v42 > (int)v45 )
    {
      v27 = *a2;
      if ( *a2 )
      {
        a2[1] = 0;
        qfree();
        *a2 = 0;
        v27 = 0;
        v28 = 0;
        a2[2] = 0;
      }
      else
      {
        v28 = a2[2];
      }
    }
    else
    {
      if ( v42 != v45 )
        goto LABEL_46;
      v28 = a2[2];
      v27 = *a2;
    }
    v29 = a2[1];
    v17 = v29 + 1;
    if ( v28 < v29 + 1 )
    {
      v30 = qvector_reserve();
      *a2 = v30;
      v27 = v30;
      v29 = a2[1];
    }
    *(_DWORD *)(v27 + 4 * v29) = v31;
    ++a2[1];
    v45 = v42;
LABEL_46:
    ++v31;
    v18 = v41;
    v40 += 32;
    if ( v31 != v41 )
    {
      v16 = *a3;
      continue;
    }
    return v47 - __readfsqword(0x28u);
  }
}

