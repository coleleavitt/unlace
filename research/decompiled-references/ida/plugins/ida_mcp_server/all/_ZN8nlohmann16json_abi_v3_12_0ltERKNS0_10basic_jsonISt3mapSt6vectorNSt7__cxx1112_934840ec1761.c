size_t __fastcall nlohmann::json_abi_v3_12_0::operator<(char *a1, char *a2)
{
  __int64 v2; // rbx
  unsigned __int8 v3; // al
  unsigned __int8 v4; // dl
  __int64 v6; // rax
  double v7; // xmm0_8
  __int64 v8; // rax
  double v9; // xmm0_8
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  const void *v14; // rdi
  size_t v15; // rbx
  size_t v16; // rbp
  size_t v17; // rdx
  int v18; // eax
  size_t v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbp
  int v23; // ecx
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  size_t v27; // rdx
  signed __int64 v28; // rcx
  int v29; // eax
  size_t v30; // rdx
  int v31; // ecx
  signed __int64 v32; // rsi
  signed __int64 v33; // rax
  size_t v34; // r13
  size_t v35; // r14
  const void *v36; // rdi
  signed __int64 v37; // rax
  signed __int64 v38; // rax
  __int64 *v39; // rdx
  __int64 *v40; // rax
  __int64 v41; // r14
  __int64 v42; // r13
  __int64 v43; // rbp
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rdx
  void *s1; // [rsp+8h] [rbp-60h]
  size_t n; // [rsp+10h] [rbp-58h]
  size_t nb; // [rsp+10h] [rbp-58h]
  size_t na; // [rsp+10h] [rbp-58h]
  __int64 v53; // [rsp+18h] [rbp-50h]
  __int64 v54; // [rsp+20h] [rbp-48h]

  v3 = *a1;
  v4 = *a2;
  if ( *a1 == *a2 )
  {
    switch ( *a1 )
    {
      case 1:
        v20 = *((_QWORD *)a2 + 1);
        v24 = *((_QWORD *)a1 + 1);
        v21 = *(_QWORD *)(v20 + 24);
        v22 = *(_QWORD *)(v24 + 24);
        v23 = v20 + 8;
        v2 = v24 + 8;
        v53 = v2;
        v54 = v20 + 8;
        LOBYTE(v24) = v20 + 8 != v21;
        LOBYTE(v2) = v24 & (v2 != v22);
        if ( !(_BYTE)v2 )
          goto LABEL_97;
        break;
      case 2:
        v39 = *((__int64 **)a2 + 1);
        v40 = *((__int64 **)a1 + 1);
        v41 = v39[1];
        v42 = v40[1];
        v43 = *v40;
        v44 = *v39;
        v45 = v41 - *v39;
        if ( v42 - v43 > v45 )
          v42 = v43 + v45;
        if ( v43 == v42 )
          goto LABEL_77;
        while ( 1 )
        {
          LODWORD(v2) = nlohmann::json_abi_v3_12_0::operator<();
          if ( (_BYTE)v2 || (unsigned __int8)nlohmann::json_abi_v3_12_0::operator<() )
            break;
          v43 += 16;
          v44 += 16;
          if ( v43 == v42 )
          {
LABEL_77:
            LOBYTE(v2) = v41 != v44;
            return (unsigned int)v2;
          }
        }
        return (unsigned int)v2;
      case 3:
        LODWORD(v2) = (unsigned int)std::string::compare(
                                      **((const void ***)a1 + 1),
                                      *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL),
                                      **((const void ***)a2 + 1),
                                      *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL)) >> 31;
        return (unsigned int)v2;
      case 4:
        LOBYTE(v2) = (unsigned __int8)a1[8] < (unsigned __int8)a2[8];
        return (unsigned int)v2;
      case 5:
        goto LABEL_22;
      case 6:
        LOBYTE(v2) = *((_QWORD *)a1 + 1) < *((_QWORD *)a2 + 1);
        return (unsigned int)v2;
      case 7:
        LOBYTE(v2) = *((double *)a2 + 1) > *((double *)a1 + 1);
        return (unsigned int)v2;
      case 8:
        v12 = *((_QWORD *)a1 + 1);
        v13 = *((_QWORD *)a2 + 1);
        v14 = *(const void **)v12;
        v15 = *(_QWORD *)(v12 + 8) - *(_QWORD *)v12;
        v16 = *(_QWORD *)(v13 + 8) - *(_QWORD *)v13;
        v17 = v16;
        if ( v15 <= v16 )
          v17 = v15;
        if ( v17 && (v18 = memcmp(v14, *(const void **)v13, v17)) != 0 )
          v19 = v18;
        else
          v19 = v15 - v16;
        return v19 >> 63;
      default:
        goto LABEL_24;
    }
    while ( 1 )
    {
      v34 = *(_QWORD *)(v22 + 40);
      v35 = *(_QWORD *)(v21 + 40);
      v36 = *(const void **)(v22 + 32);
      v27 = v35;
      if ( v34 <= v35 )
        v27 = *(_QWORD *)(v22 + 40);
      s1 = *(void **)(v21 + 32);
      if ( !v27 )
        break;
      n = v27;
      v25 = memcmp(v36, *(const void **)(v21 + 32), v27);
      if ( v25 )
      {
        if ( v25 < 0 )
          return (unsigned int)v2;
      }
      else if ( (__int64)(v34 - v35) <= 0x7FFFFFFF )
      {
        LOBYTE(v23) = (int)v34 - (int)v35 < 0 || (__int64)(v34 - v35) < (__int64)0xFFFFFFFF80000000LL;
        if ( (_BYTE)v23 )
        {
LABEL_84:
          LODWORD(v2) = v23;
          return (unsigned int)v2;
        }
      }
      v26 = memcmp(s1, v36, n);
      v27 = n;
      if ( v26 )
      {
        if ( v26 < 0 )
          goto LABEL_24;
        v47 = nlohmann::json_abi_v3_12_0::operator<();
        if ( (_BYTE)v47 )
        {
LABEL_96:
          LODWORD(v2) = v47;
          return (unsigned int)v2;
        }
        v27 = n;
        goto LABEL_49;
      }
      v28 = v35 - v34;
      if ( (__int64)(v35 - v34) > 0x7FFFFFFF )
        goto LABEL_91;
      if ( v28 < (__int64)0xFFFFFFFF80000000LL )
      {
        v29 = memcmp(s1, v36, n);
        v31 = v35 - v34;
        v30 = n;
        v32 = v35 - v34;
        if ( !v29 )
          goto LABEL_51;
        goto LABEL_89;
      }
      if ( (int)v28 >= 0 )
        goto LABEL_91;
LABEL_49:
      nb = v27;
      v29 = memcmp(s1, v36, v27);
      v30 = nb;
      if ( !v29 )
      {
        v31 = v35 - v34;
        v32 = v35 - v34;
        if ( (__int64)(v35 - v34) > 0x7FFFFFFF )
          goto LABEL_53;
LABEL_51:
        if ( v32 < (__int64)0xFFFFFFFF80000000LL || v31 < 0 )
        {
LABEL_24:
          LODWORD(v2) = 0;
          return (unsigned int)v2;
        }
        goto LABEL_53;
      }
LABEL_89:
      if ( v29 < 0 )
      {
        LODWORD(v2) = 0;
        return (unsigned int)v2;
      }
LABEL_53:
      LODWORD(v33) = memcmp(v36, s1, v30);
      if ( (_DWORD)v33 )
        goto LABEL_56;
LABEL_54:
      v33 = v34 - v35;
      if ( (__int64)(v34 - v35) > 0x7FFFFFFF )
        goto LABEL_23;
      if ( v33 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_56:
        if ( (int)v33 >= 0 )
        {
LABEL_23:
          if ( (unsigned __int8)nlohmann::json_abi_v3_12_0::operator<() )
            goto LABEL_24;
        }
      }
      v22 = std::_Rb_tree_increment();
      v24 = std::_Rb_tree_increment();
      v21 = v24;
      LOBYTE(v24) = v54 != v24;
      if ( v53 == v22 || !(_BYTE)v24 )
      {
LABEL_97:
        LOBYTE(v2) = v53 == v22;
        LODWORD(v2) = v24 & v2;
        return (unsigned int)v2;
      }
    }
    if ( (__int64)(v34 - v35) <= 0x7FFFFFFF )
    {
      LOBYTE(v23) = (int)v34 - (int)v35 < 0 || (__int64)(v34 - v35) < (__int64)0xFFFFFFFF80000000LL;
      if ( (_BYTE)v23 )
        goto LABEL_84;
    }
    v37 = v35 - v34;
    if ( (__int64)(v35 - v34) <= 0x7FFFFFFF )
    {
      if ( v37 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_24;
      if ( (int)v37 < 0 )
      {
        v38 = v35 - v34;
LABEL_68:
        if ( v38 < (__int64)0xFFFFFFFF80000000LL )
          goto LABEL_24;
        if ( (int)v38 < 0 )
        {
          LODWORD(v2) = 0;
          return (unsigned int)v2;
        }
        goto LABEL_54;
      }
    }
LABEL_91:
    na = v27;
    v47 = nlohmann::json_abi_v3_12_0::operator<();
    if ( (_BYTE)v47 )
      goto LABEL_96;
    v27 = na;
    if ( !na )
    {
      v38 = v35 - v34;
      if ( (__int64)(v35 - v34) > 0x7FFFFFFF )
        goto LABEL_54;
      goto LABEL_68;
    }
    goto LABEL_49;
  }
  if ( v3 == 5 && v4 == 7 )
  {
    LOBYTE(v2) = *((double *)a2 + 1) > (double)(int)*((_QWORD *)a1 + 1);
    return (unsigned int)v2;
  }
  if ( v3 == 7 && v4 == 5 )
  {
    LOBYTE(v2) = (double)(int)*((_QWORD *)a2 + 1) > *((double *)a1 + 1);
    return (unsigned int)v2;
  }
  if ( v4 == 7 && v3 == 6 )
  {
    v6 = *((_QWORD *)a1 + 1);
    if ( v6 < 0 )
    {
      v48 = *((_QWORD *)a1 + 1) & 1LL | (*((_QWORD *)a1 + 1) >> 1);
      v7 = (double)(int)v48 + (double)(int)v48;
    }
    else
    {
      v7 = (double)(int)v6;
    }
    LOBYTE(v2) = *((double *)a2 + 1) > v7;
    return (unsigned int)v2;
  }
  if ( v3 != 7 || v4 != 6 )
  {
    if ( v4 == 5 && v3 == 6 || (LOBYTE(v2) = v4 == 6 && v3 == 5, (_BYTE)v2) )
    {
LABEL_22:
      LOBYTE(v2) = *((_QWORD *)a1 + 1) < *((_QWORD *)a2 + 1);
      return (unsigned int)v2;
    }
    if ( v3 == 7 )
    {
      if ( v4 == 7 )
      {
        v11 = 7;
        v10 = 7;
        goto LABEL_31;
      }
    }
    else
    {
      if ( v4 == 7 )
      {
        if ( v3 == 9 )
          return (unsigned int)v2;
LABEL_30:
        v10 = v3;
        v11 = v4;
        LOBYTE(v2) = v4 <= 8u && v3 <= 8u;
        if ( !(_BYTE)v2 )
          return (unsigned int)v2;
LABEL_31:
        LOBYTE(v2) = nlohmann::json_abi_v3_12_0::detail::operator<(nlohmann::json_abi_v3_12_0::detail::value_t,nlohmann::json_abi_v3_12_0::detail::value_t)::order[v10] < nlohmann::json_abi_v3_12_0::detail::operator<(nlohmann::json_abi_v3_12_0::detail::value_t,nlohmann::json_abi_v3_12_0::detail::value_t)::order[v11];
        return (unsigned int)v2;
      }
      if ( v3 == 9 )
        return (unsigned int)v2;
    }
    if ( v4 == 9 )
      return (unsigned int)v2;
    goto LABEL_30;
  }
  v8 = *((_QWORD *)a2 + 1);
  if ( v8 < 0 )
  {
    v46 = *((_QWORD *)a2 + 1) & 1LL | (*((_QWORD *)a2 + 1) >> 1);
    v9 = (double)(int)v46 + (double)(int)v46;
  }
  else
  {
    v9 = (double)(int)v8;
  }
  LOBYTE(v2) = v9 > *((double *)a1 + 1);
  return (unsigned int)v2;
}

