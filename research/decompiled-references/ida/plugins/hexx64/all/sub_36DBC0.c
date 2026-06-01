unsigned __int64 __fastcall sub_36DBC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        double a6,
        __m128 a7)
{
  __int64 v7; // r12
  unsigned int v9; // r8d
  int v10; // ebx
  int v11; // r14d
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v16; // rdx
  int v17; // r8d
  _DWORD *v18; // r12
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  _DWORD *v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // r8d
  int v28; // edx
  char v29; // al
  int v30; // ecx
  unsigned int v31; // eax
  char v32; // al
  char v33; // al
  int v34; // eax
  unsigned int v35; // [rsp+0h] [rbp-60h]
  __int16 v36; // [rsp+4h] [rbp-5Ch]
  unsigned int v37; // [rsp+4h] [rbp-5Ch]
  int v38; // [rsp+4h] [rbp-5Ch]
  int v39; // [rsp+4h] [rbp-5Ch]
  int v40; // [rsp+4h] [rbp-5Ch]
  __int64 v42; // [rsp+8h] [rbp-58h]
  int v43; // [rsp+8h] [rbp-58h]
  int v44; // [rsp+8h] [rbp-58h]
  __int64 v45; // [rsp+10h] [rbp-50h] BYREF
  char v46; // [rsp+18h] [rbp-48h]
  unsigned __int64 v47; // [rsp+28h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  if ( a2 == a3 )
    return v47 - __readfsqword(0x28u);
  v7 = a2;
  v9 = *(_DWORD *)(a1 + 72);
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  if ( a4 >= 0 && (unsigned __int64)a4 < *(_QWORD *)(a1 + 440) )
  {
    v37 = *(_DWORD *)(a1 + 72);
    LODWORD(v45) = 0;
    get_tinfo_size();
    v11 = 0;
    v27 = v37;
    v28 = 2 * v10;
    if ( (v10 & 0x40000000) == 0 )
    {
      if ( v10 > 0 )
      {
        if ( v37 > 0x10 )
        {
LABEL_56:
          if ( v27 != 176 && v27 != 256 )
          {
LABEL_58:
            v29 = getinf_flag();
            v30 = v11;
            if ( v10 >= v11 )
              v30 = v10;
            if ( v29 )
              goto LABEL_68;
            goto LABEL_61;
          }
LABEL_66:
          v30 = v11;
          if ( v10 >= v11 )
            v30 = v10;
          goto LABEL_68;
        }
LABEL_84:
        v27 = getinf();
        goto LABEL_56;
      }
      if ( v37 > 0x10 )
      {
LABEL_63:
        if ( v27 == 176 || v27 == 256 )
          goto LABEL_61;
        goto LABEL_65;
      }
LABEL_90:
      v27 = getinf();
      goto LABEL_63;
    }
    if ( v37 <= 0x10 )
    {
      v34 = getinf();
      v28 = 2 * v10;
      if ( v34 == 176 || v34 == 256 )
      {
        if ( v10 > v28 )
        {
LABEL_83:
          v11 = v28;
          goto LABEL_84;
        }
LABEL_89:
        v11 = v28;
        goto LABEL_90;
      }
      v27 = v37;
    }
    else if ( v37 == 256 || v37 == 176 )
    {
      v30 = v10;
      if ( v10 <= v28 )
        v28 = v10;
      v11 = v28;
      goto LABEL_68;
    }
    v35 = v27;
    v40 = v28;
    v33 = getinf_flag();
    v30 = 0;
    if ( v10 >= 0 )
      v30 = v10;
    if ( v33 )
      goto LABEL_68;
    v28 = v40;
    if ( v10 > v40 )
    {
      v11 = v40;
      if ( v35 > 0x10 )
        goto LABEL_58;
      goto LABEL_83;
    }
    v11 = v40;
    if ( v35 > 0x10 )
    {
LABEL_65:
      if ( (unsigned __int8)getinf_flag() )
        goto LABEL_66;
LABEL_61:
      v30 = v10;
      v11 = v10;
LABEL_68:
      v31 = *(_DWORD *)(a1 + 72);
      if ( v31 <= 0x10 )
      {
        v39 = v30;
        v31 = getinf();
        v30 = v39;
      }
      if ( v31 == 176 || v31 == 256 || (v38 = v30, v32 = getinf_flag(), v30 = v38, v32) )
      {
        v10 = v30;
      }
      else
      {
        v11 = v10;
        v10 = v38;
      }
      goto LABEL_50;
    }
    goto LABEL_89;
  }
  if ( v9 <= 0x10 )
  {
    v9 = getinf();
    if ( v9 != 176 )
      goto LABEL_6;
  }
  else if ( v9 != 176 )
  {
LABEL_6:
    if ( v9 != 256 )
    {
      v11 = v10;
      if ( !(unsigned __int8)getinf_flag() )
      {
LABEL_50:
        v36 = 8 * a5;
        goto LABEL_9;
      }
    }
  }
  if ( a5 )
  {
    v36 = 8;
    v11 = v10;
  }
  else
  {
    v36 = 0;
    v11 = 1;
  }
LABEL_9:
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL) > *(_DWORD *)(a1 + 464) )
  {
    if ( v11 < v10 )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(a1 + 72);
        if ( v13 <= 0x10 )
          v13 = getinf();
        v12 = v13 == 176 || v13 == 256 || (unsigned __int8)getinf_flag() ? a3 - v10 : a3;
        v42 = -v10 & (unsigned __int64)(v7 + v10 - 1);
        if ( v12 >= v42 )
          break;
        v10 /= 2;
        if ( v10 <= v11 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      v42 = (v10 - 1 + v7) & -v10;
    }
    if ( a3 <= v42 )
    {
      if ( *(_QWORD *)(a1 + 144) != v7 || a3 <= v7 )
        return v47 - __readfsqword(0x28u);
      v42 = v7;
      v10 = round_down_power2();
    }
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) && v42 + v10 > a3 )
    {
      v14 = *(_DWORD *)(a1 + 72);
      if ( v14 <= 0x10 )
        v14 = getinf();
      if ( v14 != 176 && v14 != 256 && !(unsigned __int8)getinf_flag() )
        break;
    }
    v16 = *(_QWORD *)(a1 + 40);
    v46 = 5;
    v45 = v42;
    v17 = sub_1F06E0((__int64 *)(a1 + 432), &v45, v16);
    if ( v17 == -1 )
    {
      v45 = 0;
      v43 = sub_232C90(a1, v42, v10, (__int64)&v45, 0, *(_QWORD *)(a1 + 40), a6, a7, v36, nullptr);
      clear_tinfo_t();
      v17 = v43;
    }
    v18 = (_DWORD *)(*(_QWORD *)(a1 + 432) + 104LL * v17);
    v19 = v18[6];
    if ( (v19 & 0x100) == 0 )
    {
      v18[6] = v19 & 0xFFE7FEFF | 0x80100;
      v20 = *(_QWORD *)(a1 + 456);
      v21 = *(_QWORD *)(a1 + 464);
      v22 = (_DWORD *)(v20 + 4 * v21);
      if ( (_DWORD *)v20 != v22 )
      {
        v23 = *(_DWORD **)(a1 + 456);
        while ( v17 != *v23 )
        {
          if ( v22 == ++v23 )
            goto LABEL_45;
        }
        if ( v23 != v22 )
        {
          if ( !under_debugger )
            sub_383060(0xC993u, a6);
          BUG();
        }
      }
LABEL_45:
      v24 = v21 + 1;
      if ( *(_QWORD *)(a1 + 472) < v24 )
      {
        v44 = v17;
        v25 = qvector_reserve(a1 + 456, v20, v24, 4);
        v26 = *(_QWORD *)(a1 + 464);
        v17 = v44;
        *(_QWORD *)(a1 + 456) = v25;
        v22 = (_DWORD *)(v25 + 4 * v26);
      }
      *v22 = v17;
      ++*(_QWORD *)(a1 + 464);
    }
    v7 = (int)sub_1C35C0(v18, v18[22], a6);
  }
  return v47 - __readfsqword(0x28u);
}

