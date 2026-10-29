__int64 __fastcall sub_51B60(__int64 a1, __int64 a2, __int64 a3, int a4, double a5, double a6, double a7, __m128 a8)
{
  int v9; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // eax
  size_t v19; // rbx
  __int64 v20; // r15
  __int64 v21; // r13
  __int64 v22; // r15
  unsigned int v23; // eax
  unsigned int v24; // ebx
  int *v25; // r13
  int v26; // r9d
  size_t v27; // r13
  size_t v28; // r8
  __int64 v29; // rax
  unsigned __int64 v31; // rdx
  _BYTE *v32; // rdx
  __int64 v33; // rbp
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  void *v40; // rax
  const void *v41; // rsi
  __int64 v42; // [rsp+0h] [rbp-B8h]
  __int64 v43; // [rsp+8h] [rbp-B0h]
  _BYTE *v44; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v45; // [rsp+18h] [rbp-A0h]
  void *dest; // [rsp+30h] [rbp-88h]
  __int128 v47; // [rsp+38h] [rbp-80h]
  int v48; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-60h]
  __int128 v50; // [rsp+60h] [rbp-58h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  v9 = a2;
  v51 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 1384);
  if ( (_DWORD)a2 != -3 )
  {
    v12 = *(_QWORD *)(a1 + 1376);
    v13 = v12 + 112 * v11;
    if ( v12 == v13 )
      return 0;
    while ( 1 )
    {
      v14 = v12;
      if ( (_DWORD)a2 == *(_DWORD *)(v12 + 24) )
        break;
      v12 += 112;
      if ( v13 == v12 )
        return 0;
    }
    if ( !v12 )
      return 0;
    if ( (_DWORD)a2 == *(_DWORD *)(a1 + 1364) )
      goto LABEL_11;
    a2 = (unsigned int)a2;
LABEL_9:
    if ( (unsigned __int8)sub_68CC0(*(_QWORD *)(a1 + 864), a2, 0) )
    {
      *(_DWORD *)(a1 + 1364) = v9;
      goto LABEL_11;
    }
    if ( *(_QWORD *)(a1 + 1384) > 1u )
    {
      sub_70460(a1, (unsigned int)"GDB: Error setting thread\n", v15, v16, v17);
      return 0;
    }
    goto LABEL_11;
  }
  if ( !v11 )
    return 0;
  v14 = *(_QWORD *)(a1 + 1376);
  if ( !v14 )
    return 0;
  a2 = 0;
  if ( *(_DWORD *)(a1 + 1364) != -3 )
    goto LABEL_9;
LABEL_11:
  v18 = *(_DWORD *)a3;
  v48 = -2;
  v50 = 0;
  if ( v18 < -1 )
  {
    v31 = *(_QWORD *)(a3 + 8);
    v48 = v18;
    v49 = v31;
    if ( *(_DWORD *)(a1 + 784) != a4 )
      goto LABEL_15;
    goto LABEL_35;
  }
  v19 = *(_QWORD *)(a3 + 16);
  v49 = 0;
  v50 = 0;
  if ( v19 )
  {
    v40 = (void *)qalloc_or_throw();
    v41 = *(const void **)(a3 + 8);
    *((_QWORD *)&v50 + 1) = v19;
    v49 = (unsigned __int64)v40;
    memcpy(v40, v41, v19);
    *(_QWORD *)&v50 = v19;
    v18 = *(_DWORD *)a3;
  }
  v48 = v18;
  if ( *(_DWORD *)(a1 + 784) == a4 )
  {
LABEL_35:
    if ( *(_DWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120) == 12 )
      v49 |= get_sreg() != 0;
  }
LABEL_15:
  v42 = a4;
  v20 = *(_QWORD *)(a1 + 1216);
  v21 = 48LL * a4;
  v45 = 0;
  v44 = nullptr;
  v22 = v21 + v20;
  LOBYTE(v23) = sub_51500(a1, (__int64)&v44, &v48, *(int *)(v22 + 4), a4);
  v24 = v23;
  if ( (_BYTE)v23 )
  {
    if ( (unsigned __int64)a4 < *(_QWORD *)(v14 + 88) && *(_BYTE *)(*(_QWORD *)(v14 + 80) + a4) )
    {
      v25 = (int *)(**(_QWORD **)(v14 + 48) + v21);
      v43 = *(_QWORD *)(v14 + 56);
      v26 = *v25;
      v27 = v25[1];
      v47 = 0;
      dest = nullptr;
      LODWORD(v42) = v26;
      if ( v27 )
      {
        dest = (void *)qvector_reserve();
        memset((char *)dest + v47, 0, v27 - v47);
        *(_QWORD *)&v47 = v27;
        memcpy(dest, (const void *)(v43 + (int)v42), v27);
        v28 = v45;
        if ( (_QWORD)v45 == (_QWORD)v47 )
        {
          if ( !(_QWORD)v45 )
          {
LABEL_53:
            if ( dest )
            {
              *(_QWORD *)&v47 = 0;
              qfree();
            }
            goto LABEL_42;
          }
          v29 = 0;
          while ( v44[v29] == *((_BYTE *)dest + v29) )
          {
            if ( (_QWORD)v45 == ++v29 )
              goto LABEL_53;
          }
        }
        if ( dest )
        {
          *(_QWORD *)&v47 = 0;
          qfree();
          v28 = v45;
        }
      }
      else
      {
        v28 = v45;
        if ( !(_QWORD)v45 )
          goto LABEL_42;
      }
      v32 = v44;
    }
    else
    {
      v32 = v44;
      v28 = v45;
    }
    sub_4D680(v14 + 48, a4, v32, 0, v28);
    if ( (unsigned __int8)sub_63F00(*(_QWORD *)(a1 + 864)) && (unsigned __int8)sub_51010(a1, v14, a4) )
      goto LABEL_42;
    if ( *(_BYTE *)(v22 + 40) && (unsigned __int8)sub_510E0(a1, v14, 0.0, a6, a7, a8) )
    {
      sub_4D680(v14 + 48, a4, v44, 0, v45);
      v33 = *(_QWORD *)(v14 + 104);
      if ( (unsigned __int8)sub_65EF0(
                              *(_QWORD *)(a1 + 864),
                              *(_QWORD *)(v14 + 56),
                              v33,
                              v34,
                              v35,
                              v36,
                              v42,
                              v43,
                              (__int64)v44) )
      {
        sub_70460(a1, (unsigned int)"GDB: Sent %lu bytes of general register values to remote\n", v33, v38, v39);
        goto LABEL_42;
      }
      sub_70460(a1, (unsigned int)"GDB: Could not push general registers to remote.\n", v37, v38, v39);
    }
  }
  v24 = 0;
LABEL_42:
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  if ( v48 >= -1 && v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  return v24;
}

