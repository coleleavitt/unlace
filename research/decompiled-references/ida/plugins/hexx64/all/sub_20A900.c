__int64 __fastcall sub_20A900(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int8 a4, double a5)
{
  char v6; // al
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // cl
  _QWORD *v14; // rdx
  _QWORD *v15; // rdi
  _QWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD **v21; // rdi
  __int64 *v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // r13
  int v30; // r12d
  __int64 v31; // rax
  unsigned int v32; // eax
  _BYTE *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rax
  unsigned int v40; // [rsp+0h] [rbp-88h]
  unsigned int v41; // [rsp+0h] [rbp-88h]
  unsigned int v42; // [rsp+Ch] [rbp-7Ch]
  __int64 v43; // [rsp+18h] [rbp-70h] BYREF
  __int64 v44; // [rsp+20h] [rbp-68h] BYREF
  __int64 tinfo_property; // [rsp+28h] [rbp-60h]
  unsigned __int64 v46; // [rsp+30h] [rbp-58h] BYREF
  __int128 v47; // [rsp+38h] [rbp-50h]
  unsigned __int64 v48; // [rsp+48h] [rbp-40h]

  v6 = *(_BYTE *)a2;
  v48 = __readfsqword(0x28u);
  if ( v6 == 8 )
  {
    v29 = *(_QWORD *)(a2 + 8);
    v30 = 0;
    v31 = 0;
    v46 = 0;
    v47 = 0;
    if ( !*(_QWORD *)(v29 + 32) )
    {
      v43 = 0;
LABEL_43:
      *(_BYTE *)(a1 + 40) = 1;
      v32 = 0;
LABEL_44:
      v42 = v32;
      clear_tinfo_t();
      result = v42;
LABEL_45:
      if ( v46 )
      {
        v41 = result;
        *(_QWORD *)&v47 = 0;
        qfree(v46);
        return v41;
      }
      return result;
    }
    while ( 1 )
    {
      v33 = (_BYTE *)(*(_QWORD *)(v29 + 24) + 80 * v31);
      if ( *v33 != 10 )
        goto LABEL_49;
      v44 = 0;
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      if ( (get_tinfo_property() & 0x40) != 0 )
      {
        clear_tinfo_t();
LABEL_49:
        result = sub_11E9B0((__int64)v33, a1, (__int64)(v33 + 24), 0, 0.0);
        if ( (_DWORD)result )
          goto LABEL_45;
        v31 = ++v30;
        if ( (unsigned __int64)v30 >= *(_QWORD *)(v29 + 32) )
        {
LABEL_56:
          v43 = 0;
          if ( (_QWORD)v47 )
          {
            v36 = 0;
            v37 = 0;
            while ( 1 )
            {
              v38 = *(_QWORD *)(v29 + 24) + 80LL * *(int *)(v46 + 4 * v37);
              if ( *(_BYTE *)v38 == 10 )
              {
                v44 = 0;
                tinfo_property = 0;
                tinfo_property = get_tinfo_property();
                copy_tinfo_t();
                clear_tinfo_t();
                if ( (get_tinfo_property() & 0x40) != 0 )
                {
                  clear_tinfo_t();
                }
                else
                {
                  v39 = v43;
                  v43 = v44;
                  v44 = v39;
                  clear_tinfo_t();
                  v32 = sub_11E9B0(*(_QWORD *)(v38 + 8), a1, (__int64)&v43, 1, 0.0);
                  if ( v32 )
                    goto LABEL_44;
                }
              }
              v37 = ++v36;
              if ( v36 >= (unsigned __int64)v47 )
                goto LABEL_43;
            }
          }
          goto LABEL_43;
        }
      }
      else
      {
        clear_tinfo_t();
        v34 = v47;
        v35 = v46;
        if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v47 + 1) )
        {
          v46 = qvector_reserve((__int64)&v46, v46, v47 + 1, 4);
          v35 = v46;
          v34 = v47;
        }
        *(_DWORD *)(v35 + 4 * v34) = v30++;
        *(_QWORD *)&v47 = v47 + 1;
        v31 = v30;
        if ( (unsigned __int64)v30 >= *(_QWORD *)(v29 + 32) )
          goto LABEL_56;
      }
    }
  }
  if ( v6 == 10 )
  {
    v44 = 0;
    tinfo_property = 0;
    if ( a3 )
    {
      v46 = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
    }
    if ( (get_tinfo_property() & 0x40) == 0 )
    {
      v27 = v44;
      v44 = tinfo_property;
      tinfo_property = v27;
      clear_tinfo_t();
      v28 = sub_11E9B0(*(_QWORD *)(a2 + 8), a1, (__int64)&v44, 1, a5);
      *(_BYTE *)(a1 + 40) = 1;
      v40 = v28;
      clear_tinfo_t();
      return v40;
    }
    clear_tinfo_t();
    clear_tinfo_t();
  }
  if ( !*(_BYTE *)(a1 + 105) )
  {
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) )
      return 0;
    *(_BYTE *)(a1 + 105) = 1;
  }
  v11 = *(_QWORD *)(a1 + 96);
  if ( !*(_BYTE *)(a1 + 107) )
  {
    if ( v11 && v11 == *(_QWORD *)(a1 + 32) )
    {
      if ( a4 )
        goto LABEL_11;
LABEL_75:
      *(_BYTE *)(a1 + 107) = 1;
      goto LABEL_28;
    }
    v12 = *(_QWORD *)(a1 + 24);
LABEL_26:
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) == v12 && !a4 )
      return 0;
LABEL_28:
    v21 = *(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL);
    if ( v21 )
    {
      v22 = sub_1FBD10(v21, a2);
    }
    else
    {
      if ( *(_BYTE *)a2 != 9 )
        goto LABEL_69;
      v22 = *(__int64 **)(a2 + 8);
    }
    if ( v22 )
    {
      v23 = *v22;
      v24 = *((int *)v22 + 4);
      if ( *(_QWORD *)(v23 + 440) < v24 )
        sub_20A4A0(a5);
      v25 = *(_QWORD *)(v23 + 432) + 104 * v24;
      if ( v25 )
      {
        if ( *(_DWORD *)v25 != 1 )
          return 0;
        v26 = *(_QWORD *)(v25 + 8);
        v46 = v26;
LABEL_35:
        if ( (unsigned int)sub_1C36B0(
                             a1 + 48,
                             *(_QWORD *)(**(_QWORD **)(a1 + 80) + 480LL),
                             v26,
                             1,
                             *(_DWORD *)(*(_QWORD *)(a1 + 80) + 16LL),
                             nullptr,
                             a5,
                             nullptr) )
          return (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(
                   a1,
                   a2,
                   a3,
                   a4);
        return 0;
      }
    }
LABEL_69:
    if ( !(unsigned __int8)sub_32F330(a2, &v46) )
      return 0;
    v26 = v46;
    goto LABEL_35;
  }
  v12 = *(_QWORD *)(a1 + 24);
  if ( v11 == v12 && !a4 )
  {
    if ( v11 && v11 == *(_QWORD *)(a1 + 32) )
      goto LABEL_75;
    goto LABEL_26;
  }
LABEL_11:
  v13 = *(_BYTE *)(a1 + 106);
  if ( !v13 )
    return 4294967263LL;
  v14 = *(_QWORD **)(a1 + 72);
  v15 = *(_QWORD **)(a1 + 80);
  v16 = v15 + 3;
  result = 4294967263LL;
  if ( (unsigned __int64)(v15 + 3) < *v14 + 24LL * v14[1] && v15[3] == *v15 )
  {
    *(_QWORD *)(a1 + 80) = v16;
    v17 = v15[4];
    if ( v17 )
      v18 = *(_QWORD *)(v17 + 24);
    else
      v18 = *(_QWORD *)(v15[3] + 32LL);
    v19 = *(_QWORD **)(a1 + 88);
    *(_QWORD *)(a1 + 64) = v18;
    if ( v19 )
    {
      *v19 = v18;
      v16 = *(_QWORD **)(a1 + 80);
      v14 = *(_QWORD **)(a1 + 72);
    }
    if ( (unsigned __int64)(v16 + 3) < *v14 + 24LL * v14[1] && *v16 == v16[3] )
    {
      v20 = v16[4];
    }
    else
    {
      v13 = 0;
      v20 = 0;
    }
    *(_BYTE *)(a1 + 104) = v13;
    *(_QWORD *)(a1 + 96) = v20;
    *(_BYTE *)(a1 + 107) = 0;
    goto LABEL_28;
  }
  return result;
}

