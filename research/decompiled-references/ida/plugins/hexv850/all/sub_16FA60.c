__int64 __fastcall sub_16FA60(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r15
  __int64 v4; // r13
  __int128 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // r14
  _QWORD *v13; // rax
  unsigned __int64 *v14; // rdi
  char v15; // al
  int v16; // edx
  __int64 v17; // rcx
  unsigned int **v18; // r14
  unsigned int *v19; // r15
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-A8h]
  _QWORD v31[2]; // [rsp+10h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+20h] [rbp-90h]
  __int128 v33; // [rsp+28h] [rbp-88h]
  __int64 v34; // [rsp+40h] [rbp-70h] BYREF
  __int128 v35; // [rsp+48h] [rbp-68h]
  __int64 v36; // [rsp+58h] [rbp-58h]
  char v37; // [rsp+60h] [rbp-50h]
  int v38; // [rsp+68h] [rbp-48h]
  int v39; // [rsp+6Ch] [rbp-44h]
  char v40; // [rsp+70h] [rbp-40h]
  unsigned __int64 v41; // [rsp+78h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v1 != 2 )
    return 0;
  *(_BYTE *)(a1 + 48) = 1;
  v3 = v1;
  if ( *(_BYTE *)(v1 + 48) == 4 )
    return 0;
  v4 = v1 + 48;
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v5 + 1) = v31;
  v31[0] = 0;
  v31[1] = 0;
  v32 = 0;
  v33 = 0;
  sub_11F2E0(v5, v1 + 48, 1u, 0xFFFF0000);
  v6 = sub_124590(*(_QWORD *)(a1 + 16), v31, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), 0, nullptr, 0, 0x101u);
  v7 = v6;
  if ( !v6 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(_QWORD *)(v10 + 352);
    if ( !(_DWORD)v11 || (_DWORD)v11 == 1 && !**(_DWORD **)(v10 + 344) )
      goto LABEL_5;
    v12 = *(__int64 **)(a1 + 40);
    if ( v12 )
    {
      v13 = (_QWORD *)v12[1];
      if ( !v13 )
      {
        v27 = *(_QWORD *)(a1 + 8);
        if ( *(int *)(v27 + 312) <= 2 )
          goto LABEL_34;
        v28 = sub_62660((_QWORD *)v27);
        v29 = sub_10B780(v28, 0);
        *v12 = v29;
        ++*(_DWORD *)(v29 + 24);
        v13 = (_QWORD *)*v12;
        v12[1] = *v12;
        if ( !v13 )
          goto LABEL_34;
        v10 = *(_QWORD *)(a1 + 16);
      }
      v14 = (unsigned __int64 *)(*v13 + 24LL * *(int *)(v10 + 72));
      v15 = *(_BYTE *)(v3 + 48);
      v16 = *(_DWORD *)(v3 + 52);
      if ( v15 == 1 )
      {
        v17 = *(int *)(v3 + 56);
      }
      else if ( v15 == 5 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8LL);
      }
      else
      {
        v15 = 0;
        v17 = -1;
      }
      v34 = 0;
      v36 = v17;
      v37 = v15;
      v38 = v16;
      v39 = -1;
      v40 = 1;
      v35 = 0;
      v18 = (unsigned int **)sub_100230(v14, (__int64)&v34);
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        qfree();
      }
      if ( !v18 )
        goto LABEL_5;
      v19 = *v18;
      v20 = (__int64)&(*v18)[(_QWORD)v18[1]];
      if ( (unsigned int *)v20 == v19 )
        goto LABEL_5;
      while ( 1 )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL);
        v22 = *v19;
        if ( (unsigned int)v22 >= *(_DWORD *)(v21 + 64) )
          sub_16E800();
        v23 = *(_QWORD *)(*(_QWORD *)(v21 + 528) + 8 * v22);
        v24 = sub_124590(v23, v31, *(_QWORD *)(v23 + 56), 0, nullptr, 0, 0x101u);
        v30 = v24;
        if ( v24 )
        {
          if ( sub_120FA0((unsigned __int8 *)(v24 + 64), v4, 0)
            && (*(_DWORD *)v30 == 4 || *(_DWORD *)v30 == 67 && *(_DWORD *)(v30 + 36) == *(_DWORD *)(v30 + 68))
            && *(_BYTE *)(v30 + 32) == 10 )
          {
            v25 = *(_QWORD *)(v30 + 40);
            if ( *(_BYTE *)v25 == 6 )
            {
              if ( (unsigned __int8)sub_33CAC0(
                                      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL),
                                      *(_QWORD *)(v25 + 8),
                                      *(int *)(v30 + 36)) )
                break;
            }
          }
        }
        if ( (unsigned int *)v20 == ++v19 )
          goto LABEL_5;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) |= 0x20000u;
    }
LABEL_34:
    v8 = 1;
    goto LABEL_6;
  }
  if ( sub_120FA0((unsigned __int8 *)(v6 + 64), v4, 0) )
  {
    if ( *(_DWORD *)v7 != 4 )
    {
      if ( *(_DWORD *)v7 != 67 )
        goto LABEL_5;
      v8 = 0;
      if ( *(_DWORD *)(v7 + 36) != *(_DWORD *)(v7 + 68) )
        goto LABEL_6;
    }
    if ( *(_BYTE *)(v7 + 32) == 10 )
    {
      v26 = *(_QWORD *)(v7 + 40);
      if ( *(_BYTE *)v26 == 6 )
      {
        if ( (unsigned __int8)sub_33CAC0(
                                *(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL),
                                *(_QWORD *)(v26 + 8),
                                *(int *)(v7 + 36)) )
        {
          v8 = 1;
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) |= 0x20000u;
          goto LABEL_6;
        }
      }
    }
  }
LABEL_5:
  v8 = 0;
LABEL_6:
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  qfree();
  return v8;
}

