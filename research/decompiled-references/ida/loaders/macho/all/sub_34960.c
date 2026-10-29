__int64 __fastcall sub_34960(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  char v5; // al
  char *v6; // rbp
  char *v7; // rdi
  const char *v8; // r13
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  char *v11; // rax
  _BYTE *v12; // rdi
  int v13; // esi
  char *v14; // r15
  unsigned int v15; // eax
  unsigned __int8 *v16; // rax
  char v17; // r8
  unsigned __int8 v18; // cl
  const char *v19; // rdi
  bool v20; // si
  _BYTE *v21; // rdx
  _BYTE *v22; // rax
  char v23; // cl
  __int64 v24; // rax
  size_t v25; // rax
  size_t v26; // r13
  size_t v27; // rbx
  __int64 (*v28)(); // rcx
  _BYTE *v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // r13
  _QWORD *v32; // rbx
  __int64 v33; // rbp
  __int64 v34; // rbx
  __int64 v35; // rax
  const char *v36; // rsi
  const void *v37; // r13
  char v38; // [rsp+0h] [rbp-A8h]
  unsigned int s; // [rsp+8h] [rbp-A0h]
  char *v40; // [rsp+10h] [rbp-98h] BYREF
  __int128 v41; // [rsp+18h] [rbp-90h]
  void *dest; // [rsp+30h] [rbp-78h]
  __int128 v43; // [rsp+38h] [rbp-70h]
  __int64 v44; // [rsp+50h] [rbp-58h] BYREF
  __int128 v45; // [rsp+58h] [rbp-50h]
  unsigned __int64 v46; // [rsp+68h] [rbp-40h]

  v2 = *(unsigned int *)(a2 + 44);
  v46 = __readfsqword(0x28u);
  v41 = 0;
  v40 = nullptr;
  if ( !(_DWORD)v2 )
  {
    *(_QWORD *)(a1 + 48) = -1;
    return 1;
  }
  v5 = sub_31220(
         *(_QWORD *)(a1 + 8),
         (__int64 *)&v40,
         *(_DWORD *)(a2 + 40),
         v2,
         (__int64)"exported symbol info size",
         0);
  v6 = v40;
  v7 = v40;
  if ( !v5 )
    goto LABEL_18;
  v8 = s1;
  v9 = (unsigned __int64)&v40[v41];
  if ( *(_QWORD *)(a1 + 24) )
    v8 = *(const char **)(a1 + 16);
  dest = v40;
  v10 = (unsigned __int64)(v41 + 7) >> 3;
  v45 = 0;
  v44 = 0;
  if ( !v10 )
  {
    if ( v40 )
    {
      v11 = v40;
      v12 = nullptr;
      goto LABEL_10;
    }
    goto LABEL_17;
  }
  v44 = qvector_reserve();
  v12 = (_BYTE *)v44;
  v24 = v45;
  if ( (unsigned __int64)v45 < v10 )
  {
    do
    {
      v12[v24++] = 0;
      v12 = (_BYTE *)v44;
    }
    while ( v10 != v24 );
  }
  v11 = (char *)dest;
  *(_QWORD *)&v45 = v10;
  if ( !dest )
  {
LABEL_56:
    if ( v12 )
      goto LABEL_16;
    goto LABEL_57;
  }
  while ( 1 )
  {
LABEL_10:
    if ( (unsigned __int64)v11 >= v9 || v11 < v6 || (v13 = (unsigned __int8)*v12, _bittest(&v13, 0)) )
    {
      v14 = nullptr;
      goto LABEL_60;
    }
    *v12 |= 1u;
    v14 = (char *)dest;
    if ( (unsigned __int64)dest >= v9 )
    {
      if ( *v8 )
        goto LABEL_15;
LABEL_26:
      if ( v14 < v6 || (unsigned __int64)v14 >= v9 )
        goto LABEL_15;
      goto LABEL_28;
    }
    v15 = *(unsigned __int8 *)dest;
    dest = (char *)dest + 1;
    s = v15;
    if ( v15 <= 0x7F )
    {
      ++v14;
    }
    else
    {
      dest = v14;
      if ( !(unsigned __int8)unpack_xleb128() )
        goto LABEL_15;
      v14 = (char *)dest;
    }
    if ( !*v8 )
    {
      if ( !s )
        goto LABEL_26;
      v12 = (_BYTE *)v44;
LABEL_60:
      if ( v12 )
      {
        *(_QWORD *)&v45 = 0;
        qfree();
      }
      if ( !v14 )
      {
LABEL_57:
        v6 = v40;
        goto LABEL_17;
      }
      if ( !(unsigned __int8)unpack_xleb128() )
        goto LABEL_67;
      if ( (v38 & 8) != 0 )
      {
        if ( !*(_QWORD *)(a1 + 40) )
        {
          if ( *(_BYTE *)(a1 + 56) )
          {
            v36 = s1;
            if ( *(_QWORD *)(a1 + 24) )
              v36 = *(const char **)(a1 + 16);
            sub_112F0((__int64)"symbol '%s' is reexported but cannot follow without the dyld cache!\n", v36);
          }
          goto LABEL_67;
        }
        if ( !(unsigned __int8)unpack_xleb128() )
        {
LABEL_67:
          v7 = v40;
          goto LABEL_18;
        }
        dest = nullptr;
        v43 = 0;
        v25 = strlen(v14);
        v26 = v25 + 1;
        v27 = v25;
        dest = (void *)qvector_reserve();
        *(_QWORD *)&v43 = v26;
        memmove(dest, v14, v27);
        *((_BYTE *)dest + v27) = 0;
        v29 = dest;
        if ( !(_QWORD)v43 )
          v29 = &unk_66C09;
        if ( !*v29 )
        {
          v30 = *(_QWORD *)(a1 + 24);
          if ( v30 > 1 )
          {
            v37 = *(const void **)(a1 + 16);
            if ( *((_QWORD *)&v43 + 1) < v30 )
              dest = (void *)qvector_reserve();
            *(_QWORD *)&v43 = v30;
            memmove(dest, v37, v30 - 1);
            *((char *)dest + v30 - 1) = 0;
          }
          else
          {
            *(_QWORD *)&v43 = 0;
          }
        }
        sub_2B040((__int64)&v44, *(_QWORD **)(a1 + 8), nullptr, v28);
        v31 = v45;
        if ( v44 )
        {
          if ( (_QWORD)v45 )
          {
            v32 = (_QWORD *)v44;
            v33 = 0;
            do
            {
              if ( *v32 )
              {
                v32[1] = 0;
                qfree();
              }
              ++v33;
              v32 += 3;
            }
            while ( v33 != v31 );
          }
          qfree();
        }
        if ( dest )
        {
          *(_QWORD *)&v43 = 0;
          qfree();
        }
      }
      else
      {
        if ( !(unsigned __int8)unpack_xleb128() )
          goto LABEL_67;
        v34 = *(_QWORD *)(a1 + 8);
        if ( !*(_BYTE *)(v34 + 440) )
          sub_28840(*(_QWORD *)(a1 + 8));
        v35 = *(_QWORD *)(v34 + 448);
        if ( v35 == -1 )
          v35 = 0;
        *(_QWORD *)(a1 + 48) += v35;
      }
      v7 = v40;
      goto LABEL_19;
    }
    if ( (unsigned __int64)v14 >= v9 )
      goto LABEL_15;
    if ( v14 < v6 )
      goto LABEL_15;
    v14 += s;
    if ( (unsigned __int64)v14 >= v9 || v14 < v6 )
      goto LABEL_15;
LABEL_28:
    v16 = (unsigned __int8 *)(v14 + 1);
    v17 = *v14;
    dest = v14 + 1;
    if ( v14 + 1 < v6 || (unsigned __int64)(v14 + 1) >= v9 )
      goto LABEL_15;
    if ( !v17 )
    {
LABEL_44:
      v11 = v6;
      goto LABEL_45;
    }
LABEL_30:
    v18 = *v16;
    if ( *v16 )
      break;
LABEL_95:
    dest = v16 + 1;
    if ( !(unsigned __int8)unpack_xleb128() )
    {
      v12 = (_BYTE *)v44;
      goto LABEL_56;
    }
    v11 = v6;
LABEL_45:
    dest = v11;
    v12 = (_BYTE *)v44;
    if ( !v11 )
      goto LABEL_56;
  }
  v19 = v8;
  v20 = 0;
  while ( 1 )
  {
    if ( !v20 )
      v20 = *v19++ != v18;
    dest = v16 + 1;
    if ( (unsigned __int8 *)v9 == v16 + 1 )
      break;
    v18 = v16[1];
    if ( !v18 )
    {
      if ( !v20 )
      {
        ++v16;
        v8 = v19;
        goto LABEL_95;
      }
      v21 = v16 + 2;
      dest = v21;
      v22 = v16 + 2;
      if ( (unsigned __int64)v21 < v9 )
      {
        while ( 1 )
        {
          v23 = *v21;
          v22 = v21++;
          if ( v23 >= 0 )
            break;
          dest = v21;
          if ( (_BYTE *)v9 == v21 )
          {
            v22 = (_BYTE *)v9;
            break;
          }
        }
      }
      v16 = v22 + 1;
      dest = v16;
      if ( --v17 && (unsigned __int64)v16 < v9 )
        goto LABEL_30;
      goto LABEL_44;
    }
    ++v16;
  }
LABEL_15:
  if ( !v44 )
    goto LABEL_57;
LABEL_16:
  *(_QWORD *)&v45 = 0;
  qfree();
  v6 = v40;
LABEL_17:
  v7 = v6;
LABEL_18:
  *(_QWORD *)(a1 + 48) = -1;
LABEL_19:
  if ( v7 )
  {
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  return 1;
}

