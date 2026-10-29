unsigned __int64 __fastcall sub_367B40(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int8 a5)
{
  __int64 v5; // r12
  unsigned int v7; // r8d
  int v8; // ebx
  int v9; // r14d
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v14; // rdx
  int v15; // r8d
  _DWORD *v16; // r12
  int v17; // eax
  _DWORD *v18; // rsi
  __int64 v19; // rdx
  _DWORD *v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // r8d
  int v25; // edx
  char v26; // al
  int v27; // ecx
  unsigned int v28; // eax
  char v29; // al
  char v30; // al
  int v31; // eax
  unsigned int v32; // [rsp+0h] [rbp-60h]
  __int16 v33; // [rsp+4h] [rbp-5Ch]
  unsigned int v34; // [rsp+4h] [rbp-5Ch]
  int v35; // [rsp+4h] [rbp-5Ch]
  int v36; // [rsp+4h] [rbp-5Ch]
  int v37; // [rsp+4h] [rbp-5Ch]
  __int64 v39; // [rsp+8h] [rbp-58h]
  int v40; // [rsp+8h] [rbp-58h]
  int v41; // [rsp+8h] [rbp-58h]
  __int64 v42; // [rsp+10h] [rbp-50h] BYREF
  char v43; // [rsp+18h] [rbp-48h]
  unsigned __int64 v44; // [rsp+28h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  if ( a2 == a3 )
    return v44 - __readfsqword(0x28u);
  v5 = a2;
  v7 = *(_DWORD *)(a1 + 72);
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
  if ( a4 >= 0 && (unsigned __int64)a4 < *(_QWORD *)(a1 + 440) )
  {
    v34 = *(_DWORD *)(a1 + 72);
    LODWORD(v42) = 0;
    get_tinfo_size();
    v9 = 0;
    v24 = v34;
    v25 = 2 * v8;
    if ( (v8 & 0x40000000) == 0 )
    {
      if ( v8 > 0 )
      {
        if ( v34 > 0x10 )
        {
LABEL_56:
          if ( v24 != 176 && v24 != 256 )
          {
LABEL_58:
            v26 = getinf_flag();
            v27 = v9;
            if ( v8 >= v9 )
              v27 = v8;
            if ( v26 )
              goto LABEL_68;
            goto LABEL_61;
          }
LABEL_66:
          v27 = v9;
          if ( v8 >= v9 )
            v27 = v8;
          goto LABEL_68;
        }
LABEL_84:
        v24 = getinf();
        goto LABEL_56;
      }
      if ( v34 > 0x10 )
      {
LABEL_63:
        if ( v24 == 176 || v24 == 256 )
          goto LABEL_61;
        goto LABEL_65;
      }
LABEL_90:
      v24 = getinf();
      goto LABEL_63;
    }
    if ( v34 <= 0x10 )
    {
      v31 = getinf();
      v25 = 2 * v8;
      if ( v31 == 176 || v31 == 256 )
      {
        if ( v8 > v25 )
        {
LABEL_83:
          v9 = v25;
          goto LABEL_84;
        }
LABEL_89:
        v9 = v25;
        goto LABEL_90;
      }
      v24 = v34;
    }
    else if ( v34 == 256 || v34 == 176 )
    {
      v27 = v8;
      if ( v8 <= v25 )
        v25 = v8;
      v9 = v25;
      goto LABEL_68;
    }
    v32 = v24;
    v37 = v25;
    v30 = getinf_flag();
    v27 = 0;
    if ( v8 >= 0 )
      v27 = v8;
    if ( v30 )
      goto LABEL_68;
    v25 = v37;
    if ( v8 > v37 )
    {
      v9 = v37;
      if ( v32 > 0x10 )
        goto LABEL_58;
      goto LABEL_83;
    }
    v9 = v37;
    if ( v32 > 0x10 )
    {
LABEL_65:
      if ( (unsigned __int8)getinf_flag() )
        goto LABEL_66;
LABEL_61:
      v27 = v8;
      v9 = v8;
LABEL_68:
      v28 = *(_DWORD *)(a1 + 72);
      if ( v28 <= 0x10 )
      {
        v36 = v27;
        v28 = getinf();
        v27 = v36;
      }
      if ( v28 == 176 || v28 == 256 || (v35 = v27, v29 = getinf_flag(), v27 = v35, v29) )
      {
        v8 = v27;
      }
      else
      {
        v9 = v8;
        v8 = v35;
      }
      goto LABEL_50;
    }
    goto LABEL_89;
  }
  if ( v7 <= 0x10 )
  {
    v7 = getinf();
    if ( v7 != 176 )
      goto LABEL_6;
  }
  else if ( v7 != 176 )
  {
LABEL_6:
    if ( v7 != 256 )
    {
      v9 = v8;
      if ( !(unsigned __int8)getinf_flag() )
      {
LABEL_50:
        v33 = 8 * a5;
        goto LABEL_9;
      }
    }
  }
  if ( a5 )
  {
    v33 = 8;
    v9 = v8;
  }
  else
  {
    v33 = 0;
    v9 = 1;
  }
LABEL_9:
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL) > *(_DWORD *)(a1 + 464) )
  {
    if ( v9 < v8 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(a1 + 72);
        if ( v11 <= 0x10 )
          v11 = getinf();
        v10 = v11 == 176 || v11 == 256 || (unsigned __int8)getinf_flag() ? a3 - v8 : a3;
        v39 = -v8 & (unsigned __int64)(v5 + v8 - 1);
        if ( v10 >= v39 )
          break;
        v8 /= 2;
        if ( v8 <= v9 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      v39 = (v8 - 1 + v5) & -v8;
    }
    if ( a3 <= v39 )
    {
      if ( *(_QWORD *)(a1 + 144) != v5 || a3 <= v5 )
        return v44 - __readfsqword(0x28u);
      v39 = v5;
      v8 = round_down_power2();
    }
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 1496) + 145LL) && v39 + v8 > a3 )
    {
      v12 = *(_DWORD *)(a1 + 72);
      if ( v12 <= 0x10 )
        v12 = getinf();
      if ( v12 != 176 && v12 != 256 && !(unsigned __int8)getinf_flag() )
        break;
    }
    v14 = *(_QWORD *)(a1 + 40);
    v43 = 5;
    v42 = v39;
    v15 = sub_1EB320((__int64 *)(a1 + 432), (__int64)&v42, v14);
    if ( v15 == -1 )
    {
      v42 = 0;
      v40 = sub_22D8D0(a1, v39, v8, (__int64)&v42, 0, *(_QWORD *)(a1 + 40), v33, nullptr);
      clear_tinfo_t();
      v15 = v40;
    }
    v16 = (_DWORD *)(*(_QWORD *)(a1 + 432) + 104LL * v15);
    v17 = v16[6];
    if ( (v17 & 0x100) == 0 )
    {
      v16[6] = v17 & 0xFFE7FEFF | 0x80100;
      v18 = *(_DWORD **)(a1 + 456);
      v19 = *(_QWORD *)(a1 + 464);
      v20 = &v18[v19];
      if ( v18 != v20 )
      {
        v21 = *(_DWORD **)(a1 + 456);
        while ( v15 != *v21 )
        {
          if ( v20 == ++v21 )
            goto LABEL_45;
        }
        if ( v21 != v20 )
        {
          if ( !under_debugger )
            sub_37CFE0(51603);
          BUG();
        }
      }
LABEL_45:
      if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)(v19 + 1) )
      {
        v41 = v15;
        v22 = qvector_reserve();
        v23 = *(_QWORD *)(a1 + 464);
        v15 = v41;
        *(_QWORD *)(a1 + 456) = v22;
        v20 = (_DWORD *)(v22 + 4 * v23);
      }
      *v20 = v15;
      ++*(_QWORD *)(a1 + 464);
    }
    v5 = (int)sub_1BE840(v16, v16[22]);
  }
  return v44 - __readfsqword(0x28u);
}

