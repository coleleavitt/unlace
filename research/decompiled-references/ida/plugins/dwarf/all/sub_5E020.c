__int64 __fastcall sub_5E020(_DWORD *a1, unsigned __int8 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r14d
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 tinfo_size; // rax
  __int64 v17; // rdx
  __int64 idati; // rax
  __int64 v19; // [rsp+8h] [rbp-80h]
  __int64 v20; // [rsp+8h] [rbp-80h]
  unsigned int *v21; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+18h] [rbp-70h] BYREF
  int v23; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+40h] [rbp-48h] BYREF
  __int64 v27; // [rsp+48h] [rbp-40h]
  __int16 v28; // [rsp+50h] [rbp-38h]
  unsigned __int64 v29; // [rsp+58h] [rbp-30h]

  v3 = a3[10];
  v29 = __readfsqword(0x28u);
  v23 = 0;
  v24 = -1;
  v25 = *(unsigned int *)(v3 + 192);
  if ( !(unsigned __int8)sub_554E0(&v21, (__int64)&v23, a1, 0) )
    return -1;
  v7 = v23;
  v8 = v24;
  result = v25;
  if ( (v23 & 0xFFFFFFFD) != 0 )
  {
    if ( v23 == 1 )
      return result;
    goto LABEL_12;
  }
  v10 = *v21;
  if ( (_DWORD)v10 == 1 )
  {
    v12 = *((_QWORD *)v21 + 1);
    v13 = *(_DWORD *)(v12 + 272);
    if ( v13 == 2 )
    {
      v22 = 0;
      v17 = *(unsigned int *)(v12 + 276);
      if ( !(_DWORD)v17 )
        goto LABEL_31;
      idati = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL) + 144LL) + 8LL);
      v28 = 257;
      v27 = (unsigned int)v17;
      if ( !idati )
        idati = get_idati(&v21, 257, v17, v10, v5, v6);
      v26 = idati;
      if ( !(unsigned __int8)create_tinfo(&v22, 61, 189, &v26)
        || (tinfo_size = get_tinfo_size(0, v22, a2), tinfo_size == -1) )
      {
LABEL_31:
        if ( (*(_BYTE *)(v12 + 412) & 1) != 0 )
        {
          tinfo_size = *(_QWORD *)(v12 + 416) >> 3;
        }
        else
        {
          tinfo_size = *(_QWORD *)(v12 + 368);
          if ( tinfo_size == -1 && !*(_QWORD *)(v12 + 392) )
            tinfo_size = 1;
        }
      }
      if ( v7 == 2 )
        tinfo_size *= v8;
      goto LABEL_29;
    }
    if ( v13 != 3 )
    {
      if ( v13 || (get_tinfo_property(*(_QWORD *)(v12 + 384), 2) & 0x3F) != 0x2D )
        goto LABEL_47;
      if ( *(_DWORD *)(v12 + 272) )
        v12 = 0;
      result = get_tinfo_size(0, *(_QWORD *)(v12 + 384), a2);
    }
    if ( v7 != 2 )
      return result;
LABEL_12:
    result *= v8;
    return result;
  }
  if ( (_DWORD)v10 == 2 )
  {
    v22 = 0;
    v14 = v21[4];
    v15 = *((_QWORD *)v21 + 1);
    v28 = 257;
    v27 = (unsigned int)v14;
    if ( !v15 )
      v15 = get_idati(&v21, &v23, 257, v14, v5, v6);
    v26 = v15;
    if ( !(unsigned __int8)create_tinfo(&v22, 61, 189, &v26) )
    {
      clear_tinfo_t(&v22);
      return 0;
    }
    tinfo_size = get_tinfo_size(0, v22, a2);
    if ( v7 == 2 )
      tinfo_size *= v8;
LABEL_29:
    v20 = tinfo_size;
    clear_tinfo_t(&v22);
    return v20;
  }
  if ( (_DWORD)v10 != 3 )
  {
    if ( under_debugger )
      goto LABEL_49;
    interr(782);
LABEL_47:
    if ( !under_debugger )
      interr(30218);
LABEL_49:
    BUG();
  }
  v26 = 0;
  if ( (unsigned __int8)sub_5D4A0(a3, &v26, (const __m128i *)(v21 + 2)) )
  {
    v11 = get_tinfo_size(0, v26, a2);
    if ( v7 == 2 )
      v11 *= v8;
    v19 = v11;
    clear_tinfo_t(&v26);
    return v19;
  }
  else
  {
    clear_tinfo_t(&v26);
    return 0;
  }
}

