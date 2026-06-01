__int64 __fastcall sub_75300(__int64 a1, _DWORD *a2, __int64 **a3)
{
  __int64 v5; // r14
  int v6; // r15d
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  unsigned int v14; // r15d
  unsigned __int64 *v15; // r11
  __int64 v16; // r9
  unsigned __int64 *v17; // rax
  unsigned __int64 *v18; // r12
  __int64 *v19; // rbp
  __int64 v20; // rax
  unsigned __int8 (__fastcall *v21)(__int64 *, __int64); // r12
  __int64 v22; // rax
  __int64 *v23; // rbp
  __int64 v24; // rax
  unsigned __int64 *v26; // rax
  char v27; // al
  unsigned __int64 v28; // r10
  char *v29; // r15
  _QWORD *v30; // rsi
  unsigned __int64 v31; // r11
  _QWORD *v32; // r8
  unsigned __int64 v33; // rdx
  char *v34; // rax
  __int64 v35; // r9
  unsigned __int64 *v36; // rax
  int v37; // [rsp+8h] [rbp-70h]
  unsigned __int64 v38; // [rsp+10h] [rbp-68h]
  unsigned int n; // [rsp+18h] [rbp-60h]
  __int64 nb; // [rsp+18h] [rbp-60h]
  unsigned int na; // [rsp+18h] [rbp-60h]
  unsigned int nc; // [rsp+18h] [rbp-60h]
  __int64 v43; // [rsp+20h] [rbp-58h]
  unsigned __int64 v44; // [rsp+20h] [rbp-58h]
  unsigned __int64 v45; // [rsp+20h] [rbp-58h]
  unsigned int v46; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v47; // [rsp+32h] [rbp-46h] BYREF
  unsigned __int8 v48; // [rsp+36h] [rbp-42h]
  unsigned __int64 v49; // [rsp+38h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( *a2 != 244 )
    return 0;
  v37 = (*(__int64 (__fastcall **)(__int64 *))(**a3 + 32))(*a3);
  v5 = (unsigned int)(a2[1] + v37);
  while ( 1 )
  {
    if ( (*(__int64 (__fastcall **)(__int64 *))(**a3 + 32))(*a3) >= v5 )
      return 1;
    v6 = (*(__int64 (__fastcall **)(__int64 *))(**a3 + 32))(*a3);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, unsigned int *, __int64))(**a3 + 48))(*a3, &v47, 6) )
      return 0xFFFFFFFFLL;
    v7 = *(unsigned int *)(a1 + 24);
    v8 = sub_74EC0(*(_QWORD **)(a1 + 8), v7, v47);
    v11 = v8;
    if ( v8 == -1 )
      goto LABEL_14;
    v12 = *(_QWORD *)(a1 + 16);
    v13 = *(_QWORD *)(v12 + 8);
    v14 = v6 - v37;
    v38 = v14;
    v9 = v14 % v13;
    v15 = *(unsigned __int64 **)(*(_QWORD *)v12 + 8 * v9);
    v16 = 8 * v9;
    if ( v15 )
    {
      v17 = (unsigned __int64 *)*v15;
      v10 = *(unsigned int *)(*v15 + 8);
      if ( v14 == (_DWORD)v10 )
      {
LABEL_11:
        if ( v15 )
        {
          v18 = (unsigned __int64 *)*v15;
          if ( *v15 )
            goto LABEL_13;
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = *v17;
          if ( !*v17 )
            break;
          v10 = *(unsigned int *)(v7 + 8);
          v15 = v17;
          v9 = v10 % v13;
          if ( v14 % v13 != v10 % v13 )
            break;
          v17 = (unsigned __int64 *)*v17;
          if ( v14 == (_DWORD)v10 )
            goto LABEL_11;
        }
      }
    }
    v43 = v16;
    n = v11;
    v26 = (unsigned __int64 *)operator new(0x10u);
    *v26 = 0;
    v18 = v26;
    *((_DWORD *)v26 + 2) = v14;
    *((_DWORD *)v26 + 3) = 0;
    v7 = *(_QWORD *)(v12 + 8);
    v27 = std::__detail::_Prime_rehash_policy::_M_need_rehash(
            (std::__detail::_Prime_rehash_policy *)(v12 + 32),
            v7,
            *(_QWORD *)(v12 + 24),
            1u);
    v11 = n;
    if ( v27 )
    {
      v28 = v9;
      if ( v9 == 1 )
      {
        v10 = v12 + 48;
        *(_QWORD *)(v12 + 48) = 0;
        v29 = (char *)(v12 + 48);
      }
      else
      {
        if ( v9 >> 60 )
        {
          if ( v9 >> 61 )
            sub_23D63(v12 + 32, v7, v9, v10, n);
          std::__throw_bad_alloc();
        }
        v46 = n;
        v44 = v9;
        nb = 8 * v9;
        v29 = (char *)operator new(8 * v9);
        memset(v29, 0, nb);
        v11 = v46;
        v28 = v44;
        v10 = v12 + 48;
      }
      v30 = *(_QWORD **)(v12 + 16);
      v31 = 0;
      *(_QWORD *)(v12 + 16) = 0;
      if ( v30 )
      {
        na = v11;
        do
        {
          while ( 1 )
          {
            v32 = v30;
            v30 = (_QWORD *)*v30;
            v33 = *((unsigned int *)v32 + 2) % v28;
            v34 = &v29[8 * v33];
            if ( !*(_QWORD *)v34 )
              break;
            *v32 = **(_QWORD **)v34;
            **(_QWORD **)v34 = v32;
            if ( !v30 )
              goto LABEL_29;
          }
          *v32 = *(_QWORD *)(v12 + 16);
          *(_QWORD *)(v12 + 16) = v32;
          *(_QWORD *)v34 = v12 + 16;
          if ( *v32 )
            *(_QWORD *)&v29[8 * v31] = v32;
          v31 = v33;
        }
        while ( v30 );
LABEL_29:
        v11 = na;
      }
      v7 = *(_QWORD *)(v12 + 8);
      if ( *(_QWORD *)v12 != v10 )
      {
        v7 *= 8LL;
        v45 = v28;
        nc = v11;
        operator delete(*(void **)v12, v7);
        v28 = v45;
        v11 = nc;
      }
      *(_QWORD *)(v12 + 8) = v28;
      *(_QWORD *)v12 = v29;
      v9 = v38 % v28;
      v35 = 8 * (v38 % v28);
      v36 = *(unsigned __int64 **)&v29[v35];
      if ( !v36 )
      {
LABEL_33:
        *v18 = *(_QWORD *)(v12 + 16);
        *(_QWORD *)(v12 + 16) = v18;
        if ( *v18 )
          *(_QWORD *)(*(_QWORD *)v12 + 8 * ((unsigned __int64)*(unsigned int *)(*v18 + 8) % *(_QWORD *)(v12 + 8))) = v18;
        v9 = v12 + 16;
        *(_QWORD *)(*(_QWORD *)v12 + v35) = v12 + 16;
        goto LABEL_39;
      }
    }
    else
    {
      v35 = v43;
      v36 = *(unsigned __int64 **)(*(_QWORD *)v12 + v43);
      if ( !v36 )
        goto LABEL_33;
    }
    *v18 = *v36;
    **(_QWORD **)(*(_QWORD *)v12 + v35) = v18;
LABEL_39:
    ++*(_QWORD *)(v12 + 24);
LABEL_13:
    *((_DWORD *)v18 + 3) = v11;
LABEL_14:
    v19 = *a3;
    v20 = **a3;
    v21 = *(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v20 + 40);
    v22 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64, unsigned __int64, __int64))(v20 + 32))(
            *a3,
            v7,
            v9,
            v10,
            v11);
    if ( v21(v19, v22 + v48) )
    {
      v23 = *a3;
      v24 = (*(__int64 (__fastcall **)(__int64 *))(**a3 + 32))(*a3);
      if ( !(v24 % 4)
        || (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v23 + 40))(v23, v24 + 4 - (unsigned int)(v24 % 4)) )
      {
        continue;
      }
    }
    return 1;
  }
}

