__int64 __fastcall sub_110FD0(__int64 a1, __int64 a2, unsigned __int32 *a3, unsigned int a4, char a5)
{
  __int64 v5; // r15
  unsigned int v6; // r13d
  __int64 v7; // rax
  unsigned __int32 v8; // r9d
  bool v9; // r14
  unsigned int v10; // ebp
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r12
  char v20; // bp
  unsigned int v22; // ebx
  int v23; // r13d
  unsigned __int32 v24; // r14d
  unsigned int v25; // eax
  __int64 v26; // rsi
  char v27; // r11
  __int64 v28; // rcx
  unsigned int v29; // r8d
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // ecx
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // r14d
  unsigned int v38; // edi
  int v39; // eax
  unsigned int v40; // r10d
  int v41; // edx
  unsigned int v42; // eax
  unsigned int *v43; // rdx
  unsigned __int32 v44; // edi
  unsigned int *v45; // rdi
  unsigned int v46; // r9d
  __int64 v47; // rsi
  Elf64_Rela *v48; // rcx
  unsigned int v49; // r14d
  __int64 v50; // rsi
  __int64 v51; // rbx
  const void *v52; // rsi
  int v53; // eax
  bool v54; // zf
  __int64 v55; // rsi
  int v56; // ecx
  unsigned int v57; // eax
  unsigned int v59; // [rsp+8h] [rbp-90h]
  unsigned int *v60; // [rsp+8h] [rbp-90h]
  unsigned int v61; // [rsp+8h] [rbp-90h]
  _QWORD *v62; // [rsp+10h] [rbp-88h]
  unsigned int v65; // [rsp+24h] [rbp-74h]
  __int64 v66; // [rsp+28h] [rbp-70h]
  __int64 v67; // [rsp+30h] [rbp-68h]
  unsigned __int32 v68; // [rsp+38h] [rbp-60h]
  unsigned __int32 v69; // [rsp+38h] [rbp-60h]
  unsigned __int32 v70; // [rsp+38h] [rbp-60h]
  unsigned int v71; // [rsp+38h] [rbp-60h]
  __int64 v72; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v73[9]; // [rsp+50h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 64);
  v73[1] = __readfsqword(0x28u);
  v62 = (_QWORD *)a2;
  v7 = *(_QWORD *)(v5 + 80);
  v72 = 0;
  v8 = _byteswap_ulong(*(_DWORD *)(v7 + 36));
  if ( v8 >= v6 )
  {
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      72963,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 11;
  }
  if ( !v8 )
  {
    v10 = sub_10D290(*(_QWORD *)(v5 + 112), a2);
    if ( v10 )
      return v10;
    v12 = *(_DWORD *)(a1 + 64);
    v13 = (unsigned int)dword_241470 / *(_DWORD *)(a1 + 52);
    v14 = v12 + 1;
    *(_DWORD *)(a1 + 64) = v12 + 1;
    if ( v12 + 1 == v13 + 1 )
    {
      v14 = v12 + 2;
      *(_DWORD *)(a1 + 64) = v12 + 2;
    }
    if ( *(_BYTE *)(a1 + 33) )
    {
      v15 = 0;
      if ( v14 > 1 )
        v15 = sub_CCA10((_DWORD *)(a1 + 52), (_DWORD *)(a1 + 56), v14);
      if ( v15 == v14 )
      {
        v55 = v15;
        v73[0] = 0;
        v10 = sub_E90A0((_QWORD *)a1, v15, v73);
        if ( v10 )
          return v10;
        v10 = sub_10D290(*(_QWORD *)(v73[0] + 112LL), v55);
        if ( v73[0] )
          sub_C36A0(*(_QWORD *)(v73[0] + 112LL));
        if ( v10 )
          return v10;
        v56 = *(_DWORD *)(a1 + 64);
        v57 = (unsigned int)dword_241470 / *(_DWORD *)(a1 + 52);
        v14 = v56 + 1;
        *(_DWORD *)(a1 + 64) = v56 + 1;
        if ( v56 + 1 == v57 + 1 )
        {
          v14 = v56 + 2;
          *(_DWORD *)(a1 + 64) = v56 + 2;
        }
      }
    }
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 80LL) + 28LL) = _byteswap_ulong(v14);
    v16 = *(unsigned int *)(a1 + 64);
    *a3 = v16;
    v10 = sub_E90A0((_QWORD *)a1, v16, v62);
    if ( v10 )
      return v10;
    v10 = sub_10D290(*(_QWORD *)(*v62 + 112LL), v16);
    if ( !v10 )
      goto LABEL_30;
    if ( *v62 )
      sub_C36A0(*(_QWORD *)(*v62 + 112LL));
    *v62 = 0;
    v17 = v72;
    goto LABEL_31;
  }
  v9 = a5 == 2;
  if ( a5 == 1 )
  {
    v9 = 0;
    if ( a4 <= v6 )
    {
      a2 = a4;
      v70 = v8;
      v10 = sub_EBFF0(a1, a4, v73, nullptr);
      if ( v10 )
        return v10;
      v8 = v70;
      v9 = LOBYTE(v73[0]) == 2;
    }
  }
  v68 = v8;
  v10 = sub_10D290(*(_QWORD *)(v5 + 112), a2);
  if ( !v10 )
  {
    v18 = *(_QWORD *)(v5 + 80);
    v19 = v72;
    v67 = v5;
    v20 = v9;
    v22 = v6;
    *(_DWORD *)(v18 + 36) = _byteswap_ulong(v68 - 1);
    v23 = 0;
    v69 = v68 + 1;
    while ( 1 )
    {
      v24 = v19 ? _byteswap_ulong(**(_DWORD **)(v19 + 80)) : _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(v67 + 80) + 32LL));
      if ( v24 > v22 || v69 == v23 )
        break;
      v25 = sub_E90A0((_QWORD *)a1, v24, &v72);
      if ( v25 )
      {
        v10 = v25;
        goto LABEL_113;
      }
      v26 = v72;
      v27 = v20 ^ 1;
      v28 = *(_QWORD *)(v72 + 80);
      v29 = _byteswap_ulong(*(_DWORD *)(v28 + 4));
      if ( !v29 && v27 )
      {
        v10 = 0;
        v30 = sub_10D290(*(_QWORD *)(v72 + 112), v72);
        if ( !v30 )
        {
          *a3 = v24;
          v31 = v72;
          v32 = *(_QWORD *)(v67 + 80);
          v33 = **(_DWORD **)(v72 + 80);
          v72 = 0;
          *(_DWORD *)(v32 + 32) = v33;
          *v62 = v31;
          goto LABEL_28;
        }
LABEL_101:
        v10 = v30;
        goto LABEL_92;
      }
      if ( (*(_DWORD *)(a1 + 56) >> 2) - 2 < v29 )
      {
        v48 = &stru_11D58;
LABEL_91:
        v10 = 11;
        sub_E8BB0(
          0xBu,
          "%s at line %d of [%.10s]",
          "database corruption",
          (_DWORD)v48,
          "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
        goto LABEL_92;
      }
      if ( v20 && (v24 == a4 || v24 < a4 && a5 == 2) )
      {
        v10 = 0;
        v34 = v72;
        v59 = v29;
        *a3 = v24;
        *v62 = v34;
        v30 = sub_10D290(*(_QWORD *)(v34 + 112), (__int64)v62);
        if ( v30 )
          goto LABEL_101;
        if ( !v59 )
        {
          if ( v19 )
          {
            v35 = sub_10D290(*(_QWORD *)(v19 + 112), (__int64)v62);
            if ( v35 )
            {
              v36 = v72;
              v10 = v35;
              if ( v72 )
                goto LABEL_46;
LABEL_48:
              sub_C36A0(*(_QWORD *)(v19 + 112));
              return v10;
            }
            **(_DWORD **)(v19 + 80) = **(_DWORD **)(v72 + 80);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(v67 + 80) + 32LL) = **(_DWORD **)(v72 + 80);
          }
LABEL_110:
          v72 = 0;
LABEL_28:
          if ( !v19 )
            return v10;
LABEL_29:
          sub_C36A0(*(_QWORD *)(v19 + 112));
LABEL_30:
          v17 = v72;
LABEL_31:
          if ( v17 )
            sub_C36A0(*(_QWORD *)(v17 + 112));
          return v10;
        }
        v49 = *(_DWORD *)(*(_QWORD *)(v72 + 80) + 8LL);
        v50 = _byteswap_ulong(v49);
        if ( v22 < (unsigned int)v50 )
        {
          sub_E8BB0(
            0xBu,
            "%s at line %d of [%.10s]",
            "database corruption",
            73082,
            "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
          v10 = 11;
          goto LABEL_92;
        }
        v30 = sub_E90A0((_QWORD *)a1, v50, v73);
        if ( v30 )
          goto LABEL_101;
        v30 = sub_10D290(*(_QWORD *)(v73[0] + 112LL), v50);
        if ( !v30 )
        {
          **(_DWORD **)(v73[0] + 80LL) = **(_DWORD **)(v72 + 80);
          *(_DWORD *)(*(_QWORD *)(v73[0] + 80LL) + 4LL) = _byteswap_ulong(v59 - 1);
          v51 = v73[0];
          v52 = (const void *)(*(_QWORD *)(v72 + 80) + 12LL);
          memcpy((void *)(*(_QWORD *)(v73[0] + 80LL) + 8LL), v52, 4 * (v59 + 0x3FFFFFFF));
          if ( v51 )
            sub_C36A0(*(_QWORD *)(v51 + 112));
          if ( v19 )
          {
            v30 = sub_10D290(*(_QWORD *)(v19 + 112), (__int64)v52);
            if ( v30 )
              goto LABEL_101;
            **(_DWORD **)(v19 + 80) = v49;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(v67 + 80) + 32LL) = v49;
          }
          goto LABEL_110;
        }
        if ( !v73[0] )
          goto LABEL_101;
        v61 = v30;
        sub_C36A0(*(_QWORD *)(v73[0] + 112LL));
        v10 = v61;
LABEL_92:
        v36 = v72;
        if ( v72 )
LABEL_46:
          sub_C36A0(*(_QWORD *)(v36 + 112));
LABEL_47:
        if ( v19 )
          goto LABEL_48;
        return v10;
      }
      if ( v29 )
      {
        if ( a4 )
        {
          if ( a5 != 2 )
          {
            v37 = _byteswap_ulong(*(_DWORD *)(v28 + 8)) - a4;
            if ( v37 < 0 )
            {
              v53 = -v37;
              v54 = v37 == 0x80000000;
              v37 = 0x7FFFFFFF;
              if ( !v54 )
                v37 = v53;
            }
            if ( v29 == 1 )
            {
              v43 = (unsigned int *)(v28 + 8);
              v44 = _byteswap_ulong(*(_DWORD *)(v28 + 8));
              v40 = 0;
              goto LABEL_71;
            }
            v38 = 12;
            v39 = 1;
            v40 = 0;
            while ( 1 )
            {
              v41 = _byteswap_ulong(*(_DWORD *)(v28 + v38)) - a4;
              if ( v41 >= 0 )
                goto LABEL_55;
              if ( v41 != 0x80000000 )
                break;
LABEL_57:
              ++v39;
              v38 += 4;
              if ( v39 == v29 )
              {
                v43 = (unsigned int *)(v28 + 4 * v40 + 8);
                v44 = _byteswap_ulong(*v43);
                goto LABEL_71;
              }
            }
            v41 = -v41;
LABEL_55:
            if ( v37 > v41 )
            {
              v37 = v41;
              v40 = v39;
            }
            goto LABEL_57;
          }
          v42 = 8;
          v40 = 0;
          while ( 1 )
          {
            v43 = (unsigned int *)(v28 + v42);
            v44 = _byteswap_ulong(*v43);
            if ( a4 >= v44 )
              break;
            ++v40;
            v42 += 4;
            if ( v40 == v29 )
              goto LABEL_70;
          }
        }
        else
        {
LABEL_70:
          v43 = (unsigned int *)(v28 + 8);
          v40 = 0;
          v44 = _byteswap_ulong(*(_DWORD *)(v28 + 8));
        }
LABEL_71:
        if ( v22 < v44 || v44 <= 1 )
        {
          LODWORD(v48) = 73147;
          goto LABEL_91;
        }
        if ( a4 == v44 || v27 || a4 > v44 && a5 == 2 )
        {
          v66 = *(_QWORD *)(v72 + 80);
          v71 = v40;
          v65 = v29;
          v60 = v43;
          *a3 = v44;
          v10 = sub_10D290(*(_QWORD *)(v26 + 112), v26);
          if ( v10 )
            goto LABEL_92;
          if ( v65 - 1 > v71 )
            *v60 = *(_DWORD *)(v66 + 4 * v65 + 4);
          *(_DWORD *)(v66 + 4) = _byteswap_ulong(v65 - 1);
          v45 = *(unsigned int **)(a1 + 96);
          v46 = *a3;
          if ( v45 && v46 <= *v45 )
            sub_C2ED0(v45, v46);
          v47 = v46;
          v10 = sub_E90A0((_QWORD *)a1, v46, v62);
          if ( !v10 )
          {
            v10 = sub_10D290(*(_QWORD *)(*v62 + 112LL), v47);
            if ( v10 )
            {
              if ( *v62 )
                sub_C36A0(*(_QWORD *)(*v62 + 112LL));
              *v62 = 0;
            }
          }
          if ( v19 )
            goto LABEL_29;
          goto LABEL_30;
        }
        if ( v19 )
          sub_C36A0(*(_QWORD *)(v19 + 112));
        v19 = v72;
      }
      else
      {
        if ( v19 )
        {
          sub_C36A0(*(_QWORD *)(v19 + 112));
          v19 = v72;
          v25 = 0;
          v26 = v72;
        }
        else
        {
          v19 = v72;
        }
        if ( !v20 )
        {
          v10 = v25;
          v17 = v26;
          goto LABEL_31;
        }
      }
      ++v23;
      v20 = 1;
    }
    v10 = 11;
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      73019,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
LABEL_113:
    v72 = 0;
    goto LABEL_47;
  }
  return v10;
}
