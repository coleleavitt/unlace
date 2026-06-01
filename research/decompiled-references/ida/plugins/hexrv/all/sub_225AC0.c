unsigned __int64 __fastcall sub_225AC0(__int64 a1, int *a2, __int64 a3, int a4)
{
  __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // al
  int v13; // eax
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // r13
  int v17; // r8d
  int v18; // r13d
  int v19; // eax
  int v20; // eax
  char tinfo_property; // al
  int v23; // edi
  int v24; // esi
  int v25; // esi
  char v26; // al
  int v27; // r12d
  char v28; // al
  char v29; // al
  int v30; // r8d
  int v31; // ecx
  char v32; // al
  char v33; // [rsp+0h] [rbp-68h]
  int tinfo_size; // [rsp+0h] [rbp-68h]
  int v35; // [rsp+0h] [rbp-68h]
  int v36; // [rsp+0h] [rbp-68h]
  __int64 v37; // [rsp+8h] [rbp-60h]
  int v38; // [rsp+8h] [rbp-60h]
  int v39; // [rsp+8h] [rbp-60h]
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v8 = *(_QWORD *)a3 + 24LL;
  if ( ((*(_BYTE *)(a1 + 201) & 4) != 0 || (get_tinfo_property() & 0x2F) == 0xD) && (get_tinfo_property() & 0x2F) != 0xD )
    return v40 - __readfsqword(0x28u);
  if ( !*(_DWORD *)(v8 + 52) && *(_QWORD *)(v8 + 32) == *(_QWORD *)(a1 + 176) )
  {
    tinfo_property = get_tinfo_property();
    if ( !tinfo_property || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0 )
      goto LABEL_89;
    get_tinfo_property();
    v33 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v33 & 0x3F) == 0x30 )
      goto LABEL_89;
    clear_tinfo_t();
  }
  v9 = *(_DWORD *)(v8 + 56);
  if ( (v9 & 1) != 0 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)a3 + 88LL);
    v11 = v10 + 40LL * *(_QWORD *)(*(_QWORD *)a3 + 96LL);
    if ( v11 == v10 )
      return v40 - __readfsqword(0x28u);
    while ( **(_DWORD **)(v10 + 16) == 62 )
    {
      v10 += 40;
      if ( v10 == v11 )
        return v40 - __readfsqword(0x28u);
    }
  }
  if ( (v9 & 0x400) != 0
    || *(_DWORD *)(a1 + 196) != *(_DWORD *)(v8 + 52)
    || (v9 & 2) == 0
    || (v9 & 0x1018) != 0
    || *(_QWORD *)(v8 + 40) != -1
    || (v12 = get_tinfo_property(), (v12 & 0xFu) > 0xA) && (v12 & 0x3F) != 0x2D )
  {
    if ( (unsigned __int8)*(_QWORD *)(v8 + 24) )
    {
      if ( (get_tinfo_property() & 0xF) == 0xB )
        get_tinfo_property();
      else
        copy_tinfo_t();
      tinfo_size = get_tinfo_size();
      clear_tinfo_t();
      v13 = tinfo_size;
    }
    else
    {
      if ( (*(_BYTE *)(v8 + 56) & 1) == 0 )
        return v40 - __readfsqword(0x28u);
      v13 = *(_DWORD *)(v8 + 52);
    }
    v14 = 0;
    if ( v13 >= 0 )
      v14 = v13;
    if ( v13 > 0 && a4 >= v14 )
    {
      v15 = *(_QWORD *)(v8 + 32);
      v16 = *(_QWORD *)(a1 + 176);
      v17 = v15 - v16;
      if ( (_DWORD)v15 == (_DWORD)v16 )
      {
        if ( (*(_BYTE *)(v8 + 57) & 4) != 0 )
        {
LABEL_26:
          v18 = v14;
LABEL_27:
          *a2 = v18;
          v19 = *(_DWORD *)(a1 + 200);
          if ( (v19 & 2) != 0
            && (v19 & 0x1418) == 0
            && *(_QWORD *)(a1 + 184) == -1
            && ((v28 = get_tinfo_property(), (v28 & 0xFu) <= 0xA) || (v28 & 0x3F) == 0x2D) )
          {
            v20 = 0;
          }
          else if ( (unsigned __int8)*(_QWORD *)(a1 + 168) )
          {
            if ( (get_tinfo_property() & 0xF) == 0xB )
              get_tinfo_property();
            else
              copy_tinfo_t();
            v27 = get_tinfo_size();
            clear_tinfo_t();
            v20 = 0;
            if ( v27 >= 0 )
              v20 = v27;
          }
          else
          {
            v20 = 0;
            if ( (*(_BYTE *)(a1 + 200) & 1) != 0 )
            {
              v20 = *(_DWORD *)(a1 + 196);
              if ( v20 < 0 )
                v20 = 0;
            }
          }
          if ( v18 != v20 || (*(_BYTE *)(v8 + 57) & 4) != 0 )
            goto LABEL_34;
          if ( (get_tinfo_property() & 0xF) == 0xB )
            get_tinfo_property();
          else
            copy_tinfo_t();
          v26 = get_tinfo_property();
          if ( (v26 & 0xE) == 0 && (v26 & 0x30) != 0 )
          {
            clear_tinfo_t();
LABEL_34:
            if ( v18 != v14 && (get_tinfo_property() & 0xF) == 0xB )
              get_tinfo_property();
            else
              copy_tinfo_t();
            copy_tinfo_t();
            clear_tinfo_t();
            if ( (*(_BYTE *)(v8 + 57) & 4) != 0 )
              *(_DWORD *)(a1 + 200) |= 0x400u;
            return v40 - __readfsqword(0x28u);
          }
LABEL_89:
          clear_tinfo_t();
          return v40 - __readfsqword(0x28u);
        }
        v37 = *(_QWORD *)(v8 + 32);
        v29 = get_tinfo_property();
        v17 = 0;
        LODWORD(v15) = v37;
        if ( (v29 & 0x2F) == 0xD )
        {
          if ( *(_DWORD *)(a1 + 196) == v14 )
            goto LABEL_26;
          v23 = *a2;
          if ( *a2 != v14 )
            goto LABEL_80;
        }
        else
        {
          v23 = *a2;
          if ( v14 != *a2 )
            goto LABEL_80;
        }
      }
      else
      {
        v23 = *a2;
        if ( *a2 != v14 )
          goto LABEL_48;
      }
      v38 = v15;
      v35 = v17;
      if ( (get_tinfo_property() & 0xF) == 0xB )
      {
        get_tinfo_property();
        v30 = v35;
        v31 = v38;
      }
      else
      {
        copy_tinfo_t();
        v31 = v38;
        v30 = v35;
      }
      v39 = v31;
      v36 = v30;
      v32 = get_tinfo_property();
      if ( (v32 & 0xE) == 0 && (v32 & 0x30) != 0 )
      {
        clear_tinfo_t();
        goto LABEL_26;
      }
      clear_tinfo_t();
      v23 = *a2;
      v17 = v36;
      LODWORD(v15) = v39;
LABEL_48:
      if ( v17 % v14 )
      {
        v24 = v16 + *(_DWORD *)(a1 + 196);
        v18 = 1;
        v25 = v24 - v15;
        while ( v18 < v25 && !(v17 % (2 * v18)) )
          v18 *= 2;
LABEL_53:
        if ( v23 && v18 <= v23 )
          return v40 - __readfsqword(0x28u);
        goto LABEL_27;
      }
LABEL_80:
      v18 = v14;
      goto LABEL_53;
    }
  }
  return v40 - __readfsqword(0x28u);
}

