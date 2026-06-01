__int64 __fastcall sub_270050(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v3; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v8; // r13
  _QWORD *v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 *v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 *v30; // rdx
  __int64 *v31; // rax
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 *v37; // rdx
  __int64 *v38; // rax
  __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 *v42; // rdx
  __int64 *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r12
  __int64 v52; // rsi
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r12
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // rsi
  __int64 v58; // r13
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  int tinfo_property; // ebx
  int tinfo_size; // eax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx

  v3 = *(_QWORD **)(a1 + 104);
  v5 = *(_QWORD *)(a1 + 112);
  v6 = &v3[v5];
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 2:
    case 6:
    case 7:
      v11 = *(_QWORD *)(a2 + 24);
      if ( v6 == v3 )
        goto LABEL_23;
      while ( v11 != *v3 )
      {
        if ( ++v3 == v6 )
          goto LABEL_23;
      }
      if ( v6 != v3 )
        return 0;
LABEL_23:
      v12 = sub_254FE0(*(_QWORD *)(a2 + 24));
      if ( *(_DWORD *)(v12 + 8) != 65 || *(_DWORD *)(v12 + 32) != *(_DWORD *)(a1 + 128) )
        return 0;
      if ( v11 != v12 )
      {
        v13 = *(_QWORD *)(a1 + 104);
        v14 = *(_QWORD *)(a1 + 112);
        v15 = (__int64 *)(v13 + 8 * v14);
        if ( (__int64 *)v13 == v15 )
          goto LABEL_127;
        v16 = *(__int64 **)(a1 + 104);
        while ( v12 != *v16 )
        {
          if ( v15 == ++v16 )
            goto LABEL_127;
        }
        if ( v15 == v16 )
        {
LABEL_127:
          if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v14 + 1) )
          {
            v68 = qvector_reserve(a1 + 104, v13, v14 + 1, 8);
            v69 = *(_QWORD *)(a1 + 112);
            *(_QWORD *)(a1 + 104) = v68;
            v15 = (__int64 *)(v68 + 8 * v69);
          }
          *v15 = v12;
          ++*(_QWORD *)(a1 + 112);
        }
      }
      if ( !*(_BYTE *)(a1 + 136) )
      {
        v55 = *(_QWORD *)(a1 + 88);
        v56 = *(_QWORD *)(a2 + 24);
        v57 = *(_QWORD *)(a1 + 80);
        if ( *(_QWORD *)(a1 + 96) < (unsigned __int64)(v55 + 1) )
        {
          v60 = qvector_reserve(a1 + 80, v57, v55 + 1, 8);
          *(_QWORD *)(a1 + 80) = v60;
          v57 = v60;
          v55 = *(_QWORD *)(a1 + 88);
        }
        *(_QWORD *)(v57 + 8 * v55) = v56;
        ++*(_QWORD *)(a1 + 88);
      }
      if ( (unsigned __int8)sub_26FCA0(a1, *(_QWORD *)(a2 + 32), a3) )
      {
        if ( *(_BYTE *)(a1 + 136) )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 48 && *(_DWORD *)(a2 + 8) != 2 )
          {
            v17 = *(_QWORD *)(a2 + 32);
            if ( *(_DWORD *)(v17 + 8) == 61 && sub_255A30(*(__int64 **)(v17 + 24)) == 1 )
            {
              v18 = 56;
              if ( *(_DWORD *)(a2 + 8) == 6 )
                v18 = 55;
              *(_DWORD *)(a2 + 8) = v18;
              v19 = *(_QWORD *)(a2 + 32);
              if ( v19 )
              {
                sub_255630(v19, a3);
                clear_tinfo_t();
                j__qfree(v19);
              }
            }
          }
        }
        return 0;
      }
      return 1;
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x25:
      v8 = *(_QWORD *)(a2 + 24);
      if ( v6 == v3 )
        goto LABEL_58;
      v9 = *(_QWORD **)(a1 + 104);
      while ( v8 != *v9 )
      {
        if ( ++v9 == v6 )
          goto LABEL_58;
      }
      if ( v9 != v6 )
      {
        v10 = *(_QWORD *)(a2 + 32);
        goto LABEL_15;
      }
LABEL_58:
      v27 = sub_254FE0(*(_QWORD *)(a2 + 24));
      if ( *(_DWORD *)(v27 + 8) == 65 && *(_DWORD *)(v27 + 32) == *(_DWORD *)(a1 + 128) )
      {
        if ( v8 != v27 )
        {
          v28 = *(_QWORD *)(a1 + 104);
          v29 = *(_QWORD *)(a1 + 112);
          v30 = (__int64 *)(v28 + 8 * v29);
          if ( (__int64 *)v28 == v30 )
            goto LABEL_124;
          v31 = *(__int64 **)(a1 + 104);
          while ( v27 != *v31 )
          {
            if ( v30 == ++v31 )
              goto LABEL_124;
          }
          if ( v30 == v31 )
          {
LABEL_124:
            if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v29 + 1) )
            {
              v70 = qvector_reserve(a1 + 104, v28, v29 + 1, 8);
              v71 = *(_QWORD *)(a1 + 112);
              *(_QWORD *)(a1 + 104) = v70;
              v30 = (__int64 *)(v70 + 8 * v71);
            }
            *v30 = v27;
            ++*(_QWORD *)(a1 + 112);
          }
        }
        v32 = *(_QWORD *)(a2 + 32);
        v33 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v3 = *(_QWORD **)(a1 + 104);
        v10 = *(_QWORD *)(a2 + 32);
        v6 = &v3[*(_QWORD *)(a1 + 112)];
        if ( v6 != v3 )
        {
LABEL_15:
          while ( *v3 != v10 )
          {
            if ( ++v3 == v6 )
              goto LABEL_71;
          }
          if ( v3 != v6 )
            return 0;
        }
LABEL_71:
        v34 = sub_254FE0(v10);
        if ( *(_DWORD *)(v34 + 8) != 65 || *(_DWORD *)(v34 + 32) != *(_DWORD *)(a1 + 128) )
          return 0;
        if ( v34 != v10 )
        {
          v35 = *(_QWORD *)(a1 + 104);
          v36 = *(_QWORD *)(a1 + 112);
          v37 = (__int64 *)(v35 + 8 * v36);
          if ( (__int64 *)v35 == v37 )
            goto LABEL_130;
          v38 = *(__int64 **)(a1 + 104);
          while ( v34 != *v38 )
          {
            if ( v37 == ++v38 )
              goto LABEL_130;
          }
          if ( v37 == v38 )
          {
LABEL_130:
            if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v36 + 1) )
            {
              v72 = qvector_reserve(a1 + 104, v35, v36 + 1, 8);
              v73 = *(_QWORD *)(a1 + 112);
              *(_QWORD *)(a1 + 104) = v72;
              v37 = (__int64 *)(v72 + 8 * v73);
            }
            *v37 = v34;
            ++*(_QWORD *)(a1 + 112);
          }
        }
        v32 = *(_QWORD *)(a2 + 24);
        v33 = *(_QWORD *)(a2 + 32);
      }
      if ( !v32 )
        return 0;
      if ( !*(_BYTE *)(a1 + 136) )
      {
        v48 = *(_QWORD *)(a1 + 88);
        v49 = *(_QWORD *)(a1 + 80);
        if ( *(_QWORD *)(a1 + 96) < (unsigned __int64)(v48 + 1) )
        {
          v59 = qvector_reserve(a1 + 80, v49, v48 + 1, 8);
          *(_QWORD *)(a1 + 80) = v59;
          v49 = v59;
          v48 = *(_QWORD *)(a1 + 88);
        }
        *(_QWORD *)(v49 + 8 * v48) = v33;
        ++*(_QWORD *)(a1 + 88);
      }
      return (unsigned __int8)sub_26FCA0(a1, v32, a3) ^ 1u;
    case 0x27:
      v20 = *(_QWORD *)(a2 + 24);
      if ( !(v5 * 8) )
        goto LABEL_47;
      while ( v20 != *v3 )
      {
        if ( ++v3 == v6 )
          goto LABEL_47;
      }
      if ( v6 != v3 )
        return 0;
LABEL_47:
      v21 = sub_254FE0(*(_QWORD *)(a2 + 24));
      if ( *(_DWORD *)(v21 + 8) != 65 || *(_DWORD *)(v21 + 32) != *(_DWORD *)(a1 + 128) )
        return 0;
      if ( v20 != v21 )
      {
        v22 = *(_QWORD *)(a1 + 104);
        v23 = *(_QWORD *)(a1 + 112);
        v24 = (__int64 *)(v22 + 8 * v23);
        if ( (__int64 *)v22 == v24 )
          goto LABEL_121;
        v25 = *(__int64 **)(a1 + 104);
        while ( v21 != *v25 )
        {
          if ( v24 == ++v25 )
            goto LABEL_121;
        }
        if ( v24 == v25 )
        {
LABEL_121:
          if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v23 + 1) )
          {
            v64 = qvector_reserve(a1 + 104, v22, v23 + 1, 8);
            v65 = *(_QWORD *)(a1 + 112);
            *(_QWORD *)(a1 + 104) = v64;
            v24 = (__int64 *)(v64 + 8 * v65);
          }
          *v24 = v21;
          ++*(_QWORD *)(a1 + 112);
        }
      }
      if ( !*(_BYTE *)(a1 + 136) )
      {
        v50 = *(_QWORD *)(a1 + 88);
        v51 = *(_QWORD *)(a2 + 24);
        v52 = *(_QWORD *)(a1 + 80);
        if ( *(_QWORD *)(a1 + 96) < (unsigned __int64)(v50 + 1) )
        {
          v61 = qvector_reserve(a1 + 80, v52, v50 + 1, 8);
          *(_QWORD *)(a1 + 80) = v61;
          v52 = v61;
          v50 = *(_QWORD *)(a1 + 88);
        }
        *(_QWORD *)(v52 + 8 * v50) = v51;
        ++*(_QWORD *)(a1 + 88);
      }
      v26 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v26 + 8) != 61 )
        return 1;
      v53 = sub_255A30(*(__int64 **)(v26 + 24));
      v54 = v53;
      if ( *(_BYTE *)(a1 + 136) )
      {
        v58 = *(_QWORD *)(a2 + 32);
        if ( *(_QWORD *)(a1 + 72) == v53 )
        {
          if ( v58 )
          {
            sub_255630(*(_QWORD *)(a2 + 32), a3);
            clear_tinfo_t();
            j__qfree(v58);
          }
          sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), a3);
        }
        else
        {
          tinfo_property = get_tinfo_property();
          tinfo_size = get_tinfo_size();
          sub_240A20(
            v58,
            *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
            *(_QWORD *)(a1 + 64),
            v54 / *(_QWORD *)(a1 + 72),
            tinfo_size,
            tinfo_property,
            a3);
        }
      }
      else
      {
        if ( !v53 || *(_QWORD *)(a1 + 72) % v53 )
          return 1;
        if ( v53 < *(_QWORD *)(a1 + 72) )
          *(_QWORD *)(a1 + 72) = v53;
      }
      return 0;
    default:
      if ( v6 == v3 )
        goto LABEL_80;
      break;
  }
  while ( *v3 != a2 )
  {
    if ( ++v3 == v6 )
      goto LABEL_80;
  }
  if ( v6 != v3 )
    return 0;
LABEL_80:
  v39 = sub_254FE0(a2);
  if ( *(_DWORD *)(v39 + 8) != 65 || *(_DWORD *)(v39 + 32) != *(_DWORD *)(a1 + 128) )
    return 0;
  if ( v39 != a2 )
  {
    v40 = *(_QWORD *)(a1 + 104);
    v41 = *(_QWORD *)(a1 + 112);
    v42 = (__int64 *)(v40 + 8 * v41);
    if ( (__int64 *)v40 == v42 )
      goto LABEL_118;
    v43 = *(__int64 **)(a1 + 104);
    while ( v39 != *v43 )
    {
      if ( v42 == ++v43 )
        goto LABEL_118;
    }
    if ( v42 == v43 )
    {
LABEL_118:
      if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v41 + 1) )
      {
        v66 = qvector_reserve(a1 + 104, v40, v41 + 1, 8);
        v67 = *(_QWORD *)(a1 + 112);
        *(_QWORD *)(a1 + 104) = v66;
        v42 = (__int64 *)(v66 + 8 * v67);
      }
      *v42 = v39;
      ++*(_QWORD *)(a1 + 112);
    }
  }
  v44 = *(_QWORD **)(a1 + 80);
  v45 = &v44[*(_QWORD *)(a1 + 88)];
  if ( v44 != v45 )
  {
    while ( *v44 != a2 )
    {
      if ( v45 == ++v44 )
        goto LABEL_93;
    }
    if ( v45 != v44 )
      return 0;
  }
LABEL_93:
  v46 = *(_QWORD **)(a1 + 104);
  v47 = &v46[*(_QWORD *)(a1 + 112)];
  if ( v46 != v47 )
  {
    while ( *v46 != a2 )
    {
      if ( v47 == ++v46 )
        return (unsigned __int8)sub_26FE40(a1, a2, a3) ^ 1u;
    }
    if ( v47 != v46 )
      return 0;
  }
  return (unsigned __int8)sub_26FE40(a1, a2, a3) ^ 1u;
}

