__int64 __fastcall sub_B0190(__int64 a1, char **a2, __int64 a3)
{
  char *v3; // r14
  char *v4; // rbx
  __int64 v7; // rax
  char *v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  char *v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // r15
  __int64 v19; // r14
  char i; // al
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-148h]
  __int64 v24; // [rsp+0h] [rbp-148h]
  char *v25; // [rsp+0h] [rbp-148h]
  unsigned __int64 v26; // [rsp+0h] [rbp-148h]
  char *v27; // [rsp+0h] [rbp-148h]
  char *v28; // [rsp+0h] [rbp-148h]
  char *v29; // [rsp+8h] [rbp-140h]
  unsigned __int64 v30; // [rsp+8h] [rbp-140h]
  unsigned __int64 v31; // [rsp+8h] [rbp-140h]
  char *v32; // [rsp+8h] [rbp-140h]
  char *v33; // [rsp+10h] [rbp-138h]
  int v34; // [rsp+18h] [rbp-130h]
  char *v35; // [rsp+18h] [rbp-130h]
  char *v36; // [rsp+28h] [rbp-120h] BYREF
  __int64 v37; // [rsp+30h] [rbp-118h] BYREF
  __int128 v38; // [rsp+38h] [rbp-110h]
  __int64 v39; // [rsp+48h] [rbp-100h]
  __int128 v40; // [rsp+50h] [rbp-F8h]
  __int64 v41; // [rsp+60h] [rbp-E8h]
  __int128 v42; // [rsp+68h] [rbp-E0h]
  __int64 v43; // [rsp+78h] [rbp-D0h]
  __int128 v44; // [rsp+80h] [rbp-C8h]
  __int64 v45; // [rsp+90h] [rbp-B8h]
  _QWORD v46[21]; // [rsp+A0h] [rbp-A8h] BYREF

  v46[13] = __readfsqword(0x28u);
  v3 = *a2;
  v36 = v3;
  v4 = &v3[a3];
  if ( __CFADD__(v3, a3) )
    return 0;
  v46[0] = v3;
  LODWORD(v7) = sub_196ED0(v46, &v3[a3]);
  v8 = (char *)v46[0];
  v34 = v7;
  v36 = (char *)v46[0];
  if ( (unsigned __int64)v3 >= v46[0] )
    return 0;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = (unsigned int)v7;
  if ( (unsigned int)v7 != v9 )
  {
    v45 = 0;
    v37 = 0;
    v39 = 0;
    v41 = 0;
    v43 = 0;
    v38 = 0;
    v40 = 0;
    v42 = 0;
    v44 = 0;
    if ( (unsigned int)v7 < v9 )
    {
      v7 = (unsigned int)v7;
      v16 = 104LL * (unsigned int)v7;
      do
      {
        v33 = v8;
        v31 = v9;
        v17 = v16 + *(_QWORD *)(a1 + 16);
        v24 = v7;
        v16 += 104;
        sub_AA8D0(v17);
        v9 = v31;
        v8 = v33;
        v7 = v24 + 1;
      }
      while ( v24 + 1 < v31 );
      *(_QWORD *)(a1 + 24) = v10;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int64)&v37 < v11 || (unsigned __int64)&v37 >= v11 + 104 * v12 )
      {
        if ( v12 >= v10
          || (v27 = (char *)v46[0],
              v22 = sub_1987B0(a1 + 16, v11, v10, 104),
              v9 = *(_QWORD *)(a1 + 24),
              v8 = v27,
              *(_QWORD *)(a1 + 16) = v22,
              v11 = v22,
              v9 < v10) )
        {
          v21 = 104 * v9;
          while ( 1 )
          {
            v32 = v8;
            v26 = v9;
            sub_AA960(v21 + v11, (__int64)&v37);
            v21 += 104;
            v8 = v32;
            v9 = v26 + 1;
            if ( v26 + 1 >= v10 )
              break;
            v11 = *(_QWORD *)(a1 + 16);
          }
          v27 = v32;
        }
        *(_QWORD *)(a1 + 24) = v10;
        sub_AA8D0((__int64)&v37);
        v8 = v27;
LABEL_19:
        v18 = 0;
        v19 = 104 * v10;
        for ( i = sub_AFF10(*(__int64 **)(a1 + 16), &v36, v4 - v8);
              i;
              i = sub_AFF10((__int64 *)(v18 + *(_QWORD *)(a1 + 16)), &v36, v4 - v36) )
        {
          v18 += 104;
          v8 = v36;
          if ( v19 == v18 )
            goto LABEL_24;
        }
        return 0;
      }
      v29 = (char *)v46[0];
      sub_AA960((__int64)v46, (__int64)&v37);
      v13 = v29;
      if ( *(_QWORD *)(a1 + 32) < v10 )
      {
        *(_QWORD *)(a1 + 16) = sub_1987B0(a1 + 16, *(_QWORD *)(a1 + 16), v10, 104);
        v13 = v29;
      }
      v14 = *(_QWORD *)(a1 + 24);
      if ( v14 < v10 )
      {
        v15 = 104 * v14;
        do
        {
          v23 = v15;
          v35 = v13;
          v30 = v14;
          sub_AA960(*(_QWORD *)(a1 + 16) + v15, (__int64)v46);
          v13 = v35;
          v14 = v30 + 1;
          v15 = v23 + 104;
        }
        while ( v10 != v30 + 1 );
        *(_QWORD *)(a1 + 24) = v10;
        sub_AA8D0((__int64)v46);
        sub_AA8D0((__int64)&v37);
        v8 = v35;
        goto LABEL_19;
      }
      *(_QWORD *)(a1 + 24) = v10;
      v28 = v13;
      sub_AA8D0((__int64)v46);
      v8 = v28;
    }
    v25 = v8;
    sub_AA8D0((__int64)&v37);
    v8 = v25;
  }
  if ( v34 )
    goto LABEL_19;
LABEL_24:
  *a2 = v8;
  return 1;
}
