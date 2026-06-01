__int64 __fastcall sub_251E0(__int64 a1, __int64 a2, __int64 a3, int a4, double a5, double a6, double a7, __m128 a8)
{
  int v9; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  size_t v20; // rbx
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // r15
  unsigned int v24; // eax
  unsigned int v25; // ebx
  int *v26; // r13
  int v27; // r9d
  size_t v28; // r13
  size_t v29; // r8
  __int64 v30; // rax
  unsigned __int64 v32; // rdx
  _BYTE *v33; // rdx
  __int64 v34; // rbp
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  void *v42; // rax
  const void *v43; // rsi
  __int64 v44; // [rsp+0h] [rbp-B8h]
  __int64 v45; // [rsp+8h] [rbp-B0h]
  _BYTE *v46; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+18h] [rbp-A0h]
  void *dest; // [rsp+30h] [rbp-88h]
  __int128 v49; // [rsp+38h] [rbp-80h]
  int v50; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-60h]
  __int128 v52; // [rsp+60h] [rbp-58h]
  unsigned __int64 v53; // [rsp+78h] [rbp-40h]

  v9 = a2;
  v53 = __readfsqword(0x28u);
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
    if ( (unsigned __int8)sub_3D8B0(*(_QWORD *)(a1 + 864), a2, 0) )
    {
      *(_DWORD *)(a1 + 1364) = v9;
      goto LABEL_11;
    }
    if ( *(_QWORD *)(a1 + 1384) > 1u )
    {
      sub_48620(a1, (unsigned int)"GDB: Error setting thread\n", v15, v16, v17, v18);
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
  v19 = *(_DWORD *)a3;
  v50 = -2;
  v52 = 0;
  if ( v19 < -1 )
  {
    v32 = *(_QWORD *)(a3 + 8);
    v50 = v19;
    v51 = v32;
    if ( *(_DWORD *)(a1 + 784) != a4 )
      goto LABEL_15;
    goto LABEL_35;
  }
  v20 = *(_QWORD *)(a3 + 16);
  v51 = 0;
  v52 = 0;
  if ( v20 )
  {
    v42 = (void *)qalloc_or_throw();
    v43 = *(const void **)(a3 + 8);
    *((_QWORD *)&v52 + 1) = v20;
    v51 = (unsigned __int64)v42;
    memcpy(v42, v43, v20);
    *(_QWORD *)&v52 = v20;
    v19 = *(_DWORD *)a3;
  }
  v50 = v19;
  if ( *(_DWORD *)(a1 + 784) == a4 )
  {
LABEL_35:
    if ( *(_DWORD *)(qword_6AC10 + 144LL * *(int *)(a1 + 1176) + 120) == 12 )
      v51 |= get_sreg() != 0;
  }
LABEL_15:
  v44 = a4;
  v21 = *(_QWORD *)(a1 + 1216);
  v22 = 48LL * a4;
  v47 = 0;
  v46 = nullptr;
  v23 = v22 + v21;
  LOBYTE(v24) = sub_24B80(a1, (__int64)&v46, &v50, *(int *)(v23 + 4), a4);
  v25 = v24;
  if ( (_BYTE)v24 )
  {
    if ( (unsigned __int64)a4 < *(_QWORD *)(v14 + 88) && *(_BYTE *)(*(_QWORD *)(v14 + 80) + a4) )
    {
      v26 = (int *)(**(_QWORD **)(v14 + 48) + v22);
      v45 = *(_QWORD *)(v14 + 56);
      v27 = *v26;
      v28 = v26[1];
      v49 = 0;
      dest = nullptr;
      LODWORD(v44) = v27;
      if ( v28 )
      {
        dest = (void *)qvector_reserve();
        memset((char *)dest + v49, 0, v28 - v49);
        *(_QWORD *)&v49 = v28;
        memcpy(dest, (const void *)(v45 + (int)v44), v28);
        v29 = v47;
        if ( (_QWORD)v47 == (_QWORD)v49 )
        {
          if ( !(_QWORD)v47 )
          {
LABEL_53:
            if ( dest )
            {
              *(_QWORD *)&v49 = 0;
              qfree();
            }
            goto LABEL_42;
          }
          v30 = 0;
          while ( v46[v30] == *((_BYTE *)dest + v30) )
          {
            if ( (_QWORD)v47 == ++v30 )
              goto LABEL_53;
          }
        }
        if ( dest )
        {
          *(_QWORD *)&v49 = 0;
          qfree();
          v29 = v47;
        }
      }
      else
      {
        v29 = v47;
        if ( !(_QWORD)v47 )
          goto LABEL_42;
      }
      v33 = v46;
    }
    else
    {
      v33 = v46;
      v29 = v47;
    }
    sub_21000(v14 + 48, a4, v33, 0, v29);
    if ( (unsigned __int8)sub_38430(*(_QWORD *)(a1 + 864)) && (unsigned __int8)sub_24690(a1, v14, a4) )
      goto LABEL_42;
    if ( *(_BYTE *)(v23 + 40) && (unsigned __int8)sub_24760(a1, v14, 0.0, a6, a7, a8) )
    {
      sub_21000(v14 + 48, a4, v46, 0, v47);
      v34 = *(_QWORD *)(v14 + 104);
      if ( (unsigned __int8)sub_3A6F0(
                              *(_QWORD *)(a1 + 864),
                              *(_QWORD *)(v14 + 56),
                              v34,
                              v35,
                              v36,
                              v37,
                              v44,
                              v45,
                              (__int64)v46) )
      {
        sub_48620(a1, (unsigned int)"GDB: Sent %lu bytes of general register values to remote\n", v34, v39, v40, v41);
        goto LABEL_42;
      }
      sub_48620(a1, (unsigned int)"GDB: Could not push general registers to remote.\n", v38, v39, v40, v41);
    }
  }
  v25 = 0;
LABEL_42:
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree();
  }
  if ( v50 >= -1 && v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  return v25;
}

