__int64 __fastcall sub_289E50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // r12
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r13
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // al
  int v19; // ecx
  char v20; // al
  int v21; // ebx
  int v22; // eax
  int v23; // ecx
  unsigned __int64 v24; // rax
  int tinfo_size; // eax
  int v26; // ecx
  int v27; // r8d
  char v28; // al
  char v29; // al
  char v30; // al
  __int64 v31; // rsi
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  char tinfo_property; // al
  char v37; // al
  int v38; // ebx
  char v39; // al
  int v40; // [rsp+8h] [rbp-70h]
  int v41; // [rsp+8h] [rbp-70h]
  signed int v42; // [rsp+8h] [rbp-70h]
  int v43; // [rsp+8h] [rbp-70h]
  int v44; // [rsp+10h] [rbp-68h]
  int v45; // [rsp+14h] [rbp-64h]
  int v46; // [rsp+14h] [rbp-64h]
  __int64 v47; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v48[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *(_DWORD *)(a2 + 8);
  v48[1] = __readfsqword(0x28u);
  v47 = 0;
  if ( v5 != 51 )
  {
    if ( v5 != 33 || a4 && (unsigned __int8)sub_240410(a4, a2) )
      goto LABEL_6;
    v7 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v7 + 8) != 61 )
      goto LABEL_6;
    v24 = sub_250E30(*(__int64 **)(v7 + 24));
    if ( (v24 & 7) != 0 )
      goto LABEL_6;
    v14 = *(_QWORD *)(a2 + 24);
    v46 = v24 >> 3;
    tinfo_size = get_tinfo_size();
    v26 = v46;
    v27 = tinfo_size;
    if ( *(_DWORD *)(v14 + 8) == 48
      && (v43 = tinfo_size, v35 = get_tinfo_size(), v27 = v43, v26 = v46, v44 = v35, v43 <= v35) )
    {
      v14 = *(_QWORD *)(v14 + 24);
      tinfo_property = get_tinfo_property();
      v27 = v43;
      v26 = v46;
      if ( (tinfo_property & 0xF) == 9 )
        goto LABEL_6;
    }
    else
    {
      v44 = v27;
    }
    v42 = v27 - v26;
    if ( v27 - v26 > 0 )
    {
      if ( a4
        && !(unsigned __int8)sub_27FA60((unsigned int)&v47, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL), a4, a2)
        && *(_DWORD *)(a4 + 8) == 48 )
      {
        copy_tinfo_t();
      }
      if ( (_BYTE)v47 && v42 >= (unsigned __int64)get_tinfo_size() )
      {
        if ( (get_tinfo_property() & 0xF) == 9 )
          goto LABEL_6;
        v37 = get_tinfo_property();
        if ( (v37 & 0xFu) > 0xA && (v37 & 0x3F) != 0x2D )
          goto LABEL_6;
        v38 = get_tinfo_size();
        if ( ((v38 - 4) & 0xFFFFFFFB) != 0 && (unsigned int)(v38 - 1) > 1 )
          goto LABEL_6;
        set_tinfo_property();
        v42 = v38;
      }
      else
      {
        v28 = get_tinfo_property();
        if ( (v28 & 0x3E) == 0 )
          goto LABEL_6;
        if ( (v28 & 0xFu) > 8 )
          goto LABEL_6;
        v29 = get_tinfo_property();
        if ( (v29 & 0x3E) == 0 || (v29 & 0xFu) > 8 || ((v42 - 4) & 0xFFFFFFFB) != 0 && (unsigned int)(v42 - 1) > 1 )
          goto LABEL_6;
        v30 = get_tinfo_property();
        v31 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
        if ( (v30 & 0xE) != 0 || (v30 & 0x30) == 0 )
          sub_327180(v48, v31, (unsigned int)v42, 2);
        else
          sub_326FC0(v48, v31, (unsigned int)v42);
        copy_tinfo_t();
        clear_tinfo_t();
      }
      if ( !(v44 % v42) && !(v46 % v42) )
      {
        v23 = v46 / v42;
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 145LL) )
          v23 = v44 / v42 - 1 - v46 / v42;
        goto LABEL_20;
      }
    }
LABEL_6:
    v8 = 0;
    goto LABEL_7;
  }
  v10 = *(_QWORD *)(a2 + 24);
  v11 = 0;
  v12 = *(_DWORD *)(v10 + 8);
  if ( v12 == 35 )
  {
    v32 = *(_QWORD *)(v10 + 24);
    if ( *(_DWORD *)(v32 + 8) != 61 )
    {
      v32 = *(_QWORD *)(v10 + 32);
      if ( *(_DWORD *)(v32 + 8) != 61 )
        goto LABEL_6;
    }
    if ( !v32 )
      goto LABEL_6;
    v33 = sub_250E30(*(__int64 **)(v32 + 24));
    v11 = v33;
    if ( (int)v33 != v33 || (int)v33 <= 0 )
      goto LABEL_6;
    v34 = *(_QWORD *)(v10 + 24);
    if ( v32 == v34 )
    {
      v10 = *(_QWORD *)(v10 + 32);
      v12 = *(_DWORD *)(v10 + 8);
    }
    else
    {
      v12 = *(_DWORD *)(v34 + 8);
      v10 = *(_QWORD *)(v10 + 24);
    }
  }
  if ( v12 != 48 )
    goto LABEL_6;
  v13 = *(_QWORD *)(v10 + 24);
  if ( *(_DWORD *)(v13 + 8) != 52 )
    goto LABEL_6;
  v14 = *(_QWORD *)(v13 + 24);
  v40 = v11;
  v15 = get_tinfo_property();
  if ( (v15 & 0xFu) > 0xA && (v15 & 0x3F) != 0x2D )
    goto LABEL_6;
  copy_tinfo_t();
  v16 = get_tinfo_property();
  v48[0] = v16;
  if ( !(_BYTE)v16 )
  {
    clear_tinfo_t();
    goto LABEL_6;
  }
  v17 = v47;
  v47 = v16;
  v48[0] = v17;
  clear_tinfo_t();
  v18 = get_tinfo_property();
  v19 = v40;
  if ( (v18 & 0xF) == 9 )
    goto LABEL_6;
  if ( a4 )
  {
    v20 = get_tinfo_property();
    v19 = v40;
    if ( (v20 & 0xF) == 0xA )
    {
      v39 = sub_240410(a4, a2);
      v19 = v40;
      if ( v39 )
        goto LABEL_6;
    }
  }
  v41 = v19;
  v21 = get_tinfo_size();
  if ( ((v21 - 4) & 0xFFFFFFFB) != 0 && (unsigned int)(v21 - 1) > 1 )
    goto LABEL_6;
  v22 = get_tinfo_size();
  v23 = v41;
  v42 = v21;
  v44 = v22;
  if ( v21 * (v23 + 1) > v22 )
    goto LABEL_6;
LABEL_20:
  if ( a3 )
  {
    *(_QWORD *)a3 = v14;
    v45 = v23;
    copy_tinfo_t();
    *(_DWORD *)(a3 + 24) = v44;
    *(_DWORD *)(a3 + 28) = v45;
    copy_tinfo_t();
    *(_DWORD *)(a3 + 32) = v42;
  }
  v8 = 1;
LABEL_7:
  clear_tinfo_t();
  return v8;
}

