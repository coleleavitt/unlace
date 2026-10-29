__int64 __fastcall sub_206080(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int8 a4)
{
  char v5; // al
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // cl
  _QWORD *v13; // rdx
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD **v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // r13
  int v29; // r12d
  __int64 v30; // rax
  unsigned int v31; // eax
  _BYTE *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rsi
  int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rax
  unsigned int v39; // [rsp+0h] [rbp-88h]
  unsigned int v40; // [rsp+0h] [rbp-88h]
  unsigned int v41; // [rsp+Ch] [rbp-7Ch]
  __int64 v42; // [rsp+18h] [rbp-70h] BYREF
  __int64 v43; // [rsp+20h] [rbp-68h] BYREF
  __int64 tinfo_property; // [rsp+28h] [rbp-60h]
  __int64 v45; // [rsp+30h] [rbp-58h] BYREF
  __int128 v46; // [rsp+38h] [rbp-50h]
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]

  v5 = *(_BYTE *)a2;
  v47 = __readfsqword(0x28u);
  if ( v5 == 8 )
  {
    v28 = *(_QWORD *)(a2 + 8);
    v29 = 0;
    v30 = 0;
    v45 = 0;
    v46 = 0;
    if ( !*(_QWORD *)(v28 + 32) )
    {
      v42 = 0;
LABEL_43:
      *(_BYTE *)(a1 + 40) = 1;
      v31 = 0;
LABEL_44:
      v41 = v31;
      clear_tinfo_t();
      result = v41;
LABEL_45:
      if ( v45 )
      {
        v40 = result;
        *(_QWORD *)&v46 = 0;
        qfree();
        return v40;
      }
      return result;
    }
    while ( 1 )
    {
      v32 = (_BYTE *)(*(_QWORD *)(v28 + 24) + 80 * v30);
      if ( *v32 != 10 )
        goto LABEL_49;
      v43 = 0;
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      if ( (get_tinfo_property() & 0x40) != 0 )
      {
        clear_tinfo_t();
LABEL_49:
        result = sub_11A7B0((__int64)v32, a1, (__int64)(v32 + 24), 0);
        if ( (_DWORD)result )
          goto LABEL_45;
        v30 = ++v29;
        if ( (unsigned __int64)v29 >= *(_QWORD *)(v28 + 32) )
        {
LABEL_56:
          v42 = 0;
          if ( (_QWORD)v46 )
          {
            v35 = 0;
            v36 = 0;
            while ( 1 )
            {
              v37 = *(_QWORD *)(v28 + 24) + 80LL * *(int *)(v45 + 4 * v36);
              if ( *(_BYTE *)v37 == 10 )
              {
                v43 = 0;
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
                  v38 = v42;
                  v42 = v43;
                  v43 = v38;
                  clear_tinfo_t();
                  v31 = sub_11A7B0(*(_QWORD *)(v37 + 8), a1, (__int64)&v42, 1);
                  if ( v31 )
                    goto LABEL_44;
                }
              }
              v36 = ++v35;
              if ( v35 >= (unsigned __int64)v46 )
                goto LABEL_43;
            }
          }
          goto LABEL_43;
        }
      }
      else
      {
        clear_tinfo_t();
        v33 = v46;
        v34 = v45;
        if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v46 + 1) )
        {
          v45 = qvector_reserve();
          v34 = v45;
          v33 = v46;
        }
        *(_DWORD *)(v34 + 4 * v33) = v29++;
        *(_QWORD *)&v46 = v46 + 1;
        v30 = v29;
        if ( (unsigned __int64)v29 >= *(_QWORD *)(v28 + 32) )
          goto LABEL_56;
      }
    }
  }
  if ( v5 == 10 )
  {
    v43 = 0;
    tinfo_property = 0;
    if ( a3 )
    {
      v45 = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
    }
    if ( (get_tinfo_property() & 0x40) == 0 )
    {
      v26 = v43;
      v43 = tinfo_property;
      tinfo_property = v26;
      clear_tinfo_t();
      v27 = sub_11A7B0(*(_QWORD *)(a2 + 8), a1, (__int64)&v43, 1);
      *(_BYTE *)(a1 + 40) = 1;
      v39 = v27;
      clear_tinfo_t();
      return v39;
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
  v10 = *(_QWORD *)(a1 + 96);
  if ( !*(_BYTE *)(a1 + 107) )
  {
    if ( v10 && v10 == *(_QWORD *)(a1 + 32) )
    {
      if ( a4 )
        goto LABEL_11;
LABEL_75:
      *(_BYTE *)(a1 + 107) = 1;
      goto LABEL_28;
    }
    v11 = *(_QWORD *)(a1 + 24);
LABEL_26:
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) == v11 && !a4 )
      return 0;
LABEL_28:
    v20 = *(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL);
    if ( v20 )
    {
      v21 = sub_1F7490(v20, a2);
    }
    else
    {
      if ( *(_BYTE *)a2 != 9 )
        goto LABEL_69;
      v21 = *(__int64 **)(a2 + 8);
    }
    if ( v21 )
    {
      v22 = *v21;
      v23 = *((int *)v21 + 4);
      if ( *(_QWORD *)(v22 + 440) < v23 )
        sub_205C20();
      v24 = *(_QWORD *)(v22 + 432) + 104 * v23;
      if ( v24 )
      {
        if ( *(_DWORD *)v24 != 1 )
          return 0;
        v25 = *(_QWORD *)(v24 + 8);
        v45 = v25;
LABEL_35:
        if ( (unsigned int)sub_1BF2F0(
                             a1 + 48,
                             *(_QWORD *)(**(_QWORD **)(a1 + 80) + 480LL),
                             v25,
                             1,
                             *(unsigned int *)(*(_QWORD *)(a1 + 80) + 16LL),
                             nullptr,
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
    if ( !(unsigned __int8)sub_32A2E0(a2, &v45) )
      return 0;
    v25 = v45;
    goto LABEL_35;
  }
  v11 = *(_QWORD *)(a1 + 24);
  if ( v10 == v11 && !a4 )
  {
    if ( v10 && v10 == *(_QWORD *)(a1 + 32) )
      goto LABEL_75;
    goto LABEL_26;
  }
LABEL_11:
  v12 = *(_BYTE *)(a1 + 106);
  if ( !v12 )
    return 4294967263LL;
  v13 = *(_QWORD **)(a1 + 72);
  v14 = *(_QWORD **)(a1 + 80);
  v15 = v14 + 3;
  result = 4294967263LL;
  if ( (unsigned __int64)(v14 + 3) < *v13 + 24LL * v13[1] && v14[3] == *v14 )
  {
    *(_QWORD *)(a1 + 80) = v15;
    v16 = v14[4];
    if ( v16 )
      v17 = *(_QWORD *)(v16 + 24);
    else
      v17 = *(_QWORD *)(v14[3] + 32LL);
    v18 = *(_QWORD **)(a1 + 88);
    *(_QWORD *)(a1 + 64) = v17;
    if ( v18 )
    {
      *v18 = v17;
      v15 = *(_QWORD **)(a1 + 80);
      v13 = *(_QWORD **)(a1 + 72);
    }
    if ( (unsigned __int64)(v15 + 3) < *v13 + 24LL * v13[1] && *v15 == v15[3] )
    {
      v19 = v15[4];
    }
    else
    {
      v12 = 0;
      v19 = 0;
    }
    *(_BYTE *)(a1 + 104) = v12;
    *(_QWORD *)(a1 + 96) = v19;
    *(_BYTE *)(a1 + 107) = 0;
    goto LABEL_28;
  }
  return result;
}

