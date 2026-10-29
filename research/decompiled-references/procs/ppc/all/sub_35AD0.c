__int64 __fastcall sub_35AD0(__int64 a1, __int64 *a2, __int64 *a3, char **a4)
{
  int v8; // ebp
  __int64 result; // rax
  __int64 v10; // rbp
  __int16 dword; // r15
  int v12; // eax
  unsigned int v13; // ecx
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  char *v21; // rbp
  const char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // r15d
  __int64 v26; // rax
  __int64 qword; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  int flags; // ebp
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r14
  const char *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rdx
  char v38; // al
  __int64 v39; // r12
  __int64 v40; // rsi
  size_t v41; // rdx
  char *v42; // rsi
  __int64 v43; // r13
  size_t v44; // r14
  char *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v48; // rbp
  __int16 v49; // r15
  __int64 v50; // rax
  char v51; // dl
  __int64 v52; // r15
  __int64 v53; // rbp
  __int64 v54; // rax
  __int64 v55; // rbp
  __int64 v56; // rax
  __int64 v57; // rbp
  __int64 segm_name; // rax
  __int64 v59; // rbp
  __int64 v60; // rax
  __int64 v61; // rbp
  __int64 v62; // rax
  __int64 v63; // rax
  const char *v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rdx
  char *v67; // rbx
  __int64 v68; // rdi
  __int64 v69; // [rsp+0h] [rbp-78h]
  __int16 v70; // [rsp+0h] [rbp-78h]
  __int64 v71; // [rsp+10h] [rbp-68h] BYREF
  __int64 v72; // [rsp+18h] [rbp-60h] BYREF
  char *s1; // [rsp+20h] [rbp-58h] BYREF
  __int128 v74; // [rsp+28h] [rbp-50h]
  unsigned __int64 v75; // [rsp+38h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  v8 = sub_4E2D0(a1);
  switch ( v8 )
  {
    case 1:
      if ( !(unsigned __int8)sub_31740(a2, (__int64)&unk_7A200, 0x18u)
        && !(unsigned __int8)sub_31740(a2, (__int64)&unk_7A1E0, 0x18u) )
      {
        return 0;
      }
      v37 = *a2 + 8;
      goto LABEL_49;
    case 2:
      if ( !(unsigned __int8)sub_31740(a2, (__int64)&unk_7A1C0, 0x18u) )
        return 0;
      v37 = *a2 + 4;
LABEL_49:
      if ( !(unsigned __int8)sub_5B600(a1, &v71, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v37, 12, 0) )
        return 0;
      v38 = is_loaded(v71);
      v17 = (char *)v71;
      if ( !v38 )
        goto LABEL_51;
      v51 = segtype(v71);
      v26 = v71;
      if ( v51 == 1 )
        goto LABEL_79;
      goto LABEL_21;
    case 3:
    case 7:
      if ( (unsigned __int8)sub_31740(a2, (__int64)&unk_7A1B0, 0x10u) )
      {
        v57 = *a2;
        v71 = (int)((unsigned int)get_dword(*a2) << 16);
        v71 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v71 + (__int16)get_dword(v57 + 4));
        v17 = (char *)v71;
        if ( !(unsigned __int8)is_loaded(v71) )
          goto LABEL_51;
        s1 = nullptr;
        v74 = 0;
        v22 = (const char *)getseg(v71);
        segm_name = get_segm_name(&s1, v22, 1);
        v21 = s1;
        if ( segm_name > 0 )
        {
          if ( (_QWORD)v74 )
          {
            v22 = ".plt";
            if ( !strcmp(s1, ".plt") )
            {
              if ( !v21 )
                goto LABEL_20;
              goto LABEL_146;
            }
          }
        }
        if ( !v21 )
          goto LABEL_120;
      }
      else
      {
        if ( v8 != 3 || !(unsigned __int8)sub_31740(a2, (__int64)&unk_7A198, 0xCu) )
          return 0;
        v52 = *a2;
        v53 = sub_357D0(a1, *a2);
        if ( v53 == -1 )
          goto LABEL_108;
        v71 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v53 + (__int16)get_dword(v52));
        v17 = (char *)v71;
        if ( !(unsigned __int8)is_loaded(v71) )
          goto LABEL_51;
        s1 = nullptr;
        v74 = 0;
        v22 = (const char *)getseg(v71);
        v54 = get_segm_name(&s1, v22, 1);
        v21 = s1;
        if ( v54 > 0 )
        {
          if ( (_QWORD)v74 )
          {
            v22 = ".plt";
            if ( !strcmp(s1, ".plt") )
            {
              if ( !v21 )
                goto LABEL_20;
              goto LABEL_146;
            }
          }
        }
        if ( !v21 )
          goto LABEL_120;
      }
      goto LABEL_119;
    case 4:
      if ( (unsigned __int8)sub_31740(a2, (__int64)&unk_7A180, 0x14u) )
      {
        v10 = *a2;
        dword = get_dword(*a2 + 4);
        if ( dword + 8 != (__int16)get_dword(v10 + 12) )
          return 0;
      }
      else if ( (unsigned __int8)sub_31740(a2, (__int64)&unk_7A160, 0x1Cu) )
      {
        v10 = *a2;
        dword = get_dword(*a2 + 4);
        if ( (__int16)get_dword(v10 + 12) != dword + 8 )
          return 0;
        v12 = get_dword(v10 + 24);
        v13 = v12 & 0x3FFFFFC | 0xFC000000;
        v14 = (v12 & 0x2000000) == 0;
        v15 = v12 & 0x3FFFFFC;
        if ( !v14 )
          v15 = v13;
        v69 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v15 + v10 + 24);
        auto_mark_range(v69, v69 + 1, 20);
        auto_mark_range(v69, v69 + 1, 30);
      }
      else
      {
        if ( !(unsigned __int8)sub_31740(a2, (__int64)&unk_7A140, 0x18u) )
          return 0;
        v10 = *a2;
        v70 = get_dword(*a2 + 4);
        dword = v70;
        if ( (__int16)get_dword(v10 + 12) != v70 + 16 || (__int16)get_dword(v10 + 16) != v70 + 8 )
          return 0;
      }
      v16 = sub_357D0(a1, v10);
      if ( v16 == -1 )
        goto LABEL_108;
      v71 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v16 + dword);
      v17 = (char *)v71;
      if ( !(unsigned __int8)is_loaded(v71) )
        goto LABEL_51;
      s1 = nullptr;
      v74 = 0;
      v18 = getseg(v71);
      v19 = get_segm_name(&s1, v18, 1);
      v21 = s1;
      if ( v19 <= 0 )
      {
        if ( s1 )
        {
          *(_QWORD *)&v74 = 0;
          qfree(s1, v18, v20, 0.0);
        }
        goto LABEL_120;
      }
      if ( !(_QWORD)v74 )
      {
        if ( s1 )
          qfree(s1, v18, v20, 0.0);
        goto LABEL_120;
      }
      v22 = ".plt";
      if ( !strcmp(s1, ".plt") )
      {
        if ( !v21 )
          goto LABEL_20;
        goto LABEL_146;
      }
      v25 = strcmp(v21, ".opd");
      if ( v21 )
      {
        *(_QWORD *)&v74 = 0;
        qfree(v21, ".opd", v24, 0.0);
      }
      if ( v25 )
        goto LABEL_120;
      goto LABEL_20;
    case 5:
      if ( !(unsigned __int8)sub_31740(a2, (__int64)&unk_7A100, 0x20u) )
      {
        if ( (unsigned __int8)sub_31740(a2, (__int64)&unk_7A0E0, 0x20u) )
        {
          v55 = *a2;
          v71 = (int)((unsigned int)get_dword(*a2 + 12) << 16);
          v71 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v71 + (__int16)get_dword(v55 + 20));
          v17 = (char *)v71;
          if ( (unsigned __int8)is_loaded(v71) )
          {
            s1 = nullptr;
            v74 = 0;
            v22 = (const char *)getseg(v71);
            v56 = get_segm_name(&s1, v22, 1);
            v21 = s1;
            if ( v56 > 0 )
            {
              if ( (_QWORD)v74 )
              {
                v22 = "__la_symbol_ptr";
                if ( !strcmp(s1, "__la_symbol_ptr") )
                {
                  if ( !v21 )
                    goto LABEL_20;
LABEL_146:
                  *(_QWORD *)&v74 = 0;
                  qfree(v21, v22, v23, 0.0);
LABEL_20:
                  v26 = v71;
LABEL_21:
                  *a4 = (char *)v26;
                  if ( (unsigned __int8)getinf_flag(3, 4) )
                    qword = get_qword(v71);
                  else
                    qword = (unsigned int)get_dword(v71);
LABEL_53:
                  *a3 = qword;
                  if ( (unsigned int)sub_4E2D0(a1) != 1 && (unsigned int)sub_4E2D0(a1) != 2 )
                    return 1;
                  v39 = *a2;
                  if ( (get_flags_ex(v39, 4) & 0x4000) != 0 )
                    goto LABEL_70;
                  v40 = *a3;
                  s1 = nullptr;
                  v74 = 0;
                  if ( v40 == -1 || get_ea_name(&s1, v40, 0, 0) <= 0 )
                  {
                    v45 = *a4;
                    if ( get_ea_name(&s1, *a4, 0, 0) <= 0 )
                    {
LABEL_68:
                      if ( s1 )
                      {
                        *(_QWORD *)&v74 = 0;
                        qfree(s1, v45, v46, 0.0);
                      }
LABEL_70:
                      v47 = *(_QWORD *)(a1 + 120);
                      LOBYTE(s1) = 7;
                      netnode_supset(v47, v39, &s1, 1, 257);
                      return 1;
                    }
                  }
                  v41 = v74;
                  v42 = s1;
                  if ( (_QWORD)v74 )
                  {
                    v43 = v74 + 1;
                    v44 = v74 - 1;
                    if ( *((_QWORD *)&v74 + 1) >= (unsigned __int64)(v74 + 1) )
                      goto LABEL_63;
                  }
                  else
                  {
                    if ( *((_QWORD *)&v74 + 1) > 1u )
                    {
                      *(_QWORD *)&v74 = 2;
                      s1[1] = 0;
LABEL_65:
                      v45 = (char *)::s1;
                      *s1 = 46;
                      if ( (_QWORD)v74 )
                        v45 = s1;
                      set_name(v39, v45, 0);
                      goto LABEL_68;
                    }
                    v44 = 0;
                    v43 = 2;
                  }
                  s1 = (char *)qvector_reserve(&s1, s1, v43, 1);
                  v42 = s1;
                  v41 = v44 + 1;
LABEL_63:
                  *(_QWORD *)&v74 = v43;
                  v42[v41] = 0;
                  if ( v44 )
                    memmove(s1 + 1, s1, v44);
                  goto LABEL_65;
                }
              }
            }
            if ( !v21 )
              goto LABEL_120;
            goto LABEL_119;
          }
        }
        else if ( (unsigned __int8)sub_31740(a2, (__int64)&unk_7A0D0, 0x10u) )
        {
          v59 = *a2;
          v71 = (int)((unsigned int)get_dword(*a2) << 16);
          v71 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v71 + (__int16)get_dword(v59 + 4));
          v17 = (char *)v71;
          if ( (unsigned __int8)is_loaded(v71) )
          {
            s1 = nullptr;
            v74 = 0;
            v22 = (const char *)getseg(v71);
            v60 = get_segm_name(&s1, v22, 1);
            v21 = s1;
            if ( v60 > 0 )
            {
              if ( (_QWORD)v74 )
              {
                v22 = "__dyld";
                if ( !strcmp(s1, "__dyld") )
                {
                  if ( !v21 )
                    goto LABEL_20;
                  goto LABEL_146;
                }
              }
            }
            if ( !v21 )
              goto LABEL_120;
LABEL_119:
            *(_QWORD *)&v74 = 0;
            qfree(v21, v22, v23, 0.0);
LABEL_120:
            v26 = v71;
LABEL_79:
            *a4 = (char *)v26;
            goto LABEL_52;
          }
        }
        else
        {
          if ( !(unsigned __int8)sub_31740(a2, (__int64)&unk_7A0C0, 0x10u) )
            return 0;
          v61 = *a2;
          v71 = (int)((unsigned int)get_dword(*a2) << 16);
          v71 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v71 + (__int16)get_dword(v61 + 4));
          v17 = (char *)v71;
          if ( (unsigned __int8)is_loaded(v71) )
          {
            s1 = nullptr;
            v74 = 0;
            v62 = getseg(v71);
            v63 = get_segm_name(&s1, v62, 1);
            v21 = s1;
            if ( v63 > 0 )
            {
              if ( (_QWORD)v74 )
              {
                v22 = "__la_symbol_ptr";
                if ( !strcmp(s1, "__la_symbol_ptr") )
                {
                  if ( !v21 )
                    goto LABEL_20;
                  goto LABEL_146;
                }
              }
            }
            if ( v21 )
            {
              *(_QWORD *)&v74 = 0;
              qfree(v21, 0, v23, 0.0);
            }
            goto LABEL_120;
          }
        }
LABEL_51:
        *a4 = v17;
LABEL_52:
        qword = -1;
        goto LABEL_53;
      }
      v28 = a2[1];
      if ( v28 <= 3 || !(unsigned __int8)sub_5B600(a1, &v71, v28 - 4, 12, 0) )
        return 0;
      *a4 = (char *)-1LL;
      v29 = v71;
LABEL_32:
      *a3 = v29;
      return 1;
    case 8:
      if ( !(unsigned __int8)sub_31740(a2, (__int64)&unk_7A120, 0x20u)
        || !(unsigned __int8)sub_5B600(a1, &v71, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*a2 + 12), 12, 0) )
      {
        return 0;
      }
      if ( (unsigned __int8)is_loaded(v71) )
      {
        s1 = nullptr;
        v74 = 0;
        v64 = (const char *)getseg(v71);
        v65 = get_segm_name(&s1, v64, 1);
        v67 = s1;
        if ( v65 > 0 )
        {
          if ( (_QWORD)v74 )
          {
            v64 = ".sceStub.text";
            if ( !strcmp(s1, ".sceStub.text") )
            {
              if ( v67 )
              {
                *(_QWORD *)&v74 = 0;
                qfree(v67, ".sceStub.text", v66, 0.0);
              }
              v68 = v71;
              *a4 = (char *)v71;
              v29 = (unsigned int)get_dword(v68);
              goto LABEL_32;
            }
          }
        }
        if ( v67 )
        {
          *(_QWORD *)&v74 = 0;
          qfree(v67, v64, v66, 0.0);
        }
        *a4 = (char *)v71;
      }
      else
      {
        *a4 = (char *)v71;
      }
      v29 = -1;
      goto LABEL_32;
    case 9:
      if ( (unsigned __int8)sub_35A20(a1, &v72, a2) )
      {
        *a4 = (char *)-1LL;
        v30 = a2[1];
        *a3 = v30;
        flags = get_flags_ex(v30, 4);
        v32 = netnode_altval(*(_QWORD *)(a1 + 120), *a3, 839);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8
          || (v32 = (int)v32, (unsigned __int64)(int)v32 > 0xFFFFFFFFFFFFFFFCLL) )
        {
          if ( v32 > 0xFFFFFFFFFFFFFFFDLL )
          {
            sub_4F800(a1, *a3);
            if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
            {
              v33 = *a3;
              v34 = *a3 + 1;
              auto_mark_range(*a3, v34, 20);
              auto_mark_range(v33, v34, 30);
            }
          }
        }
        s1 = nullptr;
        v74 = 0;
        if ( (flags & 0xC000) != 0x4000 )
        {
          v35 = (const char *)*a2;
          if ( get_ea_name(&s1, *a2, 0, 0) > 0 )
          {
            v35 = ::s1;
            if ( (_QWORD)v74 )
              v35 = s1;
            set_name(*a3, v35, 6144);
          }
          if ( s1 )
          {
            *(_QWORD *)&v74 = 0;
            qfree(s1, v35, v36, 0.0);
          }
        }
      }
      else
      {
        v48 = *a2;
        result = sub_31740(a2, (__int64)&unk_7A0A0, 0x10u);
        if ( !(_BYTE)result )
          return result;
        v49 = get_dword(v48 + 4);
        v50 = sub_357D0(a1, v48);
        v72 = v50;
        if ( v50 != -1 )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v49 + v50);
          v71 = v26;
          goto LABEL_21;
        }
LABEL_108:
        *a4 = (char *)-1LL;
        *a3 = -1;
      }
      return 1;
    default:
      return 0;
  }
}
