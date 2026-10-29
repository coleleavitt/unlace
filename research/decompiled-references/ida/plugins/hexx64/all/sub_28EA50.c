__int64 __fastcall sub_28EA50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v6; // eax
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // r12
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r13
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // al
  int v20; // ecx
  char v21; // al
  signed int v22; // ebx
  int v23; // eax
  int v24; // ecx
  unsigned __int64 v25; // rax
  int tinfo_size; // eax
  int v27; // ecx
  int v28; // r8d
  char v29; // al
  char v30; // al
  char v31; // al
  __int64 v32; // rsi
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  char tinfo_property; // al
  char v38; // al
  signed int v39; // ebx
  char v40; // al
  int v41; // [rsp+8h] [rbp-70h]
  int v42; // [rsp+8h] [rbp-70h]
  signed int v43; // [rsp+8h] [rbp-70h]
  int v44; // [rsp+8h] [rbp-70h]
  int v45; // [rsp+10h] [rbp-68h]
  int v46; // [rsp+14h] [rbp-64h]
  int v47; // [rsp+14h] [rbp-64h]
  __int64 v48; // [rsp+28h] [rbp-50h] BYREF
  __int64 v49[9]; // [rsp+30h] [rbp-48h] BYREF

  v6 = *(_DWORD *)(a2 + 8);
  v49[1] = __readfsqword(0x28u);
  v48 = 0;
  if ( v6 != 51 )
  {
    if ( v6 != 33 || a4 && (unsigned __int8)sub_245010(a4, a2) )
      goto LABEL_6;
    v8 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v8 + 8) != 61 )
      goto LABEL_6;
    v25 = sub_255A30(*(__int64 **)(v8 + 24));
    if ( (v25 & 7) != 0 )
      goto LABEL_6;
    v15 = *(_QWORD *)(a2 + 24);
    v47 = v25 >> 3;
    tinfo_size = get_tinfo_size();
    v27 = v47;
    v28 = tinfo_size;
    if ( *(_DWORD *)(v15 + 8) == 48
      && (v44 = tinfo_size, v36 = get_tinfo_size(), v28 = v44, v27 = v47, v45 = v36, v44 <= v36) )
    {
      v15 = *(_QWORD *)(v15 + 24);
      tinfo_property = get_tinfo_property();
      v28 = v44;
      v27 = v47;
      if ( (tinfo_property & 0xF) == 9 )
        goto LABEL_6;
    }
    else
    {
      v45 = v28;
    }
    v43 = v28 - v27;
    if ( v28 - v27 > 0 )
    {
      if ( a4
        && !(unsigned __int8)sub_284660((unsigned int)&v48, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL), a4, a2, a5)
        && *(_DWORD *)(a4 + 8) == 48 )
      {
        copy_tinfo_t();
      }
      if ( (_BYTE)v48 && v43 >= (unsigned __int64)get_tinfo_size() )
      {
        if ( (get_tinfo_property() & 0xF) == 9 )
          goto LABEL_6;
        v38 = get_tinfo_property();
        if ( (v38 & 0xFu) > 0xA && (v38 & 0x3F) != 0x2D )
          goto LABEL_6;
        v39 = get_tinfo_size();
        if ( ((v39 - 4) & 0xFFFFFFFB) != 0 && (unsigned int)(v39 - 1) > 1 )
          goto LABEL_6;
        set_tinfo_property();
        v43 = v39;
      }
      else
      {
        v29 = get_tinfo_property();
        if ( (v29 & 0x3E) == 0 )
          goto LABEL_6;
        if ( (v29 & 0xFu) > 8 )
          goto LABEL_6;
        v30 = get_tinfo_property();
        if ( (v30 & 0x3E) == 0 || (v30 & 0xFu) > 8 || ((v43 - 4) & 0xFFFFFFFB) != 0 && (unsigned int)(v43 - 1) > 1 )
          goto LABEL_6;
        v31 = get_tinfo_property();
        v32 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
        if ( (v31 & 0xE) != 0 || (v31 & 0x30) == 0 )
          sub_32C430(v49, v32, v43, 2);
        else
          sub_32C270(v49, v32, v43);
        copy_tinfo_t();
        clear_tinfo_t();
      }
      if ( !(v45 % v43) && !(v47 % v43) )
      {
        v24 = v47 / v43;
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 145LL) )
          v24 = v45 / v43 - 1 - v47 / v43;
        goto LABEL_20;
      }
    }
LABEL_6:
    v9 = 0;
    goto LABEL_7;
  }
  v11 = *(_QWORD *)(a2 + 24);
  v12 = 0;
  v13 = *(_DWORD *)(v11 + 8);
  if ( v13 == 35 )
  {
    v33 = *(_QWORD *)(v11 + 24);
    if ( *(_DWORD *)(v33 + 8) != 61 )
    {
      v33 = *(_QWORD *)(v11 + 32);
      if ( *(_DWORD *)(v33 + 8) != 61 )
        goto LABEL_6;
    }
    if ( !v33 )
      goto LABEL_6;
    v34 = sub_255A30(*(__int64 **)(v33 + 24));
    v12 = v34;
    if ( (int)v34 != v34 || (int)v34 <= 0 )
      goto LABEL_6;
    v35 = *(_QWORD *)(v11 + 24);
    if ( v33 == v35 )
    {
      v11 = *(_QWORD *)(v11 + 32);
      v13 = *(_DWORD *)(v11 + 8);
    }
    else
    {
      v13 = *(_DWORD *)(v35 + 8);
      v11 = *(_QWORD *)(v11 + 24);
    }
  }
  if ( v13 != 48 )
    goto LABEL_6;
  v14 = *(_QWORD *)(v11 + 24);
  if ( *(_DWORD *)(v14 + 8) != 52 )
    goto LABEL_6;
  v15 = *(_QWORD *)(v14 + 24);
  v41 = v12;
  v16 = get_tinfo_property();
  if ( (v16 & 0xFu) > 0xA && (v16 & 0x3F) != 0x2D )
    goto LABEL_6;
  copy_tinfo_t();
  v17 = get_tinfo_property();
  v49[0] = v17;
  if ( !(_BYTE)v17 )
  {
    clear_tinfo_t();
    goto LABEL_6;
  }
  v18 = v48;
  v48 = v17;
  v49[0] = v18;
  clear_tinfo_t();
  v19 = get_tinfo_property();
  v20 = v41;
  if ( (v19 & 0xF) == 9 )
    goto LABEL_6;
  if ( a4 )
  {
    v21 = get_tinfo_property();
    v20 = v41;
    if ( (v21 & 0xF) == 0xA )
    {
      v40 = sub_245010(a4, a2);
      v20 = v41;
      if ( v40 )
        goto LABEL_6;
    }
  }
  v42 = v20;
  v22 = get_tinfo_size();
  if ( ((v22 - 4) & 0xFFFFFFFB) != 0 && (unsigned int)(v22 - 1) > 1 )
    goto LABEL_6;
  v23 = get_tinfo_size();
  v24 = v42;
  v43 = v22;
  v45 = v23;
  if ( v22 * (v24 + 1) > v23 )
    goto LABEL_6;
LABEL_20:
  if ( a3 )
  {
    *(_QWORD *)a3 = v15;
    v46 = v24;
    copy_tinfo_t();
    *(_DWORD *)(a3 + 24) = v45;
    *(_DWORD *)(a3 + 28) = v46;
    copy_tinfo_t();
    *(_DWORD *)(a3 + 32) = v43;
  }
  v9 = 1;
LABEL_7:
  clear_tinfo_t();
  return v9;
}

