__int64 __fastcall sub_174620(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  unsigned int v11; // r15d
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // r14
  _QWORD *v16; // rax
  unsigned __int64 *v17; // rdi
  char v18; // al
  int v19; // edx
  __int64 v20; // rcx
  unsigned int **v21; // r14
  unsigned int *v22; // r15
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-A8h]
  __int64 v38[2]; // [rsp+10h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+20h] [rbp-90h]
  __int128 v40; // [rsp+28h] [rbp-88h]
  __int64 v41; // [rsp+40h] [rbp-70h] BYREF
  __int128 v42; // [rsp+48h] [rbp-68h]
  __int64 v43; // [rsp+58h] [rbp-58h]
  char v44; // [rsp+60h] [rbp-50h]
  int v45; // [rsp+68h] [rbp-48h]
  int v46; // [rsp+6Ch] [rbp-44h]
  char v47; // [rsp+70h] [rbp-40h]
  unsigned __int64 v48; // [rsp+78h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v3 != 2 )
    return 0;
  *(_BYTE *)(a1 + 48) = 1;
  v5 = v3;
  if ( *(_BYTE *)(v3 + 48) == 4 )
    return 0;
  v6 = v3 + 48;
  v7 = *(_QWORD *)(a1 + 16);
  v38[0] = 0;
  v38[1] = 0;
  v39 = 0;
  v40 = 0;
  sub_123EA0(v7, v38, v3 + 48, 1, 0xFFFF0000, 0.0);
  v8 = sub_129150(*(_QWORD *)(a1 + 16), v38, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), 0, 0, 0, 0.0, a3, 0x101u);
  v10 = v8;
  if ( !v8 )
  {
    v13 = *(_QWORD *)(a1 + 16);
    v14 = *(_QWORD *)(v13 + 352);
    if ( !(_DWORD)v14 || (_DWORD)v14 == 1 && !**(_DWORD **)(v13 + 344) )
      goto LABEL_5;
    v15 = *(__int64 **)(a1 + 40);
    if ( v15 )
    {
      v16 = (_QWORD *)v15[1];
      if ( !v16 )
      {
        v30 = *(_QWORD *)(a1 + 8);
        if ( *(int *)(v30 + 312) <= 2 )
          goto LABEL_34;
        v31 = sub_670E0((_QWORD *)v30, (__int64)v38, v13, v9);
        v36 = sub_110340(v31, 0, v32, v33, v34, v35, 0.0, a3);
        *v15 = v36;
        ++*(_DWORD *)(v36 + 24);
        v16 = (_QWORD *)*v15;
        v15[1] = *v15;
        if ( !v16 )
          goto LABEL_34;
        v13 = *(_QWORD *)(a1 + 16);
      }
      v17 = (unsigned __int64 *)(*v16 + 24LL * *(int *)(v13 + 72));
      v18 = *(_BYTE *)(v5 + 48);
      v19 = *(_DWORD *)(v5 + 52);
      if ( v18 == 1 )
      {
        v20 = *(int *)(v5 + 56);
      }
      else if ( v18 == 5 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8LL);
      }
      else
      {
        v18 = 0;
        v20 = -1;
      }
      v41 = 0;
      v43 = v20;
      v44 = v18;
      v45 = v19;
      v46 = -1;
      v47 = 1;
      v42 = 0;
      v21 = (unsigned int **)sub_104DF0(v17, (__int64)&v41);
      if ( v41 )
      {
        *(_QWORD *)&v42 = 0;
        qfree(v41);
      }
      if ( !v21 )
        goto LABEL_5;
      v22 = *v21;
      v23 = (__int64)&(*v21)[(_QWORD)v21[1]];
      if ( (unsigned int *)v23 == v22 )
        goto LABEL_5;
      while ( 1 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL);
        v25 = *v22;
        if ( (unsigned int)v25 >= *(_DWORD *)(v24 + 64) )
          sub_1733C0(0.0);
        v26 = *(_QWORD *)(*(_QWORD *)(v24 + 528) + 8 * v25);
        v27 = sub_129150(v26, v38, *(_QWORD *)(v26 + 56), 0, 0, 0, 0.0, a3, 0x101u);
        v37 = v27;
        if ( v27 )
        {
          if ( sub_125B60((unsigned __int8 *)(v27 + 64), v6, 0, 0.0)
            && (*(_DWORD *)v37 == 4 || *(_DWORD *)v37 == 67 && *(_DWORD *)(v37 + 36) == *(_DWORD *)(v37 + 68))
            && *(_BYTE *)(v37 + 32) == 10 )
          {
            v28 = *(_QWORD *)(v37 + 40);
            if ( *(_BYTE *)v28 == 6 )
            {
              if ( (unsigned __int8)sub_342B40(
                                      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL),
                                      *(_QWORD *)(v28 + 8),
                                      *(int *)(v37 + 36)) )
                break;
            }
          }
        }
        if ( (unsigned int *)v23 == ++v22 )
          goto LABEL_5;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) |= 0x20000u;
    }
LABEL_34:
    v11 = 1;
    goto LABEL_6;
  }
  if ( sub_125B60((unsigned __int8 *)(v8 + 64), v6, 0, 0.0) )
  {
    if ( *(_DWORD *)v10 != 4 )
    {
      if ( *(_DWORD *)v10 != 67 )
        goto LABEL_5;
      v11 = 0;
      if ( *(_DWORD *)(v10 + 36) != *(_DWORD *)(v10 + 68) )
        goto LABEL_6;
    }
    if ( *(_BYTE *)(v10 + 32) == 10 )
    {
      v29 = *(_QWORD *)(v10 + 40);
      if ( *(_BYTE *)v29 == 6 )
      {
        if ( (unsigned __int8)sub_342B40(
                                *(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL),
                                *(_QWORD *)(v29 + 8),
                                *(int *)(v10 + 36)) )
        {
          v11 = 1;
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) |= 0x20000u;
          goto LABEL_6;
        }
      }
    }
  }
LABEL_5:
  v11 = 0;
LABEL_6:
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  qfree(v38[0]);
  return v11;
}

