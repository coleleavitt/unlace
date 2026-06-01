__int64 __fastcall sub_1B230(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbp
  int v6; // r15d
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  bool v13; // dl
  __int64 *v14; // rax
  const char *v15; // rdx
  __int64 idati; // rax
  const char *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  _DWORD *v22; // rsi
  __int64 *v23; // rax
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // [rsp+8h] [rbp-180h]
  __int64 v30; // [rsp+8h] [rbp-180h]
  __int64 v31; // [rsp+10h] [rbp-178h]
  __int64 v32; // [rsp+68h] [rbp-120h] BYREF
  const char *v33; // [rsp+70h] [rbp-118h] BYREF
  __int128 v34; // [rsp+78h] [rbp-110h]
  __int64 v35; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v36; // [rsp+98h] [rbp-F0h]
  __int128 v37; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-C8h]
  __int64 *v39; // [rsp+C8h] [rbp-C0h]
  __int64 v40; // [rsp+D0h] [rbp-B8h]
  __int64 v41; // [rsp+E0h] [rbp-A8h]
  __int128 v42; // [rsp+E8h] [rbp-A0h]
  __int64 v43; // [rsp+F8h] [rbp-90h]
  __int64 v44; // [rsp+100h] [rbp-88h]
  __int64 v45; // [rsp+108h] [rbp-80h]
  __int128 v46; // [rsp+110h] [rbp-78h]
  __int64 v47; // [rsp+120h] [rbp-68h]
  __int128 v48; // [rsp+128h] [rbp-60h]
  char v49; // [rsp+138h] [rbp-50h]
  unsigned __int64 v50; // [rsp+148h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v50 = __readfsqword(0x28u);
  if ( (v3 & 0x20) != 0 )
  {
    if ( (v3 & 0x40) != 0 )
    {
      v31 = *(_QWORD *)(a1 + 24);
      v29 = v31 != -1;
    }
    else
    {
      v29 = 0;
      v31 = -1;
    }
    v5 = a2;
    v6 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        create_data();
        LODWORD(v43) = 514;
        if ( v6 || !v29 )
          break;
        v41 = -1;
        v5 += 4;
        v6 = 1;
        v42 = (unsigned __int64)v31;
        op_offset_ex();
      }
      ++v6;
      v42 = (unsigned __int64)v5;
      v41 = -1;
      op_offset_ex();
      if ( v6 == 3 )
        break;
      v5 += 4;
    }
  }
  else
  {
    create_data();
  }
  sub_1B180(*(__int64 **)(a1 + 32), a2, a3, *(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 24));
  if ( *(_DWORD *)(a1 + 56) != 1 )
  {
    sub_EB20(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL), *(_QWORD *)(a3 + 32));
    auto_mark_range();
    auto_mark_range();
    ++*(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL);
    if ( (get_aflags() & 0x2000000) == 0 || (get_flags_ex() & 0x4000) == 0 )
    {
      v33 = 0;
      v7 = *(_DWORD *)(a1 + 56);
      v34 = 0;
      if ( v7 )
      {
        if ( v7 != 2 )
          goto LABEL_38;
        (*(void (__fastcall **)(_QWORD, const char **, _QWORD))(**(_QWORD **)(a1 + 32) + 512LL))(
          *(_QWORD *)(a1 + 32),
          &v33,
          *(_QWORD *)(a1 + 48));
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, const char **, _QWORD))(**(_QWORD **)(a1 + 32) + 408LL))(
          *(_QWORD *)(a1 + 32),
          &v33,
          *(_QWORD *)(a1 + 48));
      }
      if ( (unsigned __int64)v34 > 1 )
      {
        v35 = 0;
        v36 = 0;
        if ( (unsigned __int8)sub_EFE0(&v35, (__int64)&v33, a3)
          && (unsigned __int8)set_name()
          && (get_aflags() & 0x2000000) != 0 )
        {
LABEL_30:
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree();
          }
          goto LABEL_32;
        }
        copy_tinfo_t();
        v41 = 0;
        v43 = 0;
        v44 = 0;
        v45 = 0;
        v47 = 0;
        v49 = 16;
        v42 = 0;
        v46 = 0;
        v48 = 0;
        if ( !(unsigned __int8)get_tinfo_details() )
        {
LABEL_18:
          if ( v47 )
          {
            *(_QWORD *)&v48 = 0;
            qfree();
          }
          cleanup_argloc();
          clear_tinfo_t();
          v8 = v41;
          if ( v41 )
          {
            v9 = v42;
            if ( (_QWORD)v42 )
            {
              v10 = 0;
              do
              {
                v11 = (_QWORD *)(v8 + 80 * v10);
                clear_tinfo_t();
                if ( v11[5] )
                {
                  v11[6] = 0;
                  qfree();
                }
                if ( v11[2] )
                {
                  v11[3] = 0;
                  qfree();
                }
                ++v10;
                cleanup_argloc();
                v8 = v41;
              }
              while ( v9 != v10 );
            }
            *(_QWORD *)&v42 = 0;
            qfree();
          }
          clear_tinfo_t();
          goto LABEL_30;
        }
        v13 = sub_14B70((__int64 *)&v33, a3);
        v14 = *(__int64 **)(a1 + 40);
        if ( v13 )
        {
          v15 = src;
          if ( (_QWORD)v34 )
            v15 = v33;
          if ( v15 )
          {
            idati = *v14;
            *((_QWORD *)&v37 + 1) = v15;
            LOWORD(v38) = 256;
            if ( !idati )
              idati = get_idati();
            *(_QWORD *)&v37 = idati;
            if ( (unsigned __int8)create_tinfo() )
            {
              v32 = 0;
              v37 = 0;
              copy_tinfo_t();
              v38 = 0;
              copy_tinfo_t();
              LODWORD(v39) = 0;
              WORD2(v39) = 0;
              clear_tinfo_t();
              clear_tinfo_t();
              copy_tinfo_t();
              create_tinfo();
              clear_tinfo_t();
              clear_tinfo_t();
              clear_tinfo_t();
            }
            v14 = *(__int64 **)(a1 + 40);
          }
        }
        if ( *(_DWORD *)(a3 + 40) != 1 || !(_QWORD)v42 )
        {
LABEL_65:
          v20 = *v14;
          LOWORD(v38) = 256;
          *((_QWORD *)&v37 + 1) = "id";
          if ( !v20 )
            v20 = get_idati();
          *(_QWORD *)&v37 = v20;
          if ( (unsigned __int8)create_tinfo() && !(unsigned int)lexcompare_tinfo() )
          {
            v23 = *(__int64 **)(a1 + 40);
            v24 = *(_DWORD *)(a1 + 56);
            v32 = 0;
            v25 = *(_QWORD *)(a1 + 48);
            v26 = *(_QWORD *)(a1 + 32);
            v27 = *v23;
            v40 = a3;
            *((_QWORD *)&v37 + 1) = 6;
            v38 = v27;
            *(_QWORD *)&v37 = &off_3C298;
            v39 = &v32;
            if ( (unsigned int)sub_167D0(v26, (__int64)&v37, v25, v24) == 1 && (unsigned int)lexcompare_tinfo() )
              copy_tinfo_t();
            clear_tinfo_t();
          }
          if ( (unsigned __int8)create_tinfo() )
          {
            lower_type();
            apply_tinfo();
          }
          clear_tinfo_t();
          clear_tinfo_t();
          goto LABEL_18;
        }
        if ( (_QWORD)v34 )
        {
          v18 = *v14;
          v17 = v33;
          if ( !v33 )
            goto LABEL_61;
        }
        else
        {
          v17 = src;
          v18 = *v14;
          if ( !src )
            goto LABEL_61;
        }
        *((_QWORD *)&v37 + 1) = v17;
        LOWORD(v38) = 256;
        if ( !v18 )
          v18 = get_idati();
        *(_QWORD *)&v37 = v18;
        if ( (unsigned __int8)create_tinfo() )
        {
LABEL_73:
          v21 = v41;
          v22 = *(_DWORD **)(v41 + 16);
          if ( *(_QWORD *)(v41 + 32) <= 4u )
          {
            v30 = v41;
            v28 = qvector_reserve();
            v21 = v30;
            v22 = (_DWORD *)v28;
            *(_QWORD *)(v30 + 16) = v28;
          }
          *(_QWORD *)(v21 + 24) = 5;
          *v22 = 1718379891;
          *(_BYTE *)(*(_QWORD *)(v21 + 16) + 4LL) = 0;
          v32 = 0;
          v37 = 0;
          copy_tinfo_t();
          v38 = 0;
          copy_tinfo_t();
          LODWORD(v39) = 0;
          WORD2(v39) = 0;
          clear_tinfo_t();
          clear_tinfo_t();
          copy_tinfo_t();
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
LABEL_64:
          clear_tinfo_t();
          v14 = *(__int64 **)(a1 + 40);
          goto LABEL_65;
        }
        v18 = **(_QWORD **)(a1 + 40);
LABEL_61:
        *((_QWORD *)&v37 + 1) = "";
        v19 = v18;
        LOWORD(v38) = 0;
        if ( !v18 )
          v19 = get_idati();
        *(_QWORD *)&v37 = v19;
        create_tinfo();
        if ( (unsigned int)save_tinfo() )
          goto LABEL_64;
        goto LABEL_73;
      }
LABEL_38:
      apply_tinfo();
LABEL_32:
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree();
      }
    }
  }
  return 0;
}
