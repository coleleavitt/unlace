unsigned __int64 __fastcall sub_9120(__int64 a1, _DWORD *a2, __int64 *a3, char a4)
{
  unsigned __int16 *v4; // rax
  unsigned __int64 v5; // r8
  _DWORD *v6; // r9
  unsigned __int16 *v7; // rcx
  int v8; // ebp
  unsigned __int8 *v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  char *v12; // r10
  char *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 func; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v19; // ebp
  __int64 v20; // rax
  int tinfo_udt_member; // eax
  int v23; // r14d
  size_t v24; // rax
  int v25; // r13d
  int v26; // ecx
  size_t v27; // rax
  size_t v28; // r13
  char *v29; // [rsp+10h] [rbp-598h]
  size_t v30; // [rsp+18h] [rbp-590h]
  size_t v31; // [rsp+20h] [rbp-588h]
  __int64 v32; // [rsp+38h] [rbp-570h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-568h] BYREF
  __int64 v34; // [rsp+50h] [rbp-558h]
  __int128 v35; // [rsp+58h] [rbp-550h]
  __int64 v36; // [rsp+68h] [rbp-540h]
  __int128 v37; // [rsp+70h] [rbp-538h]
  _OWORD v38[3]; // [rsp+80h] [rbp-528h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-4F8h]
  int v40; // [rsp+B8h] [rbp-4F0h]
  __int64 v41; // [rsp+C0h] [rbp-4E8h]
  char v42; // [rsp+C8h] [rbp-4E0h]
  __int128 v43; // [rsp+D0h] [rbp-4D8h] BYREF
  void *v44; // [rsp+E0h] [rbp-4C8h] BYREF
  __int128 v45; // [rsp+E8h] [rbp-4C0h]
  __int64 v46; // [rsp+F8h] [rbp-4B0h]
  __int128 v47; // [rsp+100h] [rbp-4A8h]
  _OWORD v48[3]; // [rsp+110h] [rbp-498h] BYREF
  __int64 v49; // [rsp+140h] [rbp-468h]
  int v50; // [rsp+148h] [rbp-460h]
  __int64 v51; // [rsp+150h] [rbp-458h]
  char v52; // [rsp+158h] [rbp-450h]
  char s[1032]; // [rsp+160h] [rbp-448h] BYREF
  unsigned __int64 v54; // [rsp+568h] [rbp-40h]

  v4 = (unsigned __int16 *)a3[2];
  v5 = a3[3];
  v54 = __readfsqword(0x28u);
  v6 = a2;
  if ( a4 )
  {
    v7 = v4 + 2;
    if ( v5 < (unsigned __int64)(v4 + 2) )
      goto LABEL_55;
    v8 = *(_DWORD *)v4;
  }
  else
  {
    v7 = v4 + 1;
    if ( v5 < (unsigned __int64)(v4 + 1) )
      goto LABEL_55;
    v8 = *v4;
  }
  a3[2] = (__int64)v7;
  if ( *(_DWORD *)(a1 + 132) == 11 )
  {
    v9 = (unsigned __int8 *)(v7 + 2);
    if ( v5 < (unsigned __int64)v9 )
      goto LABEL_55;
  }
  else
  {
    v9 = (unsigned __int8 *)(v7 + 1);
    if ( v5 < (unsigned __int64)v9 )
      goto LABEL_55;
  }
  a2 = v9 + 1;
  if ( v5 < (unsigned __int64)(v9 + 1) )
  {
    a3[2] = (__int64)v9;
    goto LABEL_55;
  }
  a3[2] = (__int64)a2;
  v10 = *v9;
  v11 = (unsigned int)(v5 - (_DWORD)a2);
  if ( v11 > v10 )
    v11 = v10;
  v12 = (char *)a2 + v11;
  if ( __CFADD__(v11, a2) || v5 < (unsigned __int64)v12 )
LABEL_55:
    sub_3660(a1, a2);
  v13 = s;
  if ( (unsigned int)v11 >= 8 )
  {
    qmemcpy(s, a2, 8 * (v11 >> 3));
    a2 += 2 * (v11 >> 3);
    v13 = &s[8 * (v11 >> 3)];
  }
  v14 = 0;
  if ( (v11 & 4) != 0 )
  {
    *(_DWORD *)v13 = *a2;
    v14 = 4;
  }
  if ( (v11 & 2) != 0 )
  {
    *(_WORD *)&v13[v14] = *(_WORD *)((char *)a2 + v14);
    v14 += 2;
  }
  if ( (v11 & 1) != 0 )
  {
    a2 = (_DWORD *)*((unsigned __int8 *)a2 + v14);
    v13[v14] = (char)a2;
  }
  s[v11] = 0;
  v15 = *a3;
  a3[2] = (__int64)v12;
  if ( !*(_BYTE *)(v15 + 16) )
    v8 = (__int16)v8;
  func = get_func(v6, a2, a3, v14);
  if ( func )
  {
    v32 = 0;
    get_func_frame(&v32, func);
    v17 = v32;
    if ( (_BYTE)v32 )
    {
      v18 = *(_QWORD *)(func + 32);
      v19 = v18 + v8;
      if ( (*(_BYTE *)(func + 16) & 0x10) != 0 )
      {
        v20 = 8LL * (unsigned int)v19;
        if ( v19 >= 0 )
        {
LABEL_25:
          v33[0] = v20;
          v39 = 1;
          v33[1] = 0;
          v34 = 0;
          v36 = 0;
          v40 = -1;
          v41 = 0;
          v42 = 0;
          v35 = 0;
          v37 = 0;
          v38[0] = 0;
          tinfo_udt_member = find_tinfo_udt_member(v33, v17, 0);
          if ( tinfo_udt_member == -1 )
          {
            if ( *(_DWORD *)s == 1836216166 && *(_DWORD *)&s[3] == 7102829 )
            {
              v23 = 1;
              v24 = strlen(s);
              v29 = &s[v24];
              v30 = 1024 - v24;
              do
              {
                v26 = v23++;
                qsnprintf(v29, v30, "_%d", v26);
                v44 = nullptr;
                v46 = 0;
                v49 = 1;
                v50 = -1;
                v51 = 0;
                v52 = 0;
                v43 = 0;
                v45 = 0;
                v47 = 0;
                v48[0] = 0;
                v27 = strlen(s);
                v28 = v27;
                if ( v27 )
                {
                  v31 = v27 + 1;
                  v44 = (void *)qvector_reserve(&v44, 0, v27 + 1, 1);
                  *(_QWORD *)&v45 = v31;
                  memmove(v44, s, v28);
                  *((_BYTE *)v44 + v28) = 0;
                }
                v25 = find_tinfo_udt_member(&v43, v32, 3);
                clear_tinfo_t(v48);
                if ( v46 )
                {
                  *(_QWORD *)&v47 = 0;
                  qfree(v46);
                }
                if ( v44 )
                {
                  *(_QWORD *)&v45 = 0;
                  qfree(v44);
                }
              }
              while ( v25 != -1 );
            }
            *(_QWORD *)&v43 = 17;
            add_frame_member(func, s, (unsigned int)v19, &v43, 0, 0);
            clear_tinfo_t(&v43);
          }
          else if ( (v41 & 0x300000000000LL) == 0 )
          {
            set_tinfo_property4(&v32, 11, tinfo_udt_member, s, 0, 0);
          }
          clear_tinfo_t(v38);
          if ( v36 )
          {
            *(_QWORD *)&v37 = 0;
            qfree(v36);
          }
          if ( v34 )
          {
            *(_QWORD *)&v35 = 0;
            qfree(v34);
          }
          goto LABEL_32;
        }
      }
      else
      {
        v19 += *(unsigned __int16 *)(func + 40);
        v20 = 8LL * (unsigned int)v19;
        if ( v19 >= 0 )
          goto LABEL_25;
      }
      if ( (unsigned __int8)set_frame_size(func, v18 - v19, *(unsigned __int16 *)(func + 40), *(_QWORD *)(func + 48)) )
      {
        v17 = v32;
        v20 = 0;
        v19 = 0;
        goto LABEL_25;
      }
    }
LABEL_32:
    clear_tinfo_t(&v32);
  }
  return v54 - __readfsqword(0x28u);
}

