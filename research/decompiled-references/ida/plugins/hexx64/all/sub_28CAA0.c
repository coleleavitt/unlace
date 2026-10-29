__int64 __fastcall sub_28CAA0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ebp
  __int64 v10; // rax
  int v11; // edx
  int v12; // esi
  __int64 v13; // r12
  char v14; // al
  _QWORD *v15; // rdx
  int v16; // r12d
  __int64 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r12
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  int v24; // r13d
  _QWORD *v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rsi
  _QWORD *v36; // [rsp+0h] [rbp-108h]
  __int64 v37; // [rsp+8h] [rbp-100h]
  __int64 v38; // [rsp+8h] [rbp-100h]
  __int64 v39; // [rsp+10h] [rbp-F8h]
  __int64 v40; // [rsp+20h] [rbp-E8h]
  __int64 v41; // [rsp+30h] [rbp-D8h]
  unsigned __int8 tinfo_details; // [rsp+3Eh] [rbp-CAh]
  char v43; // [rsp+3Fh] [rbp-C9h]
  _QWORD v44[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A8h]
  __int128 v47; // [rsp+68h] [rbp-A0h]
  __int64 v48; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-88h]
  __int64 v50; // [rsp+88h] [rbp-80h]
  __int128 v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+A0h] [rbp-68h]
  __int128 v53; // [rsp+A8h] [rbp-60h]
  char v54; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v55; // [rsp+C8h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a1 + 72);
  v55 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v4 + 112);
  v7 = *(_DWORD *)(v3 + 8);
  if ( v7 == 51 )
  {
    while ( *(_DWORD *)(v6 + 84) == *(_DWORD *)(v3 + 40) )
    {
      v3 = *(_QWORD *)(v3 + 24);
      v7 = *(_DWORD *)(v3 + 8);
      if ( v7 != 51 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  if ( v7 == 48 )
  {
    v10 = *(_QWORD *)(v3 + 24);
    v11 = *(_DWORD *)(v10 + 8);
    v39 = v10;
    if ( v11 == 51 )
    {
      v12 = *(_DWORD *)(v6 + 84);
      while ( v12 == *(_DWORD *)(v10 + 40) )
      {
        v10 = *(_QWORD *)(v10 + 24);
        v11 = *(_DWORD *)(v10 + 8);
        if ( v11 != 51 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      v8 = 0;
      if ( v11 == 48 )
        return v8;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    v44[0] = 0;
    v40 = v13;
    v14 = sub_284900((_QWORD *)a1, (int)v44, a2, a3);
    v15 = v44;
    if ( !v14 )
    {
      v15 = nullptr;
      if ( *(_DWORD *)(v13 + 8) == 48 )
        v15 = (_QWORD *)(v13 + 48);
    }
    v8 = sub_2801E0(v39, v3 + 48, (__int64)v15);
    if ( (_BYTE)v8 )
    {
      v8 = 0;
LABEL_15:
      clear_tinfo_t();
      return v8;
    }
    v46 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v52 = 0;
    v54 = 16;
    v44[1] = 0;
    v47 = 0;
    v51 = 0;
    v53 = 0;
    copy_tinfo_t();
    v16 = 0;
    while ( (get_tinfo_property() & 0xF) == 0xA )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      ++v16;
      clear_tinfo_t();
    }
    tinfo_details = get_tinfo_details();
    if ( tinfo_details )
    {
      clear_tinfo_t();
      if ( v16 >= 0 )
      {
        v17 = v46;
        v37 = v46 + 80 * v47;
        if ( v37 != v46 )
        {
          while ( !(unsigned int)verify_tinfo() )
          {
            v17 += 80;
            if ( v17 == v37 )
              goto LABEL_40;
          }
          goto LABEL_29;
        }
LABEL_40:
        if ( (get_tinfo_property() & 0x3F) == 1 || !(unsigned int)verify_tinfo() )
        {
          if ( *(_DWORD *)(v40 + 8) == 59 )
          {
            v41 = a2 + 48;
            if ( (get_tinfo_property() & 0x3F) != 1 && !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72)) )
              goto LABEL_29;
          }
          else
          {
            v41 = a2 + 48;
          }
          tinfo_property = 0;
          copy_tinfo_t();
          v43 = sub_29D090(a2, v41);
          sub_255850((__int64 *)v3, v39, 0.0);
          sub_2804B0(*(_QWORD *)(a1 + 72), *(_QWORD *)(a2 + 24), 0.0);
          sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, 0.0);
          v24 = v47;
          v25 = *(_QWORD **)(a2 + 32);
          v36 = v25;
          if ( (int)v47 != v25[1] )
          {
            if ( (unsigned __int64)(int)v47 >= v25[1] )
              goto LABEL_68;
            v26 = v54 & 0xF0;
            if ( (v54 & 0xF0) == 0xC0 )
              v26 = HIDWORD(v48);
            if ( v26 <= 0x10 )
              v26 = getinf();
            v27 = v26 & 0xFFFFFFF0;
            if ( v27 != 64 && v27 != 208 )
            {
LABEL_68:
              if ( !under_debugger )
                sub_383060(0xC5BEu, 0.0);
              BUG();
            }
            v36 = *(_QWORD **)(a2 + 32);
          }
          if ( v24 > 0 )
          {
            v28 = (unsigned int)(v24 - 1);
            v29 = v46;
            v30 = 0;
            v31 = 0;
            v38 = 8 * (9 * v28 + 9);
            do
            {
              v32 = v31 + *v36;
              sub_246B40(v32, *(_QWORD *)(a1 + 72), (_QWORD *)(v29 + v30 + 64), 0.0);
              v29 = v46;
              v33 = *(_QWORD *)(v32 + 64);
              v31 += 72;
              v34 = v46 + v30;
              v30 += 80;
              *(_QWORD *)(v32 + 64) = *(_QWORD *)(v34 + 64);
              *(_QWORD *)(v34 + 64) = v33;
            }
            while ( v31 != v38 );
          }
          if ( sub_256740(a2, v40) )
          {
            copy_tinfo_t();
            sub_246B40(a2, *(_QWORD *)(a1 + 72), &tinfo_property, 0.0);
          }
          v35 = tinfo_property;
          if ( ((unsigned int)lexcompare_tinfo() || v43 != (unsigned __int8)sub_29D090(a2, v35))
            && (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (__m128)0LL) )
          {
            *(_DWORD *)(a1 + 8) |= 8u;
          }
          clear_tinfo_t();
          v8 = tinfo_details;
        }
      }
    }
    else
    {
      clear_tinfo_t();
    }
LABEL_29:
    if ( v52 )
    {
      *(_QWORD *)&v53 = 0;
      qfree(v52);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v18 = v46;
    if ( v46 )
    {
      v19 = v47;
      if ( (_QWORD)v47 )
      {
        v20 = 0;
        do
        {
          v21 = (_QWORD *)(v18 + 80 * v20);
          clear_tinfo_t();
          v22 = v21[5];
          if ( v22 )
          {
            v21[6] = 0;
            qfree(v22);
          }
          v23 = v21[2];
          if ( v23 )
          {
            v21[3] = 0;
            qfree(v23);
          }
          ++v20;
          cleanup_argloc();
          v18 = v46;
        }
        while ( v19 != v20 );
      }
      *(_QWORD *)&v47 = 0;
      qfree(v18);
    }
    goto LABEL_15;
  }
  return 0;
}

